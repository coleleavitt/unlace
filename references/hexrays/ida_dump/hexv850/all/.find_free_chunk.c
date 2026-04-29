// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B0D0
// Name:            .find_free_chunk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B0D0 jmp     cs:off_4C0850
//
// Resolved target: find_free_chunk
// Target address:  0x4C3848
// GOT/IAT slot:    0x4C0850
// Slot symbol:     off_4C0850
// Target type:     <no type info>
// ============================================================

void .find_free_chunk(/* see target signature */)
{
    // Tail-call to find_free_chunk via GOT/IAT indirection
    return find_free_chunk(/* forwarded args */);
}

