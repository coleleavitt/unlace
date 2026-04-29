// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D090
// Name:            ._ZSt11_Hash_bytesPKvmm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D090 jmp     cs:off_B3030
//
// Resolved target: _ZSt11_Hash_bytesPKvmm
// Target address:  0xB37A0
// GOT/IAT slot:    0xB3030
// Slot symbol:     off_B3030
// Target type:     _QWORD(const void *, unsigned __int64, unsigned __int64)
// ============================================================

/* see target sig */ ._ZSt11_Hash_bytesPKvmm(/* see target signature */)
{
    // Tail-call to _ZSt11_Hash_bytesPKvmm via GOT/IAT indirection
    return _ZSt11_Hash_bytesPKvmm(/* forwarded args */);
}

