// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7870
// Name:            .bin_search
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7870 jmp     cs:off_2C79420
//
// Resolved target: bin_search
// Target address:  0x6778C0
// GOT/IAT slot:    0x2C79420
// Slot symbol:     off_2C79420
// Target type:     <no type info>
// ============================================================

void .bin_search(/* see target signature */)
{
    // Tail-call to bin_search via GOT/IAT indirection
    return bin_search(/* forwarded args */);
}

