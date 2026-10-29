// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A98B0
// Name:            .demangle
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A98B0 jmp     cs:off_2C7A440
//
// Resolved target: demangle
// Target address:  0x772710
// GOT/IAT slot:    0x2C7A440
// Slot symbol:     off_2C7A440
// Target type:     <no type info>
// ============================================================

void .demangle(/* see target signature */)
{
    // Tail-call to demangle via GOT/IAT indirection
    return demangle(/* forwarded args */);
}

