// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111490
// Name:            .get_radix
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111490 jmp     cs:get_radix_ptr
//
// Resolved target: get_radix
// Target address:  0x8D3370
// GOT/IAT slot:    0x89F6E8
// Slot symbol:     get_radix_ptr
// Target type:     <no type info>
// ============================================================

void .get_radix(/* see target signature */)
{
    // Tail-call to get_radix via GOT/IAT indirection
    return get_radix(/* forwarded args */);
}

