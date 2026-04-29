// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1220
// Name:            .qlsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1220 jmp     cs:off_60F8
//
// Resolved target: qlsize
// Target address:  0x6290
// GOT/IAT slot:    0x60F8
// Slot symbol:     off_60F8
// Target type:     <no type info>
// ============================================================

void .qlsize(/* see target signature */)
{
    // Tail-call to qlsize via GOT/IAT indirection
    return qlsize(/* forwarded args */);
}

