__int64 __fastcall sub_227E390(__m128i *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r12
  __int64 v7; // rsi
  char *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 result; // rax
  __int64 v30; // r14
  __m128i v31; // xmm0
  __m128i v32; // xmm0
  __m128i v33[3]; // [rsp+8h] [rbp-30h] BYREF

  v6 = a1[2].m128i_i64[1];
  v7 = a1[2].m128i_i64[0];
  v8 = (char *)a1[1].m128i_i64[1];
  v9 = v6;
  if ( v6 >= v7 )
  {
    v30 = 3 * ((v7 + 1) / 2);
    v9 = a1[2].m128i_i64[1];
    if ( v7 < v30 )
    {
      if ( (unsigned __int64)v30 <= 0x1FFFFFFFFFFFFFFFLL )
      {
        v33[0].m128i_i64[0] = a3;
        v8 = (char *)realloc(v8, 24 * ((v7 + 1) / 2));
        a3 = v33[0].m128i_i64[0];
        if ( v8 )
        {
          a1[1].m128i_i64[1] = (__int64)v8;
          v9 = a1[2].m128i_i64[1];
          a1[2].m128i_i64[0] = v30;
        }
        else
        {
          if ( !a1[1].m128i_i32[0] )
            a1[1].m128i_i32[0] = 12;
          v9 = a1[2].m128i_i64[1];
          v33[0].m128i_i64[0] = (__int64)&unk_2D0ADA8;
          v32 = _mm_loadl_epi64(v33);
          v8 = (char *)a1[1].m128i_i64[1];
          *a1 = _mm_unpacklo_epi64(v32, v32);
        }
      }
      else
      {
        if ( !a1[1].m128i_i32[0] )
          a1[1].m128i_i32[0] = 12;
        v9 = v6;
        v33[0].m128i_i64[0] = (__int64)&unk_2D0ADA8;
        v31 = _mm_loadl_epi64(v33);
        *a1 = _mm_unpacklo_epi64(v31, v31);
      }
    }
  }
  a1[2].m128i_i64[1] = v9 + 1;
  *(_QWORD *)&v8[8 * v9] = a3 | a2;
  v10 = a1[4].m128i_i64[1];
  v11 = *(_QWORD *)&v8[8 * v6];
  if ( a4 <= v10 )
    a1[4].m128i_i64[1] = v10 + 1;
  v12 = a1[9].m128i_i64[1];
  if ( a4 <= v12 )
    a1[9].m128i_i64[1] = v12 + 1;
  v13 = a1[5].m128i_i64[0];
  if ( a4 <= v13 )
    a1[5].m128i_i64[0] = v13 + 1;
  v14 = a1[10].m128i_i64[0];
  if ( a4 <= v14 )
    a1[10].m128i_i64[0] = v14 + 1;
  v15 = a1[5].m128i_i64[1];
  if ( a4 <= v15 )
    a1[5].m128i_i64[1] = v15 + 1;
  v16 = a1[10].m128i_i64[1];
  if ( a4 <= v16 )
    a1[10].m128i_i64[1] = v16 + 1;
  v17 = a1[6].m128i_i64[0];
  if ( a4 <= v17 )
    a1[6].m128i_i64[0] = v17 + 1;
  v18 = a1[11].m128i_i64[0];
  if ( a4 <= v18 )
    a1[11].m128i_i64[0] = v18 + 1;
  v19 = a1[6].m128i_i64[1];
  if ( a4 <= v19 )
    a1[6].m128i_i64[1] = v19 + 1;
  v20 = a1[11].m128i_i64[1];
  if ( a4 <= v20 )
    a1[11].m128i_i64[1] = v20 + 1;
  v21 = a1[7].m128i_i64[0];
  if ( a4 <= v21 )
    a1[7].m128i_i64[0] = v21 + 1;
  v22 = a1[12].m128i_i64[0];
  if ( a4 <= v22 )
    a1[12].m128i_i64[0] = v22 + 1;
  v23 = a1[7].m128i_i64[1];
  if ( a4 <= v23 )
    a1[7].m128i_i64[1] = v23 + 1;
  v24 = a1[12].m128i_i64[1];
  if ( a4 <= v24 )
    a1[12].m128i_i64[1] = v24 + 1;
  v25 = a1[8].m128i_i64[0];
  if ( a4 <= v25 )
    a1[8].m128i_i64[0] = v25 + 1;
  v26 = a1[13].m128i_i64[0];
  if ( a4 <= v26 )
    a1[13].m128i_i64[0] = v26 + 1;
  v27 = a1[8].m128i_i64[1];
  if ( v27 >= a4 )
    a1[8].m128i_i64[1] = v27 + 1;
  v28 = a1[13].m128i_i64[1];
  if ( a4 <= v28 )
    a1[13].m128i_i64[1] = v28 + 1;
  memmove(&v8[8 * a4 + 8], &v8[8 * a4], 8 * (a1[2].m128i_i64[1] + ~a4));
  result = a1[1].m128i_i64[1];
  *(_QWORD *)(result + 8 * a4) = v11;
  return result;
}
