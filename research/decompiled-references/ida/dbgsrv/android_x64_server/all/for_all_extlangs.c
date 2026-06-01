/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: for_all_extlangs
// Address: 0x000000000006A380

//----- (000000000006A380) ----------------------------------------------------
__int64 __fastcall for_all_extlangs(__int64 (__fastcall ***a1)(_QWORD, __int64), char a2)
{
  pthread_mutex_t *v2; // r15
  unsigned __int64 v3; // rcx
  int v4; // r13d
  __int64 v5; // r14
  unsigned __int64 v6; // rax
  __int64 v7; // rbp
  int v8; // eax
  unsigned __int64 v10; // [rsp+0h] [rbp-38h]

  v2 = (pthread_mutex_t *)qword_1557C0;
  qmutex_lock((pthread_mutex_t *)qword_1557C0);
  v3 = *((_QWORD *)&xmmword_1557C8 + 1);
  if ( *((_QWORD *)&xmmword_1557C8 + 1) )
  {
    v10 = qword_1557E0;
    v4 = 1;
    v5 = 0;
    v6 = 0;
    while ( 1 )
    {
      v7 = *(_QWORD *)(xmmword_1557C8 + 8 * v6);
      if ( v7 )
      {
        if ( a2 )
          select_extlang(*(__int64 **)(xmmword_1557C8 + 8 * v6));
        v8 = (**a1)(a1, v7);
        v3 = *((_QWORD *)&xmmword_1557C8 + 1);
        if ( v8 )
          break;
      }
      v6 = v4++;
      if ( v3 <= v6 )
        goto LABEL_11;
    }
    v5 = v8;
LABEL_11:
    if ( v10 < v3 && a2 )
      select_extlang(*(__int64 **)(xmmword_1557C8 + 8 * v10));
  }
  else
  {
    v5 = 0;
  }
  qmutex_unlock(v2);
  return v5;
}
// 1557C0: using guessed type __int64 qword_1557C0;
// 1557C8: using guessed type __int128 xmmword_1557C8;
// 1557E0: using guessed type __int64 qword_1557E0;
