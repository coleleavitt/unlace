// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A85B0
// Name:            .get_strid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A85B0 jmp     cs:off_2C79AC0
//
// Resolved target: get_strid
// Target address:  0x3C9FE0
// GOT/IAT slot:    0x2C79AC0
// Slot symbol:     off_2C79AC0
// Target type:     <no type info>
// ============================================================

void .get_strid(/* see target signature */)
{
    // Tail-call to get_strid via GOT/IAT indirection
    return get_strid(/* forwarded args */);
}

