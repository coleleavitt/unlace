// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x65A0
// Name:            .is_loaded
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x65A0 jmp     cs:off_242B8
//
// Resolved target: is_loaded
// Target address:  0x26088
// GOT/IAT slot:    0x242B8
// Slot symbol:     off_242B8
// Target type:     <no type info>
// ============================================================

void .is_loaded(/* see target signature */)
{
    // Tail-call to is_loaded via GOT/IAT indirection
    return is_loaded(/* forwarded args */);
}

