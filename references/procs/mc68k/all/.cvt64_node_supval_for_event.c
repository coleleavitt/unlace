// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x61B0
// Name:            .cvt64_node_supval_for_event
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x61B0 jmp     cs:off_1D0C0
//
// Resolved target: cvt64_node_supval_for_event
// Target address:  0x1D5B0
// GOT/IAT slot:    0x1D0C0
// Slot symbol:     off_1D0C0
// Target type:     <no type info>
// ============================================================

void .cvt64_node_supval_for_event(/* see target signature */)
{
    // Tail-call to cvt64_node_supval_for_event via GOT/IAT indirection
    return cvt64_node_supval_for_event(/* forwarded args */);
}

