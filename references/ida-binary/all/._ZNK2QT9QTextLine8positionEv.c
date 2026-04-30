// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117210
// Name:            ._ZNK2QT9QTextLine8positionEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117210 jmp     cs:_ZNK2QT9QTextLine8positionEv_ptr
//
// Resolved target: _ZNK2QT9QTextLine8positionEv
// Target address:  0x8D6F30
// GOT/IAT slot:    0x8A25A8
// Slot symbol:     _ZNK2QT9QTextLine8positionEv_ptr
// Target type:     _QWORD(QT::QTextLine *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QTextLine8positionEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QTextLine8positionEv via GOT/IAT indirection
    return _ZNK2QT9QTextLine8positionEv(/* forwarded args */);
}

