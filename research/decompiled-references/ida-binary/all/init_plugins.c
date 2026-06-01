// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x8D89B0
// Name:     init_plugins
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to init_plugins are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void init_plugins(/* see import library declaration */);

