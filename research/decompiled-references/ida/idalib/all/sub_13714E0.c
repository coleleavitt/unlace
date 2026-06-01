void __fastcall sub_13714E0(_QWORD *a1)
{
  _QWORD *v1; // rax
  int v2; // edx
  __int64 v4; // rbp
  _QWORD *v5; // rdx
  __int64 i; // rax
  unsigned __int64 v7; // rax
  _BYTE *v8; // rsi
  __int64 v9; // rdx
  __int8 *v10; // rdi
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  _BYTE *v13; // rdi
  unsigned __int64 v14; // rcx
  size_t v15; // rdx
  __int64 v16; // [rsp+0h] [rbp-D0h]
  __int64 v17; // [rsp+8h] [rbp-C8h]
  __int64 v18; // [rsp+20h] [rbp-B0h] BYREF
  void *dest; // [rsp+28h] [rbp-A8h] BYREF
  __m128 v20; // [rsp+30h] [rbp-A0h] BYREF
  void *v21; // [rsp+48h] [rbp-88h] BYREF
  size_t n; // [rsp+50h] [rbp-80h]
  _QWORD src[2]; // [rsp+58h] [rbp-78h] BYREF
  __int16 v24; // [rsp+68h] [rbp-68h] BYREF
  __m128i *v25; // [rsp+70h] [rbp-60h]
  unsigned __int64 v26; // [rsp+78h] [rbp-58h]
  __m128i si128; // [rsp+80h] [rbp-50h] BYREF

  v1 = (_QWORD *)*a1;
  v2 = *(_DWORD *)(*a1 + 8LL);
  if ( v2 )
  {
    v4 = 0;
    v16 = 8LL * (unsigned int)(v2 - 1);
    while ( 1 )
    {
      v5 = *(_QWORD **)(*v1 + v4);
      v17 = a1[1];
      for ( i = v5[1]; i; i = *(_QWORD *)(v7 + 8) )
      {
        if ( (i & 4) == 0 )
          break;
        v7 = i & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v7 )
          break;
        v5 = (_QWORD *)v7;
      }
      v8 = v5 + 4;
      if ( v5 == (_QWORD *)-32LL )
      {
        dest = &v20.m128_u16[4];
        v11 = 0;
        v10 = &v20.m128_i8[8];
        v20.m128_u64[0] = 0;
        v20.m128_i8[8] = 0;
      }
      else
      {
        v9 = *v5;
        dest = &v20.m128_u16[4];
        sub_1371340(&dest, v8, (__int64)&v8[v9]);
        v10 = (__int8 *)dest;
        v11 = v20.m128_u64[0];
      }
      v24 = 6;
      if ( !(unsigned __int8)sub_22296D0(v10, v11, 0) )
        break;
LABEL_10:
      v25 = &si128;
      if ( dest == &v20.m128_u16[4] )
      {
        si128 = _mm_load_si128((const __m128i *)&v20.m128_u16[4]);
      }
      else
      {
        v25 = (__m128i *)dest;
        si128.m128i_i64[0] = v20.m128_i64[1];
      }
      v12 = v20.m128_u64[0];
      dest = &v20.m128_u16[4];
      v20.m128_u64[0] = 0;
      v26 = v12;
      v20.m128_i8[8] = 0;
      sub_222CAC0(v17, &v24);
      sub_222B2A0(&v24);
      if ( dest == &v20.m128_u16[4] )
      {
        if ( v4 == v16 )
          return;
      }
      else
      {
        operator delete(dest);
        if ( v4 == v16 )
          return;
      }
      v1 = (_QWORD *)*a1;
      v4 += 8;
    }
    sub_222A8E0(&v21, dest, v20.m128_u64[0]);
    v13 = dest;
    if ( v21 == src )
    {
      v15 = n;
      if ( n )
      {
        if ( n == 1 )
          *(_BYTE *)dest = src[0];
        else
          memcpy(dest, src, n);
        v15 = n;
        v13 = dest;
      }
      v20.m128_u64[0] = v15;
      v13[v15] = 0;
      v13 = v21;
      goto LABEL_23;
    }
    if ( dest == &v20.m128_u16[4] )
    {
      v18 = src[0];
      dest = v21;
      v20 = _mm_loadh_ps((const double *)&v18);
    }
    else
    {
      v18 = src[0];
      v14 = v20.m128_u64[1];
      dest = v21;
      v20 = _mm_loadh_ps((const double *)&v18);
      if ( v13 )
      {
        v21 = v13;
        src[0] = v14;
        goto LABEL_23;
      }
    }
    v21 = src;
    v13 = src;
LABEL_23:
    n = 0;
    *v13 = 0;
    if ( v21 != src )
      operator delete(v21);
    goto LABEL_10;
  }
}
