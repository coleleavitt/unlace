// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x8D69E0
// Name:     init_kernel
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to init_kernel are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void init_kernel(/* see import library declaration */);

