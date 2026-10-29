// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADA20
// Name:            .get_nlist_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADA20 jmp     cs:off_2C7C4F8
//
// Resolved target: get_nlist_size
// Target address:  0x4E1540
// GOT/IAT slot:    0x2C7C4F8
// Slot symbol:     off_2C7C4F8
// Target type:     <no type info>
// ============================================================

void .get_nlist_size(/* see target signature */)
{
    // Tail-call to get_nlist_size via GOT/IAT indirection
    return get_nlist_size(/* forwarded args */);
}

