// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B5F0
// Name:            .del_frame
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B5F0 jmp     cs:off_4BFAE0
//
// Resolved target: del_frame
// Target address:  0x4C2FE0
// GOT/IAT slot:    0x4BFAE0
// Slot symbol:     off_4BFAE0
// Target type:     <no type info>
// ============================================================

void .del_frame(/* see target signature */)
{
    // Tail-call to del_frame via GOT/IAT indirection
    return del_frame(/* forwarded args */);
}

