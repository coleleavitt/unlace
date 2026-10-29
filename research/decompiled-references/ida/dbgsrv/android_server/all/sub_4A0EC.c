/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A0EC
// Address: 0x000000000004A0EC

//----- (000000000004A0EC) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_4A0EC(pthread_mutex_t *result, const void *a2, unsigned __int64 a3)
{
  void **v5; // x19
  char *v6; // x0
  char *v7; // x8
  void *v8; // x0

  result->__align = 0;
  *(&result->__align + 1) = 0;
  *(&result->__align + 2) = 0;
  if ( a3 )
  {
    v5 = (void **)result;
    v6 = (char *)qvector_reserve(result, nullptr, a3, 1u);
    v7 = (char *)v5[1];
    *v5 = v6;
    memset(&v7[(_QWORD)v6], 0, a3 - (_QWORD)v7);
    v8 = *v5;
    v5[1] = (void *)a3;
    return (pthread_mutex_t *)memcpy(v8, a2, a3);
  }
  return result;
}
