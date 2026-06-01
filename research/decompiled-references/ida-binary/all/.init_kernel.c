// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116970
// Name:            .init_kernel
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116970 jmp     cs:init_kernel_ptr
//
// Resolved target: init_kernel
// Target address:  0x8D69E0
// GOT/IAT slot:    0x8A2158
// Slot symbol:     init_kernel_ptr
// Target type:     <no type info>
// ============================================================

void .init_kernel(/* see target signature */)
{
    // Tail-call to init_kernel via GOT/IAT indirection
    return init_kernel(/* forwarded args */);
}

