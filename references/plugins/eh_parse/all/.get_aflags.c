// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6630
// Name:            .get_aflags
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6630 jmp     cs:off_2F300
//
// Resolved target: get_aflags
// Target address:  0x2F970
// GOT/IAT slot:    0x2F300
// Slot symbol:     off_2F300
// Target type:     <no type info>
// ============================================================

void .get_aflags(/* see target signature */)
{
    // Tail-call to get_aflags via GOT/IAT indirection
    return get_aflags(/* forwarded args */);
}

