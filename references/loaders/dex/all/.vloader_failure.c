// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3100
// Name:            .vloader_failure
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3100 jmp     cs:off_28068
//
// Resolved target: vloader_failure
// Target address:  0x28518
// GOT/IAT slot:    0x28068
// Slot symbol:     off_28068
// Target type:     <no type info>
// ============================================================

void .vloader_failure(/* see target signature */)
{
    // Tail-call to vloader_failure via GOT/IAT indirection
    return vloader_failure(/* forwarded args */);
}

