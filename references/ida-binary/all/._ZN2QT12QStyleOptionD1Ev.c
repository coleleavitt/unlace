// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1129D0
// Name:            ._ZN2QT12QStyleOptionD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1129D0 jmp     cs:_ZN2QT12QStyleOptionD1Ev_ptr
//
// Resolved target: _ZN2QT12QStyleOptionD1Ev
// Target address:  0x8D4110
// GOT/IAT slot:    0x8A0188
// Slot symbol:     _ZN2QT12QStyleOptionD1Ev_ptr
// Target type:     void(QT::QStyleOption *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT12QStyleOptionD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT12QStyleOptionD1Ev via GOT/IAT indirection
    return _ZN2QT12QStyleOptionD1Ev(/* forwarded args */);
}

