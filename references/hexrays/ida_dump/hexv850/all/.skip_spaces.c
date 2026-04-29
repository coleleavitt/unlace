// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B3D0
// Name:            .skip_spaces
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B3D0 jmp     cs:off_4C09D0
//
// Resolved target: skip_spaces
// Target address:  0x4C39C8
// GOT/IAT slot:    0x4C09D0
// Slot symbol:     off_4C09D0
// Target type:     <no type info>
// ============================================================

void .skip_spaces(/* see target signature */)
{
    // Tail-call to skip_spaces via GOT/IAT indirection
    return skip_spaces(/* forwarded args */);
}

