// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115DA0
// Name:            .search
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115DA0 jmp     cs:search_ptr
//
// Resolved target: search
// Target address:  0x8D6240
// GOT/IAT slot:    0x8A1B70
// Slot symbol:     search_ptr
// Target type:     <no type info>
// ============================================================

void .search(/* see target signature */)
{
    // Tail-call to search via GOT/IAT indirection
    return search(/* forwarded args */);
}

