// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x102E0
// Name:            .get_ash
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x102E0 jmp     cs:off_2E158
//
// Resolved target: get_ash
// Target address:  0x36DE8
// GOT/IAT slot:    0x2E158
// Slot symbol:     off_2E158
// Target type:     <no type info>
// ============================================================

void .get_ash(/* see target signature */)
{
    // Tail-call to get_ash via GOT/IAT indirection
    return get_ash(/* forwarded args */);
}

