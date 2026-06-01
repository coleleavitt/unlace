/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A7810
// Address: 0x080A7810

//----- (080A7810) --------------------------------------------------------
int __cdecl sub_80A7810(__m128i *a1, const __m128i *a2, char a3, char a4)
{
  __int16 v4; // ax
  unsigned __int32 v5; // eax
  unsigned int v6; // eax
  __int32 v7; // esi
  unsigned int v8; // edi
  unsigned int v9; // eax
  unsigned int v10; // esi
  unsigned int v11; // eax
  __int32 *v13; // eax
  int v14; // ecx
  unsigned __int8 v15; // [esp+0h] [ebp-24h]
  unsigned __int32 v16; // [esp+4h] [ebp-20h]

  v4 = a2[1].m128i_i16[4];
  if ( v4 == 523 )
  {
    *a1 = _mm_loadu_si128(a2);
    a1[1] = _mm_loadu_si128(a2 + 1);
    a1[2] = _mm_loadu_si128(a2 + 2);
    a1[3] = _mm_loadu_si128(a2 + 3);
    a1[4] = _mm_loadu_si128(a2 + 4);
    a1[5] = _mm_loadu_si128(a2 + 5);
    a1[7] = _mm_loadu_si128(a2 + 8);
    a1[8] = _mm_loadu_si128(a2 + 9);
    a1[9] = _mm_loadu_si128(a2 + 10);
    a1[10] = _mm_loadu_si128(a2 + 11);
    a1[11] = _mm_loadu_si128(a2 + 12);
    a1[12] = _mm_loadu_si128(a2 + 13);
    a1[13] = _mm_loadu_si128(a2 + 14);
    a1[14] = _mm_loadu_si128(a2 + 15);
    a1[15].m128i_i64[0] = a2[16].m128i_i64[0];
    a1[6].m128i_i32[0] = a2[6].m128i_i32[0];
    v15 = 1;
    a1[6].m128i_i32[1] = a2[6].m128i_i32[2];
    a1[6].m128i_i32[2] = a2[7].m128i_i32[0];
    a1[6].m128i_i32[3] = a2[7].m128i_i32[2];
  }
  else
  {
    if ( (unsigned __int16)v4 > 0x20Bu || (v15 = 1, ((v4 - 263) & 0xFFFB) != 0) && v4 )
    {
      if ( !a3 )
        sub_8069740();
      v15 = 0;
    }
    *a1 = _mm_loadu_si128(a2);
    a1[1] = _mm_loadu_si128(a2 + 1);
    a1[2] = _mm_loadu_si128(a2 + 2);
    a1[3] = _mm_loadu_si128(a2 + 3);
    a1[4] = _mm_loadu_si128(a2 + 4);
    a1[5] = _mm_loadu_si128(a2 + 5);
    a1[6] = _mm_loadu_si128(a2 + 6);
    a1[7] = _mm_loadu_si128(a2 + 7);
    a1[8] = _mm_loadu_si128(a2 + 8);
    a1[9] = _mm_loadu_si128(a2 + 9);
    a1[10] = _mm_loadu_si128(a2 + 10);
    a1[11] = _mm_loadu_si128(a2 + 11);
    a1[12] = _mm_loadu_si128(a2 + 12);
    a1[13] = _mm_loadu_si128(a2 + 13);
    a1[14] = _mm_loadu_si128(a2 + 14);
    a1[15].m128i_i64[0] = a2[15].m128i_i64[0];
  }
  if ( (unsigned __int16)(a1[5].m128i_i16[6] - 10) > 3u
    && ((v5 = a1[3].m128i_u32[3], v16 = a1[3].m128i_u32[2], v16 < v5)
     || v5 && (v5 & (v5 - 1)) != 0
     || v16 && ((v16 - 1) & v16) != 0) )
  {
    if ( !a3 )
    {
      sub_80A77D0(
        "Invalid file: bad alignment value specified (section alignment: %08X, file alignment: %08X)",
        a1[3].m128i_i32[2]);
      v6 = a1[5].m128i_u32[0];
      if ( v6 > 0x77000000 || v6 < a1[5].m128i_i32[1] )
LABEL_32:
        sub_80A77D0("Invalid file: bad ImageSize value %x", v6);
    }
  }
  else
  {
    v6 = a1[5].m128i_u32[0];
    if ( (v6 > 0x77000000 || v6 < a1[5].m128i_i32[1]) && !a3 )
      goto LABEL_32;
  }
  if ( a4 )
  {
    v7 = a1[7].m128i_i32[1];
    if ( (unsigned int)(v7 - 1) <= 0xE )
    {
      v13 = &a1[7].m128i_i32[2 * v7 + 2];
      *v13 = 0;
      v14 = 2 * (16 - v7);
      v13[v14 - 1] = 0;
      memset(
        (void *)((unsigned int)&a1[7].m128i_u32[2 * v7 + 3] & 0xFFFFFFFC),
        0,
        4 * (((unsigned int)&v13[v14] - ((unsigned int)&a1[7].m128i_u32[2 * v7 + 3] & 0xFFFFFFFC)) >> 2));
    }
    v8 = 248;
    if ( a1[1].m128i_i16[4] == 523 )
      v8 = 264;
    v9 = 128;
    v10 = a1[1].m128i_u16[2] + 24;
    if ( v10 >= 0x80 )
      v9 = a1[1].m128i_u16[2] + 24;
    if ( v9 < v8 )
    {
      v11 = 120;
      if ( v8 != 248 )
        v11 = 136;
      if ( v10 >= v11 )
      {
        if ( !a3 )
          sub_8058290();
        memset(&a1[7].m128i_u64[16 - ((v8 - v10 + 7) >> 3) + 1], 0, (v8 - v10 + 7) & 0xFFFFFFF8);
      }
    }
  }
  return v15;
}
