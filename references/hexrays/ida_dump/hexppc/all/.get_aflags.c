// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B3E0
// Name:            .get_aflags
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B3E0 jmp     cs:off_4DA9D8
//
// Resolved target: get_aflags
// Target address:  0x4DD3D8
// GOT/IAT slot:    0x4DA9D8
// Slot symbol:     off_4DA9D8
// Target type:     <no type info>
// ============================================================

void .get_aflags(/* see target signature */)
{
    // Tail-call to get_aflags via GOT/IAT indirection
    return get_aflags(/* forwarded args */);
}

