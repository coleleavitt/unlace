// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117C20
// Name:            ._ZNK2QT7QString3argEdiciNS_5QCharE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117C20 jmp     cs:_ZNK2QT7QString3argEdiciNS_5QCharE_ptr
//
// Resolved target: _ZNK2QT7QString3argEdiciNS_5QCharE
// Target address:  0x8D7578
// GOT/IAT slot:    0x8A2AB0
// Slot symbol:     _ZNK2QT7QString3argEdiciNS_5QCharE_ptr
// Target type:     _QWORD __high(double, int, char, int, QT::QChar)
// ============================================================

/* see target sig */ ._ZNK2QT7QString3argEdiciNS_5QCharE(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QString3argEdiciNS_5QCharE via GOT/IAT indirection
    return _ZNK2QT7QString3argEdiciNS_5QCharE(/* forwarded args */);
}

