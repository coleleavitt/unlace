// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x54B0
// Name:            .validate_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x54B0 jmp     cs:off_15240
//
// Resolved target: validate_name
// Target address:  0x162D0
// GOT/IAT slot:    0x15240
// Slot symbol:     off_15240
// Target type:     <no type info>
// ============================================================

void .validate_name(/* see target signature */)
{
    // Tail-call to validate_name via GOT/IAT indirection
    return validate_name(/* forwarded args */);
}

