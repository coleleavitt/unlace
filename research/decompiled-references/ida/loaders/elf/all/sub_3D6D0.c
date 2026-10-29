unsigned __int64 __fastcall sub_3D6D0(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r13
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r14
  char v12; // r9
  _QWORD *v13; // rbx
  __int64 i; // r14
  __int64 v15; // rax
  __int64 v16; // rdi
  const __m128i *v17; // rcx
  __int64 v18; // rsi
  __m128i v19; // xmm0
  __int64 v20; // rax
  signed int v21; // edx

  v3 = a1[4];
  if ( v3 != 12 && v3 != 24 )
    return 0;
  v5 = a1[8];
  if ( v5 )
  {
    if ( !is_mul_ok(v3, v5) )
      return 0;
  }
  if ( a2 && !is_mul_ok(a2, v3) )
    return 0;
  v6 = a1[1];
  v7 = qlseek(*(_QWORD *)(v6 + 472), 0, 1);
  v8 = *(_QWORD *)(v6 + 480);
  v9 = v7 - v8;
  if ( qlseek(*(_QWORD *)(v6 + 472), v8 + a1[2] + a1[4] * a1[8], 0) != -1
    && (v10 = a2 * a1[4], v10 == qlread(*(_QWORD *)(a1[1] + 472LL), a1[5], v10)) )
  {
    v12 = *(_BYTE *)(a1[1] + 616LL);
    if ( a1[4] == 12 )
    {
      v15 = a1[5];
      v16 = 0;
      v17 = (const __m128i *)(v15 + 12 * a2 - 12);
      v18 = v15 + 24 * a2 - 24;
      if ( a2 )
      {
        do
        {
          v21 = v17->m128i_i32[2];
          if ( v12 )
          {
            v19 = _mm_unpacklo_epi32(
                    _mm_cvtsi32_si128(_byteswap_ulong(v17->m128i_i32[0])),
                    _mm_cvtsi32_si128(_byteswap_ulong(v17->m128i_u32[1])));
            v20 = _byteswap_ulong(v21);
          }
          else
          {
            v19 = _mm_loadl_epi64(v17);
            v20 = v21;
          }
          ++v16;
          *(_QWORD *)(v18 + 16) = v20;
          v17 = (const __m128i *)((char *)v17 - 12);
          v18 -= 24;
          *(__m128i *)(v18 + 24) = _mm_unpacklo_epi32(v19, (__m128i)0LL);
        }
        while ( a2 != v16 );
      }
    }
    else if ( v12 )
    {
      v13 = (_QWORD *)a1[5];
      if ( a2 )
      {
        for ( i = 0; i != a2; ++i )
        {
          *v13 = swap64(*v13);
          v13[1] = swap64(v13[1]);
          v13[2] = swap64(v13[2]);
          v13 += 3;
        }
      }
    }
    v11 = a2;
  }
  else
  {
    v11 = 0;
  }
  qlseek(*(_QWORD *)(v6 + 472), v9 + *(_QWORD *)(v6 + 480), 0);
  return v11;
}

