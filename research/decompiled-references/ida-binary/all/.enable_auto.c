// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117790
// Name:            .enable_auto
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117790 jmp     cs:enable_auto_ptr
//
// Resolved target: enable_auto
// Target address:  0x8D72B8
// GOT/IAT slot:    0x8A2868
// Slot symbol:     enable_auto_ptr
// Target type:     <no type info>
// ============================================================

void .enable_auto(/* see target signature */)
{
    // Tail-call to enable_auto via GOT/IAT indirection
    return enable_auto(/* forwarded args */);
}

