// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADC0
// Name:            .get_compiler_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADC0 jmp     cs:off_4B9EC8
//
// Resolved target: get_compiler_name
// Target address:  0x4BC8F8
// GOT/IAT slot:    0x4B9EC8
// Slot symbol:     off_4B9EC8
// Target type:     <no type info>
// ============================================================

void .get_compiler_name(/* see target signature */)
{
    // Tail-call to get_compiler_name via GOT/IAT indirection
    return get_compiler_name(/* forwarded args */);
}

