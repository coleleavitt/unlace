__int64 __fastcall sub_B33750(const __m128i *a1, __int64 a2)
{
  __int64 v2; // r13
  const void *v3; // r14
  __int64 v4; // rbx
  double v5; // rax
  void *v6; // rax
  char v7; // al
  char v8; // al
  double v10[9]; // [rsp+0h] [rbp-48h] BYREF

  v2 = a1[2].m128i_u32[2];
  v3 = (const void *)a1[3].m128i_i64[0];
  v4 = sub_9C3B30((__int64 *)(a2 + 2352), 64, 3u);
  v5 = *(double *)&a1[3].m128i_i64[1];
  *(__m128i *)v4 = _mm_loadu_si128(a1);
  v10[0] = v5;
  *(__m128i *)(v4 + 16) = _mm_loadu_si128(a1 + 1);
  LODWORD(v5) = a1[2].m128i_i32[0];
  *(_BYTE *)(v4 + 38) &= 0xE0u;
  *(_DWORD *)(v4 + 32) = LODWORD(v5);
  *(_WORD *)(v4 + 36) = 392;
  *(_DWORD *)(v4 + 40) = v2;
  v6 = (void *)sub_9C3B30((__int64 *)(a2 + 2352), v2, 0);
  *(_QWORD *)&v10[1] = v6;
  *(__m128 *)(v4 + 48) = _mm_loadh_ps(v10);
  if ( v2 )
    memcpy(v6, v3, *(unsigned int *)(v4 + 40));
  v7 = a1[2].m128i_i8[6] & 1 | *(_BYTE *)(v4 + 38) & 0xFE;
  *(_BYTE *)(v4 + 38) = v7;
  v8 = a1[2].m128i_i8[6] & 2 | v7 & 0xFD;
  *(_BYTE *)(v4 + 38) = v8;
  *(_BYTE *)(v4 + 38) = a1[2].m128i_i8[6] & 4 | v8 & 0xFB;
  return v4;
}
