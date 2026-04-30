// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1167B0
// Name:            ._ZNK2QT9QLineEdit14cursorPositionEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1167B0 jmp     cs:_ZNK2QT9QLineEdit14cursorPositionEv_ptr
//
// Resolved target: _ZNK2QT9QLineEdit14cursorPositionEv
// Target address:  0x8D68B0
// GOT/IAT slot:    0x8A2078
// Slot symbol:     _ZNK2QT9QLineEdit14cursorPositionEv_ptr
// Target type:     _QWORD(QT::QLineEdit *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QLineEdit14cursorPositionEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QLineEdit14cursorPositionEv via GOT/IAT indirection
    return _ZNK2QT9QLineEdit14cursorPositionEv(/* forwarded args */);
}

