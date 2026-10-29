__int64 __fastcall sub_1085F90(__int64 a1, __int64 a2, unsigned __int8 **a3)
{
  _BYTE *v3; // r15
  unsigned __int8 *v6; // rsi
  unsigned __int8 v7; // al
  _BYTE *v8; // rax
  _WORD *v10; // rbp
  size_t v11; // r9
  size_t v12; // r10
  __m128i *v13; // rax
  _BYTE *v14; // rdi
  __int64 v15; // rdx
  size_t v16; // rdx
  _QWORD *v17; // [rsp+0h] [rbp-A8h] BYREF
  size_t v18; // [rsp+8h] [rbp-A0h]
  void *v19; // [rsp+10h] [rbp-98h] BYREF
  __int64 v20; // [rsp+18h] [rbp-90h]
  _WORD v21[8]; // [rsp+20h] [rbp-88h] BYREF
  void *src; // [rsp+30h] [rbp-78h] BYREF
  size_t n; // [rsp+38h] [rbp-70h]
  _QWORD v24[2]; // [rsp+40h] [rbp-68h] BYREF
  void *v25; // [rsp+50h] [rbp-58h]
  size_t v26; // [rsp+58h] [rbp-50h]
  _OWORD v27[4]; // [rsp+60h] [rbp-48h] BYREF

  v3 = (_BYTE *)(a1 + 16);
  *(_QWORD *)a1 = a1 + 16;
  *(_BYTE *)(a1 + 16) = 0;
  v6 = *a3;
  *(_QWORD *)(a1 + 8) = 0;
  v7 = *v6;
  if ( *v6 != 99 && v7 != 118 )
  {
    if ( v7 == 112 )
    {
      v25 = v27;
      LOWORD(v27[0]) = 114;
      v7 = 114;
    }
    else
    {
      LOWORD(v27[0]) = v7;
      v25 = v27;
    }
    *(_BYTE *)(a1 + 16) = v7;
    v8 = v25;
    *(_QWORD *)(a1 + 8) = 1;
    *(_BYTE *)(a1 + 17) = 0;
    v26 = 0;
    *v8 = 0;
    if ( v25 != v27 )
      operator delete(v25);
    return a1;
  }
  src = v24;
  v10 = v21;
  v17 = v24;
  sub_1081240(&src, v6, (__int64)(v6 + 2));
  v11 = n;
  v19 = v21;
  v20 = 1;
  v12 = n + 1;
  v21[0] = 94;
  if ( n + 1 <= 0xF )
  {
    if ( n )
    {
      if ( n == 1 )
      {
        HIBYTE(v21[0]) = *(_BYTE *)src;
      }
      else
      {
        v18 = n + 1;
        v17 = (_QWORD *)n;
        memcpy((char *)v21 + 1, src, n);
        v12 = v18;
        v11 = (size_t)v17;
      }
    }
    goto LABEL_12;
  }
  if ( src == v17 || v12 > v24[0] )
  {
    v18 = n + 1;
    v17 = (_QWORD *)n;
    sub_974DF0((__int64)&v19, 1u, 0, src, n);
    v10 = v19;
    v11 = (size_t)v17;
    v12 = v18;
LABEL_12:
    v20 = v12;
    v13 = (__m128i *)&v19;
    *((_BYTE *)v10 + v11 + 1) = 0;
    goto LABEL_13;
  }
  v13 = (__m128i *)sub_978080(&src, 0, 0, v21, 1u);
LABEL_13:
  v25 = v27;
  if ( (__m128i *)v13->m128i_i64[0] == &v13[1] )
  {
    v27[0] = _mm_loadu_si128(v13 + 1);
  }
  else
  {
    v25 = (void *)v13->m128i_i64[0];
    *(_QWORD *)&v27[0] = v13[1].m128i_i64[0];
  }
  v26 = v13->m128i_u64[1];
  v13->m128i_i64[0] = (__int64)v13[1].m128i_i64;
  v13->m128i_i64[1] = 0;
  v13[1].m128i_i8[0] = 0;
  v14 = *(_BYTE **)a1;
  if ( v25 == v27 )
  {
    v16 = v26;
    if ( v26 )
    {
      if ( v26 == 1 )
        *v14 = v27[0];
      else
        memcpy(v14, v25, v26);
      v16 = v26;
      v14 = *(_BYTE **)a1;
    }
    *(_QWORD *)(a1 + 8) = v16;
    v14[v16] = 0;
    v14 = v25;
    goto LABEL_19;
  }
  if ( v3 == v14 )
  {
    v17 = *(_QWORD **)&v27[0];
    *(_QWORD *)a1 = v25;
    *(__m128 *)(a1 + 8) = _mm_loadh_ps((const double *)&v17);
    goto LABEL_38;
  }
  v17 = *(_QWORD **)&v27[0];
  v15 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)a1 = v25;
  *(__m128 *)(a1 + 8) = _mm_loadh_ps((const double *)&v17);
  if ( !v14 )
  {
LABEL_38:
    v14 = v27;
    v25 = v27;
    goto LABEL_19;
  }
  v25 = v14;
  *(_QWORD *)&v27[0] = v15;
LABEL_19:
  v26 = 0;
  *v14 = 0;
  if ( v25 != v27 )
    operator delete(v25);
  if ( v19 != v21 )
    operator delete(v19);
  if ( src != v24 )
    operator delete(src);
  ++*a3;
  return a1;
}

