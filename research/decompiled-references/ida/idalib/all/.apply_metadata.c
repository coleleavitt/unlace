// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD450
// Name:            .apply_metadata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD450 jmp     cs:off_2C7C210
//
// Resolved target: apply_metadata
// Target address:  0x7DC490
// GOT/IAT slot:    0x2C7C210
// Slot symbol:     off_2C7C210
// Target type:     <no type info>
// ============================================================

void .apply_metadata(/* see target signature */)
{
    // Tail-call to apply_metadata via GOT/IAT indirection
    return apply_metadata(/* forwarded args */);
}

