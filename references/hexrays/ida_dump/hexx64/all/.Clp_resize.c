// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CC20
// Name:            .Clp_resize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CC20 jmp     cs:off_4EDDF8
//
// Resolved target: Clp_resize
// Target address:  0x4F2138
// GOT/IAT slot:    0x4EDDF8
// Slot symbol:     off_4EDDF8
// Target type:     <no type info>
// ============================================================

void .Clp_resize(/* see target signature */)
{
    // Tail-call to Clp_resize via GOT/IAT indirection
    return Clp_resize(/* forwarded args */);
}

