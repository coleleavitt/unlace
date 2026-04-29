// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1070
// Name:            .verror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1070 jmp     cs:off_5020
//
// Resolved target: verror
// Target address:  0x51A0
// GOT/IAT slot:    0x5020
// Slot symbol:     off_5020
// Target type:     <no type info>
// ============================================================

void .verror(/* see target signature */)
{
    // Tail-call to verror via GOT/IAT indirection
    return verror(/* forwarded args */);
}

