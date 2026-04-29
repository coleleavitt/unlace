// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B5F0
// Name:            .del_frame
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B5F0 jmp     cs:off_4DAAE0
//
// Resolved target: del_frame
// Target address:  0x4DD4E8
// GOT/IAT slot:    0x4DAAE0
// Slot symbol:     off_4DAAE0
// Target type:     <no type info>
// ============================================================

void .del_frame(/* see target signature */)
{
    // Tail-call to del_frame via GOT/IAT indirection
    return del_frame(/* forwarded args */);
}

