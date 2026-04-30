// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1186C0
// Name:            ._ZNK2QT11QTextCursor15positionInBlockEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1186C0 jmp     cs:_ZNK2QT11QTextCursor15positionInBlockEv_ptr
//
// Resolved target: _ZNK2QT11QTextCursor15positionInBlockEv
// Target address:  0x8D7C28
// GOT/IAT slot:    0x8A3000
// Slot symbol:     _ZNK2QT11QTextCursor15positionInBlockEv_ptr
// Target type:     _QWORD(QT::QTextCursor *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QTextCursor15positionInBlockEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QTextCursor15positionInBlockEv via GOT/IAT indirection
    return _ZNK2QT11QTextCursor15positionInBlockEv(/* forwarded args */);
}

