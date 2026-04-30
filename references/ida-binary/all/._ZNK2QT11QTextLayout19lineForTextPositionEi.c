// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117750
// Name:            ._ZNK2QT11QTextLayout19lineForTextPositionEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117750 jmp     cs:_ZNK2QT11QTextLayout19lineForTextPositionEi_ptr
//
// Resolved target: _ZNK2QT11QTextLayout19lineForTextPositionEi
// Target address:  0x8D7298
// GOT/IAT slot:    0x8A2848
// Slot symbol:     _ZNK2QT11QTextLayout19lineForTextPositionEi_ptr
// Target type:     _QWORD(QT::QTextLayout *__hidden this, int)
// ============================================================

/* see target sig */ ._ZNK2QT11QTextLayout19lineForTextPositionEi(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QTextLayout19lineForTextPositionEi via GOT/IAT indirection
    return _ZNK2QT11QTextLayout19lineForTextPositionEi(/* forwarded args */);
}

