// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114070
// Name:            ._ZNK2QT9QKeyEvent9modifiersEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114070 jmp     cs:_ZNK2QT9QKeyEvent9modifiersEv_ptr
//
// Resolved target: _ZNK2QT9QKeyEvent9modifiersEv
// Target address:  0x8D4FB0
// GOT/IAT slot:    0x8A0CD8
// Slot symbol:     _ZNK2QT9QKeyEvent9modifiersEv_ptr
// Target type:     _QWORD(QT::QKeyEvent *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QKeyEvent9modifiersEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QKeyEvent9modifiersEv via GOT/IAT indirection
    return _ZNK2QT9QKeyEvent9modifiersEv(/* forwarded args */);
}

