// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112D90
// Name:            .append_disp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112D90 jmp     cs:append_disp_ptr
//
// Resolved target: append_disp
// Target address:  0x8D4380
// GOT/IAT slot:    0x8A0368
// Slot symbol:     append_disp_ptr
// Target type:     <no type info>
// ============================================================

void .append_disp(/* see target signature */)
{
    // Tail-call to append_disp via GOT/IAT indirection
    return append_disp(/* forwarded args */);
}

