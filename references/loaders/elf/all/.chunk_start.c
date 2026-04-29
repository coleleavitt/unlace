// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9800
// Name:            .chunk_start
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9800 jmp     cs:off_893E8
//
// Resolved target: chunk_start
// Target address:  0x8C708
// GOT/IAT slot:    0x893E8
// Slot symbol:     off_893E8
// Target type:     <no type info>
// ============================================================

void .chunk_start(/* see target signature */)
{
    // Tail-call to chunk_start via GOT/IAT indirection
    return chunk_start(/* forwarded args */);
}

