// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x83C0
// Name:            .is_off
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x83C0 jmp     cs:off_2A1C8
//
// Resolved target: is_off
// Target address:  0x2A738
// GOT/IAT slot:    0x2A1C8
// Slot symbol:     off_2A1C8
// Target type:     <no type info>
// ============================================================

void .is_off(/* see target signature */)
{
    // Tail-call to is_off via GOT/IAT indirection
    return is_off(/* forwarded args */);
}

