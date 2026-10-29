// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16881F0
// Name:            sub_16881F0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x16881F0 jmp     sub_168B6B0
//
// Resolved target: sub_168B6B0
// Target address:  0x168B6B0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD, _QWORD)
// ============================================================

/* see target sig */ sub_16881F0(/* see target signature */)
{
    // Tail-call to sub_168B6B0 via direct jump indirection
    return sub_168B6B0(/* forwarded args */);
}

