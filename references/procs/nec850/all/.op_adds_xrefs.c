// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9510
// Name:            .op_adds_xrefs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9510 jmp     cs:off_2E270
//
// Resolved target: op_adds_xrefs
// Target address:  0x2E8E0
// GOT/IAT slot:    0x2E270
// Slot symbol:     off_2E270
// Target type:     <no type info>
// ============================================================

void .op_adds_xrefs(/* see target signature */)
{
    // Tail-call to op_adds_xrefs via GOT/IAT indirection
    return op_adds_xrefs(/* forwarded args */);
}

