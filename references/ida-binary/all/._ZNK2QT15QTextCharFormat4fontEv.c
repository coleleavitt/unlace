// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117990
// Name:            ._ZNK2QT15QTextCharFormat4fontEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117990 jmp     cs:_ZNK2QT15QTextCharFormat4fontEv_ptr
//
// Resolved target: _ZNK2QT15QTextCharFormat4fontEv
// Target address:  0x8D73F0
// GOT/IAT slot:    0x8A2968
// Slot symbol:     _ZNK2QT15QTextCharFormat4fontEv_ptr
// Target type:     _QWORD(QT::QTextCharFormat *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT15QTextCharFormat4fontEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT15QTextCharFormat4fontEv via GOT/IAT indirection
    return _ZNK2QT15QTextCharFormat4fontEv(/* forwarded args */);
}

