// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29690
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29690 jmp     cs:off_4B9330
//
// Resolved target: interr
// Target address:  0x4BBD00
// GOT/IAT slot:    0x4B9330
// Slot symbol:     off_4B9330
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}

