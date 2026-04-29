// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BDE0
// Name:            .get_compiler_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BDE0 jmp     cs:off_4DAED8
//
// Resolved target: get_compiler_name
// Target address:  0x4DD908
// GOT/IAT slot:    0x4DAED8
// Slot symbol:     off_4DAED8
// Target type:     <no type info>
// ============================================================

void .get_compiler_name(/* see target signature */)
{
    // Tail-call to get_compiler_name via GOT/IAT indirection
    return get_compiler_name(/* forwarded args */);
}

