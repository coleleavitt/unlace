__int64 __fastcall sub_208BB50(__int64 a1, __int16 a2, __int64 a3, __int64 a4, _BYTE *a5, signed __int64 a6)
{
  __int8 *v7; // rdi
  _QWORD *v9; // rax
  unsigned __int64 v10; // rdx
  size_t v11; // rdx
  bool v12; // zf
  _BYTE *v14; // [rsp+8h] [rbp-70h] BYREF
  void *dest; // [rsp+10h] [rbp-68h] BYREF
  __m128 v16; // [rsp+18h] [rbp-60h] BYREF
  void *src; // [rsp+30h] [rbp-48h]
  size_t n; // [rsp+38h] [rbp-40h]
  _QWORD v19[7]; // [rsp+40h] [rbp-38h] BYREF

  v16.m128_i8[8] = 0;
  v16.m128_u64[0] = 0;
  v7 = &v16.m128_i8[8];
  dest = &v16.m128_u16[4];
  if ( !a5 )
  {
    LOBYTE(v19[0]) = 0;
    v11 = 0;
    src = v19;
LABEL_10:
    v16.m128_u64[0] = v11;
    v7[v11] = 0;
    v7 = (__int8 *)src;
    goto LABEL_11;
  }
  v9 = v19;
  src = v19;
  if ( (unsigned __int64)a6 > 0xF )
  {
    if ( a6 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v14 = a5;
    v9 = (_QWORD *)operator new(a6 + 1);
    v19[0] = a6;
    a5 = v14;
    src = v9;
LABEL_21:
    memcpy(v9, a5, a6);
    v9 = src;
    goto LABEL_5;
  }
  if ( a6 == 1 )
  {
    LOBYTE(v19[0]) = *a5;
    goto LABEL_5;
  }
  if ( a6 )
    goto LABEL_21;
LABEL_5:
  n = a6;
  *((_BYTE *)v9 + a6) = 0;
  v7 = (__int8 *)dest;
  if ( src == v19 )
  {
    v11 = n;
    if ( n )
    {
      if ( n == 1 )
        *(_BYTE *)dest = v19[0];
      else
        memcpy(dest, src, n);
      v11 = n;
      v7 = (__int8 *)dest;
    }
    goto LABEL_10;
  }
  if ( dest == &v16.m128_u16[4] )
  {
    v14 = (_BYTE *)v19[0];
    dest = src;
    v16 = _mm_loadh_ps((const double *)&v14);
  }
  else
  {
    v14 = (_BYTE *)v19[0];
    v10 = v16.m128_u64[1];
    dest = src;
    v16 = _mm_loadh_ps((const double *)&v14);
    if ( v7 )
    {
      src = v7;
      v19[0] = v10;
      goto LABEL_11;
    }
  }
  v7 = (__int8 *)v19;
  src = v19;
LABEL_11:
  n = 0;
  *v7 = 0;
  if ( src != v19 )
    operator delete(src);
  sub_208B960(*(__m128 **)(a1 + 120), (__int64 *)&dest);
  v12 = *(_QWORD *)(a1 + 160) == 0;
  *(_WORD *)(a1 + 12) = a2;
  if ( v12 )
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(__int64, void **))(a1 + 168))(a1 + 144, &dest);
  if ( dest != &v16.m128_u16[4] )
    operator delete(dest);
  return 0;
}
