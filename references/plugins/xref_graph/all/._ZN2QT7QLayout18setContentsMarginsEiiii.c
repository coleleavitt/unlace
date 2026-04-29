// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16450
// Name:            ._ZN2QT7QLayout18setContentsMarginsEiiii
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16450 jmp     cs:off_4F210
//
// Resolved target: _ZN2QT7QLayout18setContentsMarginsEiiii
// Target address:  0x50190
// GOT/IAT slot:    0x4F210
// Slot symbol:     off_4F210
// Target type:     _QWORD(QT::QLayout *__hidden this, int, int, int, int)
// ============================================================

/* see target sig */ ._ZN2QT7QLayout18setContentsMarginsEiiii(/* see target signature */)
{
    // Tail-call to _ZN2QT7QLayout18setContentsMarginsEiiii via GOT/IAT indirection
    return _ZN2QT7QLayout18setContentsMarginsEiiii(/* forwarded args */);
}

