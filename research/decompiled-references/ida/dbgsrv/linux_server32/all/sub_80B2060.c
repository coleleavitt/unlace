/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B2060
// Address: 0x080B2060

//----- (080B2060) --------------------------------------------------------
__m128i **__cdecl sub_80B2060(__m128i **a1, unsigned int a2, const __m128i *a3)
{
  const __m128i *v3; // edi
  unsigned int v4; // esi
  int v5; // eax
  char v6; // al
  __m128i v7; // xmm0
  int v8; // eax
  __m128i v9; // xmm0
  int m128i_i32; // esi
  int v11; // eax
  void *v12; // eax
  void *v13; // eax
  __m128i *v15; // eax
  __m128i *v16; // ecx
  __m128i *v17; // esi
  __m128i *v18; // ecx
  int v19; // edi
  __int32 v20; // eax
  __int64 v21; // xmm1_8
  __int32 v22; // eax
  __int32 v23; // eax
  __int64 v24; // xmm2_8
  __m128i v25; // xmm0
  __m128i v26; // xmm0
  __int32 v27; // eax
  __m128i v28; // xmm0
  void *v29; // eax
  void *v30; // eax
  __m128i *v32; // [esp-2Ch] [ebp-2Ch]
  size_t v33; // [esp-28h] [ebp-28h]
  size_t v34; // [esp-28h] [ebp-28h]
  __m128i *v35; // [esp-28h] [ebp-28h]
  unsigned int v36; // [esp-20h] [ebp-20h]
  __m128i *v37; // [esp-20h] [ebp-20h]

  v3 = a3;
  v4 = (unsigned int)a1[2];
  if ( v4 < a2 )
  {
    v15 = (__m128i *)sub_80CF920((int)a1, nullptr, a2, 0x100u);
    v35 = v15;
    v16 = a1[2];
    a1[2] = (__m128i *)v4;
    v17 = *a1;
    v32 = v16;
    v18 = a1[1];
    if ( (int)&v18[-1].m128i_i32[3] + 3 >= 0 )
    {
      v37 = v15;
      v19 = (int)&v18[-1].m128i_i32[3] + 3;
      do
      {
        v37->m128i_i32[0] = v17->m128i_i32[0];
        v20 = v17->m128i_i32[1];
        v21 = v17->m128i_i64[1];
        v17->m128i_i32[1] = 0;
        v37->m128i_i32[1] = v20;
        v37->m128i_i64[1] = v21;
        v22 = v17[1].m128i_i32[0];
        v17->m128i_i32[2] = 0;
        v17->m128i_i32[3] = 0;
        v37[1].m128i_i32[0] = v22;
        v23 = v17[1].m128i_i32[1];
        v24 = v17[1].m128i_i64[1];
        v17[1].m128i_i32[1] = 0;
        v37[1].m128i_i32[1] = v23;
        v37[1].m128i_i64[1] = v24;
        v25 = _mm_loadu_si128(v17 + 2);
        v17[1].m128i_i32[3] = 0;
        v37[2] = v25;
        v37[3] = _mm_loadu_si128(v17 + 3);
        v37[4] = _mm_loadu_si128(v17 + 4);
        v37[5] = _mm_loadu_si128(v17 + 5);
        v37[6] = _mm_loadu_si128(v17 + 6);
        v37[7] = _mm_loadu_si128(v17 + 7);
        v37[8] = _mm_loadu_si128(v17 + 8);
        LOBYTE(v23) = v17[15].m128i_i8[8];
        v37[9] = _mm_loadu_si128(v17 + 9);
        v26 = _mm_loadu_si128(v17 + 10);
        v37[15].m128i_i8[8] = v23;
        v27 = v17[15].m128i_i32[3];
        v37[10] = v26;
        v28 = _mm_loadu_si128(v17 + 11);
        v37[15].m128i_i32[3] = v27;
        v37[11] = v28;
        v37[12] = _mm_loadu_si128(v17 + 12);
        v37[13] = _mm_loadu_si128(v17 + 13);
        v37[14] = _mm_loadu_si128(v17 + 14);
        v37[15].m128i_i64[0] = v17[15].m128i_i64[0];
        v29 = (void *)v17[1].m128i_i32[1];
        if ( v29 )
        {
          v17[1].m128i_i32[2] = 0;
          sub_80CF780(v29);
        }
        v30 = (void *)v17->m128i_i32[1];
        if ( v30 )
        {
          v17->m128i_i32[2] = 0;
          sub_80CF780(v30);
        }
        v37 += 16;
        v17 += 16;
      }
      while ( v19-- != 0 );
      v3 = a3;
      v17 = *a1;
    }
    sub_80CF780(v17);
    *a1 = v35;
    a1[2] = v32;
  }
  v36 = (unsigned int)a1[1];
  if ( v36 < a2 )
  {
    do
    {
      m128i_i32 = (int)(*a1)[16 * v36].m128i_i32;
      v11 = v3->m128i_i32[0];
      *(_DWORD *)(m128i_i32 + 4) = 0;
      *(_DWORD *)m128i_i32 = v11;
      *(_DWORD *)(m128i_i32 + 8) = 0;
      *(_DWORD *)(m128i_i32 + 12) = 0;
      if ( v3->m128i_i32[2] )
      {
        v33 = v3->m128i_u32[2];
        v12 = sub_80CF8B0(v33);
        *(_DWORD *)(m128i_i32 + 4) = v12;
        *(_DWORD *)(m128i_i32 + 12) = v33;
        memcpy(v12, (const void *)v3->m128i_i32[1], v33);
        *(_DWORD *)(m128i_i32 + 8) = v33;
      }
      v5 = v3[1].m128i_i32[0];
      *(_DWORD *)(m128i_i32 + 20) = 0;
      *(_DWORD *)(m128i_i32 + 24) = 0;
      *(_DWORD *)(m128i_i32 + 16) = v5;
      *(_DWORD *)(m128i_i32 + 28) = 0;
      if ( v3[1].m128i_i32[2] )
      {
        v34 = v3[1].m128i_u32[2];
        v13 = sub_80CF8B0(v34);
        *(_DWORD *)(m128i_i32 + 20) = v13;
        *(_DWORD *)(m128i_i32 + 28) = v34;
        memcpy(v13, (const void *)v3[1].m128i_i32[1], v34);
        *(_DWORD *)(m128i_i32 + 24) = v34;
      }
      v6 = v3[15].m128i_i8[8];
      *(__m128i *)(m128i_i32 + 32) = _mm_loadu_si128(v3 + 2);
      v7 = _mm_loadu_si128(v3 + 3);
      *(_BYTE *)(m128i_i32 + 248) = v6;
      v8 = v3[15].m128i_i32[3];
      *(__m128i *)(m128i_i32 + 48) = v7;
      v9 = _mm_loadu_si128(v3 + 4);
      *(_DWORD *)(m128i_i32 + 252) = v8;
      *(__m128i *)(m128i_i32 + 64) = v9;
      *(__m128i *)(m128i_i32 + 80) = _mm_loadu_si128(v3 + 5);
      *(__m128i *)(m128i_i32 + 96) = _mm_loadu_si128(v3 + 6);
      *(__m128i *)(m128i_i32 + 112) = _mm_loadu_si128(v3 + 7);
      *(__m128i *)(m128i_i32 + 128) = _mm_loadu_si128(v3 + 8);
      *(__m128i *)(m128i_i32 + 144) = _mm_loadu_si128(v3 + 9);
      *(__m128i *)(m128i_i32 + 160) = _mm_loadu_si128(v3 + 10);
      *(__m128i *)(m128i_i32 + 176) = _mm_loadu_si128(v3 + 11);
      *(__m128i *)(m128i_i32 + 192) = _mm_loadu_si128(v3 + 12);
      *(__m128i *)(m128i_i32 + 208) = _mm_loadu_si128(v3 + 13);
      *(__m128i *)(m128i_i32 + 224) = _mm_loadu_si128(v3 + 14);
      *(_QWORD *)(m128i_i32 + 240) = v3[15].m128i_i64[0];
      ++v36;
    }
    while ( a2 != v36 );
  }
  a1[1] = (__m128i *)a2;
  return a1;
}
