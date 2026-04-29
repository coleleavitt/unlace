// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6400
// Name:            .op_adds_xrefs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6400 jmp     cs:off_1D1E8
//
// Resolved target: op_adds_xrefs
// Target address:  0x1D6D8
// GOT/IAT slot:    0x1D1E8
// Slot symbol:     off_1D1E8
// Target type:     <no type info>
// ============================================================

void .op_adds_xrefs(/* see target signature */)
{
    // Tail-call to op_adds_xrefs via GOT/IAT indirection
    return op_adds_xrefs(/* forwarded args */);
}

