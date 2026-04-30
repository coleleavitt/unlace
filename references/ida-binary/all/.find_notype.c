// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112490
// Name:            .find_notype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112490 jmp     cs:find_notype_ptr
//
// Resolved target: find_notype
// Target address:  0x8D3DC0
// GOT/IAT slot:    0x89FEE8
// Slot symbol:     find_notype_ptr
// Target type:     <no type info>
// ============================================================

void .find_notype(/* see target signature */)
{
    // Tail-call to find_notype via GOT/IAT indirection
    return find_notype(/* forwarded args */);
}

