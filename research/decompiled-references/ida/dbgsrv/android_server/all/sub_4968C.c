/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4968C
// Address: 0x000000000004968C

//----- (000000000004968C) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_4968C(pthread_mutex_t *result, const void *a2, size_t a3)
{
  __int64 *p_align; // x19
  size_t v6; // x22
  void *v7; // x0

  result->__align = 0;
  *(&result->__align + 1) = 0;
  *(&result->__align + 2) = 0;
  if ( a3 )
  {
    p_align = &result->__align;
    v6 = a3 + 1;
    if ( a3 == -1 )
    {
      v7 = nullptr;
    }
    else
    {
      v7 = qvector_reserve(result, nullptr, a3 + 1, 1u);
      *p_align = (__int64)v7;
    }
    p_align[1] = v6;
    result = (pthread_mutex_t *)memmove(v7, a2, a3);
    *(_BYTE *)(*p_align + a3) = 0;
  }
  return result;
}
