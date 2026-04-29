// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20F0
// Name:            .setinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20F0 jmp     cs:off_8060
//
// Resolved target: setinf_flag
// Target address:  0x8240
// GOT/IAT slot:    0x8060
// Slot symbol:     off_8060
// Target type:     <no type info>
// ============================================================

void .setinf_flag(/* see target signature */)
{
    // Tail-call to setinf_flag via GOT/IAT indirection
    return setinf_flag(/* forwarded args */);
}

