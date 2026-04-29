// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2350
// Name:            .bin_search
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2350 jmp     cs:off_13190
//
// Resolved target: bin_search
// Target address:  0x13440
// GOT/IAT slot:    0x13190
// Slot symbol:     off_13190
// Target type:     <no type info>
// ============================================================

void .bin_search(/* see target signature */)
{
    // Tail-call to bin_search via GOT/IAT indirection
    return bin_search(/* forwarded args */);
}

