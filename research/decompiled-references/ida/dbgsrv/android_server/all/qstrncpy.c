/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrncpy
// Address: 0x00000000000C09F0

//----- (00000000000C09F0) ----------------------------------------------------
pthread_mutex_t *__fastcall qstrncpy(pthread_mutex_t *result, char *a2, __int64 a3)
{
  pthread_mutex_t *v3; // x9
  __int64 v4; // x9
  pthread_mutex_t *v5; // x10
  int v6; // w11

  if ( a3 < 0 )
  {
    if ( under_debugger )
    {
LABEL_14:
      __break(1u);
      return qstpncpy(result, a2, a3);
    }
    result = interr(1225);
LABEL_12:
    if ( !under_debugger )
      result = interr(520);
    goto LABEL_14;
  }
  if ( (pthread_mutex_t *)((char *)result + a3) <= result )
    goto LABEL_12;
  v3 = result;
  if ( (pthread_mutex_t *)((char *)result + a3 - 1) == result )
  {
LABEL_8:
    v3->__size[0] = 0;
  }
  else
  {
    v4 = a3 - 1;
    v5 = result;
    while ( 1 )
    {
      v6 = (unsigned __int8)*a2;
      v5->__size[0] = v6;
      if ( !v6 )
        break;
      ++a2;
      --v4;
      v5 = (pthread_mutex_t *)((char *)v5 + 1);
      if ( !v4 )
      {
        v3 = (pthread_mutex_t *)((char *)result + a3 - 1);
        goto LABEL_8;
      }
    }
  }
  return result;
}
// C0A79: variable 'a2' is possibly undefined
// C0A79: variable 'a3' is possibly undefined
// 168DF0: using guessed type char under_debugger;
