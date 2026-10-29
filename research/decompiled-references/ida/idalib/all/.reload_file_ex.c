// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD840
// Name:            .reload_file_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD840 jmp     cs:off_2C7C408
//
// Resolved target: reload_file_ex
// Target address:  0x643FD0
// GOT/IAT slot:    0x2C7C408
// Slot symbol:     off_2C7C408
// Target type:     <no type info>
// ============================================================

void .reload_file_ex(/* see target signature */)
{
    // Tail-call to reload_file_ex via GOT/IAT indirection
    return reload_file_ex(/* forwarded args */);
}

