// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20E0
// Name:            .get_ea_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20E0 jmp     cs:off_7058
//
// Resolved target: get_ea_name
// Target address:  0x7188
// GOT/IAT slot:    0x7058
// Slot symbol:     off_7058
// Target type:     <no type info>
// ============================================================

void .get_ea_name(/* see target signature */)
{
    // Tail-call to get_ea_name via GOT/IAT indirection
    return get_ea_name(/* forwarded args */);
}

