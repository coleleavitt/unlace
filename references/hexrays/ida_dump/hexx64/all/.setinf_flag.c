// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BBC0
// Name:            .setinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BBC0 jmp     cs:off_4ED5C8
//
// Resolved target: setinf_flag
// Target address:  0x4F18D0
// GOT/IAT slot:    0x4ED5C8
// Slot symbol:     off_4ED5C8
// Target type:     <no type info>
// ============================================================

void .setinf_flag(/* see target signature */)
{
    // Tail-call to setinf_flag via GOT/IAT indirection
    return setinf_flag(/* forwarded args */);
}

