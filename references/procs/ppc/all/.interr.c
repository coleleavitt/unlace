// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20320
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20320 jmp     cs:off_95178
//
// Resolved target: interr
// Target address:  0x95BB0
// GOT/IAT slot:    0x95178
// Slot symbol:     off_95178
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}

