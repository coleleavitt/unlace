// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A80A0
// Name:            .validate_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A80A0 jmp     cs:off_2C79838
//
// Resolved target: validate_name
// Target address:  0x4CBF00
// GOT/IAT slot:    0x2C79838
// Slot symbol:     off_2C79838
// Target type:     <no type info>
// ============================================================

void .validate_name(/* see target signature */)
{
    // Tail-call to validate_name via GOT/IAT indirection
    return validate_name(/* forwarded args */);
}

