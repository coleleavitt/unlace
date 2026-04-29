// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E650
// Name:            .is_loaded
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E650 jmp     cs:off_4E9B10
//
// Resolved target: is_loaded
// Target address:  0x4EC538
// GOT/IAT slot:    0x4E9B10
// Slot symbol:     off_4E9B10
// Target type:     <no type info>
// ============================================================

void .is_loaded(/* see target signature */)
{
    // Tail-call to is_loaded via GOT/IAT indirection
    return is_loaded(/* forwarded args */);
}

