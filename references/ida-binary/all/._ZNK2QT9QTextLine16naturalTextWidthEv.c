// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1183A0
// Name:            ._ZNK2QT9QTextLine16naturalTextWidthEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1183A0 jmp     cs:_ZNK2QT9QTextLine16naturalTextWidthEv_ptr
//
// Resolved target: _ZNK2QT9QTextLine16naturalTextWidthEv
// Target address:  0x8D7A50
// GOT/IAT slot:    0x8A2E70
// Slot symbol:     _ZNK2QT9QTextLine16naturalTextWidthEv_ptr
// Target type:     _QWORD(QT::QTextLine *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QTextLine16naturalTextWidthEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QTextLine16naturalTextWidthEv via GOT/IAT indirection
    return _ZNK2QT9QTextLine16naturalTextWidthEv(/* forwarded args */);
}

