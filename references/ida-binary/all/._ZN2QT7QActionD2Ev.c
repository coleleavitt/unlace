// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111F20
// Name:            ._ZN2QT7QActionD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111F20 jmp     cs:_ZN2QT7QActionD2Ev_ptr
//
// Resolved target: _ZN2QT7QActionD2Ev
// Target address:  0x8D3A38
// GOT/IAT slot:    0x89FC30
// Slot symbol:     _ZN2QT7QActionD2Ev_ptr
// Target type:     void(QT::QAction *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT7QActionD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT7QActionD2Ev via GOT/IAT indirection
    return _ZN2QT7QActionD2Ev(/* forwarded args */);
}

