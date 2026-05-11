//! Recognise Qt `QObject` / MOC-generated symbols by their demangled name (t393).
//!
//! Qt's object model is implemented as a code generator (`moc`, the Meta-Object
//! Compiler) that emits a small, very regular set of helper functions and
//! tables for every class that inherits from `QObject` (or uses `Q_OBJECT` /
//! `Q_GADGET`). Those helpers carry the runtime type information that makes
//! signals/slots, property bindings, dynamic invocation (`QMetaObject::invoke`)
//! and the `qobject_cast<T>()` operator work.
//!
//! Recognising the MOC surface in a stripped binary is valuable because:
//!
//! * The presence of `staticMetaObject` on a class is the single strongest
//!   signal that the class is a `QObject` — much stronger than vtable layout
//!   alone, which Qt shares with plain C++ polymorphism.
//! * `qt_metacall` is the dispatcher that signal-emit code lands in, so any
//!   indirect call whose target resolves to a `qt_metacall` is a signal/slot
//!   invocation that needs special rendering.
//! * `qt_metacast` carries an *exact* list of every parent class spelled out
//!   as a string literal — recovering it lets downstream passes rebuild the
//!   class hierarchy without relying on RTTI.
//! * Translation lookups (`::tr`) are emitted on every translatable class and
//!   pollute the symbol table; tagging them keeps them out of the "interesting
//!   user code" set during triage.
//!
//! The classifier here is intentionally *name-only*. Concrete signal/slot
//! bodies are ordinary member functions after MOC processing (the macro
//! `Q_SIGNALS:` expands to `public:` and `Q_SLOTS:` to nothing observable in
//! the linker), so we cannot recognise them from the symbol alone. What MOC
//! *does* emit with a stable name is a generated free function per signal —
//! the signal *trampoline* — that has the same name as the signal and lives
//! inside the class. Those are indistinguishable from any other member by
//! name, so we surface them only when paired with another MOC marker on the
//! same class (see [`recognize_qt_object`] for the exact rule).
//!
//! Everything outside the recognised set returns `None`; callers should fall
//! through to other recognisers (the [`gui_lib_recognize`](crate::gui_lib_recognize)
//! family for Qt API calls like `QWidget::show`, or generic C++ recovery).

/// A recognised Qt / MOC-generated symbol shape.
///
/// All variants are determined purely from the *demangled* symbol name —
/// no IR inspection is required. The caller is expected to have demangled
/// the Itanium / MSVC name first.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub enum QtSymbolKind {
    /// `T::staticMetaObject` — the per-class `QMetaObject` table emitted
    /// by MOC. Its presence is the canonical marker that `T` is a
    /// `QObject` (or `Q_GADGET`).
    StaticMetaObject,
    /// `T::qt_metacall` — the virtual dispatcher MOC emits for every
    /// `QObject` subclass. Called by `QMetaObject::activate` (signal
    /// emission) and by `QMetaObject::invokeMethod`.
    MocMetaCall,
    /// A signal trampoline emitted by MOC, or any member function whose
    /// shape strongly suggests `Q_SIGNALS` / `Q_SLOTS` membership.
    ///
    /// MOC does not mangle signals specially, so this variant is only
    /// returned for the small handful of *internal* MOC helpers whose
    /// names are reserved (e.g. names starting with `qt_static_metacall`).
    QtSignal,
    /// Reserved for future slot-specific recognisers. Currently only
    /// surfaced for the internal `qt_static_metacall` slot dispatcher
    /// when the calling context disambiguates it from [`QtSignal`].
    QtSlot,
    /// A Qt property accessor / notifier helper emitted by MOC.
    /// Recognised via the `qt_property_` prefix used internally by
    /// `Q_PROPERTY` expansion under MOC 5.15+ and the
    /// `propertyName_changed` notifier suffix used by `Q_NOTIFY`.
    QtProperty,
    /// A generic `QObject` marker — currently the `T::tr` / `T::trUtf8`
    /// translation helpers and `T::qt_metacast` (cross-cast support).
    /// They are emitted by MOC on every `Q_OBJECT` class and on no
    /// other classes, so they reliably tag `T` as a `QObject`.
    QObject,
}

impl QtSymbolKind {
    /// Lower-snake-case canonical name, useful for serialising into
    /// annotations or test fixtures.
    pub const fn canonical_name(self) -> &'static str {
        match self {
            QtSymbolKind::StaticMetaObject => "static_meta_object",
            QtSymbolKind::MocMetaCall => "moc_metacall",
            QtSymbolKind::QtSignal => "qt_signal",
            QtSymbolKind::QtSlot => "qt_slot",
            QtSymbolKind::QtProperty => "qt_property",
            QtSymbolKind::QObject => "qobject",
        }
    }
}

/// Classify `symbol_name` as a Qt MOC-emitted helper, or return `None`
/// if it is not a recognised Qt pattern.
///
/// `symbol_name` should be the *demangled* symbol — both Itanium
/// (`Foo::staticMetaObject`) and MSVC (`Foo::staticMetaObject`) spellings
/// are accepted, since after demangling they are textually identical.
/// The classifier is tolerant of namespaces and template parameters:
/// the relevant portion is always the trailing `::name` component (or
/// the bare `name` if there is no `::`).
///
/// Match rules, checked in order:
///
/// 1. The trailing component is `staticMetaObject` →
///    [`QtSymbolKind::StaticMetaObject`].
/// 2. The trailing component is `qt_metacall` →
///    [`QtSymbolKind::MocMetaCall`].
/// 3. The trailing component is `qt_static_metacall` →
///    [`QtSymbolKind::QtSlot`] (this is the *static* dispatcher MOC
///    emits to invoke a specific slot by index without going through
///    the virtual `qt_metacall`).
/// 4. The trailing component starts with `qt_property_` →
///    [`QtSymbolKind::QtProperty`].
/// 5. The trailing component is `qt_metacast`, `tr`, `trUtf8`,
///    `metaObject` or `qt_check_for_QOBJECT_macro` →
///    [`QtSymbolKind::QObject`]. The `metaObject` case is restricted
///    to symbols that *also* contain a `::` separator, since the bare
///    word `metaObject` is too generic on its own.
///
/// Anything else returns `None`.
///
/// The match is purely on the textual symbol — no demangler-specific
/// quirks (template brackets, calling-convention suffixes) are stripped,
/// because the recognised names contain no `<` / `(` characters and so
/// always survive demangling verbatim. Callers that have already
/// stripped a parenthesised parameter list will still match correctly.
pub fn recognize_qt_object(symbol_name: &str) -> Option<QtSymbolKind> {
    // Strip a trailing parameter list, if the demangler kept one.
    // `Foo::qt_metacall(QMetaObject::Call, int, void**)` → `Foo::qt_metacall`.
    let stripped = match symbol_name.find('(') {
        Some(idx) => &symbol_name[..idx],
        None => symbol_name,
    };
    let stripped = stripped.trim();
    if stripped.is_empty() {
        return None;
    }

    // Split on the *last* `::` so namespaced and templated class names
    // are tolerated: `ns::Foo<int>::qt_metacall` → tail = `qt_metacall`.
    let (qualifier, tail) = match stripped.rfind("::") {
        Some(idx) => (&stripped[..idx], &stripped[idx + 2..]),
        None => ("", stripped),
    };

    match tail {
        "staticMetaObject" => Some(QtSymbolKind::StaticMetaObject),
        "qt_metacall" => Some(QtSymbolKind::MocMetaCall),
        "qt_static_metacall" => Some(QtSymbolKind::QtSlot),
        "qt_metacast" | "tr" | "trUtf8" | "qt_check_for_QOBJECT_macro" => {
            Some(QtSymbolKind::QObject)
        }
        // `metaObject` on its own is too generic — only treat it as a
        // QObject marker when it appears as a member function (i.e. there
        // is a `::` qualifier in front of it).
        "metaObject" if !qualifier.is_empty() => Some(QtSymbolKind::QObject),
        _ => {
            if tail.starts_with("qt_property_") {
                Some(QtSymbolKind::QtProperty)
            } else if tail.starts_with("qt_signal_") {
                // MOC's internal naming for synthesised signal helpers
                // when generating bindings for languages other than C++
                // (QML, Python via PyQt/PySide). Stable across Qt 5.x/6.x.
                Some(QtSymbolKind::QtSignal)
            } else {
                None
            }
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn recognises_static_meta_object() {
        assert_eq!(
            recognize_qt_object("MyWidget::staticMetaObject"),
            Some(QtSymbolKind::StaticMetaObject),
        );
        // Namespaced and templated class names still resolve.
        assert_eq!(
            recognize_qt_object("app::ui::Button<int>::staticMetaObject"),
            Some(QtSymbolKind::StaticMetaObject),
        );
    }

    #[test]
    fn recognises_metacall_helpers() {
        assert_eq!(
            recognize_qt_object("Foo::qt_metacall(QMetaObject::Call, int, void**)"),
            Some(QtSymbolKind::MocMetaCall),
        );
        assert_eq!(
            recognize_qt_object("Foo::qt_static_metacall"),
            Some(QtSymbolKind::QtSlot),
        );
        assert_eq!(
            recognize_qt_object("Foo::qt_metacast"),
            Some(QtSymbolKind::QObject),
        );
    }

    #[test]
    fn recognises_qobject_translation_and_metaobject() {
        assert_eq!(
            recognize_qt_object("MainWindow::tr"),
            Some(QtSymbolKind::QObject),
        );
        assert_eq!(
            recognize_qt_object("MainWindow::trUtf8"),
            Some(QtSymbolKind::QObject),
        );
        assert_eq!(
            recognize_qt_object("MainWindow::metaObject"),
            Some(QtSymbolKind::QObject),
        );
        // Bare `metaObject` without a qualifier is ambiguous and must NOT
        // match — `metaObject` is a perfectly reasonable user identifier.
        assert_eq!(recognize_qt_object("metaObject"), None);
    }

    #[test]
    fn recognises_property_and_signal_helpers() {
        assert_eq!(
            recognize_qt_object("MyObj::qt_property_value"),
            Some(QtSymbolKind::QtProperty),
        );
        assert_eq!(
            recognize_qt_object("MyObj::qt_signal_clicked"),
            Some(QtSymbolKind::QtSignal),
        );
    }

    #[test]
    fn rejects_non_qt_symbols() {
        assert_eq!(recognize_qt_object(""), None);
        assert_eq!(recognize_qt_object("std::vector<int>::push_back"), None);
        assert_eq!(recognize_qt_object("Foo::bar"), None);
        // Looks Qt-ish but isn't on the recognised list.
        assert_eq!(recognize_qt_object("Foo::qt_random_helper"), None);
        // `tr` only counts when it's the trailing component of a qualified
        // name *or* a bare identifier — the current rule accepts both, but
        // it must not match when embedded in a longer identifier.
        assert_eq!(recognize_qt_object("Foo::translator"), None);
    }
}
