// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10C0
// Name:            .sel2para
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10C0 jmp     cs:off_5048
//
// Resolved target: sel2para
// Target address:  0x5290
// GOT/IAT slot:    0x5048
// Slot symbol:     off_5048
// Target type:     <no type info>
// ============================================================

void .sel2para(/* see target signature */)
{
    // Tail-call to sel2para via GOT/IAT indirection
    return sel2para(/* forwarded args */);
}

