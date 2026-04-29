// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9270
// Name:            .cvt64_node_supval_for_event
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9270 jmp     cs:off_2E120
//
// Resolved target: cvt64_node_supval_for_event
// Target address:  0x2E790
// GOT/IAT slot:    0x2E120
// Slot symbol:     off_2E120
// Target type:     <no type info>
// ============================================================

void .cvt64_node_supval_for_event(/* see target signature */)
{
    // Tail-call to cvt64_node_supval_for_event via GOT/IAT indirection
    return cvt64_node_supval_for_event(/* forwarded args */);
}

