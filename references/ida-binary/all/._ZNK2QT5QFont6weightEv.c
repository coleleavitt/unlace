// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119FD0
// Name:            ._ZNK2QT5QFont6weightEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119FD0 jmp     cs:_ZNK2QT5QFont6weightEv_ptr
//
// Resolved target: _ZNK2QT5QFont6weightEv
// Target address:  0x8D8BE8
// GOT/IAT slot:    0x8A3C88
// Slot symbol:     _ZNK2QT5QFont6weightEv_ptr
// Target type:     _QWORD(QT::QFont *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT5QFont6weightEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT5QFont6weightEv via GOT/IAT indirection
    return _ZNK2QT5QFont6weightEv(/* forwarded args */);
}

