// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B190
// Name:            .is_fltnum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B190 jmp     cs:off_4BF8B0
//
// Resolved target: is_fltnum
// Target address:  0x4C2DA8
// GOT/IAT slot:    0x4BF8B0
// Slot symbol:     off_4BF8B0
// Target type:     <no type info>
// ============================================================

void .is_fltnum(/* see target signature */)
{
    // Tail-call to is_fltnum via GOT/IAT indirection
    return is_fltnum(/* forwarded args */);
}

