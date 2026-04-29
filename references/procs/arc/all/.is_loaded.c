// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8600
// Name:            .is_loaded
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8600 jmp     cs:off_2A2E8
//
// Resolved target: is_loaded
// Target address:  0x2BCF8
// GOT/IAT slot:    0x2A2E8
// Slot symbol:     off_2A2E8
// Target type:     <no type info>
// ============================================================

void .is_loaded(/* see target signature */)
{
    // Tail-call to is_loaded via GOT/IAT indirection
    return is_loaded(/* forwarded args */);
}

