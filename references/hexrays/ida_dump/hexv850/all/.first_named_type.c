// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BF80
// Name:            .first_named_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BF80 jmp     cs:off_4C0FA8
//
// Resolved target: first_named_type
// Target address:  0x4C3FD0
// GOT/IAT slot:    0x4C0FA8
// Slot symbol:     off_4C0FA8
// Target type:     <no type info>
// ============================================================

void .first_named_type(/* see target signature */)
{
    // Tail-call to first_named_type via GOT/IAT indirection
    return first_named_type(/* forwarded args */);
}

