// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA5C0
// Name:            .is_fltnum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA5C0 jmp     cs:off_2C7AAC8
//
// Resolved target: is_fltnum
// Target address:  0x3C5380
// GOT/IAT slot:    0x2C7AAC8
// Slot symbol:     off_2C7AAC8
// Target type:     <no type info>
// ============================================================

void .is_fltnum(/* see target signature */)
{
    // Tail-call to is_fltnum via GOT/IAT indirection
    return is_fltnum(/* forwarded args */);
}

