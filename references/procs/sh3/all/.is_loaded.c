// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x54C0
// Name:            .is_loaded
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x54C0 jmp     cs:off_15248
//
// Resolved target: is_loaded
// Target address:  0x162D8
// GOT/IAT slot:    0x15248
// Slot symbol:     off_15248
// Target type:     <no type info>
// ============================================================

void .is_loaded(/* see target signature */)
{
    // Tail-call to is_loaded via GOT/IAT indirection
    return is_loaded(/* forwarded args */);
}

