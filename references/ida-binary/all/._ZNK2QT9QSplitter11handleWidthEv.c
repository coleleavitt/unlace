// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119650
// Name:            ._ZNK2QT9QSplitter11handleWidthEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119650 jmp     cs:_ZNK2QT9QSplitter11handleWidthEv_ptr
//
// Resolved target: _ZNK2QT9QSplitter11handleWidthEv
// Target address:  0x8D8618
// GOT/IAT slot:    0x8A37C8
// Slot symbol:     _ZNK2QT9QSplitter11handleWidthEv_ptr
// Target type:     _QWORD(QT::QSplitter *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QSplitter11handleWidthEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QSplitter11handleWidthEv via GOT/IAT indirection
    return _ZNK2QT9QSplitter11handleWidthEv(/* forwarded args */);
}

