// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119F00
// Name:            ._ZN2QT7QAction7setDataERKNS_8QVariantE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119F00 jmp     cs:_ZN2QT7QAction7setDataERKNS_8QVariantE_ptr
//
// Resolved target: _ZN2QT7QAction7setDataERKNS_8QVariantE
// Target address:  0x8D8B60
// GOT/IAT slot:    0x8A3C20
// Slot symbol:     _ZN2QT7QAction7setDataERKNS_8QVariantE_ptr
// Target type:     _QWORD(QT::QAction *__hidden this, const QT::QVariant *)
// ============================================================

/* see target sig */ ._ZN2QT7QAction7setDataERKNS_8QVariantE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QAction7setDataERKNS_8QVariantE via GOT/IAT indirection
    return _ZN2QT7QAction7setDataERKNS_8QVariantE(/* forwarded args */);
}

