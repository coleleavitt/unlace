__int64 __fastcall sub_5FF9C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8,
        __int128 a9)
{
  __int32 v9; // r9d
  __int64 v10; // r8
  __int64 v12; // rbx
  __int64 v13; // r10
  __int64 v14; // rdx
  __int64 result; // rax
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __m128i v22; // xmm0
  __m128i v23; // [rsp+0h] [rbp-38h] BYREF
  __m128i v24; // [rsp+10h] [rbp-28h] BYREF
  __m128i v25; // [rsp+20h] [rbp-18h]

  v9 = a7;
  v10 = a2;
  v12 = a3 & 1;
  v13 = (a3 - 1) / 2;
  if ( a2 >= v13 )
  {
    result = a1 + 48 * a2;
    if ( (a3 & 1) != 0 )
    {
      v23 = _mm_loadu_si128((const __m128i *)&a7);
      v24 = _mm_loadu_si128((const __m128i *)&a8);
      v25 = _mm_loadu_si128((const __m128i *)&a9);
      goto LABEL_13;
    }
    v14 = a2;
    goto LABEL_16;
  }
  while ( 1 )
  {
    v14 = 2 * (a2 + 1);
    result = a1 + 96 * (a2 + 1);
    if ( *(_DWORD *)result - *(_DWORD *)(result - 48) < 0 )
    {
      --v14;
      result = a1 + 48 * v14;
    }
    v16 = a1 + 48 * a2;
    *(__m128i *)v16 = _mm_loadu_si128((const __m128i *)result);
    *(__m128i *)(v16 + 16) = _mm_loadu_si128((const __m128i *)(result + 16));
    *(__m128i *)(v16 + 28) = _mm_loadu_si128((const __m128i *)(result + 28));
    if ( v13 <= v14 )
      break;
    a2 = v14;
  }
  if ( !v12 )
  {
LABEL_16:
    if ( (a3 - 2) / 2 == v14 )
    {
      v19 = v14 + 1;
      v20 = 2 * v19;
      v21 = a1 + 96 * v19;
      *(__m128i *)result = _mm_loadu_si128((const __m128i *)(v21 - 48));
      *(__m128i *)(result + 16) = _mm_loadu_si128((const __m128i *)(v21 - 32));
      v22 = _mm_loadu_si128((const __m128i *)(v21 - 20));
      v14 = v20 - 1;
      *(__m128i *)(result + 28) = v22;
      result = a1 + 48 * (v20 - 1);
    }
  }
  v23 = _mm_loadu_si128((const __m128i *)&a7);
  v24 = _mm_loadu_si128((const __m128i *)&a8);
  v17 = (v14 - 1) / 2;
  v25 = _mm_loadu_si128((const __m128i *)&a9);
  if ( v14 > v10 )
  {
    while ( 1 )
    {
      v18 = a1 + 48 * v17;
      result = a1 + 48 * v14;
      if ( *(_DWORD *)v18 - v9 >= 0 )
        break;
      *(__m128i *)result = _mm_loadu_si128((const __m128i *)v18);
      *(__m128i *)(result + 16) = _mm_loadu_si128((const __m128i *)(v18 + 16));
      *(__m128i *)(result + 28) = _mm_loadu_si128((const __m128i *)(v18 + 28));
      v14 = v17;
      if ( v10 >= v17 )
      {
        result = a1 + 48 * v17;
        break;
      }
      v17 = (v17 - 1) / 2;
    }
  }
LABEL_13:
  v23.m128i_i32[0] = v9;
  *(__m128i *)result = _mm_load_si128(&v23);
  *(__m128i *)(result + 16) = _mm_load_si128(&v24);
  *(__m128i *)(result + 28) = _mm_loadu_si128((const __m128i *)((char *)&v24.m128i_u64[1] + 4));
  return result;
}

