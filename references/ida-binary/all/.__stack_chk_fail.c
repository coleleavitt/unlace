// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112600
// Name:            .__stack_chk_fail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112600 jmp     cs:__stack_chk_fail_ptr
//
// Resolved target: __stack_chk_fail
// Target address:  0x8D3EC0
// GOT/IAT slot:    0x89FFA0
// Slot symbol:     __stack_chk_fail_ptr
// Target type:     <no type info>
// ============================================================

void .__stack_chk_fail(/* see target signature */)
{
    // Tail-call to __stack_chk_fail via GOT/IAT indirection
    return __stack_chk_fail(/* forwarded args */);
}

