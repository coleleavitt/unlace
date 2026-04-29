// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x167C0
// Name:            ._ZNK2QT8QVariant8toStringEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x167C0 jmp     cs:off_4F3C8
//
// Resolved target: _ZNK2QT8QVariant8toStringEv
// Target address:  0x50420
// GOT/IAT slot:    0x4F3C8
// Slot symbol:     off_4F3C8
// Target type:     _QWORD(QT::QVariant *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT8QVariant8toStringEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT8QVariant8toStringEv via GOT/IAT indirection
    return _ZNK2QT8QVariant8toStringEv(/* forwarded args */);
}

