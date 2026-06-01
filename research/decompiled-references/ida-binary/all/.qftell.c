// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112FC0
// Name:            .qftell
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112FC0 jmp     cs:qftell_ptr
//
// Resolved target: qftell
// Target address:  0x8D4500
// GOT/IAT slot:    0x8A0480
// Slot symbol:     qftell_ptr
// Target type:     <no type info>
// ============================================================

void .qftell(/* see target signature */)
{
    // Tail-call to qftell via GOT/IAT indirection
    return qftell(/* forwarded args */);
}

