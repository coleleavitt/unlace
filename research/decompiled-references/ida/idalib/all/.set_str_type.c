// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB660
// Name:            .set_str_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB660 jmp     cs:off_2C7B318
//
// Resolved target: set_str_type
// Target address:  0x3C2F50
// GOT/IAT slot:    0x2C7B318
// Slot symbol:     off_2C7B318
// Target type:     <no type info>
// ============================================================

void .set_str_type(/* see target signature */)
{
    // Tail-call to set_str_type via GOT/IAT indirection
    return set_str_type(/* forwarded args */);
}

