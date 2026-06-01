// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112A30
// Name:            .validate_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112A30 jmp     cs:validate_name_ptr
//
// Resolved target: validate_name
// Target address:  0x8D4140
// GOT/IAT slot:    0x8A01B8
// Slot symbol:     validate_name_ptr
// Target type:     <no type info>
// ============================================================

void .validate_name(/* see target signature */)
{
    // Tail-call to validate_name via GOT/IAT indirection
    return validate_name(/* forwarded args */);
}

