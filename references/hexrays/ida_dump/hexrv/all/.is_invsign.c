// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAD0
// Name:            .is_invsign
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAD0 jmp     cs:off_4BF550
//
// Resolved target: is_invsign
// Target address:  0x4C2A30
// GOT/IAT slot:    0x4BF550
// Slot symbol:     off_4BF550
// Target type:     <no type info>
// ============================================================

void .is_invsign(/* see target signature */)
{
    // Tail-call to is_invsign via GOT/IAT indirection
    return is_invsign(/* forwarded args */);
}

