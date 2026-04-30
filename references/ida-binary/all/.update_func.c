// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113CD0
// Name:            .update_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113CD0 jmp     cs:update_func_ptr
//
// Resolved target: update_func
// Target address:  0x8D4D70
// GOT/IAT slot:    0x8A0B08
// Slot symbol:     update_func_ptr
// Target type:     <no type info>
// ============================================================

void .update_func(/* see target signature */)
{
    // Tail-call to update_func via GOT/IAT indirection
    return update_func(/* forwarded args */);
}

