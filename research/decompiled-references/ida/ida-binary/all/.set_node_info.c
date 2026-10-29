// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1181B0
// Name:            .set_node_info
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1181B0 jmp     cs:set_node_info_ptr
//
// Resolved target: set_node_info
// Target address:  0x8D7928
// GOT/IAT slot:    0x8A2D78
// Slot symbol:     set_node_info_ptr
// Target type:     <no type info>
// ============================================================

void .set_node_info(/* see target signature */)
{
    // Tail-call to set_node_info via GOT/IAT indirection
    return set_node_info(/* forwarded args */);
}

