// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3440
// Name:            .validate_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3440 jmp     cs:off_14208
//
// Resolved target: validate_name
// Target address:  0x14800
// GOT/IAT slot:    0x14208
// Slot symbol:     off_14208
// Target type:     <no type info>
// ============================================================

void .validate_name(/* see target signature */)
{
    // Tail-call to validate_name via GOT/IAT indirection
    return validate_name(/* forwarded args */);
}

