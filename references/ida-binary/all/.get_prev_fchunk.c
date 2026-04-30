// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B190
// Name:            .get_prev_fchunk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B190 jmp     cs:get_prev_fchunk_ptr
//
// Resolved target: get_prev_fchunk
// Target address:  0x8D9708
// GOT/IAT slot:    0x8A4568
// Slot symbol:     get_prev_fchunk_ptr
// Target type:     <no type info>
// ============================================================

void .get_prev_fchunk(/* see target signature */)
{
    // Tail-call to get_prev_fchunk via GOT/IAT indirection
    return get_prev_fchunk(/* forwarded args */);
}

