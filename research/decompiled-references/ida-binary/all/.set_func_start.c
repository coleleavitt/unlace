// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112F80
// Name:            .set_func_start
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112F80 jmp     cs:set_func_start_ptr
//
// Resolved target: set_func_start
// Target address:  0x8D44D0
// GOT/IAT slot:    0x8A0460
// Slot symbol:     set_func_start_ptr
// Target type:     <no type info>
// ============================================================

void .set_func_start(/* see target signature */)
{
    // Tail-call to set_func_start via GOT/IAT indirection
    return set_func_start(/* forwarded args */);
}

