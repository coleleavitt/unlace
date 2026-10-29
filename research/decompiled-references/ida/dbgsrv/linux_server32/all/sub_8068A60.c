/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8068A60
// Address: 0x08068A60

//----- (08068A60) --------------------------------------------------------
int __cdecl sub_8068A60(int a1, signed int a2, int a3, char a4)
{
  *(_BYTE *)(a1 + 453) = a4;
  *(_BYTE *)(a1 + 453) &= 1u;
  if ( !(unsigned __int8)sub_80D2000("IDA_FORCE_PTRACE_ATTACH", nullptr)
    && !ptrace(PTRACE_GETSIGINFO|PTRACE_POKETEXT, a2, 0, 0) )
  {
    if ( !ptrace(PTRACE_SETSIGINFO|PTRACE_POKETEXT, a2, 0, 0) )
    {
      *(_BYTE *)(a1 + 734) = 1;
      goto LABEL_4;
    }
    ptrace(PTRACE_DETACH, a2, 0, 0);
  }
  *(_BYTE *)(a1 + 734) = 0;
  if ( ptrace(PTRACE_ATTACH, a2, 0, 0) )
    return -1;
LABEL_4:
  if ( !(unsigned __int8)sub_8066E20((_DWORD *)a1, a2, 1) )
  {
    ptrace(PTRACE_DETACH, a2, 0, 0);
    return -1;
  }
  sub_8067BE0((_DWORD *)a1);
  return 1;
}
