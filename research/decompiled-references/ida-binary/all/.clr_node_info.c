// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118120
// Name:            .clr_node_info
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118120 jmp     cs:clr_node_info_ptr
//
// Resolved target: clr_node_info
// Target address:  0x8D78E0
// GOT/IAT slot:    0x8A2D30
// Slot symbol:     clr_node_info_ptr
// Target type:     <no type info>
// ============================================================

void .clr_node_info(/* see target signature */)
{
    // Tail-call to clr_node_info via GOT/IAT indirection
    return clr_node_info(/* forwarded args */);
}

