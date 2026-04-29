// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x84E0
// Name:            .op_adds_xrefs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x84E0 jmp     cs:off_2A258
//
// Resolved target: op_adds_xrefs
// Target address:  0x2BC68
// GOT/IAT slot:    0x2A258
// Slot symbol:     off_2A258
// Target type:     <no type info>
// ============================================================

void .op_adds_xrefs(/* see target signature */)
{
    // Tail-call to op_adds_xrefs via GOT/IAT indirection
    return op_adds_xrefs(/* forwarded args */);
}

