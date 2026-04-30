// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117110
// Name:            ._ZNK2QT7QPixmap6isNullEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117110 jmp     cs:_ZNK2QT7QPixmap6isNullEv_ptr
//
// Resolved target: _ZNK2QT7QPixmap6isNullEv
// Target address:  0x8D6E88
// GOT/IAT slot:    0x8A2528
// Slot symbol:     _ZNK2QT7QPixmap6isNullEv_ptr
// Target type:     _QWORD(QT::QPixmap *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QPixmap6isNullEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QPixmap6isNullEv via GOT/IAT indirection
    return _ZNK2QT7QPixmap6isNullEv(/* forwarded args */);
}

