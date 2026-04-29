// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2340
// Name:            .set_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2340 jmp     cs:off_B188
//
// Resolved target: set_name
// Target address:  0xB620
// GOT/IAT slot:    0xB188
// Slot symbol:     off_B188
// Target type:     <no type info>
// ============================================================

void .set_name(/* see target signature */)
{
    // Tail-call to set_name via GOT/IAT indirection
    return set_name(/* forwarded args */);
}

