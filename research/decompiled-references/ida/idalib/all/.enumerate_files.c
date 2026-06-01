// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9060
// Name:            .enumerate_files
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9060 jmp     cs:off_2C7A018
//
// Resolved target: enumerate_files
// Target address:  0x82E360
// GOT/IAT slot:    0x2C7A018
// Slot symbol:     off_2C7A018
// Target type:     <no type info>
// ============================================================

void .enumerate_files(/* see target signature */)
{
    // Tail-call to enumerate_files via GOT/IAT indirection
    return enumerate_files(/* forwarded args */);
}

