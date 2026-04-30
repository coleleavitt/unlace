// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1149D0
// Name:            ._ZNK2QT5QDrag6targetEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1149D0 jmp     cs:_ZNK2QT5QDrag6targetEv_ptr
//
// Resolved target: _ZNK2QT5QDrag6targetEv
// Target address:  0x8D55E8
// GOT/IAT slot:    0x8A1188
// Slot symbol:     _ZNK2QT5QDrag6targetEv_ptr
// Target type:     _QWORD(QT::QDrag *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT5QDrag6targetEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT5QDrag6targetEv via GOT/IAT indirection
    return _ZNK2QT5QDrag6targetEv(/* forwarded args */);
}

