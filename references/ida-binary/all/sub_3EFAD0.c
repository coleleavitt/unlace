__int64 __fastcall sub_3EFAD0(__int64 a1, __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __m128i *v8; // r12
  __int64 v10; // r14
  __int64 v11; // rax
  __int32 v12; // esi
  __int32 v13; // edi
  __m128i *v14; // rdx
  __int64 v15; // r10
  __int64 v16; // r9
  __int64 v17; // rax
  __m128i v18; // xmm0
  __int32 v19; // ecx
  int v20; // r8d
  __m128i v21; // xmm1
  __int64 v22; // rdx
  signed int v23; // edx
  signed int v24; // ecx
  __m128i *v25; // rsi
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdi
  __m128i *v28; // rax
  __m128i v29; // xmm0
  __m128i v30; // xmm2
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rbx
  const __m128i *v34; // r13
  __m128i v35; // xmm0
  __int64 v36; // rax
  __m128i *v37; // rax
  __m128i *v38; // r12
  __m128i v39; // xmm0
  __int64 v40; // rbx
  __int64 v41; // rax

  result = (__int64)a2->m128i_i64 - a1;
  if ( (__int64)a2->m128i_i64 - a1 <= 384 )
    return result;
  v8 = a2;
LABEL_3:
  v10 = 0xAAAAAAAAAAAAAAABLL * (result >> 3);
  v11 = v10 >> 1;
  if ( a3 )
  {
    v12 = *(_DWORD *)(a1 + 28);
    v13 = v8[-2].m128i_i32[3];
    --a3;
    v14 = (__m128i *)(a1 + 24 * v11);
    v15 = *(_QWORD *)(a1 + 8);
    v16 = *(_QWORD *)(a1 + 16);
    v17 = a1 + 24;
    v18 = _mm_loadl_epi64((const __m128i *)a1);
    v19 = v14->m128i_i32[1];
    v20 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v18, 229));
    if ( v12 >= v19 )
    {
      if ( v12 < v13 )
        goto LABEL_7;
      if ( v19 < v13 )
        goto LABEL_22;
    }
    else if ( v19 >= v13 )
    {
      if ( v12 >= v13 )
      {
LABEL_7:
        v21 = _mm_loadu_si128((const __m128i *)(a1 + 24));
        v22 = *(_QWORD *)(a1 + 40);
        *(_QWORD *)(a1 + 32) = v15;
        *(_QWORD *)(a1 + 40) = v16;
        *(_QWORD *)(a1 + 16) = v22;
        v23 = v20;
        *(__m128i *)a1 = v21;
        *(_QWORD *)(a1 + 24) = v18.m128i_i64[0];
        v20 = v8[-2].m128i_i32[3];
        goto LABEL_8;
      }
LABEL_22:
      *(__m128i *)a1 = _mm_loadu_si128((__m128i *)((char *)v8 - 24));
      *(_QWORD *)(a1 + 16) = v8[-1].m128i_i64[1];
      v8[-1].m128i_i64[0] = v15;
      v8[-1].m128i_i64[1] = v16;
      v8[-2].m128i_i64[1] = v18.m128i_i64[0];
      v23 = *(_DWORD *)(a1 + 28);
      goto LABEL_8;
    }
    *(__m128i *)a1 = _mm_loadu_si128(v14);
    *(_QWORD *)(a1 + 16) = v14[1].m128i_i64[0];
    v14->m128i_i64[1] = v15;
    v14[1].m128i_i64[0] = v16;
    v14->m128i_i64[0] = v18.m128i_i64[0];
    v23 = *(_DWORD *)(a1 + 28);
    v20 = v8[-2].m128i_i32[3];
LABEL_8:
    v24 = *(_DWORD *)(a1 + 4);
    v25 = v8;
    if ( v23 < v24 )
    {
LABEL_9:
      v26 = v17 + 24;
      do
      {
        v27 = v26;
        v23 = *(_DWORD *)(v26 + 4);
        v26 += 24LL;
      }
      while ( v23 < v24 );
      if ( v20 <= v24 )
        goto LABEL_17;
      goto LABEL_12;
    }
    while ( 1 )
    {
      v27 = v17;
      if ( v20 > v24 )
      {
LABEL_12:
        v28 = v25 - 3;
        do
        {
          v25 = v28;
          v28 = (__m128i *)((char *)v28 - 24);
        }
        while ( v28[1].m128i_i32[3] > v24 );
        if ( v27 >= (unsigned __int64)v25 )
        {
LABEL_18:
          sub_3EFAD0(v27, v8, a3);
          result = v27 - a1;
          if ( (__int64)(v27 - a1) <= 384 )
            return result;
          v8 = (__m128i *)v27;
          goto LABEL_3;
        }
      }
      else
      {
LABEL_17:
        v25 = (__m128i *)((char *)v25 - 24);
        if ( v27 >= (unsigned __int64)v25 )
          goto LABEL_18;
      }
      v29 = _mm_cvtsi32_si128(*(_DWORD *)v27);
      v30 = _mm_cvtsi32_si128(v23);
      v31 = *(_QWORD *)(v27 + 16);
      v32 = *(_QWORD *)(v27 + 8);
      *(__m128i *)v27 = _mm_loadu_si128(v25);
      *(_QWORD *)(v27 + 16) = v25[1].m128i_i64[0];
      v20 = v25[-2].m128i_i32[3];
      v25[1].m128i_i64[0] = v31;
      v17 = v27 + 24;
      v25->m128i_i64[1] = v32;
      v25->m128i_i64[0] = _mm_unpacklo_epi32(v29, v30).m128i_u64[0];
      v23 = *(_DWORD *)(v27 + 28);
      v24 = *(_DWORD *)(a1 + 4);
      if ( v23 < v24 )
        goto LABEL_9;
    }
  }
  v33 = v11 - 1;
  v34 = (const __m128i *)(a1 + 24 * (v11 - 1));
  while ( 1 )
  {
    v35 = _mm_loadu_si128(v34);
    v36 = v34[1].m128i_i64[0];
    v34 = (const __m128i *)((char *)v34 - 24);
    sub_3EE410(a1, v33, v10, a4, a5, a6, v35.m128i_i64[0], v35.m128i_i64[1], v36);
    if ( !v33 )
      break;
    --v33;
  }
  v37 = v8;
  v38 = (__m128i *)((char *)v8 - 24);
  result = (__int64)v37->m128i_i64 - a1;
  if ( result > 24 )
  {
    do
    {
      v39 = _mm_loadu_si128(v38);
      v40 = (__int64)v38->m128i_i64 - a1;
      v41 = v38[1].m128i_i64[0];
      *v38 = _mm_loadu_si128((const __m128i *)a1);
      v38 = (__m128i *)((char *)v38 - 24);
      v38[2].m128i_i64[1] = *(_QWORD *)(a1 + 16);
      result = sub_3EE410(a1, 0, 0xAAAAAAAAAAAAAAABLL * (v40 >> 3), a4, a5, a6, v39.m128i_i64[0], v39.m128i_i64[1], v41);
    }
    while ( v40 > 24 );
  }
  return result;
}
