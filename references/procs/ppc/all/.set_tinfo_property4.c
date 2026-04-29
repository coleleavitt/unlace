// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20B00
// Name:            .set_tinfo_property4
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20B00 jmp     cs:off_95568
//
// Resolved target: set_tinfo_property4
// Target address:  0x95FA8
// GOT/IAT slot:    0x95568
// Slot symbol:     off_95568
// Target type:     <no type info>
// ============================================================

void .set_tinfo_property4(/* see target signature */)
{
    // Tail-call to set_tinfo_property4 via GOT/IAT indirection
    return set_tinfo_property4(/* forwarded args */);
}

