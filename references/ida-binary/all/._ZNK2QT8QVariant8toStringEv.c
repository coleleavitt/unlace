// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114390
// Name:            ._ZNK2QT8QVariant8toStringEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114390 jmp     cs:_ZNK2QT8QVariant8toStringEv_ptr
//
// Resolved target: _ZNK2QT8QVariant8toStringEv
// Target address:  0x8D5198
// GOT/IAT slot:    0x8A0E68
// Slot symbol:     _ZNK2QT8QVariant8toStringEv_ptr
// Target type:     _QWORD(QT::QVariant *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT8QVariant8toStringEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT8QVariant8toStringEv via GOT/IAT indirection
    return _ZNK2QT8QVariant8toStringEv(/* forwarded args */);
}

