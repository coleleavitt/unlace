// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111DF0
// Name:            ._ZN2QT6QFrameD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111DF0 jmp     cs:_ZN2QT6QFrameD2Ev_ptr
//
// Resolved target: _ZN2QT6QFrameD2Ev
// Target address:  0x8D3998
// GOT/IAT slot:    0x89FB98
// Slot symbol:     _ZN2QT6QFrameD2Ev_ptr
// Target type:     void(QT::QFrame *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT6QFrameD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT6QFrameD2Ev via GOT/IAT indirection
    return _ZN2QT6QFrameD2Ev(/* forwarded args */);
}

