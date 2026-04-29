// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x165C0
// Name:            ._ZNK2QT8QVariant6toBoolEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x165C0 jmp     cs:off_4F2C8
//
// Resolved target: _ZNK2QT8QVariant6toBoolEv
// Target address:  0x502B8
// GOT/IAT slot:    0x4F2C8
// Slot symbol:     off_4F2C8
// Target type:     _QWORD(QT::QVariant *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT8QVariant6toBoolEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT8QVariant6toBoolEv via GOT/IAT indirection
    return _ZNK2QT8QVariant6toBoolEv(/* forwarded args */);
}

