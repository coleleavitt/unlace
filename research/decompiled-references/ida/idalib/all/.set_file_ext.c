// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8920
// Name:            .set_file_ext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8920 jmp     cs:off_2C79C78
//
// Resolved target: set_file_ext
// Target address:  0x84CAC0
// GOT/IAT slot:    0x2C79C78
// Slot symbol:     off_2C79C78
// Target type:     <no type info>
// ============================================================

void .set_file_ext(/* see target signature */)
{
    // Tail-call to set_file_ext via GOT/IAT indirection
    return set_file_ext(/* forwarded args */);
}

