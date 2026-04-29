// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6410
// Name:            .demangle_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6410 jmp     cs:off_8D1F0
//
// Resolved target: demangle_name
// Target address:  0x8D788
// GOT/IAT slot:    0x8D1F0
// Slot symbol:     off_8D1F0
// Target type:     <no type info>
// ============================================================

void .demangle_name(/* see target signature */)
{
    // Tail-call to demangle_name via GOT/IAT indirection
    return demangle_name(/* forwarded args */);
}

