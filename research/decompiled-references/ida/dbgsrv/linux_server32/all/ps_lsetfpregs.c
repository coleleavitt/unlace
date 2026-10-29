/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ps_lsetfpregs
// Address: 0x08059CB0

//----- (08059CB0) --------------------------------------------------------
_BOOL4 __cdecl ps_lsetfpregs(int a1, int a2, int a3)
{
  return ptrace(PTRACE_SETFPREGS, a2, 0, a3) != 0;
}
