// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2260
// Name:            .set_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2260 jmp     cs:off_B118
//
// Resolved target: set_name
// Target address:  0xB3B0
// GOT/IAT slot:    0xB118
// Slot symbol:     off_B118
// Target type:     <no type info>
// ============================================================

void .set_name(/* see target signature */)
{
    // Tail-call to set_name via GOT/IAT indirection
    return set_name(/* forwarded args */);
}

