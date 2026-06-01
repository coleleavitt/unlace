/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ps_lgetfpregs
// Address: 0x08059C80

//----- (08059C80) --------------------------------------------------------
_BOOL4 __cdecl ps_lgetfpregs(int a1, int a2, int a3)
{
  return ptrace(PTRACE_GETFPREGS, a2, 0, a3) != 0;
}
