// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3360
// Name:            .get_ash
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3360 jmp     cs:off_1A198
//
// Resolved target: get_ash
// Target address:  0x1A468
// GOT/IAT slot:    0x1A198
// Slot symbol:     off_1A198
// Target type:     <no type info>
// ============================================================

void .get_ash(/* see target signature */)
{
    // Tail-call to get_ash via GOT/IAT indirection
    return get_ash(/* forwarded args */);
}

