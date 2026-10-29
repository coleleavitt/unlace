// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC0A0
// Name:            .free_dll
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC0A0 jmp     cs:off_2C7B838
//
// Resolved target: free_dll
// Target address:  0x63FA30
// GOT/IAT slot:    0x2C7B838
// Slot symbol:     off_2C7B838
// Target type:     <no type info>
// ============================================================

void .free_dll(/* see target signature */)
{
    // Tail-call to free_dll via GOT/IAT indirection
    return free_dll(/* forwarded args */);
}

