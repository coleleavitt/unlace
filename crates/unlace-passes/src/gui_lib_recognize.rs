//! GUI toolkit / windowing-API recognition (t394).
//!
//! Classifies a callee symbol name as a call into one of the common
//! desktop GUI libraries. Native applications almost always reach the
//! window system through one of a handful of well-known toolkits, and
//! each toolkit's C / C++ ABI surface has a recognisable prefix or
//! mangled-name shape. Identifying these tells downstream analyses
//! that:
//!
//! * The call boundary is into a large external library — escape
//!   analysis must treat reachable pointers as escaping, and the
//!   callee has no body to inline.
//! * The function belongs to a presentation layer rather than the
//!   application's own logic, which is useful for triage and for
//!   grouping calls in the decompiled output (e.g. "wxWidgets event
//!   handler" vs. "MFC dialog").
//!
//! As with the embedded-interpreter classifier we do *not* enumerate
//! every entry point — the GUI APIs are huge and stable in their
//! prefix shape, so a small set of prefix / substring checks per
//! family stays both precise and cheap to maintain. Anything outside
//! the rules returns `None`.
//!
//! The classifier is side-effect free; callers that want to annotate
//! IR sites should iterate `Call` instructions themselves (see
//! [`crate::libc_idioms::annotate_libc_calls`] for the canonical
//! pattern).

/// Which desktop GUI toolkit a symbol belongs to.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub enum GuiLibKind {
    /// wxWidgets — cross-platform C++ toolkit. Plain-C symbols start
    /// with `wx` (e.g. `wxEntry`, `wxAppConsole`), and the C++
    /// surface appears as Itanium-mangled names beginning with
    /// `_ZN2wx` (the `2wx` length-prefixed namespace component).
    WxWidgets,
    /// GTK family — GTK proper (`gtk_*`), the GDK windowing layer
    /// (`gdk_*`), and the GLib object system (`g_object_*`) that
    /// underpins both.
    Gtk,
    /// Microsoft Foundation Classes — the classic Windows C++ wrapper
    /// over Win32. Detected via the `CWnd::` / `CDialog::` member-fn
    /// prefixes that survive demangling, the `AfxBeginThread` family
    /// of free functions, and the Itanium-mangled `_ZN4CWnd` shape
    /// (rare in practice but emitted by clang targeting Windows).
    Mfc,
    /// Apple Cocoa / AppKit. Objective-C symbols use the `NSWindow`,
    /// `NSView`, … class names; demangled method calls look like
    /// `-[NSWindow init]`; and the Mach-O `_OBJC_CLASS_$_NS…`
    /// metadata symbols carry the `_OBJC_CLASS_NS` substring.
    Cocoa,
    /// Bare Win32 / USER32 windowing API. Detected via the
    /// `CreateWindow`, `DispatchMessage`, `GetMessage` and
    /// `RegisterClass` family prefixes (each of which has `A` / `W`
    /// / `Ex` variants — hence prefix matching rather than exact
    /// equality).
    Win32,
}

impl GuiLibKind {
    /// Lower-snake-case canonical name, suitable for serialising into
    /// annotations or test fixtures.
    pub const fn canonical_name(self) -> &'static str {
        match self {
            GuiLibKind::WxWidgets => "wxwidgets",
            GuiLibKind::Gtk => "gtk",
            GuiLibKind::Mfc => "mfc",
            GuiLibKind::Cocoa => "cocoa",
            GuiLibKind::Win32 => "win32",
        }
    }
}

/// Classify `symbol` as a call into one of the known desktop GUI
/// toolkits, or return `None` if it isn't recognised.
///
/// Match rules (checked in order — the first match wins):
///
/// 1. Contains `_ZN2wx` (Itanium-mangled `wx::`-namespace member) or
///    starts with `wx` → [`GuiLibKind::WxWidgets`]. The mangled check
///    is a substring match because mangled names start with `_Z`
///    before reaching the namespace component.
/// 2. Starts with `gtk_`, `gdk_`, or `g_object_` →
///    [`GuiLibKind::Gtk`].
/// 3. Starts with `CWnd::`, `CDialog::`, or `AfxBeginThread`, or
///    contains `_ZN4CWnd` → [`GuiLibKind::Mfc`]. The first two cover
///    demangled C++ method names; `AfxBeginThread` is a free fn; the
///    `_ZN4CWnd` shape catches Itanium-mangled `CWnd::Foo`.
/// 4. Starts with `NSWindow` or `-[NS`, or contains `_OBJC_CLASS_NS`
///    → [`GuiLibKind::Cocoa`]. `-[NS…` is the demangled Objective-C
///    instance-method form (`+[…` for class methods is *not* matched
///    here — extend if needed).
/// 5. Starts with `CreateWindow`, `DispatchMessage`, `GetMessage`,
///    or `RegisterClass` → [`GuiLibKind::Win32`]. Each family has
///    `A` / `W` / `Ex` ABI variants, so prefix matching subsumes
///    them all.
///
/// Returns `None` for anything else.
pub fn recognize_gui_lib(symbol: &str) -> Option<GuiLibKind> {
    // wxWidgets — check the mangled namespace shape first so that a
    // demangled member function (which still starts with `wx`) is
    // classified consistently with its mangled twin.
    if symbol.contains("_ZN2wx") || symbol.starts_with("wx") {
        return Some(GuiLibKind::WxWidgets);
    }

    // GTK / GDK / GObject — three sibling C-API prefixes.
    if symbol.starts_with("gtk_")
        || symbol.starts_with("gdk_")
        || symbol.starts_with("g_object_")
    {
        return Some(GuiLibKind::Gtk);
    }

    // MFC — demangled C++ members, the Afx* free-fn family, and the
    // mangled `CWnd` shape.
    if symbol.starts_with("CWnd::")
        || symbol.starts_with("CDialog::")
        || symbol.starts_with("AfxBeginThread")
        || symbol.contains("_ZN4CWnd")
    {
        return Some(GuiLibKind::Mfc);
    }

    // Cocoa — bare class names, demangled Obj-C method form, and the
    // Mach-O metadata-symbol substring.
    if symbol.starts_with("NSWindow")
        || symbol.starts_with("-[NS")
        || symbol.contains("_OBJC_CLASS_NS")
    {
        return Some(GuiLibKind::Cocoa);
    }

    // Bare Win32 USER32 windowing entry points.
    if symbol.starts_with("CreateWindow")
        || symbol.starts_with("DispatchMessage")
        || symbol.starts_with("GetMessage")
        || symbol.starts_with("RegisterClass")
    {
        return Some(GuiLibKind::Win32);
    }

    None
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn recognises_wxwidgets_plain_and_mangled() {
        // Plain-C entry points.
        assert_eq!(recognize_gui_lib("wxEntry"), Some(GuiLibKind::WxWidgets));
        assert_eq!(
            recognize_gui_lib("wxAppConsole"),
            Some(GuiLibKind::WxWidgets),
        );
        // Itanium-mangled `wxFrame::Create(...)`.
        assert_eq!(
            recognize_gui_lib("_ZN2wx5Frame6CreateEPNS_6WindowEi"),
            Some(GuiLibKind::WxWidgets),
        );
    }

    #[test]
    fn recognises_gtk_family_prefixes() {
        assert_eq!(
            recognize_gui_lib("gtk_window_new"),
            Some(GuiLibKind::Gtk),
        );
        assert_eq!(
            recognize_gui_lib("gdk_display_open"),
            Some(GuiLibKind::Gtk),
        );
        assert_eq!(
            recognize_gui_lib("g_object_ref"),
            Some(GuiLibKind::Gtk),
        );
        assert_eq!(
            recognize_gui_lib("g_object_unref"),
            Some(GuiLibKind::Gtk),
        );
    }

    #[test]
    fn recognises_mfc_demangled_and_afx() {
        assert_eq!(
            recognize_gui_lib("CWnd::Create"),
            Some(GuiLibKind::Mfc),
        );
        assert_eq!(
            recognize_gui_lib("CDialog::DoModal"),
            Some(GuiLibKind::Mfc),
        );
        assert_eq!(
            recognize_gui_lib("AfxBeginThread"),
            Some(GuiLibKind::Mfc),
        );
        // Itanium-mangled CWnd member (clang-on-Windows shape).
        assert_eq!(
            recognize_gui_lib("_ZN4CWnd11ShowWindowEi"),
            Some(GuiLibKind::Mfc),
        );
    }

    #[test]
    fn recognises_cocoa_classes_methods_and_metadata() {
        // Bare class reference.
        assert_eq!(
            recognize_gui_lib("NSWindow"),
            Some(GuiLibKind::Cocoa),
        );
        // Demangled Obj-C instance method.
        assert_eq!(
            recognize_gui_lib("-[NSWindow init]"),
            Some(GuiLibKind::Cocoa),
        );
        assert_eq!(
            recognize_gui_lib("-[NSView drawRect:]"),
            Some(GuiLibKind::Cocoa),
        );
        // Mach-O class-list metadata symbol.
        assert_eq!(
            recognize_gui_lib("_OBJC_CLASS_NSApplication"),
            Some(GuiLibKind::Cocoa),
        );
    }

    #[test]
    fn recognises_win32_window_api_and_variants() {
        // Each Win32 family covers A / W / Ex variants via prefix.
        assert_eq!(
            recognize_gui_lib("CreateWindowExA"),
            Some(GuiLibKind::Win32),
        );
        assert_eq!(
            recognize_gui_lib("CreateWindowW"),
            Some(GuiLibKind::Win32),
        );
        assert_eq!(
            recognize_gui_lib("DispatchMessageW"),
            Some(GuiLibKind::Win32),
        );
        assert_eq!(
            recognize_gui_lib("GetMessageA"),
            Some(GuiLibKind::Win32),
        );
        assert_eq!(
            recognize_gui_lib("RegisterClassExW"),
            Some(GuiLibKind::Win32),
        );

        // Sanity: unrelated symbols return None.
        assert_eq!(recognize_gui_lib("main"), None);
        assert_eq!(recognize_gui_lib("malloc"), None);
        assert_eq!(recognize_gui_lib(""), None);
        // Mid-name occurrence of a prefix doesn't count.
        assert_eq!(recognize_gui_lib("my_gtk_helper"), None);
    }
}
