/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B2480
// Address: 0x080B2480

//----- (080B2480) --------------------------------------------------------
unsigned int __cdecl sub_80B2480(int a1, unsigned int a2)
{
  unsigned int v2; // edx
  __m128i *v3; // eax
  void *v4; // edi
  __m128i v5; // xmm0
  __m128i v6; // xmm0
  _DWORD *v7; // edi
  void *v8; // ecx
  void *v9; // ecx
  unsigned int result; // eax
  unsigned int v11; // [esp-238h] [ebp-238h]
  unsigned int v12; // [esp-238h] [ebp-238h]
  size_t v13; // [esp-238h] [ebp-238h]
  void *v14; // [esp-230h] [ebp-230h]
  unsigned int v15; // [esp-230h] [ebp-230h]
  size_t v16; // [esp-230h] [ebp-230h]
  __m128i v17[16]; // [esp-22Ch] [ebp-22Ch] BYREF
  __m128i v18; // [esp-124h] [ebp-124h] BYREF
  __int32 v19; // [esp-114h] [ebp-114h]
  void *v20; // [esp-110h] [ebp-110h]
  size_t v21; // [esp-10Ch] [ebp-10Ch]
  size_t v22; // [esp-108h] [ebp-108h]
  __m128i si128; // [esp-104h] [ebp-104h]
  __m128i v24; // [esp-F4h] [ebp-F4h]
  __m128i v25; // [esp-E4h] [ebp-E4h]
  __m128i v26; // [esp-D4h] [ebp-D4h]
  __m128i v27; // [esp-C4h] [ebp-C4h]
  __m128i v28; // [esp-B4h] [ebp-B4h]
  __m128i v29; // [esp-A4h] [ebp-A4h]
  __m128i v30; // [esp-94h] [ebp-94h]
  __m128i v31; // [esp-84h] [ebp-84h]
  __m128i v32; // [esp-74h] [ebp-74h]
  __m128i v33; // [esp-64h] [ebp-64h]
  __m128i v34; // [esp-54h] [ebp-54h]
  __m128i v35; // [esp-44h] [ebp-44h]
  __int64 v36; // [esp-34h] [ebp-34h]
  __int8 v37; // [esp-2Ch] [ebp-2Ch]
  __int32 v38; // [esp-28h] [ebp-28h]
  unsigned int v39; // [esp-20h] [ebp-20h]

  v2 = *(_DWORD *)(a1 + 4);
  v39 = __readgsdword(0x14u);
  if ( v2 != a2 )
  {
    memset(v17, 0, sizeof(v17));
    v3 = (__m128i *)&v17[3].m128i_u64[1];
    *(long double *)v17[2].m128i_i8 = NAN;
    do
    {
      v3[1].m128i_i32[1] = 0;
      v3 = (__m128i *)((char *)v3 + 24);
      v3[-2].m128i_i16[4] = 0;
      v3[-2].m128i_i16[5] = 0;
      v3[-2].m128i_i16[6] = 0;
      v3[-2].m128i_i16[7] = 0;
      v3[-1].m128i_i32[0] = 0;
      v3[-1].m128i_i32[1] = 0;
      v3[-1].m128i_i32[2] = 0;
    }
    while ( &v17[15].m128i_u64[1] != (unsigned __int64 *)v3 );
    if ( a2 < v2 )
    {
      v15 = a2;
      do
      {
        v7 = (_DWORD *)(*(_DWORD *)a1 + (v15 << 8));
        v8 = (void *)v7[5];
        if ( v8 )
        {
          v11 = v2;
          v7[6] = 0;
          sub_80CF780(v8);
          v2 = v11;
        }
        v9 = (void *)v7[1];
        if ( v9 )
        {
          v12 = v2;
          v7[2] = 0;
          sub_80CF780(v9);
          v2 = v12;
        }
        ++v15;
      }
      while ( v2 != v15 );
      *(_DWORD *)(a1 + 4) = a2;
    }
    else if ( (unsigned int)v17 < *(_DWORD *)a1 || (unsigned int)v17 >= (*(_DWORD *)(a1 + 8) << 8) + *(_DWORD *)a1 )
    {
      sub_80B2060((__m128i **)a1, a2, v17);
    }
    else
    {
      v4 = nullptr;
      v18.m128i_i64[1] = 0;
      v18.m128i_i64[0] = v17[0].m128i_u32[0];
      if ( v17[0].m128i_i32[2] )
      {
        v16 = v17[0].m128i_u32[2];
        v18.m128i_i32[1] = (__int32)sub_80CF8B0(v17[0].m128i_u32[2]);
        v4 = (void *)v18.m128i_i32[1];
        v18.m128i_i32[3] = v16;
        memcpy((void *)v18.m128i_i32[1], (const void *)v17[0].m128i_i32[1], v16);
        v18.m128i_i32[2] = v16;
      }
      v20 = nullptr;
      v21 = 0;
      v19 = v17[1].m128i_i32[0];
      v22 = 0;
      v14 = nullptr;
      if ( v17[1].m128i_i32[2] )
      {
        v13 = v17[1].m128i_u32[2];
        v14 = sub_80CF8B0(v17[1].m128i_u32[2]);
        v20 = v14;
        v22 = v13;
        memcpy(v14, (const void *)v17[1].m128i_i32[1], v13);
        v21 = v13;
      }
      si128 = _mm_load_si128(&v17[2]);
      v5 = _mm_load_si128(&v17[3]);
      v37 = v17[15].m128i_i8[8];
      v24 = v5;
      v6 = _mm_load_si128(&v17[4]);
      v38 = v17[15].m128i_i32[3];
      v25 = v6;
      v26 = _mm_load_si128(&v17[5]);
      v27 = _mm_load_si128(&v17[6]);
      v28 = _mm_load_si128(&v17[7]);
      v29 = _mm_load_si128(&v17[8]);
      v30 = _mm_load_si128(&v17[9]);
      v31 = _mm_load_si128(&v17[10]);
      v32 = _mm_load_si128(&v17[11]);
      v33 = _mm_load_si128(&v17[12]);
      v34 = _mm_load_si128(&v17[13]);
      v35 = _mm_load_si128(&v17[14]);
      v36 = v17[15].m128i_i64[0];
      sub_80B2060((__m128i **)a1, a2, &v18);
      if ( v14 )
        sub_80CF780(v14);
      if ( v4 )
        sub_80CF780(v4);
    }
    if ( v17[1].m128i_i32[1] )
      sub_80CF780((void *)v17[1].m128i_i32[1]);
    if ( v17[0].m128i_i32[1] )
      sub_80CF780((void *)v17[0].m128i_i32[1]);
  }
  result = v39 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
