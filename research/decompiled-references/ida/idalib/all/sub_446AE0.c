unsigned __int64 __fastcall sub_446AE0(
        __int64 a1,
        const __m128i *a2,
        unsigned __int64 a3,
        double a4,
        double a5,
        __m128 a6,
        __m128 a7)
{
  __m128 v8; // xmm0
  __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  __m128 v11; // xmm1
  unsigned __int64 v12; // xmm2_8
  __int64 v13; // r10
  _BYTE *v14; // r9
  unsigned __int64 v15; // xmm3_8
  _BYTE *v16; // r14
  _BYTE *v17; // r15
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  size_t v20; // r12
  _BYTE *v21; // rdx
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // r13
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // r13
  _BYTE *v27; // rsi
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // [rsp+8h] [rbp-90h]
  unsigned __int64 v31; // [rsp+10h] [rbp-88h]
  __m128 v32; // [rsp+20h] [rbp-78h] BYREF
  size_t v33; // [rsp+30h] [rbp-68h]
  __m128 v34; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v35; // [rsp+50h] [rbp-48h]
  unsigned __int64 v36; // [rsp+58h] [rbp-40h]

  v8 = (__m128)_mm_loadu_si128(a2);
  v9 = a2[1].m128i_i64[0];
  v36 = __readfsqword(0x28u);
  v10 = *(_QWORD *)a1 + v9;
  v11 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 8));
  v12 = _mm_movehl_ps(a6, v8).m128_u64[0];
  v13 = v8.m128_u64[0];
  v14 = (_BYTE *)a2->m128i_i64[0];
  v15 = _mm_movehl_ps(a7, v11).m128_u64[0];
  v16 = (_BYTE *)a2->m128i_i64[1];
  v17 = *(_BYTE **)(a1 + 16);
  v18 = (v10 >> 1) - a3;
  v31 = v12;
  if ( v10 >> 1 < a3 )
    v18 = 0;
  v19 = v12 - v8.m128_u64[0];
  v20 = v15 - v11.m128_u64[0];
  v21 = *(_BYTE **)(a1 + 8);
  v22 = v15 - v11.m128_u64[0];
  v33 = v15 - v11.m128_u64[0];
  if ( v12 - v8.m128_u64[0] <= v15 - v11.m128_u64[0] )
    v22 = v12 - v8.m128_u64[0];
  v35 = v12 - v8.m128_u64[0];
  v32 = v11;
  v34 = v8;
  if ( v22 >= v18 )
  {
    v23 = v19 + v20 - 2 * v18;
    if ( v19 + v20 == 2 * v18 )
    {
      if ( v19 != v20 )
        goto LABEL_10;
      goto LABEL_9;
    }
    if ( v23 == 1 && v19 == v20 )
    {
LABEL_9:
      if ( v20 && !memcmp((const void *)v11.m128_u64[0], (const void *)v8.m128_u64[0], v20) )
        v10 -= 2 * v20;
      goto LABEL_10;
    }
    v25 = v19 - v20;
    if ( v19 < v20 )
      v25 = v20 - v19;
    if ( v23 >= v25 )
    {
      if ( v23 <= 4 )
      {
        if ( v8.m128_u64[0] == v12 || v11.m128_u64[0] == v15 )
        {
          v21 = (_BYTE *)v11.m128_u64[0];
          v26 = 0;
        }
        else
        {
          do
          {
            if ( *v21 != *v14 )
              break;
            ++v14;
            ++v21;
            if ( v16 == v14 )
              break;
          }
          while ( v17 != v21 );
          v26 = (unsigned __int64)&v21[-v11.m128_u64[0]];
          v20 = v15 - (_QWORD)v21;
          v19 -= (unsigned __int64)&v21[-v11.m128_u64[0]];
          v13 = (__int64)&v21[v8.m128_u64[0] - v11.m128_u64[0]];
        }
        if ( v21 == (_BYTE *)v15 )
        {
          v27 = v21;
        }
        else
        {
          v27 = (_BYTE *)v15;
          do
          {
            if ( v27 == (_BYTE *)(v13 + v15 - v12) )
            {
              v20 -= v15 - (_QWORD)v27;
              v26 += v15 - (_QWORD)v27;
              v19 -= v15 - (_QWORD)v27;
              v31 = v12 - (v15 - (_QWORD)v27);
              goto LABEL_35;
            }
            if ( *(v27 - 1) != v27[v12 - v15 - 1] )
            {
              v20 -= v15 - (_QWORD)v27;
              v26 += v15 - (_QWORD)v27;
              v19 -= v15 - (_QWORD)v27;
              v31 = v12 - (v15 - (_QWORD)v27);
              goto LABEL_35;
            }
            --v27;
          }
          while ( v21 != v27 );
          v20 -= v15 - (_QWORD)v21;
          v26 += v15 - (_QWORD)v21;
          v19 -= v15 - (_QWORD)v21;
          v31 = v12 - (v15 - (_QWORD)v21);
          v27 = v21;
        }
LABEL_35:
        v32.m128_u64[1] = (unsigned __int64)v27;
        v33 = v20;
        v34.m128_u64[1] = v31;
        v35 = v19;
        if ( v19 && v20 )
        {
          v32.m128_u64[0] = (unsigned __int64)v21;
          v28 = v18 - v26;
          v30 = v18;
          if ( v18 < v26 )
            v28 = 0;
          v34.m128_u64[0] = v13;
          v29 = sub_445CD0((__int64)&v32, (__int64)&v34, v28);
          v18 = v30;
          v26 += v29;
        }
        if ( v26 >= v18 )
          v10 -= 2 * v26;
      }
      else
      {
        v10 -= 2 * sub_446040((unsigned __int64 *)(a1 + 32), (unsigned __int64)&v32, (__int64)&v34, v18);
      }
    }
  }
LABEL_10:
  if ( a3 < v10 )
    return a3 + 1;
  return v10;
}
