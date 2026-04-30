// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116490
// Name:            ._ZNK2QT7QWidget3posEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116490 jmp     cs:_ZNK2QT7QWidget3posEv_ptr
//
// Resolved target: _ZNK2QT7QWidget3posEv
// Target address:  0x8D66A0
// GOT/IAT slot:    0x8A1EE8
// Slot symbol:     _ZNK2QT7QWidget3posEv_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QWidget3posEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QWidget3posEv via GOT/IAT indirection
    return _ZNK2QT7QWidget3posEv(/* forwarded args */);
}

