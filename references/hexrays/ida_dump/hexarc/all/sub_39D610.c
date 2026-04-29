__m128i **__fastcall sub_39D610(__m128i **a1, const __m128i *a2)
{
  __int64 v3; // r14
  __m128i *v4; // rax
  __int64 v5; // rbx
  __m128i *v6; // rbp
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
  __int64 v21; // rax

  v3 = *(_QWORD *)(*(_QWORD *)(a2[1].m128i_i64[1] + 8) + 432LL) + 104LL * a2[2].m128i_i32[0];
  v4 = (__m128i *)operator new(0x28u);
  v5 = a2[1].m128i_i64[1];
  v6 = v4;
  if ( v5 )
  {
    ++*(_DWORD *)(v5 + 104);
    v7 = _mm_loadl_epi64(a2 + 1);
    v4->m128i_i32[2] = 1;
    v4->m128i_i64[0] = (__int64)off_4B3598;
    v4[1] = _mm_unpacklo_epi64(v7, (__m128i)(unsigned __int64)v5);
    ++*(_DWORD *)(v5 + 104);
    v4[2].m128i_i64[0] = v3;
    if ( (*(_DWORD *)(v5 + 104))-- == 1 )
    {
      sub_2515F0((__int64 *)v5);
      v9 = *(_QWORD *)(v5 + 184);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v5 + 192);
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
              v9 = *(_QWORD *)(v5 + 184);
            }
          }
        }
        *(_QWORD *)(v5 + 192) = 0;
        qfree(v9);
      }
      v14 = *(_QWORD *)(v5 + 160);
      if ( v14 )
      {
        *(_QWORD *)(v5 + 168) = 0;
        qfree(v14);
      }
      v15 = *(_QWORD *)(v5 + 128);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v5 + 136);
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
              v15 = *(_QWORD *)(v5 + 128);
            }
          }
        }
        *(_QWORD *)(v5 + 136) = 0;
        qfree(v15);
      }
      sub_24DCD0(v5 + 16);
      j__qfree(v5);
    }
    *a1 = v6;
    return a1;
  }
  else
  {
    v21 = a2[1].m128i_i64[0];
    v6->m128i_i32[2] = 1;
    v6[1].m128i_i64[1] = 0;
    v6[1].m128i_i64[0] = v21;
    v6->m128i_i64[0] = (__int64)off_4B3598;
    v6[2].m128i_i64[0] = v3;
    *a1 = v6;
    return a1;
  }
}
