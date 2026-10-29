__int64 __fastcall sub_5598C0(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // r14
  const __m128i *v3; // rbx
  __int64 v4; // r14
  int v5; // r12d
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rdx
  __int64 v8; // r13
  __int32 v9; // eax
  unsigned __int64 v10; // rcx
  __m128i v11; // xmm0
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // xmm0_8
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // rax
  __m128i v19; // xmm0
  __int64 v20; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // [rsp+0h] [rbp-48h]

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *(_QWORD *)(v1 + 24);
    if ( v2 < 0 )
      v2 = 0;
    v23 = 8 * v2;
  }
  else
  {
    v23 = 0;
  }
  v3 = *(const __m128i **)v1;
  v4 = *(_QWORD *)v1 + 144LL * *(_QWORD *)(v1 + 8);
  if ( v4 == *(_QWORD *)v1 )
  {
    v6 = 0;
    v7 = 0;
    v8 = 0;
  }
  else
  {
    v5 = -1;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    do
    {
      v9 = v3[8].m128i_i32[1];
      v10 = v3->m128i_i64[0];
      ++v5;
      if ( (v9 & 0x20) != 0 )
      {
        v7 = v3->m128i_i64[1] + v10;
      }
      else
      {
        if ( v7 < v10 )
        {
          v20 = sub_559660(a1, v8, v7, v10, v6, -1);
          v7 = v3->m128i_i64[0];
          v8 = v20;
          v9 = v3[8].m128i_i32[1];
        }
        if ( (v9 & 0x400) != 0 )
        {
          v11 = _mm_loadu_si128(v3);
          v12 = v11.m128i_i64[0];
          v13 = _mm_add_epi64(v11, _mm_srli_si128(v11, 8)).m128i_u64[0];
          if ( v23 < v13 )
          {
            if ( !under_debugger )
              interr(2989);
            BUG();
          }
          if ( v12 >= v7 )
          {
            v14 = sub_559660(a1, v8, v7, v13, v6, v5);
            v7 = v13;
            v8 = v14;
          }
        }
        else
        {
          v15 = a1[5];
          v16 = a1[4];
          if ( a1[6] < (unsigned __int64)(v15 + 1) )
          {
            v22 = qvector_reserve(a1 + 4, v16, v15 + 1, 32);
            a1[4] = v22;
            v16 = v22;
            v15 = a1[5];
          }
          v17 = 32 * v15 + v16;
          *(_WORD *)(v17 + 28) = 0;
          *(_BYTE *)(v17 + 30) = 0;
          ++a1[5];
          *(_QWORD *)v17 = v8;
          v18 = v3->m128i_i64[0];
          *(_QWORD *)(v17 + 8) = 1;
          *(_QWORD *)(v17 + 16) = v18;
          *(_DWORD *)(v17 + 24) = v5;
          *(_BYTE *)(v17 + 28) = (v3[4].m128i_i8[0] & 0xF) == 14;
          *(_BYTE *)(v17 + 30) = v3->m128i_i64[0] < v6;
          v19 = _mm_loadu_si128(v3);
          ++v8;
          v7 = _mm_add_epi64(v19, _mm_srli_si128(v19, 8)).m128i_u64[0];
        }
      }
      if ( v6 < v7 )
        v6 = v7;
      v3 += 9;
    }
    while ( (const __m128i *)v4 != v3 );
  }
  return sub_559660(a1, v8, v7, v23, v6, -1);
}
