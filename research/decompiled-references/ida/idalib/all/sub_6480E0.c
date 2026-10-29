__int64 __fastcall sub_6480E0(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  __int64 v5; // r15
  __int64 v6; // rbp
  __m128i v7; // xmm1
  __int64 v8; // r14
  __m128i *v9; // rbx
  __int32 v10; // esi
  __int64 v11; // rbp
  __int64 v12; // r13
  __m128i v13; // xmm0
  void *v14; // rdi
  const __m128i *v15; // rax
  const __m128i *v16; // rsi
  __m128i v17; // xmm2
  __int32 v18; // r15d
  __int64 v19; // rsi
  __int64 v20; // r13
  __m128i v21; // xmm1
  __int64 v22; // r14
  __m128i v23; // xmm0
  void *v24; // rdi
  const __m128i *v25; // rbp
  void *v26; // rdi
  __int64 result; // rax
  __m128i si128; // xmm3
  __int64 v29; // rbp
  const __m128i *v30; // rcx
  __int64 v31; // r14
  __m128i v32; // xmm0
  void *v33; // rdi
  __m128i v35; // [rsp+10h] [rbp-68h] BYREF
  __int64 v36; // [rsp+20h] [rbp-58h]
  const __m128i *v37; // [rsp+28h] [rbp-50h]
  __m128i v38[4]; // [rsp+30h] [rbp-48h] BYREF

  v36 = a3;
  v37 = a4;
  v5 = (a3 - 1) / 2;
  if ( a2 >= v5 )
  {
    v8 = a2;
    v9 = (__m128i *)(a1 + 32 * a2);
  }
  else
  {
    v6 = a2;
    v7 = 0;
    while ( 1 )
    {
      v8 = 2 * (v6 + 1);
      v9 = (__m128i *)(a1 + ((v6 + 1) << 6));
      v10 = v9->m128i_i32[0];
      if ( v9->m128i_i32[0] < v9[-2].m128i_i32[0] )
      {
        --v8;
        v9 = (__m128i *)(a1 + 32 * v8);
        v10 = v9->m128i_i32[0];
      }
      v11 = a1 + 32 * v6;
      *(_DWORD *)v11 = v10;
      *(_DWORD *)(v11 + 4) = v9->m128i_i32[1];
      v12 = v9->m128i_i64[1];
      v13 = _mm_loadu_si128(v9 + 1);
      v9->m128i_i64[1] = 0;
      v9[1] = v7;
      v14 = *(void **)(v11 + 8);
      if ( v14 )
      {
        *(_QWORD *)(v11 + 16) = 0;
        v35 = v13;
        qfree(v14);
        v13 = _mm_load_si128(&v35);
        v7 = 0;
      }
      *(_QWORD *)(v11 + 8) = v12;
      *(__m128i *)(v11 + 16) = v13;
      if ( v8 >= v5 )
        break;
      v6 = v8;
    }
  }
  if ( (v36 & 1) == 0 && (v36 - 2) / 2 == v8 )
  {
    v29 = 2 * (v8 + 1);
    v30 = (const __m128i *)(a1 + ((v8 + 1) << 6) - 32);
    v9->m128i_i32[0] = v30->m128i_i32[0];
    v9->m128i_i32[1] = v30->m128i_i32[1];
    v31 = v30->m128i_i64[1];
    v32 = _mm_loadu_si128(v30 + 1);
    v30->m128i_i64[1] = 0;
    v30[1] = 0;
    v33 = (void *)v9->m128i_i64[1];
    if ( v33 )
    {
      v9[1].m128i_i64[0] = 0;
      v35 = v32;
      qfree(v33);
      v32 = _mm_load_si128(&v35);
    }
    v9->m128i_i64[1] = v31;
    v8 = v29 - 1;
    v9[1] = v32;
    v9 = (__m128i *)(a1 + 32 * (v29 - 1));
  }
  v15 = v37;
  v16 = (const __m128i *)v37->m128i_i64[0];
  v17 = _mm_loadu_si128(v37 + 1);
  v37[1] = 0;
  v37 = v16;
  v18 = (int)v16;
  v19 = v15->m128i_i64[1];
  v20 = (v8 - 1) / 2;
  v15->m128i_i64[1] = 0;
  v36 = v19;
  v38[0] = v17;
  if ( v8 > a2 )
  {
    v21 = 0;
    while ( 1 )
    {
      v25 = (const __m128i *)(a1 + 32 * v20);
      v9 = (__m128i *)(a1 + 32 * v8);
      if ( v25->m128i_i32[0] >= v18 )
        break;
      v9->m128i_i32[0] = v25->m128i_i32[0];
      v9->m128i_i32[1] = v25->m128i_i32[1];
      v22 = v25->m128i_i64[1];
      v23 = _mm_loadu_si128(v25 + 1);
      v25->m128i_i64[1] = 0;
      v25[1] = v21;
      v24 = (void *)v9->m128i_i64[1];
      if ( v24 )
      {
        v9[1].m128i_i64[0] = 0;
        v35 = v23;
        qfree(v24);
        v23 = _mm_load_si128(&v35);
        v21 = 0;
      }
      v9->m128i_i64[1] = v22;
      v8 = v20;
      v9[1] = v23;
      if ( a2 >= v20 )
      {
        v9 = (__m128i *)(a1 + 32 * v20);
        break;
      }
      v20 = (v20 - 1) / 2;
    }
  }
  v26 = (void *)v9->m128i_i64[1];
  v9->m128i_i64[0] = (__int64)v37;
  if ( v26 )
  {
    v9[1].m128i_i64[0] = 0;
    qfree(v26);
  }
  result = v36;
  si128 = _mm_load_si128(v38);
  v9->m128i_i64[1] = v36;
  v9[1] = si128;
  return result;
}
