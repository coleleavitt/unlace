__int64 __fastcall sub_78D960(__int64 a1, const char *a2)
{
  unsigned __int64 v2; // rbp
  __int64 v3; // r13
  int v4; // r15d
  __int64 v5; // rax
  __int64 v6; // r14
  const char *v7; // rdi
  void *v9; // [rsp+8h] [rbp-40h]

  if ( !a2 )
    return 0;
  v9 = qword_2CD4690;
  qmutex_lock(qword_2CD4690);
  v2 = *(_QWORD *)(a1 + 72);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 64);
    v4 = 0;
    v5 = 0;
    while ( 1 )
    {
      v6 = *(_QWORD *)(v3 + 8 * v5);
      v7 = haystack;
      if ( *(_QWORD *)(v6 + 64) )
        v7 = *(const char **)(v6 + 56);
      if ( !strcmp(v7, a2) )
        break;
      v5 = ++v4;
      if ( v4 >= v2 )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    v6 = 0;
  }
  qmutex_unlock(v9);
  return v6;
}
