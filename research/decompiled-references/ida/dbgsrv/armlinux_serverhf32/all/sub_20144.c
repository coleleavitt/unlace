/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_20144
// Address: 0x00020144

//----- (00020144) --------------------------------------------------------
int __fastcall sub_20144(int a1, int a2, int a3, char a4)
{
  *(_BYTE *)(a1 + 453) = a4 & 1;
  if ( !sub_7A72C("IDA_FORCE_PTRACE_ATTACH", 0) && !ptrace(PTRACE_GETSIGINFO|PTRACE_POKETEXT, a2, 0, 0) )
  {
    if ( !ptrace(PTRACE_SETSIGINFO|PTRACE_POKETEXT, a2, 0, 0) )
    {
      *(_BYTE *)(a1 + 1078) = 1;
      goto LABEL_4;
    }
    ptrace(PTRACE_DETACH, a2, 0, 0);
  }
  *(_BYTE *)(a1 + 1078) = 0;
  if ( ptrace(PTRACE_ATTACH, a2, 0) )
    return -1;
LABEL_4:
  if ( sub_1EFE4(a1, a2, 1) )
  {
    sub_1F868((_DWORD *)a1);
    return 1;
  }
  else
  {
    ptrace(PTRACE_DETACH, a2, 0, 0);
    return -1;
  }
}
