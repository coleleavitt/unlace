// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19770
// Name:            .set_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19770 jmp     cs:off_753A0
//
// Resolved target: set_name
// Target address:  0x75BF0
// GOT/IAT slot:    0x753A0
// Slot symbol:     off_753A0
// Target type:     <no type info>
// ============================================================

void .set_name(/* see target signature */)
{
    // Tail-call to set_name via GOT/IAT indirection
    return set_name(/* forwarded args */);
}

