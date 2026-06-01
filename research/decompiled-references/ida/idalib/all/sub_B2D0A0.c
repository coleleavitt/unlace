void *__fastcall sub_B2D0A0(unsigned int *a1, _QWORD *a2, __int64 a3, const void *a4, unsigned int a5)
{
  void *result; // rax
  __int64 v7; // rdx
  size_t v8; // rdx

  *a1 = a5;
  result = (void *)sub_9C3B30((__int64 *)(a3 + 2352), 8LL * a5, 4u);
  v7 = *a1;
  *a2 = result;
  v8 = 8 * v7;
  if ( v8 )
    return memmove(result, a4, v8);
  return result;
}
