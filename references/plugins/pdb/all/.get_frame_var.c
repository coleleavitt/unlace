// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D3E0
// Name:            .get_frame_var
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D3E0 jmp     cs:off_B31D8
//
// Resolved target: get_frame_var
// Target address:  0xB3970
// GOT/IAT slot:    0xB31D8
// Slot symbol:     off_B31D8
// Target type:     <no type info>
// ============================================================

void .get_frame_var(/* see target signature */)
{
    // Tail-call to get_frame_var via GOT/IAT indirection
    return get_frame_var(/* forwarded args */);
}

