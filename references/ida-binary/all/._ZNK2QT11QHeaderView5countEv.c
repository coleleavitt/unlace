// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115450
// Name:            ._ZNK2QT11QHeaderView5countEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115450 jmp     cs:_ZNK2QT11QHeaderView5countEv_ptr
//
// Resolved target: _ZNK2QT11QHeaderView5countEv
// Target address:  0x8D5C90
// GOT/IAT slot:    0x8A16C8
// Slot symbol:     _ZNK2QT11QHeaderView5countEv_ptr
// Target type:     _QWORD(QT::QHeaderView *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QHeaderView5countEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QHeaderView5countEv via GOT/IAT indirection
    return _ZNK2QT11QHeaderView5countEv(/* forwarded args */);
}

