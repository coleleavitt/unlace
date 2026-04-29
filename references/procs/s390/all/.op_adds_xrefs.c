// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x101F0
// Name:            .op_adds_xrefs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x101F0 jmp     cs:off_2E0E0
//
// Resolved target: op_adds_xrefs
// Target address:  0x36D58
// GOT/IAT slot:    0x2E0E0
// Slot symbol:     off_2E0E0
// Target type:     <no type info>
// ============================================================

void .op_adds_xrefs(/* see target signature */)
{
    // Tail-call to op_adds_xrefs via GOT/IAT indirection
    return op_adds_xrefs(/* forwarded args */);
}

