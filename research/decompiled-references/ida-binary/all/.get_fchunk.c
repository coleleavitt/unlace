// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114570
// Name:            .get_fchunk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114570 jmp     cs:get_fchunk_ptr
//
// Resolved target: get_fchunk
// Target address:  0x8D52F0
// GOT/IAT slot:    0x8A0F58
// Slot symbol:     get_fchunk_ptr
// Target type:     <no type info>
// ============================================================

void .get_fchunk(/* see target signature */)
{
    // Tail-call to get_fchunk via GOT/IAT indirection
    return get_fchunk(/* forwarded args */);
}

