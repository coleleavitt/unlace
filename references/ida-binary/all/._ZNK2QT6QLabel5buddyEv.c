// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114950
// Name:            ._ZNK2QT6QLabel5buddyEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114950 jmp     cs:_ZNK2QT6QLabel5buddyEv_ptr
//
// Resolved target: _ZNK2QT6QLabel5buddyEv
// Target address:  0x8D5590
// GOT/IAT slot:    0x8A1148
// Slot symbol:     _ZNK2QT6QLabel5buddyEv_ptr
// Target type:     _QWORD(QT::QLabel *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT6QLabel5buddyEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT6QLabel5buddyEv via GOT/IAT indirection
    return _ZNK2QT6QLabel5buddyEv(/* forwarded args */);
}

