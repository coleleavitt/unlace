__int64 __fastcall sub_43A670(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        double a4,
        double a5,
        __m128 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int128 a10,
        __int64 a11)
{
  __int64 result; // rax
  __m128 v14; // xmm1
  __int64 v15; // r14
  __int64 v16; // rbp
  __int64 v17; // rbx
  unsigned __int64 v18; // xmm2_8
  __int64 v19; // rdx
  _BYTE *v20; // rcx
  __int64 v21; // r9
  __int64 v22; // r10
  __int64 v23; // rdi
  __int64 v24; // rbx
  __m128i *v25; // rsi
  _BYTE *v26; // rcx
  _BYTE *v27; // rax
  _BYTE *v28; // rdx
  __int64 v29; // rbp
  __m128i *v30; // rax
  __int64 v31; // r9
  __int64 v32; // rbp
  __int64 v33; // r13
  _BYTE *v34; // r12
  _BYTE *v35; // r11
  _BYTE *v36; // r9
  _BYTE *v37; // r10
  __int64 v38; // rdi
  __m128i *v39; // rdi
  const __m128i *v40; // r10
  __int64 v41; // [rsp+10h] [rbp-50h]
  __int64 v42; // [rsp+18h] [rbp-48h]

  result = a2;
  v14 = (__m128)_mm_loadu_si128((const __m128i *)&a10);
  v15 = (a3 - 1) / 2;
  v16 = a3 & 1;
  v17 = a11;
  v18 = _mm_movehl_ps(a6, v14).m128_u64[0];
  v19 = v14.m128_u64[0];
  v20 = (_BYTE *)v18;
  if ( a2 >= v15 )
  {
    v25 = (__m128i *)(a1 + 24 * a2);
    if ( v16 || result != (a3 - 2) / 2 )
      goto LABEL_30;
    v23 = result;
  }
  else
  {
    v41 = a11;
    v21 = a2;
    v42 = v16;
    while ( 1 )
    {
      v22 = 2 * (v21 + 1);
      v23 = v22 - 1;
      v24 = a1 + 48 * (v21 + 1);
      v25 = (__m128i *)(a1 + 24 * (v22 - 1));
      v26 = *(_BYTE **)(v24 + 8);
      v27 = *(_BYTE **)v24;
      v28 = (_BYTE *)v25->m128i_i64[0];
      v29 = v25->m128i_i64[1] - v25->m128i_i64[0];
      if ( (__int64)&v26[-*(_QWORD *)v24] > v29 )
        v26 = (_BYTE *)(*(_QWORD *)v24 + v29);
      if ( v27 == v26 )
      {
LABEL_12:
        v23 = v22 - (v25->m128i_i64[1] != (_QWORD)v28);
        v25 = (__m128i *)(a1 + 24 * v23);
      }
      else
      {
        while ( *v27 >= *v28 )
        {
          if ( *v27 > *v28 )
          {
            v25 = (__m128i *)(a1 + 48 * (v21 + 1));
            v23 = 2 * (v21 + 1);
            break;
          }
          ++v27;
          ++v28;
          if ( v27 == v26 )
            goto LABEL_12;
        }
      }
      v30 = (__m128i *)(a1 + 24 * v21);
      *v30 = _mm_loadu_si128(v25);
      v30[1].m128i_i64[0] = v25[1].m128i_i64[0];
      if ( v15 <= v23 )
        break;
      v21 = v23;
    }
    v20 = (_BYTE *)v18;
    v19 = v14.m128_u64[0];
    v17 = v41;
    result = a2;
    if ( v42 || (a3 - 2) / 2 != v23 )
    {
      v31 = v23 - 1;
      goto LABEL_16;
    }
  }
  v31 = 2 * v23;
  v23 = 2 * v23 + 1;
  v40 = (const __m128i *)(a1 + 24 * v23);
  *v25 = _mm_loadu_si128(v40);
  v25[1].m128i_i64[0] = v40[1].m128i_i64[0];
  v25 = (__m128i *)v40;
LABEL_16:
  v32 = v31 / 2;
  if ( v23 > result )
  {
    v33 = v23;
    v34 = &v20[-v19];
    while ( 1 )
    {
      v25 = (__m128i *)(a1 + 24 * v32);
      v35 = (_BYTE *)v25->m128i_i64[1];
      v36 = (_BYTE *)v25->m128i_i64[0];
      v37 = (_BYTE *)v19;
      if ( (__int64)&v35[-v25->m128i_i64[0]] > (__int64)v34 )
        v35 = &v34[v25->m128i_i64[0]];
      if ( v36 == v35 )
      {
LABEL_27:
        if ( v37 == v20 )
        {
          v25 = (__m128i *)(a1 + 24 * v33);
          break;
        }
      }
      else
      {
        while ( *v36 >= *v37 )
        {
          if ( *v36 > *v37 )
          {
            result = 3 * v33;
            v25 = (__m128i *)(a1 + 24 * v33);
            goto LABEL_30;
          }
          ++v36;
          ++v37;
          if ( v36 == v35 )
            goto LABEL_27;
        }
      }
      v38 = 3 * v33;
      v33 = v32;
      v39 = (__m128i *)(a1 + 8 * v38);
      *v39 = _mm_loadu_si128(v25);
      v39[1].m128i_i64[0] = v25[1].m128i_i64[0];
      if ( result >= v32 )
        break;
      v32 = (v32 - 1) / 2;
    }
  }
LABEL_30:
  v25[1].m128i_i64[0] = v17;
  *v25 = (__m128i)v14;
  return result;
}
