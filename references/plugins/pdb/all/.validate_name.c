// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D7E0
// Name:            .validate_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D7E0 jmp     cs:off_B33D8
//
// Resolved target: validate_name
// Target address:  0xB3B78
// GOT/IAT slot:    0xB33D8
// Slot symbol:     off_B33D8
// Target type:     <no type info>
// ============================================================

void .validate_name(/* see target signature */)
{
    // Tail-call to validate_name via GOT/IAT indirection
    return validate_name(/* forwarded args */);
}

