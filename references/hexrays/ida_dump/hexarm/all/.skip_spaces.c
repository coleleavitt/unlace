// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E410
// Name:            .skip_spaces
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E410 jmp     cs:off_4E99F0
//
// Resolved target: skip_spaces
// Target address:  0x4EC410
// GOT/IAT slot:    0x4E99F0
// Slot symbol:     off_4E99F0
// Target type:     <no type info>
// ============================================================

void .skip_spaces(/* see target signature */)
{
    // Tail-call to skip_spaces via GOT/IAT indirection
    return skip_spaces(/* forwarded args */);
}

