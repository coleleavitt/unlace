/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006BD28
// Address: 0x000000010006BD28

//----- (000000010006BD28) ----------------------------------------------------
__int64 __fastcall sub_10006BD28(__int64 *a1)
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

  sub_100070638(&v17);
  v2 = qword_10009DF70;
  if ( (unsigned __int64)qword_10009DF70 > 1 )
    goto LABEL_11;
  v3 = (unsigned __int8 *)sub_10006BBBC();
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
      qword_10009DF70 = 0;
      goto LABEL_16;
    }
    v10 = v9;
    v11 = v9 + 1;
    v12 = (void *)qword_10009DF68;
    if ( qword_10009DF78 < v11 )
    {
      v12 = qvector_reserve(&qword_10009DF68, (_QWORD *)qword_10009DF68, v11, 1u);
      qword_10009DF68 = (__int64)v12;
    }
    qword_10009DF70 = v11;
    memmove(v12, __s, v10);
    *(_BYTE *)(qword_10009DF68 + v10) = 0;
  }
  v2 = qword_10009DF70;
  if ( (unsigned __int64)qword_10009DF70 >= 2 )
  {
LABEL_11:
    if ( a1 != &qword_10009DF68 )
    {
      v14 = (const void *)qword_10009DF68;
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
// 10006BDA0: variable 'v4' is possibly undefined
// 10006BDA0: variable 'v5' is possibly undefined
// 10006BDA0: variable 'v6' is possibly undefined
// 10006BDA0: variable 'v7' is possibly undefined
// 10006BDA0: variable 'v8' is possibly undefined
// 10009DF68: using guessed type __int64 qword_10009DF68;
// 10009DF70: using guessed type __int64 qword_10009DF70;
// 10009DF78: using guessed type __int64 qword_10009DF78;
