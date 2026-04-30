// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112380
// Name:            ._ZN2QT7QCursorD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112380 jmp     cs:_ZN2QT7QCursorD1Ev_ptr
//
// Resolved target: _ZN2QT7QCursorD1Ev
// Target address:  0x8D3D00
// GOT/IAT slot:    0x89FE60
// Slot symbol:     _ZN2QT7QCursorD1Ev_ptr
// Target type:     void(QT::QCursor *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT7QCursorD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT7QCursorD1Ev via GOT/IAT indirection
    return _ZN2QT7QCursorD1Ev(/* forwarded args */);
}

