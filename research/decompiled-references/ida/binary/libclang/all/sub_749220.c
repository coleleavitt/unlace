__int64 __fastcall sub_749220(
        __m128i *a1,
        __int64 a2,
        const __m128i *a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        unsigned __int32 a7,
        _QWORD *src,
        unsigned __int32 a9,
        __int64 a10,
        unsigned __int32 a11)
{
  __int8 v13; // al
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  unsigned __int64 v16; // rax
  __int64 v17; // r13
  unsigned __int64 v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rdx
  __int64 v21; // rdx
  _QWORD *v22; // rdi
  size_t v23; // rdx
  _QWORD *v24; // rdi
  size_t v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // rbp
  __int64 v29; // r13
  __int64 result; // rax
  __int64 v31; // rdx
  size_t v32; // r12
  __int64 *v33; // rdi
  __int64 *v34; // rsi
  __int64 v35; // rdx
  unsigned __int64 v36; // rdx
  int v37; // r14d
  __int64 *v38; // rdi
  __int64 *v39; // rsi

  v13 = a1[2].m128i_i8[2];
  v14 = _mm_loadu_si128(a3);
  a1[2].m128i_i16[0] = 288;
  *a1 = v14;
  v15 = _mm_loadu_si128(a3 + 1);
  a1[2].m128i_i64[1] = a4;
  a1[3].m128i_i64[0] = a5;
  a1[3].m128i_i32[2] = a7;
  a1[2].m128i_i8[2] = v13 & 0xE0 | 0x10;
  a1[1] = v15;
  v16 = sub_722290(a2 + 2192, 8LL * a7, 4);
  a1[4].m128i_i32[2] = a9;
  a1[4].m128i_i64[0] = v16;
  v17 = 7LL * a11;
  v18 = sub_722290(a2 + 2192, 8LL * a9, 4);
  a1[5].m128i_i32[2] = a11;
  a1[5].m128i_i64[0] = v18;
  v19 = (_QWORD *)sub_722290(a2 + 2192, v17 * 8 + 8, 4);
  *v19 = a11;
  if ( a11 )
  {
    v20 = v19 + 4;
    do
    {
      *(v20 - 2) = v20;
      v20 += 7;
      *((_WORD *)v20 - 40) = 0;
      *(v20 - 8) = 0x400000000LL;
    }
    while ( &v19[v17 + 4] != v20 );
  }
  v21 = a1[3].m128i_u32[2];
  v22 = (_QWORD *)a1[4].m128i_i64[0];
  a1[6].m128i_i64[0] = (__int64)(v19 + 1);
  v23 = 8 * v21;
  if ( v23 <= 8 )
  {
    if ( v23 == 8 )
      *v22 = *a6;
  }
  else
  {
    memmove(v22, a6, v23);
  }
  v24 = (_QWORD *)a1[5].m128i_i64[0];
  v25 = 8LL * a1[4].m128i_u32[2];
  if ( v25 <= 8 )
  {
    if ( v25 == 8 )
      *v24 = *src;
  }
  else
  {
    memmove(v24, src, v25);
  }
  v26 = a1[5].m128i_u32[2];
  v27 = a1[6].m128i_i64[0] + 8;
  v28 = a10 + 8;
  v29 = v26;
  result = 56 * v26;
  if ( 56 * v26 )
  {
    do
    {
      *(_BYTE *)(v27 - 8) = *(_BYTE *)(v28 - 8);
      result = *(unsigned __int8 *)(v28 - 7);
      *(_BYTE *)(v27 - 7) = result;
      if ( v28 == v27 )
        goto LABEL_17;
      v36 = *(unsigned int *)(v28 + 8);
      v32 = *(unsigned int *)(v27 + 8);
      v37 = *(_DWORD *)(v28 + 8);
      if ( v32 >= v36 )
      {
        if ( *(_DWORD *)(v28 + 8) )
        {
          v38 = *(__int64 **)v27;
          v39 = *(__int64 **)v28;
          if ( v36 == 1 )
          {
            result = *v39;
            *v38 = *v39;
          }
          else
          {
            result = (__int64)memmove(v38, v39, 8 * v36);
          }
        }
        goto LABEL_16;
      }
      if ( *(unsigned int *)(v27 + 12) < v36 )
      {
        v32 = 0;
        *(_DWORD *)(v27 + 8) = 0;
        result = sub_25D6060(v27, v27 + 16, v36, 8);
        v35 = *(unsigned int *)(v28 + 8);
      }
      else
      {
        v31 = 8 * v36;
        if ( !*(_DWORD *)(v27 + 8) )
          goto LABEL_23;
        v32 *= 8LL;
        v33 = *(__int64 **)v27;
        v34 = *(__int64 **)v28;
        if ( v32 == 8 )
        {
          result = *v34;
          *v33 = *v34;
        }
        else
        {
          result = (__int64)memmove(v33, v34, v32);
        }
        v35 = *(unsigned int *)(v28 + 8);
      }
      v31 = 8 * v35;
      if ( v31 != v32 )
LABEL_23:
        result = (__int64)memcpy((void *)(v32 + *(_QWORD *)v27), (const void *)(v32 + *(_QWORD *)v28), v31 - v32);
LABEL_16:
      *(_DWORD *)(v27 + 8) = v37;
LABEL_17:
      v28 += 56;
      v27 += 56;
      --v29;
    }
    while ( v29 );
  }
  return result;
}

