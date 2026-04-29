// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x93E0
// Name:            .setinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x93E0 jmp     cs:off_891D8
//
// Resolved target: setinf_flag
// Target address:  0x8C4D8
// GOT/IAT slot:    0x891D8
// Slot symbol:     off_891D8
// Target type:     <no type info>
// ============================================================

void .setinf_flag(/* see target signature */)
{
    // Tail-call to setinf_flag via GOT/IAT indirection
    return setinf_flag(/* forwarded args */);
}

