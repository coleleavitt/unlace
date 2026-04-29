// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A140
// Name:            .demangle_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A140 jmp     cs:off_4B9888
//
// Resolved target: demangle_name
// Target address:  0x4BC288
// GOT/IAT slot:    0x4B9888
// Slot symbol:     off_4B9888
// Target type:     <no type info>
// ============================================================

void .demangle_name(/* see target signature */)
{
    // Tail-call to demangle_name via GOT/IAT indirection
    return demangle_name(/* forwarded args */);
}

