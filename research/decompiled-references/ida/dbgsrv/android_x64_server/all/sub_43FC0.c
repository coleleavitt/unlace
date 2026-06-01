/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43FC0
// Address: 0x0000000000043FC0

//----- (0000000000043FC0) ----------------------------------------------------
__int64 __fastcall sub_43FC0(unsigned __int64 a1, unsigned int a2, double a3, double a4, __int64 a5, char a6)
{
  unsigned int v6; // ebp

  *(_BYTE *)(a1 + 733) = a6 & 1;
  if ( (unsigned __int8)qgetenv("IDA_FORCE_PTRACE_ATTACH", 0) || ptrace(PTRACE_SEIZE, a2, 0, 0) )
  {
LABEL_5:
    *(_BYTE *)(a1 + 1150) = 0;
    v6 = -1;
    if ( ptrace(PTRACE_ATTACH, a2, 0, 0) )
      return v6;
    goto LABEL_6;
  }
  if ( ptrace(PTRACE_INTERRUPT, a2, 0, 0) )
  {
    ptrace(PTRACE_DETACH, a2, 0, 0);
    goto LABEL_5;
  }
  *(_BYTE *)(a1 + 1150) = 1;
LABEL_6:
  v6 = 1;
  if ( (unsigned __int8)sub_43480(a1, a2, 1, a3, a4) )
  {
    sub_3E060((_QWORD *)a1, a3, a4);
  }
  else
  {
    ptrace(PTRACE_DETACH, a2, 0, 0);
    return (unsigned int)-1;
  }
  return v6;
}
