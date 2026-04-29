// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2070
// Name:            .verror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2070 jmp     cs:off_A020
//
// Resolved target: verror
// Target address:  0xA250
// GOT/IAT slot:    0xA020
// Slot symbol:     off_A020
// Target type:     <no type info>
// ============================================================

void .verror(/* see target signature */)
{
    // Tail-call to verror via GOT/IAT indirection
    return verror(/* forwarded args */);
}

