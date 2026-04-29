// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A160
// Name:            .get_stroff_path
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A160 jmp     cs:off_4B9898
//
// Resolved target: get_stroff_path
// Target address:  0x4BC298
// GOT/IAT slot:    0x4B9898
// Slot symbol:     off_4B9898
// Target type:     <no type info>
// ============================================================

void .get_stroff_path(/* see target signature */)
{
    // Tail-call to get_stroff_path via GOT/IAT indirection
    return get_stroff_path(/* forwarded args */);
}

