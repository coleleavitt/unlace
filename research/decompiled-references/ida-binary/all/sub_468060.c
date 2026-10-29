// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x468060
// Name:            IDADockWidget__::vfunc_2
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x468060 jmp     DockWidget____vfunc_2
//
// Resolved target: DockWidget__::vfunc_2
// Target address:  0x54A840
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void IDADockWidget__::vfunc_2(/* see target signature */)
{
    // Tail-call to DockWidget__::vfunc_2 via direct jump indirection
    return DockWidget__::vfunc_2(/* forwarded args */);
}

