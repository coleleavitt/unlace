// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DAF0
// Name:            .is_invsign
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DAF0 jmp     cs:off_4E9560
//
// Resolved target: is_invsign
// Target address:  0x4EBF68
// GOT/IAT slot:    0x4E9560
// Slot symbol:     off_4E9560
// Target type:     <no type info>
// ============================================================

void .is_invsign(/* see target signature */)
{
    // Tail-call to is_invsign via GOT/IAT indirection
    return is_invsign(/* forwarded args */);
}

