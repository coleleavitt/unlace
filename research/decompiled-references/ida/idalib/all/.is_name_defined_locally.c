// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A78D0
// Name:            .is_name_defined_locally
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A78D0 jmp     cs:off_2C79450
//
// Resolved target: is_name_defined_locally
// Target address:  0x4D4400
// GOT/IAT slot:    0x2C79450
// Slot symbol:     off_2C79450
// Target type:     <no type info>
// ============================================================

void .is_name_defined_locally(/* see target signature */)
{
    // Tail-call to is_name_defined_locally via GOT/IAT indirection
    return is_name_defined_locally(/* forwarded args */);
}

