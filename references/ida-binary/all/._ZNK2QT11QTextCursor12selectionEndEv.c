// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118170
// Name:            ._ZNK2QT11QTextCursor12selectionEndEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118170 jmp     cs:_ZNK2QT11QTextCursor12selectionEndEv_ptr
//
// Resolved target: _ZNK2QT11QTextCursor12selectionEndEv
// Target address:  0x8D7908
// GOT/IAT slot:    0x8A2D58
// Slot symbol:     _ZNK2QT11QTextCursor12selectionEndEv_ptr
// Target type:     _QWORD(QT::QTextCursor *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QTextCursor12selectionEndEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QTextCursor12selectionEndEv via GOT/IAT indirection
    return _ZNK2QT11QTextCursor12selectionEndEv(/* forwarded args */);
}

