// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB000
// Name:            .call_system
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB000 jmp     cs:off_2C7AFE8
//
// Resolved target: call_system
// Target address:  0x84E890
// GOT/IAT slot:    0x2C7AFE8
// Slot symbol:     off_2C7AFE8
// Target type:     <no type info>
// ============================================================

void .call_system(/* see target signature */)
{
    // Tail-call to call_system via GOT/IAT indirection
    return call_system(/* forwarded args */);
}

