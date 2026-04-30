// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1114B0
// Name:            ._ZN2QT11QTextCursorD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1114B0 jmp     cs:_ZN2QT11QTextCursorD1Ev_ptr
//
// Resolved target: _ZN2QT11QTextCursorD1Ev
// Target address:  0x8D3380
// GOT/IAT slot:    0x89F6F8
// Slot symbol:     _ZN2QT11QTextCursorD1Ev_ptr
// Target type:     void(QT::QTextCursor *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QTextCursorD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT11QTextCursorD1Ev via GOT/IAT indirection
    return _ZN2QT11QTextCursorD1Ev(/* forwarded args */);
}

