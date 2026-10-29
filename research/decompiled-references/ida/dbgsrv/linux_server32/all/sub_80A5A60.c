/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A5A60
// Address: 0x080A5A60

//----- (080A5A60) --------------------------------------------------------
int __cdecl sub_80A5A60(int a1, int a2, int a3, int a4, int a5)
{
  unsigned __int64 v5; // rax
  int v6; // esi
  unsigned __int64 v7; // xmm0_8
  __m128i v8; // xmm0
  unsigned __int64 v9; // xmm2_8
  unsigned __int64 v10; // xmm1_8

  LODWORD(v5) = a3;
  v6 = a1 + 16 * a2;
  v7 = *(_QWORD *)v6;
  if ( (_BYTE)a3 == 1 )
  {
    *(_QWORD *)a5 = sub_80CD930(v7);
    v5 = sub_80CD930(*(_QWORD *)(v6 + 8));
    v8 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v5), _mm_cvtsi32_si128(HIDWORD(v5)));
LABEL_7:
    v10 = _mm_and_si128(_mm_load_si128((const __m128i *)&xmmword_80DE190), v8).m128i_u64[0];
    v9 = HIDWORD(v8.m128i_i64[0]);
    goto LABEL_5;
  }
  *(_QWORD *)a5 = v7;
  v8 = _mm_loadl_epi64((const __m128i *)(v6 + 8));
  if ( a4 != 8 || (_BYTE)a3 != 2 )
    goto LABEL_7;
  v9 = _mm_and_si128(_mm_load_si128((const __m128i *)&xmmword_80DE190), v8).m128i_u64[0];
  v10 = HIBYTE(v8.m128i_i64[0]);
LABEL_5:
  *(_DWORD *)(a5 + 24) = 0;
  *(_DWORD *)(a5 + 28) = 0;
  *(_QWORD *)(a5 + 16) = v9;
  *(_QWORD *)(a5 + 8) = v10;
  return v5;
}
// 80DE190: using guessed type __int128 xmmword_80DE190;
