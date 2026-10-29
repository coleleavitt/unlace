/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100070AA8
// Address: 0x0000000100070AA8

//----- (0000000100070AA8) ----------------------------------------------------
__int64 __fastcall sub_100070AA8(__int64 *a1)
{
  unsigned __int64 v2; // x20
  unsigned __int8 *v3; // x0
  __int64 v4; // x3
  __int64 v5; // x4
  __int64 v6; // x5
  __int64 v7; // x6
  __int64 v8; // x7
  size_t v9; // x0
  size_t v10; // x20
  unsigned __int64 v11; // x21
  void *v12; // x0
  __int64 v13; // x19
  const void *v14; // x22
  _QWORD *v15; // x1
  pthread_mutex_t *v17; // [xsp+10h] [xbp-440h] BYREF
  char __s[1024]; // [xsp+18h] [xbp-438h] BYREF

  sub_1000756E0(&v17);
  v2 = qword_1000A5F70;
  if ( (unsigned __int64)qword_1000A5F70 > 1 )
    goto LABEL_11;
  v3 = (unsigned __int8 *)sub_100070938();
  qstrncpy(__s, v3, 1024);
  if ( __s[0] )
  {
    qmakepath(__s, 1024, __s, v4, v5, v6, v7, v8, ".idapro");
    if ( !qfileexist(__s) )
      qmkdir(__s, 0x1FFu);
    v9 = strlen(__s);
    if ( !v9 )
    {
      v13 = 0;
      qword_1000A5F70 = 0;
      goto LABEL_16;
    }
    v10 = v9;
    v11 = v9 + 1;
    v12 = (void *)qword_1000A5F68;
    if ( qword_1000A5F78 < v11 )
    {
      v12 = qvector_reserve(&qword_1000A5F68, (_QWORD *)qword_1000A5F68, v11, 1u);
      qword_1000A5F68 = (__int64)v12;
    }
    qword_1000A5F70 = v11;
    memmove(v12, __s, v10);
    *(_BYTE *)(qword_1000A5F68 + v10) = 0;
  }
  v2 = qword_1000A5F70;
  if ( (unsigned __int64)qword_1000A5F70 >= 2 )
  {
LABEL_11:
    if ( a1 != &qword_1000A5F68 )
    {
      v14 = (const void *)qword_1000A5F68;
      v15 = (_QWORD *)*a1;
      if ( a1[2] <= v2 - 1 )
      {
        v15 = qvector_reserve(a1, v15, v2, 1u);
        *a1 = (__int64)v15;
      }
      a1[1] = v2;
      memmove(v15, v14, v2 - 1);
      *(_BYTE *)(*a1 + v2 - 1) = 0;
    }
    v13 = 1;
  }
  else
  {
    v13 = 0;
  }
LABEL_16:
  qmutex_unlock(v17);
  return v13;
}
// 100070B24: variable 'v4' is possibly undefined
// 100070B24: variable 'v5' is possibly undefined
// 100070B24: variable 'v6' is possibly undefined
// 100070B24: variable 'v7' is possibly undefined
// 100070B24: variable 'v8' is possibly undefined
// 1000A5F68: using guessed type __int64 qword_1000A5F68;
// 1000A5F70: using guessed type __int64 qword_1000A5F70;
// 1000A5F78: using guessed type __int64 qword_1000A5F78;
