// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111630
// Name:            ._ZN2QT7QWidget18setContentsMarginsEiiii
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111630 jmp     cs:_ZN2QT7QWidget18setContentsMarginsEiiii_ptr
//
// Resolved target: _ZN2QT7QWidget18setContentsMarginsEiiii
// Target address:  0x8D3490
// GOT/IAT slot:    0x89F7B8
// Slot symbol:     _ZN2QT7QWidget18setContentsMarginsEiiii_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this, int, int, int, int)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget18setContentsMarginsEiiii(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget18setContentsMarginsEiiii via GOT/IAT indirection
    return _ZN2QT7QWidget18setContentsMarginsEiiii(/* forwarded args */);
}

