// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17390
// Name:            ._ZNK2QT7QWidget5styleEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17390 jmp     cs:off_4F9B0
//
// Resolved target: _ZNK2QT7QWidget5styleEv
// Target address:  0x50F48
// GOT/IAT slot:    0x4F9B0
// Slot symbol:     off_4F9B0
// Target type:     _QWORD(QT::QWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QWidget5styleEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QWidget5styleEv via GOT/IAT indirection
    return _ZNK2QT7QWidget5styleEv(/* forwarded args */);
}

