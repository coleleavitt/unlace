// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112760
// Name:            .qlsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112760 jmp     cs:qlsize_ptr
//
// Resolved target: qlsize
// Target address:  0x8D3FB0
// GOT/IAT slot:    0x8A0050
// Slot symbol:     qlsize_ptr
// Target type:     <no type info>
// ============================================================

void .qlsize(/* see target signature */)
{
    // Tail-call to qlsize via GOT/IAT indirection
    return qlsize(/* forwarded args */);
}

