// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EB40
// Name:            .apply_metadata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EB40 jmp     cs:off_4E9D88
//
// Resolved target: apply_metadata
// Target address:  0x4EC7C8
// GOT/IAT slot:    0x4E9D88
// Slot symbol:     off_4E9D88
// Target type:     <no type info>
// ============================================================

void .apply_metadata(/* see target signature */)
{
    // Tail-call to apply_metadata via GOT/IAT indirection
    return apply_metadata(/* forwarded args */);
}

