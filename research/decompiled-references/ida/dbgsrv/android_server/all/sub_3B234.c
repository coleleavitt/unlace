/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3B234
// Address: 0x000000000003B234

//----- (000000000003B234) ----------------------------------------------------
void __fastcall sub_3B234(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // x0
  int *v7; // x21
  const char *v8; // x0
  __int64 v9; // x0

  if ( *(_BYTE *)(a1 + 1854) )
  {
    v6 = ptrace(PTRACE_SEIZE, (unsigned int)a2, 0, 0);
    if ( (_DWORD)v6 )
      goto LABEL_6;
    v6 = ptrace(PTRACE_INTERRUPT, (unsigned int)a2, 0, 0);
  }
  else
  {
    v6 = ptrace(PTRACE_ATTACH, (unsigned int)a2, 0, 0);
  }
  if ( !(_DWORD)v6 )
  {
    sub_3C964(a1, a2, a3, 0);
    return;
  }
LABEL_6:
  v7 = (int *)__errno(v6);
  v8 = (const char *)winerr(*v7);
  v9 = sub_3A0D8(a1, "Attaching to %d thread: %s\n", a2, v8);
  if ( (*v7 | 2) != 3 )
  {
    if ( !under_debugger )
      v9 = (__int64)interr(30197);
    __break(1u);
    sub_3B308(v9);
  }
}
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
// 168DF0: using guessed type char under_debugger;
