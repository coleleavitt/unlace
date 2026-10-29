// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9AA0
// Name:            .is_invsign
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9AA0 jmp     cs:off_2C7A538
//
// Resolved target: is_invsign
// Target address:  0x3C5CA0
// GOT/IAT slot:    0x2C7A538
// Slot symbol:     off_2C7A538
// Target type:     <no type info>
// ============================================================

void .is_invsign(/* see target signature */)
{
    // Tail-call to is_invsign via GOT/IAT indirection
    return is_invsign(/* forwarded args */);
}

