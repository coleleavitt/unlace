// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11C0
// Name:            .qlgets
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11C0 jmp     cs:off_50C8
//
// Resolved target: qlgets
// Target address:  0x52A8
// GOT/IAT slot:    0x50C8
// Slot symbol:     off_50C8
// Target type:     <no type info>
// ============================================================

void .qlgets(/* see target signature */)
{
    // Tail-call to qlgets via GOT/IAT indirection
    return qlgets(/* forwarded args */);
}

