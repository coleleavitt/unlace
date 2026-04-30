// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116960
// Name:            ._ZNK2QT7QPixmap6heightEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116960 jmp     cs:_ZNK2QT7QPixmap6heightEv_ptr
//
// Resolved target: _ZNK2QT7QPixmap6heightEv
// Target address:  0x8D69D8
// GOT/IAT slot:    0x8A2150
// Slot symbol:     _ZNK2QT7QPixmap6heightEv_ptr
// Target type:     _QWORD(QT::QPixmap *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QPixmap6heightEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QPixmap6heightEv via GOT/IAT indirection
    return _ZNK2QT7QPixmap6heightEv(/* forwarded args */);
}

