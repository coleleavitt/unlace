__m128i *__fastcall sub_19F6080(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v8; // r10
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r9
  __m128i *result; // rax
  unsigned __int8 v14; // bl
  unsigned __int32 v15; // ebx
  bool v16; // zf
  __m128i *v17; // r8
  __int64 v18; // r11
  __int64 v19; // r8
  unsigned __int8 v20; // r9
  unsigned __int32 v21; // r10d
  unsigned __int32 v22; // r12d
  unsigned __int32 v23; // ebp
  unsigned __int32 v24; // ebx
  __m128i *v25; // rcx
  unsigned __int32 v26; // edx
  __m128i v27; // xmm2
  __int32 v28; // edx
  __int64 v29; // rdx
  const __m128i *v30; // roff
  __int64 v31; // rdx
  unsigned __int32 v32; // ebx
  unsigned __int32 v33; // ebp
  unsigned __int32 v34; // r9d
  __m128i v35; // [rsp+0h] [rbp-48h] BYREF
  __m128i v36; // [rsp+10h] [rbp-38h]

  v8 = (a3 - 1) / 2;
  if ( a2 >= v8 )
  {
    result = (__m128i *)(a1 + 32 * a2);
    if ( (a3 & 1) != 0 )
    {
      v18 = *((_QWORD *)&a8 + 1);
      v35 = _mm_loadu_si128((const __m128i *)&a7);
      v36 = _mm_loadu_si128((const __m128i *)&a8);
      goto LABEL_24;
    }
    v10 = a2;
    goto LABEL_27;
  }
  v9 = a2;
  do
  {
    v10 = 2 * (v9 + 1);
    v11 = (v9 + 1) << 6;
    v12 = a1 + v11 - 32;
    result = (__m128i *)(a1 + v11);
    v14 = *(_BYTE *)(v12 + 8);
    if ( (unsigned int)result->m128i_i8[8] < v14
      || result->m128i_i8[8] == v14
      && ((v15 = *(_DWORD *)(v12 + 12), result->m128i_i32[3] < v15)
       || result->m128i_i32[3] == v15
       && ((v16 = result->m128i_i32[0] == *(_DWORD *)v12, result->m128i_i32[0] < *(_DWORD *)v12)
        || (v32 = *(_DWORD *)(v12 + 4), v33 = result->m128i_u32[1], v34 = *(_DWORD *)(v12 + 16), v16)
        && (v33 < v32 || v33 == v32 && v34 > result[1].m128i_i32[0]))) )
    {
      --v10;
      result = (__m128i *)(a1 + 32 * v10);
    }
    v17 = (__m128i *)(a1 + 32 * v9);
    *v17 = _mm_loadu_si128(result);
    v17[1].m128i_i32[0] = result[1].m128i_i32[0];
    v17[1].m128i_i64[1] = result[1].m128i_i64[1];
    v9 = v10;
  }
  while ( v10 < v8 );
  if ( (a3 & 1) == 0 )
  {
LABEL_27:
    if ( (a3 - 2) / 2 == v10 )
    {
      v29 = v10 + 1;
      v10 = 2 * (v10 + 1) - 1;
      v30 = (const __m128i *)(a1 + (v29 << 6) - 32);
      *result = _mm_loadu_si128(v30);
      v31 = v30[1].m128i_i64[1];
      result[1].m128i_i32[0] = v30[1].m128i_i32[0];
      result[1].m128i_i64[1] = v31;
      result = (__m128i *)(a1 + 32 * v10);
    }
  }
  v18 = *((_QWORD *)&a8 + 1);
  v35 = _mm_loadu_si128((const __m128i *)&a7);
  v36 = _mm_loadu_si128((const __m128i *)&a8);
  v19 = (v10 - 1) / 2;
  if ( v10 > a2 )
  {
    v20 = v35.m128i_u8[8];
    v21 = v35.m128i_u32[3];
    v22 = v36.m128i_i32[0];
    v23 = v35.m128i_u32[1];
    v24 = v35.m128i_i32[0];
    while ( 1 )
    {
      result = (__m128i *)(a1 + 32 * v19);
      if ( (unsigned int)result->m128i_i8[8] >= v20 )
      {
        if ( result->m128i_i8[8] != v20 )
          break;
        if ( result->m128i_i32[3] >= v21 )
        {
          if ( result->m128i_i32[3] != v21 )
            break;
          if ( result->m128i_i32[0] >= v24 )
          {
            v26 = result->m128i_u32[1];
            if ( result->m128i_i32[0] != v24 || v26 >= v23 && (v26 != v23 || result[1].m128i_i32[0] >= v22) )
              break;
          }
        }
      }
      v25 = (__m128i *)(a1 + 32 * v10);
      *v25 = _mm_loadu_si128(result);
      v25[1].m128i_i32[0] = result[1].m128i_i32[0];
      v25[1].m128i_i64[1] = result[1].m128i_i64[1];
      v10 = v19;
      if ( a2 >= v19 )
        goto LABEL_24;
      v19 = (v19 - 1) / 2;
    }
    result = (__m128i *)(a1 + 32 * v10);
  }
LABEL_24:
  v27 = _mm_loadu_si128(&v35);
  v28 = v36.m128i_i32[0];
  result[1].m128i_i64[1] = v18;
  *result = v27;
  result[1].m128i_i32[0] = v28;
  return result;
}
