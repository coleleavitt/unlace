// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABD60
// Name:            .set_error_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABD60 jmp     cs:off_2C7B698
//
// Resolved target: set_error_data
// Target address:  0x82EDF0
// GOT/IAT slot:    0x2C7B698
// Slot symbol:     off_2C7B698
// Target type:     <no type info>
// ============================================================

void .set_error_data(/* see target signature */)
{
    // Tail-call to set_error_data via GOT/IAT indirection
    return set_error_data(/* forwarded args */);
}

