void __fastcall sub_2237C50(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v4; // r13
  bool v5; // cf
  unsigned int v6; // eax
  __int64 v7; // rbp
  __m128i v8; // xmm0
  _OWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  size_t v12; // rdx
  unsigned __int64 v13; // r14
  __m128i *v14; // rbx
  __int64 v15; // rdx
  _BYTE *v16; // rax
  __m128i *v17; // rax
  __m128i *v18; // rdi
  size_t v19; // rdx
  _BYTE *v20; // rdi
  __int64 v21; // r8
  unsigned __int64 v22; // rax
  size_t v23; // rbp
  size_t v24; // r14
  size_t v25; // rdx
  unsigned int v26; // eax
  __int64 v27; // rbx
  __m128i v28; // xmm3
  size_t v29; // rdx
  __int64 v30; // rdi
  __int64 v31; // rbp
  __int64 v32; // [rsp+0h] [rbp-78h] BYREF
  _BYTE *v33; // [rsp+8h] [rbp-70h]
  __m128i v34; // [rsp+10h] [rbp-68h] BYREF
  void *v35; // [rsp+20h] [rbp-58h]
  size_t v36; // [rsp+28h] [rbp-50h]
  _OWORD src[4]; // [rsp+30h] [rbp-48h] BYREF

  if ( a1 == a2 )
    return;
  v2 = a1 + 48;
  if ( a2 == a1 + 48 )
    return;
  v33 = (_BYTE *)(a1 + 32);
  v4 = a1 + ((a2 - 96 - a1) & 0xFFFFFFFFFFFFFFF0LL) + 96;
  do
  {
    v5 = *(_QWORD *)v2 < *(_QWORD *)a1;
    if ( *(_QWORD *)v2 != *(_QWORD *)a1
      || (v22 = *(_QWORD *)(a1 + 8), v5 = *(_QWORD *)(v2 + 8) < v22, *(_QWORD *)(v2 + 8) != v22) )
    {
      LOBYTE(v6) = v5;
      goto LABEL_6;
    }
    v23 = *(_QWORD *)(v2 + 24);
    v24 = *(_QWORD *)(a1 + 24);
    v25 = v24;
    if ( v23 <= v24 )
      v25 = *(_QWORD *)(v2 + 24);
    if ( v25 )
    {
      v26 = memcmp(*(const void **)(v2 + 16), *(const void **)(a1 + 16), v25);
      if ( v26 )
      {
        v6 = v26 >> 31;
        goto LABEL_6;
      }
    }
    v31 = v23 - v24;
    if ( v31 > 0x7FFFFFFF )
    {
      v7 = v2 + 48;
LABEL_32:
      sub_2237950(v2);
      goto LABEL_29;
    }
    if ( v31 >= (__int64)0xFFFFFFFF80000000LL )
    {
      LOBYTE(v6) = (int)v31 < 0;
LABEL_6:
      v7 = v2 + 48;
      if ( !(_BYTE)v6 )
        goto LABEL_32;
      goto LABEL_7;
    }
    v7 = v2 + 48;
LABEL_7:
    v8 = _mm_loadu_si128((const __m128i *)(v7 - 48));
    v9 = *(_OWORD **)(v7 - 32);
    v35 = src;
    v34 = v8;
    if ( v9 == (_OWORD *)(v7 - 16) )
    {
      v27 = v2 - a1;
      v28 = _mm_loadu_si128((const __m128i *)(v7 - 16));
      v12 = *(_QWORD *)(v7 - 24);
      *(_QWORD *)(v7 - 24) = 0;
      src[0] = v28;
      v36 = v12;
      v13 = 0xAAAAAAAAAAAAAAABLL * (v27 >> 4);
      *(_BYTE *)(v7 - 16) = 0;
      if ( v27 <= 0 )
      {
        v20 = *(_BYTE **)(a1 + 16);
        *(__m128i *)a1 = v8;
        goto LABEL_42;
      }
    }
    else
    {
      v10 = *(_QWORD *)(v7 - 16);
      v11 = v2 - a1;
      v35 = v9;
      *(_QWORD *)(v7 - 32) = v7 - 16;
      *(_QWORD *)&src[0] = v10;
      v12 = *(_QWORD *)(v7 - 24);
      *(_QWORD *)(v7 - 24) = 0;
      v13 = 0xAAAAAAAAAAAAAAABLL * (v11 >> 4);
      v36 = v12;
      *(_BYTE *)(v7 - 16) = 0;
      if ( v11 <= 0 )
        goto LABEL_23;
    }
    v14 = (__m128i *)(v7 - 64);
    do
    {
      v17 = (__m128i *)v14[-1].m128i_i64[0];
      v18 = (__m128i *)v14[2].m128i_i64[0];
      v14[1] = _mm_loadu_si128(v14 - 2);
      if ( v17 == v14 )
      {
        v19 = v14[-1].m128i_u64[1];
        if ( v19 )
        {
          if ( v19 == 1 )
            v18->m128i_i8[0] = v14->m128i_i8[0];
          else
            memcpy(v18, v14, v19);
          v18 = (__m128i *)v14[2].m128i_i64[0];
          v19 = v14[-1].m128i_u64[1];
        }
        v14[2].m128i_i64[1] = v19;
        v18->m128i_i8[v19] = 0;
      }
      else
      {
        if ( v18 == &v14[3] )
        {
          v14[2].m128i_i64[0] = (__int64)v17;
          v14[2].m128i_i64[1] = v14[-1].m128i_i64[1];
          v14[3].m128i_i64[0] = v14->m128i_i64[0];
        }
        else
        {
          v14[2].m128i_i64[0] = (__int64)v17;
          v15 = v14[3].m128i_i64[0];
          v14[2].m128i_i64[1] = v14[-1].m128i_i64[1];
          v14[3].m128i_i64[0] = v14->m128i_i64[0];
          if ( v18 )
          {
            v14[-1].m128i_i64[0] = (__int64)v18;
            v14->m128i_i64[0] = v15;
            goto LABEL_13;
          }
        }
        v14[-1].m128i_i64[0] = (__int64)v14;
      }
LABEL_13:
      v16 = (_BYTE *)v14[-1].m128i_i64[0];
      v14[-1].m128i_i64[1] = 0;
      v14 -= 3;
      *v16 = 0;
      --v13;
    }
    while ( v13 );
    v12 = v36;
    v9 = v35;
LABEL_23:
    v20 = *(_BYTE **)(a1 + 16);
    *(__m128i *)a1 = _mm_load_si128(&v34);
    if ( v9 != src )
    {
      if ( v20 == v33 )
      {
        v32 = *(_QWORD *)&src[0];
        *(_QWORD *)(a1 + 16) = v9;
        *(__m128 *)(a1 + 24) = _mm_loadh_ps((const double *)&v32);
      }
      else
      {
        v32 = *(_QWORD *)&src[0];
        v21 = *(_QWORD *)(a1 + 32);
        *(_QWORD *)(a1 + 16) = v9;
        *(__m128 *)(a1 + 24) = _mm_loadh_ps((const double *)&v32);
        if ( v20 )
        {
          v35 = v20;
          *(_QWORD *)&src[0] = v21;
          goto LABEL_27;
        }
      }
      v35 = src;
      v20 = src;
      goto LABEL_27;
    }
LABEL_42:
    if ( v12 )
    {
      if ( v12 == 1 )
      {
        *v20 = src[0];
        v29 = v36;
        v30 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 24) = v36;
        *(_BYTE *)(v30 + v29) = 0;
        v20 = v35;
        goto LABEL_27;
      }
      memcpy(v20, src, v12);
      v12 = v36;
      v20 = *(_BYTE **)(a1 + 16);
    }
    *(_QWORD *)(a1 + 24) = v12;
    v20[v12] = 0;
    v20 = v35;
LABEL_27:
    v36 = 0;
    *v20 = 0;
    if ( v35 != src )
      operator delete(v35);
LABEL_29:
    v2 = v7;
  }
  while ( v7 != v4 );
}
