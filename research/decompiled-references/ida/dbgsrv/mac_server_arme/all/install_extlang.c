/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: install_extlang
// Address: 0x000000010002CC08

//----- (000000010002CC08) ----------------------------------------------------
__int64 __fastcall install_extlang(__int64 a1)
{
  __int64 v2; // x21
  pthread_mutex_t *v3; // x19
  __int64 v4; // x8
  _QWORD *v5; // x9
  __int64 v6; // x10
  unsigned __int64 v7; // x2
  char *v8; // x1
  char *v9; // x8

  if ( !a1 || *(_DWORD *)(a1 + 12) )
    return -1;
  v3 = (pthread_mutex_t *)qword_1000A57B8;
  qmutex_lock((pthread_mutex_t *)qword_1000A57B8);
  v4 = qword_1000A5960;
  if ( (int)qword_1000A5960 < 1 )
  {
LABEL_8:
    if ( (int)qword_1000A5960 < 1LL )
    {
      v2 = 0;
    }
    else
    {
      v2 = 0;
      while ( *(_QWORD *)(qword_1000A5958 + 8 * v2) )
      {
        if ( (int)qword_1000A5960 == ++v2 )
        {
          v2 = (int)qword_1000A5960;
          goto LABEL_16;
        }
      }
    }
    if ( v2 == (int)qword_1000A5960 )
    {
LABEL_16:
      v7 = qword_1000A5960 + 1;
      v8 = (char *)qword_1000A5958;
      if ( qword_1000A5968 < (unsigned __int64)(qword_1000A5960 + 1) )
      {
        v8 = (char *)qvector_reserve(&qword_1000A5958, (_QWORD *)qword_1000A5958, v7, 8u);
        qword_1000A5958 = (__int64)v8;
        v4 = qword_1000A5960;
        v7 = qword_1000A5960 + 1;
      }
      v9 = &v8[8 * v4];
      qword_1000A5960 = v7;
    }
    else
    {
      v9 = (char *)(qword_1000A5958 + 8 * v2);
    }
    *(_QWORD *)v9 = a1;
    nullsub_29(0, a1, v2);
  }
  else
  {
    v5 = (_QWORD *)qword_1000A5958;
    v6 = qword_1000A5960 & 0x7FFFFFFF;
    while ( *v5 != a1 )
    {
      ++v5;
      if ( !--v6 )
        goto LABEL_8;
    }
    v2 = -1;
  }
  qmutex_unlock(v3);
  return v2;
}
// 100068AA0: using guessed type __int64 __fastcall nullsub_29(_QWORD, _QWORD, _QWORD);
// 1000A57B8: using guessed type __int64 qword_1000A57B8;
// 1000A5958: using guessed type __int64 qword_1000A5958;
// 1000A5960: using guessed type __int64 qword_1000A5960;
// 1000A5968: using guessed type __int64 qword_1000A5968;
