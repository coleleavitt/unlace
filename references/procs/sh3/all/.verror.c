// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x50B0
// Name:            .verror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x50B0 jmp     cs:off_15040
//
// Resolved target: verror
// Target address:  0x160D0
// GOT/IAT slot:    0x15040
// Slot symbol:     off_15040
// Target type:     <no type info>
// ============================================================

void .verror(/* see target signature */)
{
    // Tail-call to verror via GOT/IAT indirection
    return verror(/* forwarded args */);
}

