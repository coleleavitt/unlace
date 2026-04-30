// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113600
// Name:            ._ZNK2QT8QVariant6toBoolEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113600 jmp     cs:_ZNK2QT8QVariant6toBoolEv_ptr
//
// Resolved target: _ZNK2QT8QVariant6toBoolEv
// Target address:  0x8D4900
// GOT/IAT slot:    0x8A07A0
// Slot symbol:     _ZNK2QT8QVariant6toBoolEv_ptr
// Target type:     _QWORD(QT::QVariant *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT8QVariant6toBoolEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT8QVariant6toBoolEv via GOT/IAT indirection
    return _ZNK2QT8QVariant6toBoolEv(/* forwarded args */);
}

