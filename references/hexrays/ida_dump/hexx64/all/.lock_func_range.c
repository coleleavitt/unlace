// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C370
// Name:            .lock_func_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C370 jmp     cs:off_4ED9A0
//
// Resolved target: lock_func_range
// Target address:  0x4F1CC0
// GOT/IAT slot:    0x4ED9A0
// Slot symbol:     off_4ED9A0
// Target type:     <no type info>
// ============================================================

void .lock_func_range(/* see target signature */)
{
    // Tail-call to lock_func_range via GOT/IAT indirection
    return lock_func_range(/* forwarded args */);
}

