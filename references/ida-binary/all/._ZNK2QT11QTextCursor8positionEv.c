// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114700
// Name:            ._ZNK2QT11QTextCursor8positionEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114700 jmp     cs:_ZNK2QT11QTextCursor8positionEv_ptr
//
// Resolved target: _ZNK2QT11QTextCursor8positionEv
// Target address:  0x8D53D0
// GOT/IAT slot:    0x8A1020
// Slot symbol:     _ZNK2QT11QTextCursor8positionEv_ptr
// Target type:     _QWORD(QT::QTextCursor *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QTextCursor8positionEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QTextCursor8positionEv via GOT/IAT indirection
    return _ZNK2QT11QTextCursor8positionEv(/* forwarded args */);
}

