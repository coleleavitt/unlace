// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A0C0
// Name:            ._ZN2QT9QListView19setUniformItemSizesEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A0C0 jmp     cs:_ZN2QT9QListView19setUniformItemSizesEb_ptr
//
// Resolved target: _ZN2QT9QListView19setUniformItemSizesEb
// Target address:  0x8D8C98
// GOT/IAT slot:    0x8A3D00
// Slot symbol:     _ZN2QT9QListView19setUniformItemSizesEb_ptr
// Target type:     _QWORD(QT::QListView *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT9QListView19setUniformItemSizesEb(/* see target signature */)
{
    // Tail-call to _ZN2QT9QListView19setUniformItemSizesEb via GOT/IAT indirection
    return _ZN2QT9QListView19setUniformItemSizesEb(/* forwarded args */);
}

