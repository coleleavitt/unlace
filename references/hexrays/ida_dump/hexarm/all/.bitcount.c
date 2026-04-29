// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2F080
// Name:            .bitcount
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2F080 jmp     cs:off_4EA028
//
// Resolved target: bitcount
// Target address:  0x4ECA78
// GOT/IAT slot:    0x4EA028
// Slot symbol:     off_4EA028
// Target type:     <no type info>
// ============================================================

void .bitcount(/* see target signature */)
{
    // Tail-call to bitcount via GOT/IAT indirection
    return bitcount(/* forwarded args */);
}

