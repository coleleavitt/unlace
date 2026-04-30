// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119A90
// Name:            ._ZN2QT5QFont12setStrikeOutEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119A90 jmp     cs:_ZN2QT5QFont12setStrikeOutEb_ptr
//
// Resolved target: _ZN2QT5QFont12setStrikeOutEb
// Target address:  0x8D88A8
// GOT/IAT slot:    0x8A39E8
// Slot symbol:     _ZN2QT5QFont12setStrikeOutEb_ptr
// Target type:     _QWORD(QT::QFont *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT5QFont12setStrikeOutEb(/* see target signature */)
{
    // Tail-call to _ZN2QT5QFont12setStrikeOutEb via GOT/IAT indirection
    return _ZN2QT5QFont12setStrikeOutEb(/* forwarded args */);
}

