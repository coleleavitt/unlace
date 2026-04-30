// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112B40
// Name:            ._ZNK2QT18QRegularExpression7isValidEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112B40 jmp     cs:_ZNK2QT18QRegularExpression7isValidEv_ptr
//
// Resolved target: _ZNK2QT18QRegularExpression7isValidEv
// Target address:  0x8D41F0
// GOT/IAT slot:    0x8A0240
// Slot symbol:     _ZNK2QT18QRegularExpression7isValidEv_ptr
// Target type:     _QWORD(QT::QRegularExpression *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT18QRegularExpression7isValidEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT18QRegularExpression7isValidEv via GOT/IAT indirection
    return _ZNK2QT18QRegularExpression7isValidEv(/* forwarded args */);
}

