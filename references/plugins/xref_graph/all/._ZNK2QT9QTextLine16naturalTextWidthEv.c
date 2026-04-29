// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16F00
// Name:            ._ZNK2QT9QTextLine16naturalTextWidthEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16F00 jmp     cs:off_4F768
//
// Resolved target: _ZNK2QT9QTextLine16naturalTextWidthEv
// Target address:  0x50B28
// GOT/IAT slot:    0x4F768
// Slot symbol:     off_4F768
// Target type:     _QWORD(QT::QTextLine *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QTextLine16naturalTextWidthEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QTextLine16naturalTextWidthEv via GOT/IAT indirection
    return _ZNK2QT9QTextLine16naturalTextWidthEv(/* forwarded args */);
}

