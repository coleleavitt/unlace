// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1171C0
// Name:            ._ZNK2QT12QKeySequence7isEmptyEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1171C0 jmp     cs:_ZNK2QT12QKeySequence7isEmptyEv_ptr
//
// Resolved target: _ZNK2QT12QKeySequence7isEmptyEv
// Target address:  0x8D6EF0
// GOT/IAT slot:    0x8A2580
// Slot symbol:     _ZNK2QT12QKeySequence7isEmptyEv_ptr
// Target type:     _QWORD(QT::QKeySequence *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT12QKeySequence7isEmptyEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT12QKeySequence7isEmptyEv via GOT/IAT indirection
    return _ZNK2QT12QKeySequence7isEmptyEv(/* forwarded args */);
}

