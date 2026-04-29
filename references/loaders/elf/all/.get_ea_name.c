// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9480
// Name:            .get_ea_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9480 jmp     cs:off_89228
//
// Resolved target: get_ea_name
// Target address:  0x8C530
// GOT/IAT slot:    0x89228
// Slot symbol:     off_89228
// Target type:     <no type info>
// ============================================================

void .get_ea_name(/* see target signature */)
{
    // Tail-call to get_ea_name via GOT/IAT indirection
    return get_ea_name(/* forwarded args */);
}

