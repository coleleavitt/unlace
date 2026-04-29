// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EFB0
// Name:            .first_named_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EFB0 jmp     cs:off_4E9FC0
//
// Resolved target: first_named_type
// Target address:  0x4ECA10
// GOT/IAT slot:    0x4E9FC0
// Slot symbol:     off_4E9FC0
// Target type:     <no type info>
// ============================================================

void .first_named_type(/* see target signature */)
{
    // Tail-call to first_named_type via GOT/IAT indirection
    return first_named_type(/* forwarded args */);
}

