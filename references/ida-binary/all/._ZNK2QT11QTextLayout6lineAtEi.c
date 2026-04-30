// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116E00
// Name:            ._ZNK2QT11QTextLayout6lineAtEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116E00 jmp     cs:_ZNK2QT11QTextLayout6lineAtEi_ptr
//
// Resolved target: _ZNK2QT11QTextLayout6lineAtEi
// Target address:  0x8D6C98
// GOT/IAT slot:    0x8A23A0
// Slot symbol:     _ZNK2QT11QTextLayout6lineAtEi_ptr
// Target type:     _QWORD(QT::QTextLayout *__hidden this, int)
// ============================================================

/* see target sig */ ._ZNK2QT11QTextLayout6lineAtEi(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QTextLayout6lineAtEi via GOT/IAT indirection
    return _ZNK2QT11QTextLayout6lineAtEi(/* forwarded args */);
}

