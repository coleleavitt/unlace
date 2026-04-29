// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA6C0
// Name:            .is_loaded
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA6C0 jmp     cs:off_35348
//
// Resolved target: is_loaded
// Target address:  0x35998
// GOT/IAT slot:    0x35348
// Slot symbol:     off_35348
// Target type:     <no type info>
// ============================================================

void .is_loaded(/* see target signature */)
{
    // Tail-call to is_loaded via GOT/IAT indirection
    return is_loaded(/* forwarded args */);
}

