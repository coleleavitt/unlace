// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116630
// Name:            ._ZNK2QT7QString3argEyiiNS_5QCharE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116630 jmp     cs:_ZNK2QT7QString3argEyiiNS_5QCharE_ptr
//
// Resolved target: _ZNK2QT7QString3argEyiiNS_5QCharE
// Target address:  0x8D67A8
// GOT/IAT slot:    0x8A1FB8
// Slot symbol:     _ZNK2QT7QString3argEyiiNS_5QCharE_ptr
// Target type:     _QWORD __high(unsigned __int64, int, int, QT::QChar)
// ============================================================

/* see target sig */ ._ZNK2QT7QString3argEyiiNS_5QCharE(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QString3argEyiiNS_5QCharE via GOT/IAT indirection
    return _ZNK2QT7QString3argEyiiNS_5QCharE(/* forwarded args */);
}

