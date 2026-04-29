// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20640
// Name:            .get_ea_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20640 jmp     cs:off_95308
//
// Resolved target: get_ea_name
// Target address:  0x95D40
// GOT/IAT slot:    0x95308
// Slot symbol:     off_95308
// Target type:     <no type info>
// ============================================================

void .get_ea_name(/* see target signature */)
{
    // Tail-call to get_ea_name via GOT/IAT indirection
    return get_ea_name(/* forwarded args */);
}

