// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8D00
// Name:            .apply_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8D00 jmp     cs:off_2C79E68
//
// Resolved target: apply_fixup
// Target address:  0x41CD70
// GOT/IAT slot:    0x2C79E68
// Slot symbol:     off_2C79E68
// Target type:     <no type info>
// ============================================================

void .apply_fixup(/* see target signature */)
{
    // Tail-call to apply_fixup via GOT/IAT indirection
    return apply_fixup(/* forwarded args */);
}

