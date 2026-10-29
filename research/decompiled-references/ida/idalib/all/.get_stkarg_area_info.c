// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A79C0
// Name:            .get_stkarg_area_info
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A79C0 jmp     cs:off_2C794C8
//
// Resolved target: get_stkarg_area_info
// Target address:  0x6A9520
// GOT/IAT slot:    0x2C794C8
// Slot symbol:     off_2C794C8
// Target type:     <no type info>
// ============================================================

void .get_stkarg_area_info(/* see target signature */)
{
    // Tail-call to get_stkarg_area_info via GOT/IAT indirection
    return get_stkarg_area_info(/* forwarded args */);
}

