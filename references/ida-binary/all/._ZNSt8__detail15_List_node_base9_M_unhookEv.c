// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AEE0
// Name:            ._ZNSt8__detail15_List_node_base9_M_unhookEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AEE0 jmp     cs:_ZNSt8__detail15_List_node_base9_M_unhookEv_ptr
//
// Resolved target: _ZNSt8__detail15_List_node_base9_M_unhookEv
// Target address:  0x8D9588
// GOT/IAT slot:    0x8A4410
// Slot symbol:     _ZNSt8__detail15_List_node_base9_M_unhookEv_ptr
// Target type:     _QWORD(std::__detail::_List_node_base *__hidden this)
// ============================================================

/* see target sig */ ._ZNSt8__detail15_List_node_base9_M_unhookEv(/* see target signature */)
{
    // Tail-call to _ZNSt8__detail15_List_node_base9_M_unhookEv via GOT/IAT indirection
    return _ZNSt8__detail15_List_node_base9_M_unhookEv(/* forwarded args */);
}

