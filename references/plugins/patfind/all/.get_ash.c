// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2340
// Name:            .get_ash
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2340 jmp     cs:off_13188
//
// Resolved target: get_ash
// Target address:  0x13438
// GOT/IAT slot:    0x13188
// Slot symbol:     off_13188
// Target type:     <no type info>
// ============================================================

void .get_ash(/* see target signature */)
{
    // Tail-call to get_ash via GOT/IAT indirection
    return get_ash(/* forwarded args */);
}

