// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC010
// Name:            .find_byter
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC010 jmp     cs:off_2C7B7F0
//
// Resolved target: find_byter
// Target address:  0x678590
// GOT/IAT slot:    0x2C7B7F0
// Slot symbol:     off_2C7B7F0
// Target type:     <no type info>
// ============================================================

void .find_byter(/* see target signature */)
{
    // Tail-call to find_byter via GOT/IAT indirection
    return find_byter(/* forwarded args */);
}

