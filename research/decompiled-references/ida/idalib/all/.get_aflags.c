// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC440
// Name:            .get_aflags
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC440 jmp     cs:off_2C7BA08
//
// Resolved target: get_aflags
// Target address:  0x3C5940
// GOT/IAT slot:    0x2C7BA08
// Slot symbol:     off_2C7BA08
// Target type:     <no type info>
// ============================================================

void .get_aflags(/* see target signature */)
{
    // Tail-call to get_aflags via GOT/IAT indirection
    return get_aflags(/* forwarded args */);
}

