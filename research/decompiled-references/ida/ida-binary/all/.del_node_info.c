// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A0F0
// Name:            .del_node_info
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A0F0 jmp     cs:del_node_info_ptr
//
// Resolved target: del_node_info
// Target address:  0x8D8CC0
// GOT/IAT slot:    0x8A3D18
// Slot symbol:     del_node_info_ptr
// Target type:     <no type info>
// ============================================================

void .del_node_info(/* see target signature */)
{
    // Tail-call to del_node_info via GOT/IAT indirection
    return del_node_info(/* forwarded args */);
}

