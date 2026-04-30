const char *__fastcall hv_hexplace_gen_t__::vfunc_5(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  int v15; // edi
  unsigned __int8 default_encoding_idx; // al
  const char *result; // rax
  const char *v18; // rbp
  size_t v19; // r12
  void *v20; // rdi
  const char *v21; // r13
  __int64 v22; // rax
  char v23; // [rsp+0h] [rbp-28h]

  v15 = *(_DWORD *)(a1 + 48);
  if ( v15 < 0 )
  {
    sub_169700(
      (int)"Coherency check failed: encidx >= 0\n",
      (__int64)a2,
      a3,
      a4,
      a5,
      a6,
      a7,
      a8,
      a9,
      a10,
      a11,
      a12,
      a13,
      a14,
      v23);
    v15 = *(_DWORD *)(a1 + 48);
  }
  if ( v15 )
  {
    result = (const char *)((__int64 (*)(void))get_encoding_name)();
    v18 = result;
    if ( !result )
      goto LABEL_6;
    result = (const char *)strlen(result);
    v19 = (size_t)result;
    if ( !result )
      goto LABEL_6;
  }
  else
  {
    default_encoding_idx = get_default_encoding_idx(1);
    result = (const char *)get_encoding_name(default_encoding_idx);
    v18 = result;
    if ( !result || (result = (const char *)strlen(result), (v19 = (size_t)result) == 0) )
    {
LABEL_6:
      a2[1] = 0;
      return result;
    }
  }
  v20 = (void *)*a2;
  v21 = result + 1;
  if ( a2[2] < (unsigned __int64)(result + 1) )
  {
    v22 = qvector_reserve(a2, *a2, result + 1, 1);
    *a2 = v22;
    v20 = (void *)v22;
  }
  a2[1] = (__int64)v21;
  memmove(v20, v18, v19);
  result = (const char *)*a2;
  *(_BYTE *)(*a2 + v19) = 0;
  return result;
}
