/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: pack_ds
// Address: 0x00000000000BB2A0

//----- (00000000000BB2A0) ----------------------------------------------------
pthread_mutex_t *__fastcall pack_ds(pthread_mutex_t *a1, unsigned __int64 a2, unsigned __int64 a3, size_t a4)
{
  unsigned __int64 v4; // x22
  pthread_mutex_t *v6; // x21
  const char *v7; // x20
  size_t v8; // x22
  pthread_mutex_t *v9; // x19

  v4 = a2 - (_QWORD)a1;
  if ( (__int64)(a2 - (_QWORD)a1) < 0 )
  {
    if ( !under_debugger )
      a1 = interr(1225);
    __break(1u);
    return pack_dd(a1, a2, a3);
  }
  else
  {
    v6 = a1;
    if ( a3 )
      v7 = (const char *)a3;
    else
      v7 = "";
    if ( !a4 )
      a4 = strlen(v7);
    if ( (unsigned __int64)v6 + a4 <= a2 )
      v8 = a4;
    else
      v8 = v4 - 5;
    v9 = pack_dd(v6, a2, (unsigned int)v8);
    memcpy(v9, v7, v8);
    return (pthread_mutex_t *)((char *)v9 + v8);
  }
}
// BB339: variable 'a2' is possibly undefined
// BB339: variable 'a3' is possibly undefined
// 168DF0: using guessed type char under_debugger;
