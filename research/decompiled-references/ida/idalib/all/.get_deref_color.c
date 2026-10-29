// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAC20
// Name:            .get_deref_color
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAC20 jmp     cs:off_2C7ADF8
//
// Resolved target: get_deref_color
// Target address:  0x3FF710
// GOT/IAT slot:    0x2C7ADF8
// Slot symbol:     off_2C7ADF8
// Target type:     <no type info>
// ============================================================

void .get_deref_color(/* see target signature */)
{
    // Tail-call to get_deref_color via GOT/IAT indirection
    return get_deref_color(/* forwarded args */);
}

