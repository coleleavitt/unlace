// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B610
// Name:            .is_loaded
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B610 jmp     cs:off_4BFAF0
//
// Resolved target: is_loaded
// Target address:  0x4C2FF0
// GOT/IAT slot:    0x4BFAF0
// Slot symbol:     off_4BFAF0
// Target type:     <no type info>
// ============================================================

void .is_loaded(/* see target signature */)
{
    // Tail-call to is_loaded via GOT/IAT indirection
    return is_loaded(/* forwarded args */);
}

