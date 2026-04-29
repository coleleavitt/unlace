// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2230
// Name:            .find_free_chunk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2230 jmp     cs:off_B100
//
// Resolved target: find_free_chunk
// Target address:  0xB3A8
// GOT/IAT slot:    0xB100
// Slot symbol:     off_B100
// Target type:     <no type info>
// ============================================================

void .find_free_chunk(/* see target signature */)
{
    // Tail-call to find_free_chunk via GOT/IAT indirection
    return find_free_chunk(/* forwarded args */);
}

