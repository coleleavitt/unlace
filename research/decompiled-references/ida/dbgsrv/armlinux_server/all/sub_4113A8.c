/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4113A8
// Address: 0x00000000004113A8

//----- (00000000004113A8) ----------------------------------------------------
__int64 __fastcall sub_4113A8(__int64 a1, __int64 a2, int *a3)
{
  unsigned int v4; // w20
  __int64 v5; // x3
  __int64 v7; // x2
  const char *v8; // x0
  int v9; // w0

  v4 = a2;
  v5 = 0;
  v7 = 0;
  if ( !*(_BYTE *)(a1 + 2054) )
    goto LABEL_6;
  if ( !(unsigned int)ptrace(PTRACE_SEIZE, a2, 0, 0) )
  {
    v9 = ptrace(PTRACE_INTERRUPT, v4, 0, 0);
    goto LABEL_7;
  }
  while ( 1 )
  {
    a3 = __errno_location();
    v8 = (const char *)sub_492F00(*a3);
    sub_40AAF0(a1, (__int64)"Attaching to %d thread: %s\n", v4, v8);
    if ( (*a3 & 0xFFFFFFFD) == 1 )
      break;
    if ( !under_debugger )
      sub_492270(30197);
    __break(0x3E8u);
LABEL_6:
    v9 = ptrace(PTRACE_ATTACH, a2, v7, v5);
LABEL_7:
    if ( !v9 )
      return sub_410DB0(a1, v4, (__int64)a3, 0);
  }
  return 0;
}
// 411428: variable 'a2' is possibly undefined
// 411428: variable 'v7' is possibly undefined
// 411428: variable 'v5' is possibly undefined
// 52451C: using guessed type char under_debugger;
