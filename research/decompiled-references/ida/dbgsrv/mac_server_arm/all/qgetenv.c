/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qgetenv
// Address: 0x0000000100071C94

//----- (0000000100071C94) ----------------------------------------------------
__int64 __fastcall qgetenv(char *a1, _QWORD *a2)
{
  pthread_mutex_t *v4; // x19
  char *v5; // x0
  char *v6; // x22
  size_t v7; // x0
  size_t v8; // x21
  unsigned __int64 v9; // x23
  _QWORD *v10; // x1
  __int64 v11; // x20

  if ( !qword_10009E3B8 )
  {
    qword_10009E3B8 = (__int64)pthread_self();
    v4 = qmutex_create();
    qword_10009E3C0 = (__int64)v4;
    if ( !v4 )
      goto LABEL_4;
    goto LABEL_3;
  }
  v4 = (pthread_mutex_t *)qword_10009E3C0;
  if ( qword_10009E3C0 )
LABEL_3:
    pthread_mutex_lock(v4);
LABEL_4:
  v5 = getenv(a1);
  if ( v5 && *v5 )
  {
    if ( !a2 )
      goto LABEL_11;
    v6 = v5;
    v7 = strlen(v5);
    if ( v7 )
    {
      v8 = v7;
      v9 = v7 + 1;
      v10 = (_QWORD *)*a2;
      if ( a2[2] < v7 + 1 )
      {
        v10 = qvector_reserve(a2, v10, v9, 1u);
        *a2 = v10;
      }
      a2[1] = v9;
      memmove(v10, v6, v8);
      *(_BYTE *)(*a2 + v8) = 0;
LABEL_11:
      v11 = 1;
      if ( !v4 )
        return v11;
      goto LABEL_14;
    }
    a2[1] = 0;
    v11 = 1;
    if ( !v4 )
      return v11;
LABEL_14:
    pthread_mutex_unlock(v4);
    return v11;
  }
  v11 = 0;
  if ( v4 )
    goto LABEL_14;
  return v11;
}
// 10009DF98: using guessed type __int64 qword_10009DF98[128];
// 10009E3B8: using guessed type __int64 qword_10009E3B8;
// 10009E3C0: using guessed type __int64 qword_10009E3C0;
