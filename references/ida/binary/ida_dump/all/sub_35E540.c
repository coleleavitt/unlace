__int64 __fastcall sub_35E540(__int64 a1, const __m128i *a2)
{
  __int64 *v2; // rdx
  __int64 v4; // rax
  __int64 v5; // r12
  __m128i si128; // xmm0
  __int64 result; // rax
  __int64 *v8; // r13
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 i; // r12
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r14
  __int64 j; // r12
  _QWORD *v16; // rax
  __m128i v17[3]; // [rsp+0h] [rbp-38h] BYREF

  v2 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    if ( (*((_DWORD *)v2 + 26))-- == 1 )
    {
      v8 = *(__int64 **)a1;
      if ( *(_QWORD *)a1 )
      {
        sub_258970(*(__int64 **)a1);
        v9 = v8[23];
        if ( v9 )
        {
          v10 = v8[24];
          if ( v10 )
          {
            for ( i = 0; i != v10; ++i )
            {
              v12 = (_QWORD *)(v9 + 24 * i);
              if ( *v12 )
              {
                v12[1] = 0;
                qfree();
                v9 = v8[23];
              }
            }
          }
          v8[24] = 0;
          qfree();
        }
        if ( v8[20] )
        {
          v8[21] = 0;
          qfree();
        }
        v13 = v8[16];
        if ( v13 )
        {
          v14 = v8[17];
          if ( v14 )
          {
            for ( j = 0; j != v14; ++j )
            {
              v16 = (_QWORD *)(v13 + 32 * j);
              if ( *v16 )
              {
                v16[1] = 0;
                qfree();
                v13 = v8[16];
              }
            }
          }
          v8[17] = 0;
          qfree();
        }
        sub_255050((__int64)(v8 + 2));
        j__qfree();
      }
    }
  }
  v4 = a2->m128i_i64[0];
  *(_QWORD *)a1 = a2->m128i_i64[0];
  if ( v4 )
    ++*(_DWORD *)(v4 + 104);
  v5 = a2->m128i_i64[1];
  si128 = _mm_loadu_si128(a2 + 1);
  a2->m128i_i64[1] = 0;
  a2[1] = 0;
  if ( *(_QWORD *)(a1 + 8) )
  {
    *(_QWORD *)(a1 + 16) = 0;
    v17[0] = si128;
    qfree();
    si128 = _mm_load_si128(v17);
  }
  *(_QWORD *)(a1 + 8) = v5;
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
