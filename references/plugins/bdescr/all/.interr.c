// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20C0
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20C0 jmp     cs:off_7048
//
// Resolved target: interr
// Target address:  0x7178
// GOT/IAT slot:    0x7048
// Slot symbol:     off_7048
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}

