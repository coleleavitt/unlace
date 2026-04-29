// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16130
// Name:            ._ZNK2QT7QString3argERKS0_iNS_5QCharE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16130 jmp     cs:off_4F080
//
// Resolved target: _ZNK2QT7QString3argERKS0_iNS_5QCharE
// Target address:  0x4FEB8
// GOT/IAT slot:    0x4F080
// Slot symbol:     off_4F080
// Target type:     <no type info>
// ============================================================

void ._ZNK2QT7QString3argERKS0_iNS_5QCharE(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QString3argERKS0_iNS_5QCharE via GOT/IAT indirection
    return _ZNK2QT7QString3argERKS0_iNS_5QCharE(/* forwarded args */);
}

