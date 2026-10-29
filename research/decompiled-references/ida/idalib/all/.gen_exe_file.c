// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8740
// Name:            .gen_exe_file
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8740 jmp     cs:off_2C79B88
//
// Resolved target: gen_exe_file
// Target address:  0x642B80
// GOT/IAT slot:    0x2C79B88
// Slot symbol:     off_2C79B88
// Target type:     <no type info>
// ============================================================

void .gen_exe_file(/* see target signature */)
{
    // Tail-call to gen_exe_file via GOT/IAT indirection
    return gen_exe_file(/* forwarded args */);
}

