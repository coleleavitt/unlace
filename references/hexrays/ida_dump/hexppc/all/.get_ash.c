// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BDF0
// Name:            .get_ash
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BDF0 jmp     cs:off_4DAEE0
//
// Resolved target: get_ash
// Target address:  0x4DD910
// GOT/IAT slot:    0x4DAEE0
// Slot symbol:     off_4DAEE0
// Target type:     <no type info>
// ============================================================

void .get_ash(/* see target signature */)
{
    // Tail-call to get_ash via GOT/IAT indirection
    return get_ash(/* forwarded args */);
}

