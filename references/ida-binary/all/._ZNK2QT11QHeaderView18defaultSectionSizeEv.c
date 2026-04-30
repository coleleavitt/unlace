// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111570
// Name:            ._ZNK2QT11QHeaderView18defaultSectionSizeEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111570 jmp     cs:_ZNK2QT11QHeaderView18defaultSectionSizeEv_ptr
//
// Resolved target: _ZNK2QT11QHeaderView18defaultSectionSizeEv
// Target address:  0x8D3408
// GOT/IAT slot:    0x89F758
// Slot symbol:     _ZNK2QT11QHeaderView18defaultSectionSizeEv_ptr
// Target type:     _QWORD(QT::QHeaderView *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QHeaderView18defaultSectionSizeEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QHeaderView18defaultSectionSizeEv via GOT/IAT indirection
    return _ZNK2QT11QHeaderView18defaultSectionSizeEv(/* forwarded args */);
}

