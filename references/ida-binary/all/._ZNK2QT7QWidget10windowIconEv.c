// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1151C0
// Name:            ._ZNK2QT7QWidget10windowIconEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1151C0 jmp     cs:_ZNK2QT7QWidget10windowIconEv_ptr
//
// Resolved target: _ZNK2QT7QWidget10windowIconEv
// Target address:  0x8D5AE0
// GOT/IAT slot:    0x8A1580
// Slot symbol:     _ZNK2QT7QWidget10windowIconEv_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QWidget10windowIconEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QWidget10windowIconEv via GOT/IAT indirection
    return _ZNK2QT7QWidget10windowIconEv(/* forwarded args */);
}

