/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_23088
// Address: 0x00023088

//----- (00023088) --------------------------------------------------------
int __fastcall sub_23088(int a1, int a2, int a3, char a4)
{
  int v6; // r5

  *(_BYTE *)(a1 + 389) = a4 & 1;
  v6 = -1;
  if ( qgetenv("IDA_FORCE_PTRACE_ATTACH", 0) || ptrace(PTRACE_GETSIGINFO|PTRACE_POKETEXT, a2, 0, 0) )
  {
LABEL_5:
    *(_BYTE *)(a1 + 978) = 0;
    if ( ptrace(PTRACE_ATTACH, a2, 0, 0) )
      return v6;
    goto LABEL_6;
  }
  if ( ptrace(PTRACE_SETSIGINFO|PTRACE_POKETEXT, a2, 0, 0) )
  {
    ptrace(PTRACE_DETACH, a2, 0, 0);
    goto LABEL_5;
  }
  *(_BYTE *)(a1 + 978) = 1;
LABEL_6:
  if ( sub_22938(a1, a2, 1) )
  {
    sub_1F2C8((_DWORD *)a1);
    return 1;
  }
  else
  {
    ptrace(PTRACE_DETACH, a2, 0, 0);
  }
  return v6;
}
