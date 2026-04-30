// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118FE0
// Name:            ._ZNK2QT11QHeaderView15isSectionHiddenEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118FE0 jmp     cs:_ZNK2QT11QHeaderView15isSectionHiddenEi_ptr
//
// Resolved target: _ZNK2QT11QHeaderView15isSectionHiddenEi
// Target address:  0x8D81B8
// GOT/IAT slot:    0x8A3490
// Slot symbol:     _ZNK2QT11QHeaderView15isSectionHiddenEi_ptr
// Target type:     _QWORD(QT::QHeaderView *__hidden this, int)
// ============================================================

/* see target sig */ ._ZNK2QT11QHeaderView15isSectionHiddenEi(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QHeaderView15isSectionHiddenEi via GOT/IAT indirection
    return _ZNK2QT11QHeaderView15isSectionHiddenEi(/* forwarded args */);
}

