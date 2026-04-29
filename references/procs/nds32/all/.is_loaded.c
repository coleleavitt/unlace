// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8520
// Name:            .is_loaded
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8520 jmp     cs:off_2A278
//
// Resolved target: is_loaded
// Target address:  0x2A7E8
// GOT/IAT slot:    0x2A278
// Slot symbol:     off_2A278
// Target type:     <no type info>
// ============================================================

void .is_loaded(/* see target signature */)
{
    // Tail-call to is_loaded via GOT/IAT indirection
    return is_loaded(/* forwarded args */);
}

