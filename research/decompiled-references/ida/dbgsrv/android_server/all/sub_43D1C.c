/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43D1C
// Address: 0x0000000000043D1C

//----- (0000000000043D1C) ----------------------------------------------------
__int64 __fastcall sub_43D1C(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  *(_BYTE *)(a1 + 733) = a4 & 1;
  if ( (qgetenv("IDA_FORCE_PTRACE_ATTACH", 0) & 1) != 0 || ptrace(PTRACE_SEIZE, a2, 0, 0) )
  {
LABEL_5:
    *(_BYTE *)(a1 + 1854) = 0;
    if ( ptrace(PTRACE_ATTACH, a2, 0, 0) )
      return 0xFFFFFFFFLL;
    goto LABEL_6;
  }
  if ( ptrace(PTRACE_INTERRUPT, a2, 0, 0) )
  {
    ptrace(PTRACE_DETACH, a2, 0, 0);
    goto LABEL_5;
  }
  *(_BYTE *)(a1 + 1854) = 1;
LABEL_6:
  if ( (((__int64 (__fastcall *)(__int64, _QWORD, __int64))loc_4330C)(a1, a2, 1) & 1) != 0 )
  {
    sub_3EB28((_QWORD *)a1);
    return 1;
  }
  ptrace(PTRACE_DETACH, a2, 0, 0);
  return 0xFFFFFFFFLL;
}
