/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_27BB0
// Address: 0x00027BB0

//----- (00027BB0) --------------------------------------------------------
int __cdecl sub_27BB0(int a1, int a2, int a3, char a4)
{
  int v4; // ecx
  int result; // eax

  *(_BYTE *)(a1 + 389) = a4 & 1;
  if ( (unsigned __int8)qgetenv("IDA_FORCE_PTRACE_ATTACH", 0) || ptrace(PTRACE_GETSIGINFO|PTRACE_POKETEXT, a2, 0, 0) )
  {
LABEL_5:
    *(_BYTE *)(a1 + 634) = 0;
    v4 = ptrace(PTRACE_ATTACH, a2, 0, 0);
    result = -1;
    if ( v4 )
      return result;
    goto LABEL_6;
  }
  if ( ptrace(PTRACE_SETSIGINFO|PTRACE_POKETEXT, a2, 0, 0) )
  {
    ptrace(PTRACE_DETACH, a2, 0, 0);
    goto LABEL_5;
  }
  *(_BYTE *)(a1 + 634) = 1;
LABEL_6:
  if ( (unsigned __int8)sub_26F90(a1, a2, 1) )
  {
    sub_21A20((_DWORD *)a1);
    return 1;
  }
  else
  {
    ptrace(PTRACE_DETACH, a2, 0, 0);
    return -1;
  }
}
