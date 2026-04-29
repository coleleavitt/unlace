// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A3D0
// Name:            .skip_spaces
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A3D0 jmp     cs:off_4B99D0
//
// Resolved target: skip_spaces
// Target address:  0x4BC3D0
// GOT/IAT slot:    0x4B99D0
// Slot symbol:     off_4B99D0
// Target type:     <no type info>
// ============================================================

void .skip_spaces(/* see target signature */)
{
    // Tail-call to skip_spaces via GOT/IAT indirection
    return skip_spaces(/* forwarded args */);
}

