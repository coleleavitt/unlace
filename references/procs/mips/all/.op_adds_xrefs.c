// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19700
// Name:            .op_adds_xrefs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19700 jmp     cs:off_75368
//
// Resolved target: op_adds_xrefs
// Target address:  0x75BB8
// GOT/IAT slot:    0x75368
// Slot symbol:     off_75368
// Target type:     <no type info>
// ============================================================

void .op_adds_xrefs(/* see target signature */)
{
    // Tail-call to op_adds_xrefs via GOT/IAT indirection
    return op_adds_xrefs(/* forwarded args */);
}

