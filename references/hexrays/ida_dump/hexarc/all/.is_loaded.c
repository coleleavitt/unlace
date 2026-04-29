// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A5F0
// Name:            .is_loaded
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A5F0 jmp     cs:off_4B9AE0
//
// Resolved target: is_loaded
// Target address:  0x4BC4E8
// GOT/IAT slot:    0x4B9AE0
// Slot symbol:     off_4B9AE0
// Target type:     <no type info>
// ============================================================

void .is_loaded(/* see target signature */)
{
    // Tail-call to is_loaded via GOT/IAT indirection
    return is_loaded(/* forwarded args */);
}

