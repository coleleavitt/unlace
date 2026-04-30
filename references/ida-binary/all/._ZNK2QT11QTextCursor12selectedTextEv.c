// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1199B0
// Name:            ._ZNK2QT11QTextCursor12selectedTextEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1199B0 jmp     cs:_ZNK2QT11QTextCursor12selectedTextEv_ptr
//
// Resolved target: _ZNK2QT11QTextCursor12selectedTextEv
// Target address:  0x8D8828
// GOT/IAT slot:    0x8A3978
// Slot symbol:     _ZNK2QT11QTextCursor12selectedTextEv_ptr
// Target type:     _QWORD(QT::QTextCursor *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QTextCursor12selectedTextEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QTextCursor12selectedTextEv via GOT/IAT indirection
    return _ZNK2QT11QTextCursor12selectedTextEv(/* forwarded args */);
}

