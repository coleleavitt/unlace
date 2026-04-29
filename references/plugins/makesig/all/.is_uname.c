// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3050
// Name:            .is_uname
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3050 jmp     cs:off_20010
//
// Resolved target: is_uname
// Target address:  0x21920
// GOT/IAT slot:    0x20010
// Slot symbol:     off_20010
// Target type:     <no type info>
// ============================================================

void .is_uname(/* see target signature */)
{
    // Tail-call to is_uname via GOT/IAT indirection
    return is_uname(/* forwarded args */);
}

