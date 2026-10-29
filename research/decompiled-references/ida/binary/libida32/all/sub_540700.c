__int64 __fastcall sub_540700(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // r14
  const __m128i *v3; // rbx
  const __m128i *v4; // r14
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
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rsi
  __int64 v19; // rax
  __m128i v20; // xmm0
  __int64 v21; // rax
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
  v4 = (const __m128i *)(*(_QWORD *)v1 + (*(_QWORD *)(v1 + 8) << 7));
  if ( v4 != *(const __m128i **)v1 )
  {
    v5 = -1;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      v9 = v3[7].m128i_i32[1];
      v10 = v3->m128i_i64[0];
      ++v5;
      if ( (v9 & 0x20) != 0 )
        break;
      if ( v7 < v10 )
      {
        v21 = sub_5404A0(a1, v8, v7, v10, v6, -1);
        v7 = v3->m128i_i64[0];
        v8 = v21;
        v9 = v3[7].m128i_i32[1];
      }
      if ( (v9 & 0x400) == 0 )
      {
        v16 = a1[5];
        v17 = a1[4];
        if ( a1[6] < (unsigned __int64)(v16 + 1) )
        {
          v22 = qvector_reserve(a1 + 4, v17, v16 + 1, 32);
          a1[4] = v22;
          v17 = v22;
          v16 = a1[5];
        }
        v18 = 32 * v16 + v17;
        *(_WORD *)(v18 + 28) = 0;
        *(_BYTE *)(v18 + 30) = 0;
        ++a1[5];
        *(_QWORD *)v18 = v8;
        v19 = v3->m128i_i64[0];
        *(_QWORD *)(v18 + 8) = 1;
        *(_QWORD *)(v18 + 16) = v19;
        *(_DWORD *)(v18 + 24) = v5;
        *(_BYTE *)(v18 + 28) = (v3[4].m128i_i8[0] & 0xF) == 14;
        *(_BYTE *)(v18 + 30) = v3->m128i_i64[0] < v6;
        v20 = _mm_loadu_si128(v3);
        ++v8;
        v7 = _mm_add_epi64(v20, _mm_srli_si128(v20, 8)).m128i_u64[0];
        goto LABEL_8;
      }
      v11 = _mm_loadu_si128(v3);
      v12 = v11.m128i_i64[0];
      v13 = _mm_add_epi64(v11, _mm_srli_si128(v11, 8)).m128i_u64[0];
      if ( v23 < v13 )
      {
        if ( !under_debugger )
          interr(2989);
        BUG();
      }
      if ( v12 < v7 )
      {
LABEL_8:
        if ( v6 < v7 )
          v6 = v7;
        v3 += 8;
        if ( v4 == v3 )
          return sub_5404A0(a1, v8, v7, v23, v6, -1);
      }
      else
      {
        v14 = sub_5404A0(a1, v8, v7, v13, v6, v5);
        v7 = v13;
        v8 = v14;
        if ( v6 < v13 )
          v6 = v13;
        v3 += 8;
        if ( v4 == v3 )
          return sub_5404A0(a1, v8, v7, v23, v6, -1);
      }
    }
    v7 = v3->m128i_i64[1] + v10;
    goto LABEL_8;
  }
  v6 = 0;
  v7 = 0;
  v8 = 0;
  return sub_5404A0(a1, v8, v7, v23, v6, -1);
}

