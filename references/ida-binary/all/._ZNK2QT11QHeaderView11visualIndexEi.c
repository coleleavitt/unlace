// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112280
// Name:            ._ZNK2QT11QHeaderView11visualIndexEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112280 jmp     cs:_ZNK2QT11QHeaderView11visualIndexEi_ptr
//
// Resolved target: _ZNK2QT11QHeaderView11visualIndexEi
// Target address:  0x8D3C50
// GOT/IAT slot:    0x89FDE0
// Slot symbol:     _ZNK2QT11QHeaderView11visualIndexEi_ptr
// Target type:     _QWORD(QT::QHeaderView *__hidden this, int)
// ============================================================

/* see target sig */ ._ZNK2QT11QHeaderView11visualIndexEi(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QHeaderView11visualIndexEi via GOT/IAT indirection
    return _ZNK2QT11QHeaderView11visualIndexEi(/* forwarded args */);
}

