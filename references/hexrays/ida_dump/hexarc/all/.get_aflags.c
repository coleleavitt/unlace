// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A3E0
// Name:            .get_aflags
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A3E0 jmp     cs:off_4B99D8
//
// Resolved target: get_aflags
// Target address:  0x4BC3D8
// GOT/IAT slot:    0x4B99D8
// Slot symbol:     off_4B99D8
// Target type:     <no type info>
// ============================================================

void .get_aflags(/* see target signature */)
{
    // Tail-call to get_aflags via GOT/IAT indirection
    return get_aflags(/* forwarded args */);
}

