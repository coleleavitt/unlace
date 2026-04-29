// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C220
// Name:            .get_stroff_path
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C220 jmp     cs:off_4ED8F8
//
// Resolved target: get_stroff_path
// Target address:  0x4F1C18
// GOT/IAT slot:    0x4ED8F8
// Slot symbol:     off_4ED8F8
// Target type:     <no type info>
// ============================================================

void .get_stroff_path(/* see target signature */)
{
    // Tail-call to get_stroff_path via GOT/IAT indirection
    return get_stroff_path(/* forwarded args */);
}

