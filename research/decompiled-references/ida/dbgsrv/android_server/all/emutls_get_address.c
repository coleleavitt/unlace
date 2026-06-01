/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: emutls_get_address
// Address: 0x00000000000F1304

//----- (00000000000F1304) ----------------------------------------------------
_QWORD *__fastcall _emutls_get_address(size_t *a1)
{
  _QWORD *result; // x0
  unsigned __int64 v3; // x19
  char *v4; // x0
  char *v5; // x20
  char *v6; // x0
  pthread_key_t v7; // w0
  unsigned __int64 v8; // x23
  __int64 v9; // x21
  char *v10; // x0
  char *v11; // x19

  if ( !&pthread_create )
  {
    if ( !a1[2] )
      a1[2] = (size_t)sub_F124C(a1);
    return (_QWORD *)a1[2];
  }
  v3 = atomic_load(a1 + 2);
  if ( !v3 )
  {
    pthread_once((pthread_once_t *)qword_169588, (void (*)(void))sub_F118C);
    pthread_mutex_lock((pthread_mutex_t *)&qword_169588[1]);
    v3 = a1[2];
    if ( !v3 )
    {
      v3 = qword_1695B8 + 1;
      qword_1695B8 = v3;
      atomic_store(v3, a1 + 2);
    }
    pthread_mutex_unlock((pthread_mutex_t *)&qword_169588[1]);
  }
  v4 = (char *)pthread_getspecific(dword_169580);
  v5 = v4;
  if ( v4 )
  {
    v8 = *((_QWORD *)v4 + 1);
    if ( v3 <= v8 )
      goto LABEL_19;
    v9 = 2 * v8;
    if ( v3 > 2 * v8 )
      v9 = v3 + 32;
    v10 = (char *)realloc(v4, 8 * (v9 + 2));
    v5 = v10;
    if ( !v10 )
LABEL_11:
      abort();
    *((_QWORD *)v10 + 1) = v9;
    memset(&v10[8 * v8 + 16], 0, 8 * (v9 - v8));
    v7 = dword_169580;
  }
  else
  {
    v6 = (char *)calloc(v3 + 34, 8u);
    v5 = v6;
    if ( !v6 )
      goto LABEL_11;
    *(_QWORD *)v6 = 1;
    *((_QWORD *)v6 + 1) = v3 + 32;
    v7 = dword_169580;
  }
  pthread_setspecific(v7, v5);
LABEL_19:
  v11 = &v5[8 * v3];
  result = *((_QWORD **)v11 + 1);
  if ( !result )
  {
    result = sub_F124C(a1);
    *((_QWORD *)v11 + 1) = result;
  }
  return result;
}
// 168FE0: using guessed type __int64 qword_168FE0[5];
// 169580: using guessed type int dword_169580;
// 169588: using guessed type __int64[6];
// 1695B8: using guessed type __int64 qword_1695B8;
