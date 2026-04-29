// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16A00
// Name:            ._ZN2QT17QVariantAnimation11setDurationEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16A00 jmp     cs:off_4F4E8
//
// Resolved target: _ZN2QT17QVariantAnimation11setDurationEi
// Target address:  0x50700
// GOT/IAT slot:    0x4F4E8
// Slot symbol:     off_4F4E8
// Target type:     _QWORD(QT::QVariantAnimation *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT17QVariantAnimation11setDurationEi(/* see target signature */)
{
    // Tail-call to _ZN2QT17QVariantAnimation11setDurationEi via GOT/IAT indirection
    return _ZN2QT17QVariantAnimation11setDurationEi(/* forwarded args */);
}

