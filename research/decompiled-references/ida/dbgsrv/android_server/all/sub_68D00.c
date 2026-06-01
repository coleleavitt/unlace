/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_68D00
// Address: 0x0000000000068D00

//----- (0000000000068D00) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_68D00(pthread_mutex_t *result, const void *a2, size_t a3)
{
  __int64 v3; // x23
  __int64 *p_align; // x21
  char v7[4]; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v8; // [xsp+8h] [xbp-38h]

  v8 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a3 )
  {
    v3 = *(&result->__align + 1);
    p_align = &result->__align;
    v7[0] = 0;
    sub_5BBF4(result, v3 + a3, v7);
    return (pthread_mutex_t *)memcpy((void *)(*p_align + v3), a2, a3);
  }
  return result;
}
