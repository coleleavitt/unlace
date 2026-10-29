// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7050
// Name:            .get_compiler_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7050 jmp     cs:off_2C79010
//
// Resolved target: get_compiler_name
// Target address:  0x5EE6A0
// GOT/IAT slot:    0x2C79010
// Slot symbol:     off_2C79010
// Target type:     <no type info>
// ============================================================

void .get_compiler_name(/* see target signature */)
{
    // Tail-call to get_compiler_name via GOT/IAT indirection
    return get_compiler_name(/* forwarded args */);
}

