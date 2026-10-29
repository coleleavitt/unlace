void *__fastcall sub_B09F50(
        __int64 a1,
        __int64 a2,
        const __m128i *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8,
        char a9,
        __int64 a10,
        __int64 a11,
        char a12,
        __int64 a13,
        __int64 a14,
        int a15,
        __int64 a16)
{
  __int64 v16; // rax
  char v17; // r11
  __m128i v18; // xmm2
  __int64 v19; // rax
  __m128i v20; // xmm3
  __int64 v21; // r12
  __int64 v22; // rbp
  int v23; // r13d
  __int64 v24; // r15
  __int64 v25; // rax
  void *result; // rax
  char v27; // [rsp+Ch] [rbp-4Ch]
  void *src; // [rsp+10h] [rbp-48h]
  void *v29; // [rsp+18h] [rbp-40h]

  v16 = a10;
  v17 = a12;
  *(__m128i *)a1 = _mm_loadu_si128(a3);
  v18 = _mm_loadu_si128((const __m128i *)&a7);
  src = (void *)v16;
  v19 = a13;
  *(__m128i *)(a1 + 16) = _mm_loadu_si128(a3 + 1);
  v20 = _mm_loadu_si128((const __m128i *)&a8);
  v21 = a11;
  v29 = (void *)v19;
  LODWORD(v19) = a3[2].m128i_i32[0];
  *(_QWORD *)(a1 + 40) = a4;
  v22 = a14;
  *(_DWORD *)(a1 + 32) = v19;
  v23 = a15;
  *(_WORD *)(a1 + 36) = 142;
  LOBYTE(v19) = *(_BYTE *)(a1 + 38);
  *(_QWORD *)(a1 + 48) = a5;
  v24 = a16;
  *(_QWORD *)(a1 + 56) = a6;
  *(__m128i *)(a1 + 64) = v18;
  v27 = v17;
  *(_BYTE *)(a1 + 38) = v19 & 0xE0 | 0x10;
  *(__m128i *)(a1 + 80) = v20;
  LOBYTE(v19) = a9;
  *(_DWORD *)(a1 + 100) = v21;
  *(_BYTE *)(a1 + 96) = v19;
  v25 = sub_99FDF0((__int64 *)(a2 + 2352), (unsigned int)v21, 0);
  *(_DWORD *)(a1 + 116) = v22;
  *(_QWORD *)(a1 + 104) = v25;
  *(_BYTE *)(a1 + 112) = v27;
  result = (void *)sub_99FDF0((__int64 *)(a2 + 2352), (unsigned int)v22, 0);
  *(_DWORD *)(a1 + 128) = v23;
  *(_QWORD *)(a1 + 120) = result;
  *(_QWORD *)(a1 + 136) = v24;
  if ( !v21 )
  {
    if ( !v22 )
      return result;
    return memcpy(*(void **)(a1 + 120), v29, *(unsigned int *)(a1 + 116));
  }
  result = memcpy(*(void **)(a1 + 104), src, *(unsigned int *)(a1 + 100));
  if ( v22 )
    return memcpy(*(void **)(a1 + 120), v29, *(unsigned int *)(a1 + 116));
  return result;
}

