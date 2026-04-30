// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B3B0
// Name:            ._ZN2QT9QListView10setSpacingEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B3B0 jmp     cs:_ZN2QT9QListView10setSpacingEi_ptr
//
// Resolved target: _ZN2QT9QListView10setSpacingEi
// Target address:  0x8D98B0
// GOT/IAT slot:    0x8A4678
// Slot symbol:     _ZN2QT9QListView10setSpacingEi_ptr
// Target type:     _QWORD(QT::QListView *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT9QListView10setSpacingEi(/* see target signature */)
{
    // Tail-call to _ZN2QT9QListView10setSpacingEi via GOT/IAT indirection
    return _ZN2QT9QListView10setSpacingEi(/* forwarded args */);
}

