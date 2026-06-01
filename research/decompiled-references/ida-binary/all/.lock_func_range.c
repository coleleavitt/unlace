// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111D10
// Name:            .lock_func_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111D10 jmp     cs:lock_func_range_ptr
//
// Resolved target: lock_func_range
// Target address:  0x8D38F0
// GOT/IAT slot:    0x89FB28
// Slot symbol:     lock_func_range_ptr
// Target type:     <no type info>
// ============================================================

void .lock_func_range(/* see target signature */)
{
    // Tail-call to lock_func_range via GOT/IAT indirection
    return lock_func_range(/* forwarded args */);
}

