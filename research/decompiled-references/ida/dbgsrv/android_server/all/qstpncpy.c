/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstpncpy
// Address: 0x00000000000C0A7C

//----- (00000000000C0A7C) ----------------------------------------------------
pthread_mutex_t *__fastcall qstpncpy(pthread_mutex_t *result, char *a2, __int64 a3)
{
  pthread_mutex_t *v3; // x8
  __int64 v4; // x9
  int v5; // w10

  if ( a3 < 0 )
  {
    if ( under_debugger )
    {
LABEL_14:
      __break(1u);
      return qstrncat(result, a2, a3);
    }
    result = interr(1225);
LABEL_12:
    if ( !under_debugger )
      result = interr(520);
    goto LABEL_14;
  }
  if ( (pthread_mutex_t *)((char *)result + a3) <= result )
    goto LABEL_12;
  v3 = (pthread_mutex_t *)((char *)result + a3 - 1);
  if ( v3 == result )
  {
LABEL_8:
    result->__size[0] = 0;
  }
  else
  {
    v4 = a3 - 1;
    while ( 1 )
    {
      v5 = (unsigned __int8)*a2;
      result->__size[0] = v5;
      if ( !v5 )
        break;
      ++a2;
      --v4;
      result = (pthread_mutex_t *)((char *)result + 1);
      if ( !v4 )
      {
        result = v3;
        goto LABEL_8;
      }
    }
  }
  return result;
}
// C0AFD: variable 'a2' is possibly undefined
// C0AFD: variable 'a3' is possibly undefined
// 168DF0: using guessed type char under_debugger;
