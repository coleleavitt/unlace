// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7560
// Name:            .getinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7560 jmp     cs:off_19298
//
// Resolved target: getinf_flag
// Target address:  0x197D0
// GOT/IAT slot:    0x19298
// Slot symbol:     off_19298
// Target type:     <no type info>
// ============================================================

void .getinf_flag(/* see target signature */)
{
    // Tail-call to getinf_flag via GOT/IAT indirection
    return getinf_flag(/* forwarded args */);
}

