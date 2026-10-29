__int64 __fastcall sub_1FF29B0(__int64 a1, int a2, __int64 a3, __int64 a4, _BYTE *a5, signed __int64 a6)
{
  bool v9; // zf
  __int64 v10; // rax
  double v11; // rax
  void **v12; // r14
  void **v13; // rbp
  _QWORD *v14; // rax
  _BYTE *v15; // rdi
  unsigned __int64 v16; // rdx
  size_t v17; // rdx
  _QWORD *v18; // rdi
  int v19; // eax
  int *v20; // rsi
  double v22; // [rsp+0h] [rbp-88h] BYREF
  int v23; // [rsp+Ch] [rbp-7Ch] BYREF
  void *dest; // [rsp+10h] [rbp-78h] BYREF
  __m128 v25; // [rsp+18h] [rbp-70h] BYREF
  void *src; // [rsp+30h] [rbp-58h]
  size_t n; // [rsp+38h] [rbp-50h]
  _QWORD v28[9]; // [rsp+40h] [rbp-48h] BYREF

  v9 = *(_BYTE *)(a1 + 168) == 0;
  v23 = a2;
  v25.m128_i8[8] = 0;
  dest = &v25.m128_u16[4];
  v25.m128_u64[0] = 0;
  if ( !v9 )
  {
    v10 = *(_QWORD *)(a1 + 176);
    if ( v10 != *(_QWORD *)(a1 + 184) )
      *(_QWORD *)(a1 + 184) = v10;
    v11 = *(double *)(a1 + 120);
    v12 = *(void ***)(a1 + 128);
    v22 = v11;
    if ( *(void ***)&v11 != v12 )
    {
      v13 = *(void ***)&v11;
      do
      {
        while ( *v13 != v13 + 2 )
        {
          operator delete(*v13);
          v13 += 4;
          if ( v12 == v13 )
            goto LABEL_8;
        }
        v13 += 4;
      }
      while ( v12 != v13 );
LABEL_8:
      *(double *)(a1 + 128) = v22;
    }
    *(_BYTE *)(a1 + 168) = 0;
  }
  v14 = v28;
  src = v28;
  if ( !a5 )
  {
    LOBYTE(v28[0]) = 0;
    v15 = dest;
    v17 = 0;
LABEL_21:
    v25.m128_u64[0] = v17;
    v15[v17] = 0;
    v15 = src;
    goto LABEL_22;
  }
  if ( (unsigned __int64)a6 > 0xF )
  {
    if ( a6 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v14 = (_QWORD *)operator new(a6 + 1);
    v28[0] = a6;
    src = v14;
LABEL_36:
    memcpy(v14, a5, a6);
    v14 = src;
    goto LABEL_14;
  }
  if ( a6 == 1 )
  {
    LOBYTE(v28[0]) = *a5;
    goto LABEL_14;
  }
  if ( a6 )
    goto LABEL_36;
LABEL_14:
  n = a6;
  *((_BYTE *)v14 + a6) = 0;
  v15 = dest;
  if ( src == v28 )
  {
    v17 = n;
    if ( n )
    {
      if ( n == 1 )
        *(_BYTE *)dest = v28[0];
      else
        memcpy(dest, src, n);
      v17 = n;
      v15 = dest;
    }
    goto LABEL_21;
  }
  if ( dest == &v25.m128_u16[4] )
  {
    v22 = *(double *)v28;
    dest = src;
    v25 = _mm_loadh_ps(&v22);
  }
  else
  {
    v22 = *(double *)v28;
    v16 = v25.m128_u64[1];
    dest = src;
    v25 = _mm_loadh_ps(&v22);
    if ( v15 )
    {
      src = v15;
      v28[0] = v16;
      goto LABEL_22;
    }
  }
  v15 = v28;
  src = v28;
LABEL_22:
  n = 0;
  *v15 = 0;
  if ( src != v28 )
    operator delete(src);
  v18 = *(_QWORD **)(a1 + 128);
  if ( v18 == *(_QWORD **)(a1 + 136) )
  {
    sub_10BCB90((void ***)(a1 + 120), *(const __m128i **)(a1 + 128), (__int64)&dest);
  }
  else
  {
    *v18 = v18 + 2;
    sub_1FF28F0(v18, dest, (__int64)dest + v25.m128_u64[0]);
    *(_QWORD *)(a1 + 128) += 32LL;
  }
  v19 = v23;
  v20 = *(int **)(a1 + 184);
  *(_WORD *)(a1 + 12) = v23;
  if ( v20 == *(int **)(a1 + 192) )
  {
    sub_9A8F30(a1 + 176, v20, &v23);
  }
  else
  {
    *v20 = v19;
    *(_QWORD *)(a1 + 184) = v20 + 1;
  }
  if ( !*(_QWORD *)(a1 + 224) )
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(__int64, void **))(a1 + 232))(a1 + 208, &dest);
  if ( dest != &v25.m128_u16[4] )
    operator delete(dest);
  return 0;
}
