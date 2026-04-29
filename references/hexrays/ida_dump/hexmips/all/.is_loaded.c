// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B620
// Name:            .is_loaded
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B620 jmp     cs:off_4CDAF8
//
// Resolved target: is_loaded
// Target address:  0x4D0520
// GOT/IAT slot:    0x4CDAF8
// Slot symbol:     off_4CDAF8
// Target type:     <no type info>
// ============================================================

void .is_loaded(/* see target signature */)
{
    // Tail-call to is_loaded via GOT/IAT indirection
    return is_loaded(/* forwarded args */);
}

