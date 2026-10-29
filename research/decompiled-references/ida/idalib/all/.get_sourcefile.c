// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABD90
// Name:            .get_sourcefile
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABD90 jmp     cs:off_2C7B6B0
//
// Resolved target: get_sourcefile
// Target address:  0x3C75B0
// GOT/IAT slot:    0x2C7B6B0
// Slot symbol:     off_2C7B6B0
// Target type:     <no type info>
// ============================================================

void .get_sourcefile(/* see target signature */)
{
    // Tail-call to get_sourcefile via GOT/IAT indirection
    return get_sourcefile(/* forwarded args */);
}

