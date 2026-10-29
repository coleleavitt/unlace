// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAC90
// Name:            .get_idainfo_by_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAC90 jmp     cs:off_2C7AE30
//
// Resolved target: get_idainfo_by_type
// Target address:  0x60F380
// GOT/IAT slot:    0x2C7AE30
// Slot symbol:     off_2C7AE30
// Target type:     <no type info>
// ============================================================

void .get_idainfo_by_type(/* see target signature */)
{
    // Tail-call to get_idainfo_by_type via GOT/IAT indirection
    return get_idainfo_by_type(/* forwarded args */);
}

