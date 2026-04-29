// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8210
// Name:            .cvt64_node_supval_for_event
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8210 jmp     cs:off_2A0F0
//
// Resolved target: cvt64_node_supval_for_event
// Target address:  0x2BB00
// GOT/IAT slot:    0x2A0F0
// Slot symbol:     off_2A0F0
// Target type:     <no type info>
// ============================================================

void .cvt64_node_supval_for_event(/* see target signature */)
{
    // Tail-call to cvt64_node_supval_for_event via GOT/IAT indirection
    return cvt64_node_supval_for_event(/* forwarded args */);
}

