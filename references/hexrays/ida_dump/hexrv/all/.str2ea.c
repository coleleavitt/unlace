// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A3C0
// Name:            .str2ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A3C0 jmp     cs:off_4BF1C8
//
// Resolved target: str2ea
// Target address:  0x4C2690
// GOT/IAT slot:    0x4BF1C8
// Slot symbol:     off_4BF1C8
// Target type:     <no type info>
// ============================================================

void .str2ea(/* see target signature */)
{
    // Tail-call to str2ea via GOT/IAT indirection
    return str2ea(/* forwarded args */);
}

