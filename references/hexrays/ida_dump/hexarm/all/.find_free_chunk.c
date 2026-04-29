// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E0F0
// Name:            .find_free_chunk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E0F0 jmp     cs:off_4E9860
//
// Resolved target: find_free_chunk
// Target address:  0x4EC280
// GOT/IAT slot:    0x4E9860
// Slot symbol:     off_4E9860
// Target type:     <no type info>
// ============================================================

void .find_free_chunk(/* see target signature */)
{
    // Tail-call to find_free_chunk via GOT/IAT indirection
    return find_free_chunk(/* forwarded args */);
}

