// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112530
// Name:            ._ZNK2QT9QLineEdit12selectedTextEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112530 jmp     cs:_ZNK2QT9QLineEdit12selectedTextEv_ptr
//
// Resolved target: _ZNK2QT9QLineEdit12selectedTextEv
// Target address:  0x8D3E30
// GOT/IAT slot:    0x89FF38
// Slot symbol:     _ZNK2QT9QLineEdit12selectedTextEv_ptr
// Target type:     _QWORD(QT::QLineEdit *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QLineEdit12selectedTextEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QLineEdit12selectedTextEv via GOT/IAT indirection
    return _ZNK2QT9QLineEdit12selectedTextEv(/* forwarded args */);
}

