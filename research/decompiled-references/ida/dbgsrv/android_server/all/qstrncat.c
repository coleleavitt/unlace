/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrncat
// Address: 0x00000000000C0B00

//----- (00000000000C0B00) ----------------------------------------------------
pthread_mutex_t *__fastcall qstrncat(pthread_mutex_t *a1, char *a2, __int64 a3)
{
  char *v4; // x20
  pthread_mutex_t *v5; // x19
  const char *v6; // x10
  const char *v7; // x9
  const char *v8; // x8
  const char *v9; // x10
  int v10; // w11

  if ( a3 < 0 )
  {
    if ( under_debugger )
    {
LABEL_15:
      __break(1u);
      return (pthread_mutex_t *)replace_tabs(a1, a2, a3);
    }
    a1 = interr(1225);
LABEL_13:
    if ( !under_debugger )
      a1 = interr(520);
    goto LABEL_15;
  }
  v4 = a2;
  v5 = a1;
  a1 = (pthread_mutex_t *)strlen((const char *)a1);
  v6 = (char *)a1 + (_QWORD)v5;
  v7 = (char *)v5 + a3;
  if ( (char *)a1 + (unsigned __int64)v5 >= (char *)v5 + a3 )
    goto LABEL_13;
  v8 = v7 - 1;
  if ( v6 == v7 - 1 )
  {
    v8 = (char *)a1 + (_QWORD)v5;
LABEL_9:
    *v8 = 0;
  }
  else
  {
    v9 = v6 + 1;
    while ( 1 )
    {
      v10 = (unsigned __int8)*v4;
      *((_BYTE *)v9 - 1) = v10;
      if ( !v10 )
        break;
      ++v9;
      ++v4;
      if ( v7 == v9 )
        goto LABEL_9;
    }
  }
  return v5;
}
// C0BA5: variable 'a2' is possibly undefined
// C0BA5: variable 'a3' is possibly undefined
// 168DF0: using guessed type char under_debugger;
