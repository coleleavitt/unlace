// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A810
// Name:            ._ZN2QT7QObject13doSetPropertyEPKcPKNS_8QVariantEPS3_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A810 jmp     cs:_ZN2QT7QObject13doSetPropertyEPKcPKNS_8QVariantEPS3__ptr
//
// Resolved target: _ZN2QT7QObject13doSetPropertyEPKcPKNS_8QVariantEPS3_
// Target address:  0x8D9148
// GOT/IAT slot:    0x8A40A8
// Slot symbol:     _ZN2QT7QObject13doSetPropertyEPKcPKNS_8QVariantEPS3__ptr
// Target type:     _QWORD(QT::QObject *__hidden this, const char *, const QT::QVariant *, QT::QVariant *)
// ============================================================

/* see target sig */ ._ZN2QT7QObject13doSetPropertyEPKcPKNS_8QVariantEPS3_(/* see target signature */)
{
    // Tail-call to _ZN2QT7QObject13doSetPropertyEPKcPKNS_8QVariantEPS3_ via GOT/IAT indirection
    return _ZN2QT7QObject13doSetPropertyEPKcPKNS_8QVariantEPS3_(/* forwarded args */);
}

