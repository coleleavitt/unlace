// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD000
// Name:            .get_stroff_path
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD000 jmp     cs:off_2C7BFE8
//
// Resolved target: get_stroff_path
// Target address:  0x3C8E70
// GOT/IAT slot:    0x2C7BFE8
// Slot symbol:     off_2C7BFE8
// Target type:     <no type info>
// ============================================================

void .get_stroff_path(/* see target signature */)
{
    // Tail-call to get_stroff_path via GOT/IAT indirection
    return get_stroff_path(/* forwarded args */);
}

