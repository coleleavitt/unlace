/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1A220
// Address: 0x0001A220

//----- (0001A220) --------------------------------------------------------
int __fastcall sub_1A220(int a1, int a2)
{
  if ( ptrace(PTRACE_PEEKUSER, *(_DWORD *)(a1 + 4), 60, 0) != a2 )
    return 0;
  dword_DE2D0 = ptrace(PTRACE_PEEKUSER, *(_DWORD *)(a1 + 4), 0, 0);
  dword_DE2D4 = dword_DE2D0;
  return 66;
}
// DE2D0: using guessed type int dword_DE2D0;
// DE2D4: using guessed type int dword_DE2D4;
