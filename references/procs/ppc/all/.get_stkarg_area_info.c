// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x203D0
// Name:            .get_stkarg_area_info
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x203D0 jmp     cs:off_951D0
//
// Resolved target: get_stkarg_area_info
// Target address:  0x95C08
// GOT/IAT slot:    0x951D0
// Slot symbol:     off_951D0
// Target type:     <no type info>
// ============================================================

void .get_stkarg_area_info(/* see target signature */)
{
    // Tail-call to get_stkarg_area_info via GOT/IAT indirection
    return get_stkarg_area_info(/* forwarded args */);
}

