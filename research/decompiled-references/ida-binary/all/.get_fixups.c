// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113CC0
// Name:            .get_fixups
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113CC0 jmp     cs:get_fixups_ptr
//
// Resolved target: get_fixups
// Target address:  0x8D4D68
// GOT/IAT slot:    0x8A0B00
// Slot symbol:     get_fixups_ptr
// Target type:     <no type info>
// ============================================================

void .get_fixups(/* see target signature */)
{
    // Tail-call to get_fixups via GOT/IAT indirection
    return get_fixups(/* forwarded args */);
}

