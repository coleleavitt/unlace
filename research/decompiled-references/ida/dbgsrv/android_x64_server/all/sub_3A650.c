/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3A650
// Address: 0x000000000003A650

//----- (000000000003A650) ----------------------------------------------------
__int64 __fastcall sub_3A650(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rdi
  int v6; // eax
  int *v7; // rbx
  char *v8; // rax

  if ( *(_BYTE *)(a1 + 1150) )
  {
    v5 = 16902;
    if ( (unsigned int)ptrace(PTRACE_SEIZE, a2, 0, 0) )
      goto LABEL_6;
    v5 = 16903;
    v6 = ptrace(PTRACE_INTERRUPT, a2, 0, 0);
  }
  else
  {
    v5 = 16;
    v6 = ptrace(PTRACE_ATTACH, a2, 0, 0);
  }
  if ( !v6 )
    return sub_3BDD0(a1, a2, a3, 0);
LABEL_6:
  v7 = (int *)__errno(v5);
  v8 = winerr(*v7);
  sub_391F0(a1, "Attaching to %d thread: %s\n", a2, v8);
  if ( (*v7 | 2) != 3 )
  {
    if ( !(_BYTE)under_debugger )
      interr(30197);
    BUG();
  }
  return 0;
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
// 158B40: using guessed type __int64 under_debugger;
