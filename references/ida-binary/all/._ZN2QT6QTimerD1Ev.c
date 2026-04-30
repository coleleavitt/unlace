// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115920
// Name:            ._ZN2QT6QTimerD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115920 jmp     cs:_ZN2QT6QTimerD1Ev_ptr
//
// Resolved target: _ZN2QT6QTimerD1Ev
// Target address:  0x8D5F78
// GOT/IAT slot:    0x8A1930
// Slot symbol:     _ZN2QT6QTimerD1Ev_ptr
// Target type:     void(QT::QTimer *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT6QTimerD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT6QTimerD1Ev via GOT/IAT indirection
    return _ZN2QT6QTimerD1Ev(/* forwarded args */);
}

