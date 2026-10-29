// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113960
// Name:            .get_bpt_kernel_interface
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113960 jmp     cs:get_bpt_kernel_interface_ptr
//
// Resolved target: get_bpt_kernel_interface
// Target address:  0x8D4B30
// GOT/IAT slot:    0x8A0950
// Slot symbol:     get_bpt_kernel_interface_ptr
// Target type:     <no type info>
// ============================================================

void .get_bpt_kernel_interface(/* see target signature */)
{
    // Tail-call to get_bpt_kernel_interface via GOT/IAT indirection
    return get_bpt_kernel_interface(/* forwarded args */);
}

