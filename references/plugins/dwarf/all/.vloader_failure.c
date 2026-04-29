// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA0E0
// Name:            .vloader_failure
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA0E0 jmp     cs:off_CA058
//
// Resolved target: vloader_failure
// Target address:  0xD0978
// GOT/IAT slot:    0xCA058
// Slot symbol:     off_CA058
// Target type:     <no type info>
// ============================================================

void .vloader_failure(/* see target signature */)
{
    // Tail-call to vloader_failure via GOT/IAT indirection
    return vloader_failure(/* forwarded args */);
}

