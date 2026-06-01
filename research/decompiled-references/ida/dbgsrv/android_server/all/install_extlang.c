/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: install_extlang
// Address: 0x00000000000675B8

//----- (00000000000675B8) ----------------------------------------------------
__int64 __fastcall install_extlang(__int64 a1)
{
  __int64 v2; // x21
  pthread_mutex_t *v3; // x19
  __int64 v4; // x8
  __int64 v5; // x10
  unsigned __int64 v6; // x2
  char *v7; // x0
  char *v8; // x8

  if ( a1 && !*(_DWORD *)(a1 + 12) )
  {
    v3 = (pthread_mutex_t *)qword_166A80;
    qmutex_lock((pthread_mutex_t *)qword_166A80);
    v4 = qword_166A90;
    if ( (int)qword_166A90 >= 1 )
    {
      v5 = 0;
      while ( *(_QWORD *)(qword_166A88 + 8 * v5) != a1 )
      {
        if ( (int)++v5 >= (int)qword_166A90 )
          goto LABEL_8;
      }
      v2 = -1;
      goto LABEL_21;
    }
LABEL_8:
    if ( qword_166A90 << 32 < 1 )
    {
      v2 = 0;
      if ( !(_DWORD)qword_166A90 )
      {
LABEL_13:
        v6 = qword_166A90 + 1;
        if ( qword_166A98 >= (unsigned __int64)(qword_166A90 + 1) )
        {
          v7 = (char *)qword_166A88;
        }
        else
        {
          v7 = (char *)qvector_reserve((pthread_mutex_t *)&qword_166A88, (void *)qword_166A88, v6, 8u);
          v4 = qword_166A90;
          qword_166A88 = (__int64)v7;
          v6 = qword_166A90 + 1;
        }
        v8 = &v7[8 * v4];
        qword_166A90 = v6;
        goto LABEL_20;
      }
    }
    else
    {
      v2 = 0;
      do
      {
        if ( !*(_QWORD *)(qword_166A88 + 8 * v2) )
          break;
        ++v2;
      }
      while ( v2 < (int)qword_166A90 );
      if ( v2 == (int)qword_166A90 )
        goto LABEL_13;
    }
    v8 = (char *)(qword_166A88 + 8 * v2);
LABEL_20:
    *(_QWORD *)v8 = a1;
    nullsub_2(0);
LABEL_21:
    qmutex_unlock(v3);
    return v2;
  }
  return -1;
}
// AB1C8: using guessed type __int64 __fastcall nullsub_2(_QWORD);
// 166A80: using guessed type __int64 qword_166A80;
// 166A88: using guessed type __int64 qword_166A88;
// 166A90: using guessed type __int64 qword_166A90;
// 166A98: using guessed type __int64 qword_166A98;
