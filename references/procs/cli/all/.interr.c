// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x30D0
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x30D0 jmp     cs:off_1A050
//
// Resolved target: interr
// Target address:  0x1A308
// GOT/IAT slot:    0x1A050
// Slot symbol:     off_1A050
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}

