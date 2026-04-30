// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1177C0
// Name:            ._ZN2QT11QWheelEventD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1177C0 jmp     cs:_ZN2QT11QWheelEventD1Ev_ptr
//
// Resolved target: _ZN2QT11QWheelEventD1Ev
// Target address:  0x8D72D8
// GOT/IAT slot:    0x8A2880
// Slot symbol:     _ZN2QT11QWheelEventD1Ev_ptr
// Target type:     void(QT::QWheelEvent *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QWheelEventD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT11QWheelEventD1Ev via GOT/IAT indirection
    return _ZN2QT11QWheelEventD1Ev(/* forwarded args */);
}

