// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118540
// Name:            ._ZNK2QT5QFont6familyEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118540 jmp     cs:_ZNK2QT5QFont6familyEv_ptr
//
// Resolved target: _ZNK2QT5QFont6familyEv
// Target address:  0x8D7B58
// GOT/IAT slot:    0x8A2F40
// Slot symbol:     _ZNK2QT5QFont6familyEv_ptr
// Target type:     _QWORD(QT::QFont *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT5QFont6familyEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT5QFont6familyEv via GOT/IAT indirection
    return _ZNK2QT5QFont6familyEv(/* forwarded args */);
}

