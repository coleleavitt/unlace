// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BA40
// Name:            .get_nlist_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BA40 jmp     cs:get_nlist_size_ptr
//
// Resolved target: get_nlist_size
// Target address:  0x8D9CA8
// GOT/IAT slot:    0x8A49C0
// Slot symbol:     get_nlist_size_ptr
// Target type:     <no type info>
// ============================================================

void .get_nlist_size(/* see target signature */)
{
    // Tail-call to get_nlist_size via GOT/IAT indirection
    return get_nlist_size(/* forwarded args */);
}

