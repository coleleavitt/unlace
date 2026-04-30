// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119050
// Name:            ._ZNK2QT11QHeaderView11orientationEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119050 jmp     cs:_ZNK2QT11QHeaderView11orientationEv_ptr
//
// Resolved target: _ZNK2QT11QHeaderView11orientationEv
// Target address:  0x8D8200
// GOT/IAT slot:    0x8A34C8
// Slot symbol:     _ZNK2QT11QHeaderView11orientationEv_ptr
// Target type:     _QWORD(QT::QHeaderView *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QHeaderView11orientationEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QHeaderView11orientationEv via GOT/IAT indirection
    return _ZNK2QT11QHeaderView11orientationEv(/* forwarded args */);
}

