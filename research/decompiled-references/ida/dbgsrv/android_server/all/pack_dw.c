/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: pack_dw
// Address: 0x00000000000BB46C

//----- (00000000000BB46C) ----------------------------------------------------
pthread_mutex_t *__fastcall pack_dw(pthread_mutex_t *result, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // w8

  if ( (__int64)(a2 - (_QWORD)result) >= 0 )
  {
    if ( (unsigned __int16)a3 <= 0x7Fu )
      goto LABEL_11;
    if ( !((unsigned __int16)a3 >> 14) )
    {
      if ( (unsigned __int64)result >= a2 )
        goto LABEL_11;
      v3 = ((unsigned int)a3 >> 8) | 0x80;
      goto LABEL_10;
    }
    if ( (unsigned __int64)result >= a2
      || (result->__size[0] = -1, result = (pthread_mutex_t *)((char *)result + 1), (__int64)(a2 - (_QWORD)result) >= 0) )
    {
      if ( (unsigned __int64)result >= a2 )
        goto LABEL_11;
      v3 = (unsigned int)a3 >> 8;
LABEL_10:
      result->__size[0] = v3;
      result = (pthread_mutex_t *)((char *)result + 1);
LABEL_11:
      if ( (unsigned __int64)result < a2 )
      {
        result->__size[0] = a3;
        return (pthread_mutex_t *)((char *)result + 1);
      }
      return result;
    }
  }
  if ( !under_debugger )
    result = interr(1225);
  __break(1u);
  return pack_dq(result, a2, a3);
}
// BB4F1: variable 'a2' is possibly undefined
// BB4F1: variable 'a3' is possibly undefined
// 168DF0: using guessed type char under_debugger;
