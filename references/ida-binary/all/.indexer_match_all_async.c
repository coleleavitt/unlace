// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114F40
// Name:            .indexer_match_all_async
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114F40 jmp     cs:indexer_match_all_async_ptr
//
// Resolved target: indexer_match_all_async
// Target address:  0x8D5960
// GOT/IAT slot:    0x8A1440
// Slot symbol:     indexer_match_all_async_ptr
// Target type:     <no type info>
// ============================================================

void .indexer_match_all_async(/* see target signature */)
{
    // Tail-call to indexer_match_all_async via GOT/IAT indirection
    return indexer_match_all_async(/* forwarded args */);
}

