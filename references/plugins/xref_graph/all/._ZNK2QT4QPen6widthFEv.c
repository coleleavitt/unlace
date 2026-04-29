// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x172D0
// Name:            ._ZNK2QT4QPen6widthFEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x172D0 jmp     cs:off_4F950
//
// Resolved target: _ZNK2QT4QPen6widthFEv
// Target address:  0x50E68
// GOT/IAT slot:    0x4F950
// Slot symbol:     off_4F950
// Target type:     _QWORD(QT::QPen *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT4QPen6widthFEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT4QPen6widthFEv via GOT/IAT indirection
    return _ZNK2QT4QPen6widthFEv(/* forwarded args */);
}

