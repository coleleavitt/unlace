void __fastcall sub_1BF07D0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        int a8,
        __int64 a9,
        int a10,
        char a11,
        char a12)
{
  __int64 v14; // r14
  __m128i v15; // xmm0
  char v16; // bp
  __int64 v17; // rax
  char v18; // dl
  __int64 v19; // rsi
  __int64 *v20; // rax
  __int64 v21; // r9
  __int64 *v22; // r8
  __int64 *v23; // rcx
  __int64 v24; // rax
  __int64 *v25; // rsi
  int v26; // ecx
  __m128 si128; // xmm1
  unsigned __int8 v28; // [rsp+Ch] [rbp-6Ch]
  char v32; // [rsp+28h] [rbp-50h]
  unsigned int v33; // [rsp+2Ch] [rbp-4Ch]
  __m128i v34[4]; // [rsp+30h] [rbp-48h] BYREF

  v14 = a9;
  v15 = _mm_loadu_si128((const __m128i *)((char *)&a7 + 8));
  v16 = a12;
  v33 = a7;
  v28 = a10;
  v34[0] = v15;
  v32 = a11;
  v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  v18 = *(_BYTE *)(v14 + 2724);
  v19 = v17 | v16;
  if ( !v18 )
    goto LABEL_10;
  v20 = *(__int64 **)(v14 + 2704);
  v21 = *(unsigned int *)(v14 + 2716);
  v22 = &v20[v21];
  if ( v20 != v22 )
  {
    v23 = *(__int64 **)(v14 + 2704);
    if ( v19 == *v20 )
    {
LABEL_25:
      v18 = 0;
      v25 = &v20[*(unsigned int *)(v14 + 2716)];
      goto LABEL_12;
    }
    while ( v22 != ++v23 )
    {
      if ( v19 == *v23 )
        goto LABEL_25;
    }
  }
  if ( (unsigned int)v21 < *(_DWORD *)(v14 + 2712) )
  {
    *(_DWORD *)(v14 + 2716) = v21 + 1;
    *v22 = v19;
    v24 = *(_QWORD *)(v14 + 2704);
    v23 = (__int64 *)(v24 + 8 * v21);
  }
  else
  {
LABEL_10:
    v23 = (__int64 *)sub_2236760(v14 + 2704, v19);
    v24 = *(_QWORD *)(v14 + 2704);
    if ( !*(_BYTE *)(v14 + 2724) )
    {
      v25 = (__int64 *)(v24 + 8LL * *(unsigned int *)(v14 + 2712));
      goto LABEL_12;
    }
  }
  v25 = (__int64 *)(v24 + 8LL * *(unsigned int *)(v14 + 2716));
LABEL_12:
  if ( v25 != v23 && (*v23 == -2 || *v23 == -1) )
  {
    do
      ++v23;
    while ( v25 != v23 && (unsigned __int64)*v23 >= 0xFFFFFFFFFFFFFFFELL );
  }
  if ( v18 )
  {
    if ( a5
      || (v26 = *(_DWORD *)(v14 + 2972), v26 == 2)
      || v26 == 5
      || (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 60LL) & 0x10) != 0 )
    {
      a10 = v28;
      si128 = (__m128)_mm_load_si128(v34);
      sub_1BF01B0(
        a1,
        (unsigned int *)v14,
        a2,
        a3,
        a4,
        a5,
        *(double *)v15.m128i_i64,
        si128,
        a6,
        a7,
        si128.m128_i64[0],
        si128.m128_u64[1],
        v28,
        v32,
        v16);
    }
    else
    {
      sub_1BDA050(v14, a2, a3, a4, a6, v33, (__int128)_mm_load_si128(v34), v28, v32, v16);
    }
  }
}
