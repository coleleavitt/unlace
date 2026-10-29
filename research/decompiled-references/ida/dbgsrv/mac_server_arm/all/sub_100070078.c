/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100070078
// Address: 0x0000000100070078

//----- (0000000100070078) ----------------------------------------------------
__int64 __fastcall sub_100070078(__int64 a1)
{
  _QWORD *v2; // x20
  _QWORD *v3; // x0
  __int64 v4; // x8
  void (__fastcall *v5)(pthread_mutex_t *); // x23
  pthread_mutex_t *v6; // x20
  __int64 v7; // x24
  __int64 v8; // x9
  __int64 v9; // x10
  void (__fastcall **v10)(pthread_mutex_t *); // x0
  __int64 v11; // x8
  pthread_mutex_t *v12; // x0

  v2 = (_QWORD *)qword_10009E3A8;
  if ( qword_10009E3A8 )
  {
    while ( 1 )
    {
      v3 = (_QWORD *)*v2;
      v4 = v2[1];
      if ( !v4 )
        break;
      v5 = (void (__fastcall *)(pthread_mutex_t *))v3[v4 - 1];
      v6 = (pthread_mutex_t *)qword_10009E3A0;
      qmutex_lock((pthread_mutex_t *)qword_10009E3A0);
      v7 = qword_10009E3A8;
      if ( qword_10009E3A8 )
      {
        v8 = *(_QWORD *)(qword_10009E3A8 + 8);
        if ( (v8 & 0x1FFFFFFFFFFFFFFFLL) != 0 )
        {
          v9 = 8 * v8;
          v10 = *(void (__fastcall ***)(pthread_mutex_t *))qword_10009E3A8;
          while ( *v10 != v5 )
          {
            ++v10;
            v9 -= 8;
            if ( !v9 )
              goto LABEL_12;
          }
        }
        else
        {
          v10 = *(void (__fastcall ***)(pthread_mutex_t *))qword_10009E3A8;
        }
        v11 = *(_QWORD *)qword_10009E3A8 + 8 * v8;
        if ( v10 != (void (__fastcall **)(pthread_mutex_t *))v11 )
        {
          memmove(v10, v10 + 1, v11 - (_QWORD)v10 - 8);
          --*(_QWORD *)(v7 + 8);
        }
      }
LABEL_12:
      v12 = qmutex_unlock(v6);
      v5(v12);
      v2 = (_QWORD *)qword_10009E3A8;
      if ( !qword_10009E3A8 )
        goto LABEL_17;
    }
    if ( v3 )
    {
      v2[1] = 0;
      qfree(v3);
      *v2 = 0;
      v2[2] = 0;
    }
    qfree(v2);
  }
LABEL_17:
  qword_10009E3A8 = 0;
  if ( *(_BYTE *)(a1 + 28) == 1 )
    exit(*(_DWORD *)(a1 + 24));
  return 0;
}
// 10009DF98: using guessed type __int64 qword_10009DF98[128];
// 10009E3A0: using guessed type __int64 qword_10009E3A0;
// 10009E3A8: using guessed type __int64 qword_10009E3A8;
