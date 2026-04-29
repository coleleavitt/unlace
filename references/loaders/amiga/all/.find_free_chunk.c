// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1110
// Name:            .find_free_chunk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1110 jmp     cs:off_5070
//
// Resolved target: find_free_chunk
// Target address:  0x51A8
// GOT/IAT slot:    0x5070
// Slot symbol:     off_5070
// Target type:     <no type info>
// ============================================================

void .find_free_chunk(/* see target signature */)
{
    // Tail-call to find_free_chunk via GOT/IAT indirection
    return find_free_chunk(/* forwarded args */);
}

