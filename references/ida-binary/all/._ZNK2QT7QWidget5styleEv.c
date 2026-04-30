// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A7E0
// Name:            ._ZNK2QT7QWidget5styleEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A7E0 jmp     cs:_ZNK2QT7QWidget5styleEv_ptr
//
// Resolved target: _ZNK2QT7QWidget5styleEv
// Target address:  0x8D9130
// GOT/IAT slot:    0x8A4090
// Slot symbol:     _ZNK2QT7QWidget5styleEv_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QWidget5styleEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QWidget5styleEv via GOT/IAT indirection
    return _ZNK2QT7QWidget5styleEv(/* forwarded args */);
}

