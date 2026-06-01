// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7730
// Name:            .chunk_start
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7730 jmp     cs:off_2C79380
//
// Resolved target: chunk_start
// Target address:  0x3BD7B0
// GOT/IAT slot:    0x2C79380
// Slot symbol:     off_2C79380
// Target type:     <no type info>
// ============================================================

void .chunk_start(/* see target signature */)
{
    // Tail-call to chunk_start via GOT/IAT indirection
    return chunk_start(/* forwarded args */);
}

