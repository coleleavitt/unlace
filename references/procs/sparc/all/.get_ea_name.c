// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x72E0
// Name:            .get_ea_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x72E0 jmp     cs:off_19158
//
// Resolved target: get_ea_name
// Target address:  0x19688
// GOT/IAT slot:    0x19158
// Slot symbol:     off_19158
// Target type:     <no type info>
// ============================================================

void .get_ea_name(/* see target signature */)
{
    // Tail-call to get_ea_name via GOT/IAT indirection
    return get_ea_name(/* forwarded args */);
}

