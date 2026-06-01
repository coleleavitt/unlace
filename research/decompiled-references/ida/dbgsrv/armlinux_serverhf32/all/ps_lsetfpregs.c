/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ps_lsetfpregs
// Address: 0x000173C4

//----- (000173C4) --------------------------------------------------------
bool __fastcall ps_lsetfpregs(int a1, int a2, int a3)
{
  return ptrace(PTRACE_SETFPREGS, a2, 0, a3) != 0;
}
