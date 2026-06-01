// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7A00
// Name:            .get_ash
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7A00 jmp     cs:off_2C794E8
//
// Resolved target: get_ash
// Target address:  0x3FB8C0
// GOT/IAT slot:    0x2C794E8
// Slot symbol:     off_2C794E8
// Target type:     <no type info>
// ============================================================

void .get_ash(/* see target signature */)
{
    // Tail-call to get_ash via GOT/IAT indirection
    return get_ash(/* forwarded args */);
}

