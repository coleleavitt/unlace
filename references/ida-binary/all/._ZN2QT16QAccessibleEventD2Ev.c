// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117320
// Name:            ._ZN2QT16QAccessibleEventD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117320 jmp     cs:_ZN2QT16QAccessibleEventD2Ev_ptr
//
// Resolved target: _ZN2QT16QAccessibleEventD2Ev
// Target address:  0x8D6FF0
// GOT/IAT slot:    0x8A2630
// Slot symbol:     _ZN2QT16QAccessibleEventD2Ev_ptr
// Target type:     void(QT::QAccessibleEvent *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT16QAccessibleEventD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT16QAccessibleEventD2Ev via GOT/IAT indirection
    return _ZN2QT16QAccessibleEventD2Ev(/* forwarded args */);
}

