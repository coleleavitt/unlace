// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19040
// Name:            .next_chunk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19040 jmp     cs:off_75008
//
// Resolved target: next_chunk
// Target address:  0x75858
// GOT/IAT slot:    0x75008
// Slot symbol:     off_75008
// Target type:     <no type info>
// ============================================================

void .next_chunk(/* see target signature */)
{
    // Tail-call to next_chunk via GOT/IAT indirection
    return next_chunk(/* forwarded args */);
}

