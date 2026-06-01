// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAB70
// Name:            .map_code_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAB70 jmp     cs:off_2C7ADA0
//
// Resolved target: map_code_ea
// Target address:  0x5787F0
// GOT/IAT slot:    0x2C7ADA0
// Slot symbol:     off_2C7ADA0
// Target type:     <no type info>
// ============================================================

void .map_code_ea(/* see target signature */)
{
    // Tail-call to map_code_ea via GOT/IAT indirection
    return map_code_ea(/* forwarded args */);
}

