// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B810
// Name:            .get_stkarg_area_info
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B810 jmp     cs:off_4ED3F0
//
// Resolved target: get_stkarg_area_info
// Target address:  0x4F16E8
// GOT/IAT slot:    0x4ED3F0
// Slot symbol:     off_4ED3F0
// Target type:     <no type info>
// ============================================================

void .get_stkarg_area_info(/* see target signature */)
{
    // Tail-call to get_stkarg_area_info via GOT/IAT indirection
    return get_stkarg_area_info(/* forwarded args */);
}

