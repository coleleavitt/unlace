// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2430
// Name:            .get_entry
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2430 jmp     cs:off_B200
//
// Resolved target: get_entry
// Target address:  0xB4B0
// GOT/IAT slot:    0xB200
// Slot symbol:     off_B200
// Target type:     <no type info>
// ============================================================

void .get_entry(/* see target signature */)
{
    // Tail-call to get_entry via GOT/IAT indirection
    return get_entry(/* forwarded args */);
}

