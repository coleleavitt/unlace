// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113020
// Name:            ._ZN2QT13QStandardItem7setDataERKNS_8QVariantEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113020 jmp     cs:_ZN2QT13QStandardItem7setDataERKNS_8QVariantEi_ptr
//
// Resolved target: _ZN2QT13QStandardItem7setDataERKNS_8QVariantEi
// Target address:  0x8D4538
// GOT/IAT slot:    0x8A04B0
// Slot symbol:     _ZN2QT13QStandardItem7setDataERKNS_8QVariantEi_ptr
// Target type:     _QWORD(QT::QStandardItem *__hidden this, const QT::QVariant *, int)
// ============================================================

/* see target sig */ ._ZN2QT13QStandardItem7setDataERKNS_8QVariantEi(/* see target signature */)
{
    // Tail-call to _ZN2QT13QStandardItem7setDataERKNS_8QVariantEi via GOT/IAT indirection
    return _ZN2QT13QStandardItem7setDataERKNS_8QVariantEi(/* forwarded args */);
}

