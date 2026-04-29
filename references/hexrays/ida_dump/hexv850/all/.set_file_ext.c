// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADB0
// Name:            .set_file_ext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADB0 jmp     cs:off_4C06C0
//
// Resolved target: set_file_ext
// Target address:  0x4C36B0
// GOT/IAT slot:    0x4C06C0
// Slot symbol:     off_4C06C0
// Target type:     <no type info>
// ============================================================

void .set_file_ext(/* see target signature */)
{
    // Tail-call to set_file_ext via GOT/IAT indirection
    return set_file_ext(/* forwarded args */);
}

