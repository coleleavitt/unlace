// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9160
// Name:            .chunk_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9160 jmp     cs:off_89098
//
// Resolved target: chunk_size
// Target address:  0x8C398
// GOT/IAT slot:    0x89098
// Slot symbol:     off_89098
// Target type:     <no type info>
// ============================================================

void .chunk_size(/* see target signature */)
{
    // Tail-call to chunk_size via GOT/IAT indirection
    return chunk_size(/* forwarded args */);
}

