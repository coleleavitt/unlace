// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB9A0
// Name:            .relocate_relobj
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB9A0 jmp     cs:off_2C7B4B8
//
// Resolved target: relocate_relobj
// Target address:  0x84C9B0
// GOT/IAT slot:    0x2C7B4B8
// Slot symbol:     off_2C7B4B8
// Target type:     <no type info>
// ============================================================

void .relocate_relobj(/* see target signature */)
{
    // Tail-call to relocate_relobj via GOT/IAT indirection
    return relocate_relobj(/* forwarded args */);
}

