// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B840
// Name:            .get_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B840 jmp     cs:off_4DAC08
//
// Resolved target: get_dword
// Target address:  0x4DD618
// GOT/IAT slot:    0x4DAC08
// Slot symbol:     off_4DAC08
// Target type:     <no type info>
// ============================================================

void .get_dword(/* see target signature */)
{
    // Tail-call to get_dword via GOT/IAT indirection
    return get_dword(/* forwarded args */);
}

