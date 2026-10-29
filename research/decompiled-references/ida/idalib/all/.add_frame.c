// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACF00
// Name:            .add_frame
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACF00 jmp     cs:off_2C7BF68
//
// Resolved target: add_frame
// Target address:  0x5BE1B0
// GOT/IAT slot:    0x2C7BF68
// Slot symbol:     off_2C7BF68
// Target type:     <no type info>
// ============================================================

void .add_frame(/* see target signature */)
{
    // Tail-call to add_frame via GOT/IAT indirection
    return add_frame(/* forwarded args */);
}

