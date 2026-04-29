// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5390
// Name:            .is_loaded
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5390 jmp     cs:off_1A1B0
//
// Resolved target: is_loaded
// Target address:  0x1A538
// GOT/IAT slot:    0x1A1B0
// Slot symbol:     off_1A1B0
// Target type:     <no type info>
// ============================================================

void .is_loaded(/* see target signature */)
{
    // Tail-call to is_loaded via GOT/IAT indirection
    return is_loaded(/* forwarded args */);
}

