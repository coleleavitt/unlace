// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BBC0
// Name:            ._ZNK2QT11QTextCursor12hasSelectionEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BBC0 jmp     cs:_ZNK2QT11QTextCursor12hasSelectionEv_ptr
//
// Resolved target: _ZNK2QT11QTextCursor12hasSelectionEv
// Target address:  0x8D9D88
// GOT/IAT slot:    0x8A4A80
// Slot symbol:     _ZNK2QT11QTextCursor12hasSelectionEv_ptr
// Target type:     _QWORD(QT::QTextCursor *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QTextCursor12hasSelectionEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QTextCursor12hasSelectionEv via GOT/IAT indirection
    return _ZNK2QT11QTextCursor12hasSelectionEv(/* forwarded args */);
}

