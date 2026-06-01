// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8AF0
// Name:            .get_bpt_kernel_interface
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8AF0 jmp     cs:off_2C79D60
//
// Resolved target: get_bpt_kernel_interface
// Target address:  0x3AEE00
// GOT/IAT slot:    0x2C79D60
// Slot symbol:     off_2C79D60
// Target type:     <no type info>
// ============================================================

void .get_bpt_kernel_interface(/* see target signature */)
{
    // Tail-call to get_bpt_kernel_interface via GOT/IAT indirection
    return get_bpt_kernel_interface(/* forwarded args */);
}

