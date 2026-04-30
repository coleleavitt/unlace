// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117360
// Name:            ._ZN2QT18QStyleOptionButtonC1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117360 jmp     cs:_ZN2QT18QStyleOptionButtonC1Ev_ptr
//
// Resolved target: _ZN2QT18QStyleOptionButtonC1Ev
// Target address:  0x8D7020
// GOT/IAT slot:    0x8A2650
// Slot symbol:     _ZN2QT18QStyleOptionButtonC1Ev_ptr
// Target type:     _QWORD(QT::QStyleOptionButton *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT18QStyleOptionButtonC1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT18QStyleOptionButtonC1Ev via GOT/IAT indirection
    return _ZN2QT18QStyleOptionButtonC1Ev(/* forwarded args */);
}

