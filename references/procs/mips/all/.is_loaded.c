// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19900
// Name:            .is_loaded
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19900 jmp     cs:off_75468
//
// Resolved target: is_loaded
// Target address:  0x75CB8
// GOT/IAT slot:    0x75468
// Slot symbol:     off_75468
// Target type:     <no type info>
// ============================================================

void .is_loaded(/* see target signature */)
{
    // Tail-call to is_loaded via GOT/IAT indirection
    return is_loaded(/* forwarded args */);
}

