// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119160
// Name:            .sel2para
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119160 jmp     cs:sel2para_ptr
//
// Resolved target: sel2para
// Target address:  0x8D8298
// GOT/IAT slot:    0x8A3550
// Slot symbol:     sel2para_ptr
// Target type:     <no type info>
// ============================================================

void .sel2para(/* see target signature */)
{
    // Tail-call to sel2para via GOT/IAT indirection
    return sel2para(/* forwarded args */);
}

