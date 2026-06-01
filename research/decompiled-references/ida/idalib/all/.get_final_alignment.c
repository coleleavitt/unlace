// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD910
// Name:            .get_final_alignment
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD910 jmp     cs:off_2C7C470
//
// Resolved target: get_final_alignment
// Target address:  0x59CF20
// GOT/IAT slot:    0x2C7C470
// Slot symbol:     off_2C7C470
// Target type:     <no type info>
// ============================================================

void .get_final_alignment(/* see target signature */)
{
    // Tail-call to get_final_alignment via GOT/IAT indirection
    return get_final_alignment(/* forwarded args */);
}

