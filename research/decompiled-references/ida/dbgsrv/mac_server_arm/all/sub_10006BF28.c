/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006BF28
// Address: 0x000000010006BF28

//----- (000000010006BF28) ----------------------------------------------------
pthread_mutex_t *sub_10006BF28()
{
  char *v0; // x1
  __int64 v1; // x2
  __int64 v2; // x3
  __int64 v3; // x4
  __int64 v4; // x5
  __int64 v5; // x6
  __int64 v6; // x7
  size_t v7; // x19
  void *v8; // x20
  __int64 v9; // x8
  __int64 v10; // x8
  char *v11; // x8
  pthread_mutex_t *result; // x0
  void *__src; // [xsp+0h] [xbp-60h] BYREF
  size_t v14; // [xsp+8h] [xbp-58h]
  __int64 v15; // [xsp+10h] [xbp-50h]
  pthread_mutex_t *v16; // [xsp+18h] [xbp-48h] BYREF
  void *v17; // [xsp+20h] [xbp-40h]
  size_t v18; // [xsp+28h] [xbp-38h]
  size_t v19; // [xsp+30h] [xbp-30h]

  sub_100070638(&v16);
  if ( qword_10009DF88 )
    return qmutex_unlock(v16);
  __src = nullptr;
  v14 = 0;
  v15 = 0;
  if ( (unsigned int)qgetenv("IDAUSR", &__src) )
    sub_10006C218((char *)&qword_10009DF80, (char *)__src);
  if ( qword_10009DF88 )
    goto LABEL_14;
  if ( (unsigned int)sub_10006BD28((__int64 *)&__src) )
  {
    v17 = nullptr;
    v18 = 0;
    v19 = 0;
    v7 = v14;
    if ( v14 )
    {
      v8 = qalloc_or_throw(v14);
      v17 = v8;
      v19 = v7;
      memcpy(v8, __src, v7);
      v18 = v7;
    }
    else
    {
      v8 = nullptr;
    }
    v0 = (char *)qword_10009DF80;
    v10 = qword_10009DF88;
    v1 = qword_10009DF88 + 1;
    if ( qword_10009DF90 < (unsigned __int64)(qword_10009DF88 + 1) )
    {
      v0 = (char *)qvector_reserve(&qword_10009DF80, (_QWORD *)qword_10009DF80, v1, 0x18u);
      qword_10009DF80 = (__int64)v0;
      v10 = qword_10009DF88;
    }
    v11 = &v0[24 * v10];
    *(_QWORD *)v11 = v8;
    *((_QWORD *)v11 + 1) = v7;
    *((_QWORD *)v11 + 2) = v7;
    v9 = ++qword_10009DF88;
  }
  else
  {
    v9 = qword_10009DF88;
  }
  if ( v9 )
  {
LABEL_14:
    if ( __src )
    {
      v14 = 0;
      qfree(__src);
    }
    return qmutex_unlock(v16);
  }
  result = (pthread_mutex_t *)sub_10002D82C(
                                "IDA could not find a valid user directory.\n"
                                "Please make sure that the HOME or IDAUSR environment variables are set.\n",
                                (__int64)v0,
                                v1,
                                v2,
                                v3,
                                v4,
                                v5,
                                v6,
                                (char)__src);
  __break(1u);
  return result;
}
// 10006C090: variable 'v0' is possibly undefined
// 10006C090: variable 'v1' is possibly undefined
// 10006C090: variable 'v2' is possibly undefined
// 10006C090: variable 'v3' is possibly undefined
// 10006C090: variable 'v4' is possibly undefined
// 10006C090: variable 'v5' is possibly undefined
// 10006C090: variable 'v6' is possibly undefined
// 10009DF80: using guessed type __int64 qword_10009DF80;
// 10009DF88: using guessed type __int64 qword_10009DF88;
// 10009DF90: using guessed type __int64 qword_10009DF90;
