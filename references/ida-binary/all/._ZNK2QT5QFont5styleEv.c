// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118820
// Name:            ._ZNK2QT5QFont5styleEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118820 jmp     cs:_ZNK2QT5QFont5styleEv_ptr
//
// Resolved target: _ZNK2QT5QFont5styleEv
// Target address:  0x8D7D08
// GOT/IAT slot:    0x8A30B0
// Slot symbol:     _ZNK2QT5QFont5styleEv_ptr
// Target type:     _QWORD(QT::QFont *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT5QFont5styleEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT5QFont5styleEv via GOT/IAT indirection
    return _ZNK2QT5QFont5styleEv(/* forwarded args */);
}

