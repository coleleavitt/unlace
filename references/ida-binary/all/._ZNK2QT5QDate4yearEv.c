// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112A90
// Name:            ._ZNK2QT5QDate4yearEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112A90 jmp     cs:_ZNK2QT5QDate4yearEv_ptr
//
// Resolved target: _ZNK2QT5QDate4yearEv
// Target address:  0x8D4188
// GOT/IAT slot:    0x8A01E8
// Slot symbol:     _ZNK2QT5QDate4yearEv_ptr
// Target type:     _QWORD(QT::QDate *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT5QDate4yearEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT5QDate4yearEv via GOT/IAT indirection
    return _ZNK2QT5QDate4yearEv(/* forwarded args */);
}

