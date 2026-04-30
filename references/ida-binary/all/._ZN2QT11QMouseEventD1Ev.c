// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1159F0
// Name:            ._ZN2QT11QMouseEventD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1159F0 jmp     cs:_ZN2QT11QMouseEventD1Ev_ptr
//
// Resolved target: _ZN2QT11QMouseEventD1Ev
// Target address:  0x8D6000
// GOT/IAT slot:    0x8A1998
// Slot symbol:     _ZN2QT11QMouseEventD1Ev_ptr
// Target type:     void(QT::QMouseEvent *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QMouseEventD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT11QMouseEventD1Ev via GOT/IAT indirection
    return _ZN2QT11QMouseEventD1Ev(/* forwarded args */);
}

