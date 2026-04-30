// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1192E0
// Name:            ._ZNK2QT11QHeaderView11sectionSizeEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1192E0 jmp     cs:_ZNK2QT11QHeaderView11sectionSizeEi_ptr
//
// Resolved target: _ZNK2QT11QHeaderView11sectionSizeEi
// Target address:  0x8D83A0
// GOT/IAT slot:    0x8A3610
// Slot symbol:     _ZNK2QT11QHeaderView11sectionSizeEi_ptr
// Target type:     _QWORD(QT::QHeaderView *__hidden this, int)
// ============================================================

/* see target sig */ ._ZNK2QT11QHeaderView11sectionSizeEi(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QHeaderView11sectionSizeEi via GOT/IAT indirection
    return _ZNK2QT11QHeaderView11sectionSizeEi(/* forwarded args */);
}

