__int64 __fastcall sub_22168B0(__int64 a1, __int16 a2, __int64 a3, __int64 a4, _BYTE *a5, __int64 a6)
{
  __int8 *v7; // rdi
  unsigned __int64 v8; // rdx
  size_t v10; // rdx
  __int64 v11; // [rsp+8h] [rbp-80h] BYREF
  void *dest; // [rsp+10h] [rbp-78h] BYREF
  __m128 v13; // [rsp+18h] [rbp-70h] BYREF
  void *src; // [rsp+30h] [rbp-58h] BYREF
  size_t n; // [rsp+38h] [rbp-50h]
  _QWORD v16[9]; // [rsp+40h] [rbp-48h] BYREF

  v13.m128_i8[8] = 0;
  v13.m128_u64[0] = 0;
  dest = &v13.m128_u16[4];
  if ( !a5 )
  {
    LOBYTE(v16[0]) = 0;
    v7 = &v13.m128_i8[8];
    v10 = 0;
    src = v16;
LABEL_15:
    v13.m128_u64[0] = v10;
    v7[v10] = 0;
    v7 = (__int8 *)src;
    goto LABEL_6;
  }
  src = v16;
  sub_2210320(&src, a5, (__int64)&a5[a6]);
  v7 = (__int8 *)dest;
  if ( src == v16 )
  {
    v10 = n;
    if ( n )
    {
      if ( n == 1 )
        *(_BYTE *)dest = v16[0];
      else
        memcpy(dest, src, n);
      v10 = n;
      v7 = (__int8 *)dest;
    }
    goto LABEL_15;
  }
  if ( dest == &v13.m128_u16[4] )
  {
    v11 = v16[0];
    dest = src;
    v13 = _mm_loadh_ps((const double *)&v11);
  }
  else
  {
    v11 = v16[0];
    v8 = v13.m128_u64[1];
    dest = src;
    v13 = _mm_loadh_ps((const double *)&v11);
    if ( v7 )
    {
      src = v7;
      v16[0] = v8;
      goto LABEL_6;
    }
  }
  v7 = (__int8 *)v16;
  src = v16;
LABEL_6:
  n = 0;
  *v7 = 0;
  if ( src != v16 )
    operator delete(src);
  sub_9EE8A0(a1 + 120, (__int64)&dest);
  *(_WORD *)(a1 + 12) = a2;
  if ( !*(_QWORD *)(a1 + 224) )
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(__int64, void **))(a1 + 232))(a1 + 208, &dest);
  if ( dest != &v13.m128_u16[4] )
    operator delete(dest);
  return 0;
}
