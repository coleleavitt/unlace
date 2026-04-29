__int64 __fastcall sub_35E540(__int64 a1, const __m128i *a2)
{
  __int64 *v3; // rdx
  __int64 v5; // rax
  __int64 v6; // r12
  __m128i si128; // xmm0
  __int64 v8; // rdi
  __int64 result; // rax
  __int64 *v10; // r13
  __int64 v11; // rdx
  __int64 v12; // r14
  __int64 i; // r12
  __int64 *v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // r14
  __int64 j; // r12
  __int64 *v20; // rax
  __int64 v21; // rdi
  __m128i v22[3]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    if ( (*((_DWORD *)v3 + 26))-- == 1 )
    {
      v10 = *(__int64 **)a1;
      if ( *(_QWORD *)a1 )
      {
        sub_258970(*(__int64 **)a1);
        v11 = v10[23];
        if ( v11 )
        {
          v12 = v10[24];
          if ( v12 )
          {
            for ( i = 0; i != v12; ++i )
            {
              v14 = (__int64 *)(v11 + 24 * i);
              v15 = *v14;
              if ( *v14 )
              {
                v14[1] = 0;
                qfree(v15);
                v11 = v10[23];
              }
            }
          }
          v10[24] = 0;
          qfree(v11);
        }
        v16 = v10[20];
        if ( v16 )
        {
          v10[21] = 0;
          qfree(v16);
        }
        v17 = v10[16];
        if ( v17 )
        {
          v18 = v10[17];
          if ( v18 )
          {
            for ( j = 0; j != v18; ++j )
            {
              v20 = (__int64 *)(v17 + 32 * j);
              v21 = *v20;
              if ( *v20 )
              {
                v20[1] = 0;
                qfree(v21);
                v17 = v10[16];
              }
            }
          }
          v10[17] = 0;
          qfree(v17);
        }
        sub_255050((__int64)(v10 + 2));
        j__qfree(v10);
      }
    }
  }
  v5 = a2->m128i_i64[0];
  *(_QWORD *)a1 = a2->m128i_i64[0];
  if ( v5 )
    ++*(_DWORD *)(v5 + 104);
  v6 = a2->m128i_i64[1];
  si128 = _mm_loadu_si128(a2 + 1);
  a2->m128i_i64[1] = 0;
  a2[1] = 0;
  v8 = *(_QWORD *)(a1 + 8);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 16) = 0;
    v22[0] = si128;
    qfree(v8);
    si128 = _mm_load_si128(v22);
  }
  *(_QWORD *)(a1 + 8) = v6;
  *(__m128i *)(a1 + 16) = si128;
  *(_QWORD *)(a1 + 32) = a2[2].m128i_i64[0];
  *(_QWORD *)(a1 + 40) = a2[2].m128i_i64[1];
  *(__m128i *)(a1 + 48) = _mm_loadu_si128(a2 + 3);
  *(__m128i *)(a1 + 64) = _mm_loadu_si128(a2 + 4);
  *(__m128i *)(a1 + 80) = _mm_loadu_si128(a2 + 5);
  *(_DWORD *)(a1 + 96) = a2[6].m128i_i32[0];
  *(_DWORD *)(a1 + 100) = a2[6].m128i_i32[1];
  *(_QWORD *)(a1 + 104) = a2[6].m128i_i64[1];
  result = a2[7].m128i_u32[0];
  *(_DWORD *)(a1 + 112) = result;
  return result;
}
