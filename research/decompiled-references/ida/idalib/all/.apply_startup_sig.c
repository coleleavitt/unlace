// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9EE0
// Name:            .apply_startup_sig
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9EE0 jmp     cs:off_2C7A758
//
// Resolved target: apply_startup_sig
// Target address:  0x68E5D0
// GOT/IAT slot:    0x2C7A758
// Slot symbol:     off_2C7A758
// Target type:     <no type info>
// ============================================================

void .apply_startup_sig(/* see target signature */)
{
    // Tail-call to apply_startup_sig via GOT/IAT indirection
    return apply_startup_sig(/* forwarded args */);
}

