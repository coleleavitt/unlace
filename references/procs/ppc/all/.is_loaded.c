// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20A90
// Name:            .is_loaded
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20A90 jmp     cs:off_95530
//
// Resolved target: is_loaded
// Target address:  0x95F68
// GOT/IAT slot:    0x95530
// Slot symbol:     off_95530
// Target type:     <no type info>
// ============================================================

void .is_loaded(/* see target signature */)
{
    // Tail-call to is_loaded via GOT/IAT indirection
    return is_loaded(/* forwarded args */);
}

