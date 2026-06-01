__int64 __fastcall sub_221DBA0(__int64 a1, int a2, __int64 a3, __int64 a4, _BYTE *a5, __int64 a6)
{
  bool v7; // zf
  __int64 v8; // rax
  __int8 *v9; // rdi
  unsigned __int64 v10; // rdx
  int v11; // eax
  int *v12; // rsi
  size_t v14; // rdx
  double v15; // [rsp+0h] [rbp-78h] BYREF
  int v16; // [rsp+Ch] [rbp-6Ch] BYREF
  void *dest; // [rsp+10h] [rbp-68h] BYREF
  __m128 v18; // [rsp+18h] [rbp-60h] BYREF
  void *src; // [rsp+30h] [rbp-48h] BYREF
  size_t n; // [rsp+38h] [rbp-40h]
  _QWORD v21[7]; // [rsp+40h] [rbp-38h] BYREF

  v7 = *(_BYTE *)(a1 + 152) == 0;
  v16 = a2;
  v18.m128_i8[8] = 0;
  dest = &v18.m128_u16[4];
  v18.m128_u64[0] = 0;
  if ( !v7 )
  {
    v8 = *(_QWORD *)(a1 + 160);
    if ( v8 != *(_QWORD *)(a1 + 168) )
      *(_QWORD *)(a1 + 168) = v8;
    *(_BYTE *)(a1 + 152) = 0;
  }
  if ( !a5 )
  {
    LOBYTE(v21[0]) = 0;
    v9 = &v18.m128_i8[8];
    v14 = 0;
    src = v21;
LABEL_21:
    v18.m128_u64[0] = v14;
    v9[v14] = 0;
    v9 = (__int8 *)src;
    goto LABEL_10;
  }
  src = v21;
  sub_221A510(&src, a5, (__int64)&a5[a6]);
  v9 = (__int8 *)dest;
  if ( src == v21 )
  {
    v14 = n;
    if ( n )
    {
      if ( n == 1 )
        *(_BYTE *)dest = v21[0];
      else
        memcpy(dest, src, n);
      v14 = n;
      v9 = (__int8 *)dest;
    }
    goto LABEL_21;
  }
  if ( dest == &v18.m128_u16[4] )
  {
    v15 = *(double *)v21;
    dest = src;
    v18 = _mm_loadh_ps(&v15);
  }
  else
  {
    v15 = *(double *)v21;
    v10 = v18.m128_u64[1];
    dest = src;
    v18 = _mm_loadh_ps(&v15);
    if ( v9 )
    {
      src = v9;
      v21[0] = v10;
      goto LABEL_10;
    }
  }
  v9 = (__int8 *)v21;
  src = v21;
LABEL_10:
  n = 0;
  *v9 = 0;
  if ( src != v21 )
    operator delete(src);
  sub_221CAB0(*(_QWORD *)(a1 + 120), &dest);
  v11 = v16;
  v12 = *(int **)(a1 + 168);
  *(_WORD *)(a1 + 12) = v16;
  if ( v12 == *(int **)(a1 + 176) )
  {
    sub_9A8F30(a1 + 160, v12, &v16);
  }
  else
  {
    *v12 = v11;
    *(_QWORD *)(a1 + 168) = v12 + 1;
  }
  if ( !*(_QWORD *)(a1 + 208) )
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(__int64, void **))(a1 + 216))(a1 + 192, &dest);
  if ( dest != &v18.m128_u16[4] )
    operator delete(dest);
  return 0;
}
