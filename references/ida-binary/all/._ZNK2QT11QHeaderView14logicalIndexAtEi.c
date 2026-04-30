// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BA00
// Name:            ._ZNK2QT11QHeaderView14logicalIndexAtEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BA00 jmp     cs:_ZNK2QT11QHeaderView14logicalIndexAtEi_ptr
//
// Resolved target: _ZNK2QT11QHeaderView14logicalIndexAtEi
// Target address:  0x8D9C80
// GOT/IAT slot:    0x8A49A0
// Slot symbol:     _ZNK2QT11QHeaderView14logicalIndexAtEi_ptr
// Target type:     _QWORD(QT::QHeaderView *__hidden this, int)
// ============================================================

/* see target sig */ ._ZNK2QT11QHeaderView14logicalIndexAtEi(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QHeaderView14logicalIndexAtEi via GOT/IAT indirection
    return _ZNK2QT11QHeaderView14logicalIndexAtEi(/* forwarded args */);
}

