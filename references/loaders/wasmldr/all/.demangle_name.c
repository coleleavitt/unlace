// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2140
// Name:            .demangle_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2140 jmp     cs:off_15088
//
// Resolved target: demangle_name
// Target address:  0x15278
// GOT/IAT slot:    0x15088
// Slot symbol:     off_15088
// Target type:     <no type info>
// ============================================================

void .demangle_name(/* see target signature */)
{
    // Tail-call to demangle_name via GOT/IAT indirection
    return demangle_name(/* forwarded args */);
}

