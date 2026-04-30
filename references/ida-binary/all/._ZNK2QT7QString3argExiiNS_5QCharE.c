// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1120F0
// Name:            ._ZNK2QT7QString3argExiiNS_5QCharE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1120F0 jmp     cs:_ZNK2QT7QString3argExiiNS_5QCharE_ptr
//
// Resolved target: _ZNK2QT7QString3argExiiNS_5QCharE
// Target address:  0x8D3B60
// GOT/IAT slot:    0x89FD18
// Slot symbol:     _ZNK2QT7QString3argExiiNS_5QCharE_ptr
// Target type:     _QWORD __high(__int64, int, int, QT::QChar)
// ============================================================

/* see target sig */ ._ZNK2QT7QString3argExiiNS_5QCharE(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QString3argExiiNS_5QCharE via GOT/IAT indirection
    return _ZNK2QT7QString3argExiiNS_5QCharE(/* forwarded args */);
}

