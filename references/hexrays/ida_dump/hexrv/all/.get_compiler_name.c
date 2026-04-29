// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BDE0
// Name:            .get_compiler_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BDE0 jmp     cs:off_4BFED8
//
// Resolved target: get_compiler_name
// Target address:  0x4C3400
// GOT/IAT slot:    0x4BFED8
// Slot symbol:     off_4BFED8
// Target type:     <no type info>
// ============================================================

void .get_compiler_name(/* see target signature */)
{
    // Tail-call to get_compiler_name via GOT/IAT indirection
    return get_compiler_name(/* forwarded args */);
}

