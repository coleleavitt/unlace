// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2430
// Name:            .set_type_choosable
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2430 jmp     cs:off_B200
//
// Resolved target: set_type_choosable
// Target address:  0xB698
// GOT/IAT slot:    0xB200
// Slot symbol:     off_B200
// Target type:     <no type info>
// ============================================================

void .set_type_choosable(/* see target signature */)
{
    // Tail-call to set_type_choosable via GOT/IAT indirection
    return set_type_choosable(/* forwarded args */);
}

