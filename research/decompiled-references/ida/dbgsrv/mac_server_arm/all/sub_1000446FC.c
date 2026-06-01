/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000446FC
// Address: 0x00000001000446FC

//----- (00000001000446FC) ----------------------------------------------------
__int64 __fastcall sub_1000446FC(__int64 a1, char *a2, char a3)
{
  pthread_mutex_t *v6; // x19
  void *v7; // x0
  __int64 v8; // x22
  __int64 v9; // x23
  __int64 v10; // x8
  void *v11; // x0
  _QWORD *v12; // x24
  char *v13; // x0
  char *v14; // x21
  char *i; // x23
  size_t v16; // x24
  void *v17; // x0
  __int64 v18; // x20
  void *v20; // [xsp+8h] [xbp-68h] BYREF
  size_t v21; // [xsp+10h] [xbp-60h]
  __int64 v22; // [xsp+18h] [xbp-58h]
  const char *v23; // [xsp+20h] [xbp-50h] BYREF

  v6 = (pthread_mutex_t *)qword_10009D7C0;
  qmutex_lock((pthread_mutex_t *)qword_10009D7C0);
  if ( (a3 & 1) == 0 )
  {
    v7 = *(void **)(a1 + 24);
    if ( v7 )
    {
      v8 = *(_QWORD *)(a1 + 32);
      if ( v8 )
      {
        v9 = 0;
        do
        {
          v10 = *(_QWORD *)(a1 + 24);
          v11 = *(void **)(v10 + v9);
          if ( v11 )
          {
            v12 = (_QWORD *)(v10 + v9);
            *(_QWORD *)(v10 + v9 + 8) = 0;
            qfree(v11);
            *v12 = 0;
            v12[2] = 0;
          }
          v9 += 24;
          --v8;
        }
        while ( v8 );
        v7 = *(void **)(a1 + 24);
      }
      *(_QWORD *)(a1 + 32) = 0;
      qfree(v7);
      *(_QWORD *)(a1 + 24) = 0;
      *(_QWORD *)(a1 + 40) = 0;
    }
  }
  if ( a2 )
  {
    v13 = qstrdup(a2);
    v14 = v13;
    if ( !v13 )
    {
      v18 = 0;
      goto LABEL_23;
    }
    for ( i = qstrtok(v13, ":", &v23); i; i = qstrtok(nullptr, ":", &v23) )
    {
      if ( *i )
      {
        v20 = nullptr;
        v21 = 0;
        v22 = 0;
        v16 = strlen(i);
        v17 = nullptr;
        if ( v16 != -1 )
        {
          v17 = qvector_reserve(&v20, nullptr, v16 + 1, 1u);
          v20 = v17;
        }
        v21 = v16 + 1;
        memmove(v17, i, v16);
        *((_BYTE *)v20 + v16) = 0;
        sub_100013154((_QWORD **)(a1 + 24), &v20);
        if ( v20 )
        {
          v21 = 0;
          qfree(v20);
        }
      }
    }
    qfree(v14);
  }
  v18 = 1;
LABEL_23:
  qmutex_unlock(v6);
  return v18;
}
// 10009D7C0: using guessed type __int64 qword_10009D7C0;
