// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111320
// Name:            ._ZN2QT12QButtonGroup12setExclusiveEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111320 jmp     cs:_ZN2QT12QButtonGroup12setExclusiveEb_ptr
//
// Resolved target: _ZN2QT12QButtonGroup12setExclusiveEb
// Target address:  0x8D3260
// GOT/IAT slot:    0x89F630
// Slot symbol:     _ZN2QT12QButtonGroup12setExclusiveEb_ptr
// Target type:     _QWORD(QT::QButtonGroup *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT12QButtonGroup12setExclusiveEb(/* see target signature */)
{
    // Tail-call to _ZN2QT12QButtonGroup12setExclusiveEb via GOT/IAT indirection
    return _ZN2QT12QButtonGroup12setExclusiveEb(/* forwarded args */);
}

