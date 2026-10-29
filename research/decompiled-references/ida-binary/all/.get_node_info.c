// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114900
// Name:            .get_node_info
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114900 jmp     cs:get_node_info_ptr
//
// Resolved target: get_node_info
// Target address:  0x8D5558
// GOT/IAT slot:    0x8A1120
// Slot symbol:     get_node_info_ptr
// Target type:     <no type info>
// ============================================================

void .get_node_info(/* see target signature */)
{
    // Tail-call to get_node_info via GOT/IAT indirection
    return get_node_info(/* forwarded args */);
}

