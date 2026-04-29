// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3130
// Name:            .pack_dd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3130 jmp     cs:off_28080
//
// Resolved target: pack_dd
// Target address:  0x28530
// GOT/IAT slot:    0x28080
// Slot symbol:     off_28080
// Target type:     <no type info>
// ============================================================

void .pack_dd(/* see target signature */)
{
    // Tail-call to pack_dd via GOT/IAT indirection
    return pack_dd(/* forwarded args */);
}

