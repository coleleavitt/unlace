// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29400
// Name:            .get_opinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29400 jmp     cs:off_4B91E8
//
// Resolved target: get_opinfo
// Target address:  0x4BBBB8
// GOT/IAT slot:    0x4B91E8
// Slot symbol:     off_4B91E8
// Target type:     <no type info>
// ============================================================

void .get_opinfo(/* see target signature */)
{
    // Tail-call to get_opinfo via GOT/IAT indirection
    return get_opinfo(/* forwarded args */);
}

