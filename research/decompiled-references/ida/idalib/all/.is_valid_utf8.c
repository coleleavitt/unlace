// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABBB0
// Name:            .is_valid_utf8
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABBB0 jmp     cs:off_2C7B5C0
//
// Resolved target: is_valid_utf8
// Target address:  0x82CC70
// GOT/IAT slot:    0x2C7B5C0
// Slot symbol:     off_2C7B5C0
// Target type:     <no type info>
// ============================================================

void .is_valid_utf8(/* see target signature */)
{
    // Tail-call to is_valid_utf8 via GOT/IAT indirection
    return is_valid_utf8(/* forwarded args */);
}

