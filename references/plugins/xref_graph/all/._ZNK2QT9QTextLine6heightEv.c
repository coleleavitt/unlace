// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x163C0
// Name:            ._ZNK2QT9QTextLine6heightEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x163C0 jmp     cs:off_4F1C8
//
// Resolved target: _ZNK2QT9QTextLine6heightEv
// Target address:  0x500E8
// GOT/IAT slot:    0x4F1C8
// Slot symbol:     off_4F1C8
// Target type:     _QWORD(QT::QTextLine *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QTextLine6heightEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QTextLine6heightEv via GOT/IAT indirection
    return _ZNK2QT9QTextLine6heightEv(/* forwarded args */);
}

