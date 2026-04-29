// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x86B0
// Name:            .find_ioport
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x86B0 jmp     cs:off_2A340
//
// Resolved target: find_ioport
// Target address:  0x2BD58
// GOT/IAT slot:    0x2A340
// Slot symbol:     off_2A340
// Target type:     <no type info>
// ============================================================

void .find_ioport(/* see target signature */)
{
    // Tail-call to find_ioport via GOT/IAT indirection
    return find_ioport(/* forwarded args */);
}

