// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x64B0
// Name:            .is_off
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x64B0 jmp     cs:off_2F240
//
// Resolved target: is_off
// Target address:  0x2F8B0
// GOT/IAT slot:    0x2F240
// Slot symbol:     off_2F240
// Target type:     <no type info>
// ============================================================

void .is_off(/* see target signature */)
{
    // Tail-call to is_off via GOT/IAT indirection
    return is_off(/* forwarded args */);
}

