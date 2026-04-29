// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6440
// Name:            .get_idainfo_by_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6440 jmp     cs:off_2F208
//
// Resolved target: get_idainfo_by_type
// Target address:  0x2F878
// GOT/IAT slot:    0x2F208
// Slot symbol:     off_2F208
// Target type:     <no type info>
// ============================================================

void .get_idainfo_by_type(/* see target signature */)
{
    // Tail-call to get_idainfo_by_type via GOT/IAT indirection
    return get_idainfo_by_type(/* forwarded args */);
}

