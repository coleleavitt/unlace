// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A000
// Name:            .is_off
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A000 jmp     cs:off_4B97E8
//
// Resolved target: is_off
// Target address:  0x4BC1E0
// GOT/IAT slot:    0x4B97E8
// Slot symbol:     off_4B97E8
// Target type:     <no type info>
// ============================================================

void .is_off(/* see target signature */)
{
    // Tail-call to is_off via GOT/IAT indirection
    return is_off(/* forwarded args */);
}

