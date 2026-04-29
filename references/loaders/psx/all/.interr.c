// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20D0
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20D0 jmp     cs:off_A050
//
// Resolved target: interr
// Target address:  0xA300
// GOT/IAT slot:    0xA050
// Slot symbol:     off_A050
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}

