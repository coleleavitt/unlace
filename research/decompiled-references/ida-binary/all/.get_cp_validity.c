// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B4D0
// Name:            .get_cp_validity
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B4D0 jmp     cs:get_cp_validity_ptr
//
// Resolved target: get_cp_validity
// Target address:  0x8D9950
// GOT/IAT slot:    0x8A4708
// Slot symbol:     get_cp_validity_ptr
// Target type:     <no type info>
// ============================================================

void .get_cp_validity(/* see target signature */)
{
    // Tail-call to get_cp_validity via GOT/IAT indirection
    return get_cp_validity(/* forwarded args */);
}

