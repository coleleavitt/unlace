// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7420
// Name:            .op_adds_xrefs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7420 jmp     cs:off_191F8
//
// Resolved target: op_adds_xrefs
// Target address:  0x19728
// GOT/IAT slot:    0x191F8
// Slot symbol:     off_191F8
// Target type:     <no type info>
// ============================================================

void .op_adds_xrefs(/* see target signature */)
{
    // Tail-call to op_adds_xrefs via GOT/IAT indirection
    return op_adds_xrefs(/* forwarded args */);
}

