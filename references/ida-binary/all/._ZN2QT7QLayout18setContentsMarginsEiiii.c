// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112FF0
// Name:            ._ZN2QT7QLayout18setContentsMarginsEiiii
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112FF0 jmp     cs:_ZN2QT7QLayout18setContentsMarginsEiiii_ptr
//
// Resolved target: _ZN2QT7QLayout18setContentsMarginsEiiii
// Target address:  0x8D4518
// GOT/IAT slot:    0x8A0498
// Slot symbol:     _ZN2QT7QLayout18setContentsMarginsEiiii_ptr
// Target type:     _QWORD(QT::QLayout *__hidden this, int, int, int, int)
// ============================================================

/* see target sig */ ._ZN2QT7QLayout18setContentsMarginsEiiii(/* see target signature */)
{
    // Tail-call to _ZN2QT7QLayout18setContentsMarginsEiiii via GOT/IAT indirection
    return _ZN2QT7QLayout18setContentsMarginsEiiii(/* forwarded args */);
}

