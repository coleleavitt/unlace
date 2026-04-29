// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DCB0
// Name:            .get_func_frame
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DCB0 jmp     cs:off_4E9640
//
// Resolved target: get_func_frame
// Target address:  0x4EC058
// GOT/IAT slot:    0x4E9640
// Slot symbol:     off_4E9640
// Target type:     <no type info>
// ============================================================

void .get_func_frame(/* see target signature */)
{
    // Tail-call to get_func_frame via GOT/IAT indirection
    return get_func_frame(/* forwarded args */);
}

