// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8660
// Name:            .get_compiler_abbr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8660 jmp     cs:off_2C79B18
//
// Resolved target: get_compiler_abbr
// Target address:  0x5EE700
// GOT/IAT slot:    0x2C79B18
// Slot symbol:     off_2C79B18
// Target type:     <no type info>
// ============================================================

void .get_compiler_abbr(/* see target signature */)
{
    // Tail-call to get_compiler_abbr via GOT/IAT indirection
    return get_compiler_abbr(/* forwarded args */);
}

