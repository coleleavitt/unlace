// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117A30
// Name:            ._ZNK2QT5QDate3dayEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117A30 jmp     cs:_ZNK2QT5QDate3dayEv_ptr
//
// Resolved target: _ZNK2QT5QDate3dayEv
// Target address:  0x8D7460
// GOT/IAT slot:    0x8A29B8
// Slot symbol:     _ZNK2QT5QDate3dayEv_ptr
// Target type:     _QWORD(QT::QDate *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT5QDate3dayEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT5QDate3dayEv via GOT/IAT indirection
    return _ZNK2QT5QDate3dayEv(/* forwarded args */);
}

