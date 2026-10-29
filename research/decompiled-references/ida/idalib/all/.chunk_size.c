// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB520
// Name:            .chunk_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB520 jmp     cs:off_2C7B278
//
// Resolved target: chunk_size
// Target address:  0x3BD8A0
// GOT/IAT slot:    0x2C7B278
// Slot symbol:     off_2C7B278
// Target type:     <no type info>
// ============================================================

void .chunk_size(/* see target signature */)
{
    // Tail-call to chunk_size via GOT/IAT indirection
    return chunk_size(/* forwarded args */);
}

