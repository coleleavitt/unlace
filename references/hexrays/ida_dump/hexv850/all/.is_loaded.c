// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B620
// Name:            .is_loaded
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B620 jmp     cs:off_4C0AF8
//
// Resolved target: is_loaded
// Target address:  0x4C3AF8
// GOT/IAT slot:    0x4C0AF8
// Slot symbol:     off_4C0AF8
// Target type:     <no type info>
// ============================================================

void .is_loaded(/* see target signature */)
{
    // Tail-call to is_loaded via GOT/IAT indirection
    return is_loaded(/* forwarded args */);
}

