__int64 __fastcall sub_FF8160(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        const __m128i a8)
{
  unsigned __int64 v8; // r10
  __int64 v9; // r9
  unsigned __int32 v10; // r11d
  __int64 v11; // rbx
  __int64 v12; // rcx
  __m128i v13; // xmm0
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 result; // rax
  unsigned __int64 v19; // r14
  __int64 v20; // rdx
  __m128i v21; // xmm2
  __m128i v22; // xmm1
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __m128i v28; // [rsp+0h] [rbp-48h] BYREF
  __m128i v29; // [rsp+10h] [rbp-38h]

  v8 = a8.m128i_u64[1];
  v9 = (a3 - 1) / 2;
  v10 = DWORD2(a7);
  v11 = a7;
  if ( a2 >= v9 )
  {
    v15 = a2;
    result = a1 + 32 * a2;
    if ( (a3 & 1) != 0 )
    {
      v28.m128i_i64[1] = _mm_loadu_si128((const __m128i *)&a7).m128i_i64[1];
      v29 = _mm_loadu_si128(&a8);
      goto LABEL_14;
    }
    goto LABEL_19;
  }
  v12 = a2;
  do
  {
    v15 = 2 * (v12 + 1);
    v16 = (v12 + 1) << 6;
    v17 = a1 + v16 - 32;
    result = a1 + v16;
    v19 = *(_QWORD *)(v17 + 24);
    if ( *(_QWORD *)(result + 24) <= v19 )
    {
      if ( *(_QWORD *)(result + 24) == v19 && *(_DWORD *)(result + 8) < *(_DWORD *)(v17 + 8) )
      {
        --v15;
        result = a1 + 32 * v15;
      }
    }
    else
    {
      --v15;
      result = a1 + 32 * v15;
    }
    v13 = _mm_loadu_si128((const __m128i *)(result + 8));
    v14 = a1 + 32 * v12;
    *(_QWORD *)v14 = *(_QWORD *)result;
    *(__m128i *)(v14 + 8) = v13;
    *(_QWORD *)(v14 + 24) = *(_QWORD *)(result + 24);
    v12 = v15;
  }
  while ( v15 < v9 );
  if ( (a3 & 1) == 0 )
  {
LABEL_19:
    if ( (a3 - 2) / 2 == v15 )
    {
      v24 = v15 + 1;
      v15 = 2 * (v15 + 1) - 1;
      v25 = a1 + (v24 << 6) - 32;
      v26 = *(_QWORD *)v25;
      *(__m128i *)(result + 8) = _mm_loadu_si128((const __m128i *)(v25 + 8));
      v27 = *(_QWORD *)(v25 + 24);
      *(_QWORD *)result = v26;
      *(_QWORD *)(result + 24) = v27;
      result = a1 + 32 * v15;
    }
  }
  v28.m128i_i64[1] = _mm_loadu_si128((const __m128i *)&a7).m128i_i64[1];
  v29 = _mm_loadu_si128(&a8);
  v20 = (v15 - 1) / 2;
  if ( v15 > a2 )
  {
    while ( 1 )
    {
      result = a1 + 32 * v20;
      if ( *(_QWORD *)(result + 24) <= v8 && (*(_QWORD *)(result + 24) != v8 || *(_DWORD *)(result + 8) >= v10) )
        break;
      v22 = _mm_loadu_si128((const __m128i *)(result + 8));
      v23 = a1 + 32 * v15;
      *(_QWORD *)v23 = *(_QWORD *)result;
      *(__m128i *)(v23 + 8) = v22;
      *(_QWORD *)(v23 + 24) = *(_QWORD *)(result + 24);
      v15 = v20;
      if ( a2 >= v20 )
        goto LABEL_14;
      v20 = (v20 - 1) / 2;
    }
    result = a1 + 32 * v15;
  }
LABEL_14:
  v28.m128i_i32[2] = v10;
  v21 = _mm_loadu_si128((const __m128i *)&v28.m128i_u64[1]);
  *(_QWORD *)result = v11;
  *(__m128i *)(result + 8) = v21;
  *(_QWORD *)(result + 24) = v8;
  return result;
}

