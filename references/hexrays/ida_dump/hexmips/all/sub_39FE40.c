__m128i **__fastcall sub_39FE40(__m128i **a1, const __m128i *a2)
{
  __m128i *v3; // rax
  __int64 v4; // rbx
  __m128i *v5; // rbp
  const __m128i *v6; // rax
  __m128i v7; // xmm0
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 i; // r12
  __int64 *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r14
  __int64 j; // r12
  __int64 *v18; // rax
  __int64 v19; // rdi
  __int64 v21; // rdx
  __m128i v22; // xmm0

  v3 = (__m128i *)operator new(0x30u);
  v4 = a2[1].m128i_i64[1];
  v5 = v3;
  v6 = (const __m128i *)(a2[2].m128i_i64[0] + 16LL * a2[3].m128i_i32[2]);
  if ( v4 )
  {
    ++*(_DWORD *)(v4 + 104);
    v7 = _mm_loadl_epi64(a2 + 1);
    v5->m128i_i32[2] = 1;
    v5->m128i_i64[0] = (__int64)off_4C76B8;
    v5[1] = _mm_unpacklo_epi64(v7, (__m128i)(unsigned __int64)v4);
    ++*(_DWORD *)(v4 + 104);
    v5[2] = _mm_loadu_si128(v6);
    if ( (*(_DWORD *)(v4 + 104))-- == 1 )
    {
      sub_2540F0((__int64 *)v4);
      v9 = *(_QWORD *)(v4 + 184);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v4 + 192);
        if ( v10 )
        {
          for ( i = 0; i != v10; ++i )
          {
            v12 = (__int64 *)(v9 + 24 * i);
            v13 = *v12;
            if ( *v12 )
            {
              v12[1] = 0;
              qfree(v13);
              v9 = *(_QWORD *)(v4 + 184);
            }
          }
        }
        *(_QWORD *)(v4 + 192) = 0;
        qfree(v9);
      }
      v14 = *(_QWORD *)(v4 + 160);
      if ( v14 )
      {
        *(_QWORD *)(v4 + 168) = 0;
        qfree(v14);
      }
      v15 = *(_QWORD *)(v4 + 128);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v4 + 136);
        if ( v16 )
        {
          for ( j = 0; j != v16; ++j )
          {
            v18 = (__int64 *)(v15 + 32 * j);
            v19 = *v18;
            if ( *v18 )
            {
              v18[1] = 0;
              qfree(v19);
              v15 = *(_QWORD *)(v4 + 128);
            }
          }
        }
        *(_QWORD *)(v4 + 136) = 0;
        qfree(v15);
      }
      sub_2507D0(v4 + 16);
      j__qfree(v4);
    }
    *a1 = v5;
    return a1;
  }
  else
  {
    v21 = a2[1].m128i_i64[0];
    v5->m128i_i32[2] = 1;
    v5->m128i_i64[0] = (__int64)off_4C76B8;
    v5[1].m128i_i64[0] = v21;
    v5[1].m128i_i64[1] = 0;
    v22 = _mm_loadu_si128(v6);
    *a1 = v5;
    v5[2] = v22;
    return a1;
  }
}
