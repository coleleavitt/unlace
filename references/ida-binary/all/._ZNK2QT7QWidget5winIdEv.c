// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111830
// Name:            ._ZNK2QT7QWidget5winIdEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111830 jmp     cs:_ZNK2QT7QWidget5winIdEv_ptr
//
// Resolved target: _ZNK2QT7QWidget5winIdEv
// Target address:  0x8D35F0
// GOT/IAT slot:    0x89F8B8
// Slot symbol:     _ZNK2QT7QWidget5winIdEv_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QWidget5winIdEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QWidget5winIdEv via GOT/IAT indirection
    return _ZNK2QT7QWidget5winIdEv(/* forwarded args */);
}

