// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A0C0
// Name:            .find_free_chunk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A0C0 jmp     cs:off_4B9848
//
// Resolved target: find_free_chunk
// Target address:  0x4BC248
// GOT/IAT slot:    0x4B9848
// Slot symbol:     off_4B9848
// Target type:     <no type info>
// ============================================================

void .find_free_chunk(/* see target signature */)
{
    // Tail-call to find_free_chunk via GOT/IAT indirection
    return find_free_chunk(/* forwarded args */);
}

