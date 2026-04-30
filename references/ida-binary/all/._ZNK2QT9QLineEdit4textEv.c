// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113F70
// Name:            ._ZNK2QT9QLineEdit4textEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113F70 jmp     cs:_ZNK2QT9QLineEdit4textEv_ptr
//
// Resolved target: _ZNK2QT9QLineEdit4textEv
// Target address:  0x8D4F18
// GOT/IAT slot:    0x8A0C58
// Slot symbol:     _ZNK2QT9QLineEdit4textEv_ptr
// Target type:     _QWORD(QT::QLineEdit *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QLineEdit4textEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QLineEdit4textEv via GOT/IAT indirection
    return _ZNK2QT9QLineEdit4textEv(/* forwarded args */);
}

