// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7E0
// Name:            .get_stkarg_area_info
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7E0 jmp     cs:off_4BF3D8
//
// Resolved target: get_stkarg_area_info
// Target address:  0x4C28A0
// GOT/IAT slot:    0x4BF3D8
// Slot symbol:     off_4BF3D8
// Target type:     <no type info>
// ============================================================

void .get_stkarg_area_info(/* see target signature */)
{
    // Tail-call to get_stkarg_area_info via GOT/IAT indirection
    return get_stkarg_area_info(/* forwarded args */);
}

