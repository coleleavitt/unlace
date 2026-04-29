// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x41D0
// Name:            .set_file_ext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x41D0 jmp     cs:off_1F0D0
//
// Resolved target: set_file_ext
// Target address:  0x1F380
// GOT/IAT slot:    0x1F0D0
// Slot symbol:     off_1F0D0
// Target type:     <no type info>
// ============================================================

void .set_file_ext(/* see target signature */)
{
    // Tail-call to set_file_ext via GOT/IAT indirection
    return set_file_ext(/* forwarded args */);
}

