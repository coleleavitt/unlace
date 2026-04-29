// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7280
// Name:            .setinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7280 jmp     cs:off_19128
//
// Resolved target: setinf_flag
// Target address:  0x19658
// GOT/IAT slot:    0x19128
// Slot symbol:     off_19128
// Target type:     <no type info>
// ============================================================

void .setinf_flag(/* see target signature */)
{
    // Tail-call to setinf_flag via GOT/IAT indirection
    return setinf_flag(/* forwarded args */);
}

