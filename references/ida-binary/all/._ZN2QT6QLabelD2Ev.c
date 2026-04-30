// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116950
// Name:            ._ZN2QT6QLabelD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116950 jmp     cs:_ZN2QT6QLabelD2Ev_ptr
//
// Resolved target: _ZN2QT6QLabelD2Ev
// Target address:  0x8D69D0
// GOT/IAT slot:    0x8A2148
// Slot symbol:     _ZN2QT6QLabelD2Ev_ptr
// Target type:     void(QT::QLabel *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT6QLabelD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT6QLabelD2Ev via GOT/IAT indirection
    return _ZN2QT6QLabelD2Ev(/* forwarded args */);
}

