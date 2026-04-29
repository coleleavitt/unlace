// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x66C0
// Name:            .is_loaded
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x66C0 jmp     cs:off_2F348
//
// Resolved target: is_loaded
// Target address:  0x2F9B8
// GOT/IAT slot:    0x2F348
// Slot symbol:     off_2F348
// Target type:     <no type info>
// ============================================================

void .is_loaded(/* see target signature */)
{
    // Tail-call to is_loaded via GOT/IAT indirection
    return is_loaded(/* forwarded args */);
}

