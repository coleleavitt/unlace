// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17100
// Name:            ._ZNK2QT8QVariant8metaTypeEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17100 jmp     cs:off_4F868
//
// Resolved target: _ZNK2QT8QVariant8metaTypeEv
// Target address:  0x50CF0
// GOT/IAT slot:    0x4F868
// Slot symbol:     off_4F868
// Target type:     _QWORD(QT::QVariant *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT8QVariant8metaTypeEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT8QVariant8metaTypeEv via GOT/IAT indirection
    return _ZNK2QT8QVariant8metaTypeEv(/* forwarded args */);
}

