// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4050
// Name:            .get_nlist_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4050 jmp     cs:off_28010
//
// Resolved target: get_nlist_size
// Target address:  0x299A0
// GOT/IAT slot:    0x28010
// Slot symbol:     off_28010
// Target type:     <no type info>
// ============================================================

void .get_nlist_size(/* see target signature */)
{
    // Tail-call to get_nlist_size via GOT/IAT indirection
    return get_nlist_size(/* forwarded args */);
}

