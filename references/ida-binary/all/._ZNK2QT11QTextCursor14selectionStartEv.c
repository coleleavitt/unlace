// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112660
// Name:            ._ZNK2QT11QTextCursor14selectionStartEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112660 jmp     cs:_ZNK2QT11QTextCursor14selectionStartEv_ptr
//
// Resolved target: _ZNK2QT11QTextCursor14selectionStartEv
// Target address:  0x8D3F00
// GOT/IAT slot:    0x89FFD0
// Slot symbol:     _ZNK2QT11QTextCursor14selectionStartEv_ptr
// Target type:     _QWORD(QT::QTextCursor *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QTextCursor14selectionStartEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QTextCursor14selectionStartEv via GOT/IAT indirection
    return _ZNK2QT11QTextCursor14selectionStartEv(/* forwarded args */);
}

