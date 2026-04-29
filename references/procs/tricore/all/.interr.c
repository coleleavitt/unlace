// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x61D0
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x61D0 jmp     cs:off_240D0
//
// Resolved target: interr
// Target address:  0x25EA0
// GOT/IAT slot:    0x240D0
// Slot symbol:     off_240D0
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}

