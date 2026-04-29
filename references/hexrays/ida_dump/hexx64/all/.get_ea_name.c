// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BDB0
// Name:            .get_ea_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BDB0 jmp     cs:off_4ED6C0
//
// Resolved target: get_ea_name
// Target address:  0x4F19D0
// GOT/IAT slot:    0x4ED6C0
// Slot symbol:     off_4ED6C0
// Target type:     <no type info>
// ============================================================

void .get_ea_name(/* see target signature */)
{
    // Tail-call to get_ea_name via GOT/IAT indirection
    return get_ea_name(/* forwarded args */);
}

