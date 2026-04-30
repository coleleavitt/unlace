// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A6A0
// Name:            ._ZNK2QT9QTextLine10textLengthEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A6A0 jmp     cs:_ZNK2QT9QTextLine10textLengthEv_ptr
//
// Resolved target: _ZNK2QT9QTextLine10textLengthEv
// Target address:  0x8D9040
// GOT/IAT slot:    0x8A3FF0
// Slot symbol:     _ZNK2QT9QTextLine10textLengthEv_ptr
// Target type:     _QWORD(QT::QTextLine *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QTextLine10textLengthEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QTextLine10textLengthEv via GOT/IAT indirection
    return _ZNK2QT9QTextLine10textLengthEv(/* forwarded args */);
}

