// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111460
// Name:            .is_loaded
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111460 jmp     cs:is_loaded_ptr
//
// Resolved target: is_loaded
// Target address:  0x8D3358
// GOT/IAT slot:    0x89F6D0
// Slot symbol:     is_loaded_ptr
// Target type:     <no type info>
// ============================================================

void .is_loaded(/* see target signature */)
{
    // Tail-call to is_loaded via GOT/IAT indirection
    return is_loaded(/* forwarded args */);
}

