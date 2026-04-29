// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9720
// Name:            .is_loaded
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9720 jmp     cs:off_89378
//
// Resolved target: is_loaded
// Target address:  0x8C688
// GOT/IAT slot:    0x89378
// Slot symbol:     off_89378
// Target type:     <no type info>
// ============================================================

void .is_loaded(/* see target signature */)
{
    // Tail-call to is_loaded via GOT/IAT indirection
    return is_loaded(/* forwarded args */);
}

