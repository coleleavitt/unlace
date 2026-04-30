// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112B00
// Name:            ._ZNK2QT9QTextLine6heightEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112B00 jmp     cs:_ZNK2QT9QTextLine6heightEv_ptr
//
// Resolved target: _ZNK2QT9QTextLine6heightEv
// Target address:  0x8D41C8
// GOT/IAT slot:    0x8A0220
// Slot symbol:     _ZNK2QT9QTextLine6heightEv_ptr
// Target type:     _QWORD(QT::QTextLine *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QTextLine6heightEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QTextLine6heightEv via GOT/IAT indirection
    return _ZNK2QT9QTextLine6heightEv(/* forwarded args */);
}

