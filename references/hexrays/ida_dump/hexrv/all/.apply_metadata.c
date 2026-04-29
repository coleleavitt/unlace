// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BB00
// Name:            .apply_metadata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BB00 jmp     cs:off_4BFD68
//
// Resolved target: apply_metadata
// Target address:  0x4C3280
// GOT/IAT slot:    0x4BFD68
// Slot symbol:     off_4BFD68
// Target type:     <no type info>
// ============================================================

void .apply_metadata(/* see target signature */)
{
    // Tail-call to apply_metadata via GOT/IAT indirection
    return apply_metadata(/* forwarded args */);
}

