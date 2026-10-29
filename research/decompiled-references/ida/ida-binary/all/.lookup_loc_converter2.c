// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119430
// Name:            .lookup_loc_converter2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119430 jmp     cs:lookup_loc_converter2_ptr
//
// Resolved target: lookup_loc_converter2
// Target address:  0x8D8470
// GOT/IAT slot:    0x8A36B8
// Slot symbol:     lookup_loc_converter2_ptr
// Target type:     <no type info>
// ============================================================

void .lookup_loc_converter2(/* see target signature */)
{
    // Tail-call to lookup_loc_converter2 via GOT/IAT indirection
    return lookup_loc_converter2(/* forwarded args */);
}

