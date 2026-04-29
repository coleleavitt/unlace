// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D260
// Name:            .find_syseh
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D260 jmp     cs:off_4E9118
//
// Resolved target: find_syseh
// Target address:  0x4EBB08
// GOT/IAT slot:    0x4E9118
// Slot symbol:     off_4E9118
// Target type:     <no type info>
// ============================================================

void .find_syseh(/* see target signature */)
{
    // Tail-call to find_syseh via GOT/IAT indirection
    return find_syseh(/* forwarded args */);
}

