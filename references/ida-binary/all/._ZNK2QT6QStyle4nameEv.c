// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1166A0
// Name:            ._ZNK2QT6QStyle4nameEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1166A0 jmp     cs:_ZNK2QT6QStyle4nameEv_ptr
//
// Resolved target: _ZNK2QT6QStyle4nameEv
// Target address:  0x8D67E8
// GOT/IAT slot:    0x8A1FF0
// Slot symbol:     _ZNK2QT6QStyle4nameEv_ptr
// Target type:     _QWORD(QT::QStyle *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT6QStyle4nameEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT6QStyle4nameEv via GOT/IAT indirection
    return _ZNK2QT6QStyle4nameEv(/* forwarded args */);
}

