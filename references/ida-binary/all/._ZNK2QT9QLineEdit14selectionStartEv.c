// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B2E0
// Name:            ._ZNK2QT9QLineEdit14selectionStartEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B2E0 jmp     cs:_ZNK2QT9QLineEdit14selectionStartEv_ptr
//
// Resolved target: _ZNK2QT9QLineEdit14selectionStartEv
// Target address:  0x8D97E0
// GOT/IAT slot:    0x8A4610
// Slot symbol:     _ZNK2QT9QLineEdit14selectionStartEv_ptr
// Target type:     _QWORD(QT::QLineEdit *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QLineEdit14selectionStartEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QLineEdit14selectionStartEv via GOT/IAT indirection
    return _ZNK2QT9QLineEdit14selectionStartEv(/* forwarded args */);
}

