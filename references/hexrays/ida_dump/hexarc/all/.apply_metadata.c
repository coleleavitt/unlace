// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAE0
// Name:            .apply_metadata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAE0 jmp     cs:off_4B9D58
//
// Resolved target: apply_metadata
// Target address:  0x4BC778
// GOT/IAT slot:    0x4B9D58
// Slot symbol:     off_4B9D58
// Target type:     <no type info>
// ============================================================

void .apply_metadata(/* see target signature */)
{
    // Tail-call to apply_metadata via GOT/IAT indirection
    return apply_metadata(/* forwarded args */);
}

