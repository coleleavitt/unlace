// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4400
// Name:            .get_ash
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4400 jmp     cs:off_1F1E8
//
// Resolved target: get_ash
// Target address:  0x1F4B0
// GOT/IAT slot:    0x1F1E8
// Slot symbol:     off_1F1E8
// Target type:     <no type info>
// ============================================================

void .get_ash(/* see target signature */)
{
    // Tail-call to get_ash via GOT/IAT indirection
    return get_ash(/* forwarded args */);
}

