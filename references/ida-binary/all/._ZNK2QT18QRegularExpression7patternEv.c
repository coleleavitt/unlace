// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118240
// Name:            ._ZNK2QT18QRegularExpression7patternEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118240 jmp     cs:_ZNK2QT18QRegularExpression7patternEv_ptr
//
// Resolved target: _ZNK2QT18QRegularExpression7patternEv
// Target address:  0x8D7978
// GOT/IAT slot:    0x8A2DC0
// Slot symbol:     _ZNK2QT18QRegularExpression7patternEv_ptr
// Target type:     _QWORD(QT::QRegularExpression *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT18QRegularExpression7patternEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT18QRegularExpression7patternEv via GOT/IAT indirection
    return _ZNK2QT18QRegularExpression7patternEv(/* forwarded args */);
}

