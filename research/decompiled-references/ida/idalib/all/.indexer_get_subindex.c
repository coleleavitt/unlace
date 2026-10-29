// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7590
// Name:            .indexer_get_subindex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7590 jmp     cs:off_2C792B0
//
// Resolved target: indexer_get_subindex
// Target address:  0x433DF0
// GOT/IAT slot:    0x2C792B0
// Slot symbol:     off_2C792B0
// Target type:     <no type info>
// ============================================================

void .indexer_get_subindex(/* see target signature */)
{
    // Tail-call to indexer_get_subindex via GOT/IAT indirection
    return indexer_get_subindex(/* forwarded args */);
}

