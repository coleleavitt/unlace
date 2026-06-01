// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111CF0
// Name:            .bin_search
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111CF0 jmp     cs:bin_search_ptr
//
// Resolved target: bin_search
// Target address:  0x8D38E0
// GOT/IAT slot:    0x89FB18
// Slot symbol:     bin_search_ptr
// Target type:     <no type info>
// ============================================================

void .bin_search(/* see target signature */)
{
    // Tail-call to bin_search via GOT/IAT indirection
    return bin_search(/* forwarded args */);
}

