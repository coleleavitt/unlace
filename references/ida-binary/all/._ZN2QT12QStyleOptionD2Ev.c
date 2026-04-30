// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A660
// Name:            ._ZN2QT12QStyleOptionD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A660 jmp     cs:_ZN2QT12QStyleOptionD2Ev_ptr
//
// Resolved target: _ZN2QT12QStyleOptionD2Ev
// Target address:  0x8D9018
// GOT/IAT slot:    0x8A3FD0
// Slot symbol:     _ZN2QT12QStyleOptionD2Ev_ptr
// Target type:     void(QT::QStyleOption *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT12QStyleOptionD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT12QStyleOptionD2Ev via GOT/IAT indirection
    return _ZN2QT12QStyleOptionD2Ev(/* forwarded args */);
}

