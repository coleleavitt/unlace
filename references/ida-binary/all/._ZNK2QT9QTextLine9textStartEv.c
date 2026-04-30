// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114E00
// Name:            ._ZNK2QT9QTextLine9textStartEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114E00 jmp     cs:_ZNK2QT9QTextLine9textStartEv_ptr
//
// Resolved target: _ZNK2QT9QTextLine9textStartEv
// Target address:  0x8D58A0
// GOT/IAT slot:    0x8A13A0
// Slot symbol:     _ZNK2QT9QTextLine9textStartEv_ptr
// Target type:     _QWORD(QT::QTextLine *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QTextLine9textStartEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QTextLine9textStartEv via GOT/IAT indirection
    return _ZNK2QT9QTextLine9textStartEv(/* forwarded args */);
}

