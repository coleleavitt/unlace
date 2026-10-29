/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eltoe64
// Address: 0x00000001000768C0

//----- (00000001000768C0) ----------------------------------------------------
__int64 __fastcall eltoe64(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm0
  int v3; // ecx
  __int16 v4; // ax
  unsigned __int64 v5; // xmm1_8
  _WORD v7[16]; // [rsp+0h] [rbp-30h] BYREF

  v2 = 0;
  memset(v7, 0, 22);
  if ( a1 < 0 )
  {
    a1 = -a1;
    v7[0] = -1;
  }
  else if ( !a1 )
  {
    LOWORD(v3) = 0;
    v4 = 0;
    v5 = 0;
    goto LABEL_7;
  }
  v7[2] = HIWORD(a1);
  v7[3] = WORD2(a1);
  v7[4] = WORD1(a1);
  v7[5] = a1;
  v3 = 16430 - sub_1000751F0((__int64)v7);
  v4 = v7[3];
  v2 = _mm_shufflelo_epi16(_mm_loadl_epi64((const __m128i *)&v7[4]), 225);
  v5 = _mm_shufflelo_epi16(_mm_loadl_epi64((const __m128i *)&v7[6]), 27).u64[0];
  if ( v7[0] )
    LOWORD(v3) = v3 | 0x8000;
LABEL_7:
  *(_WORD *)(a2 + 14) = v3;
  *(_WORD *)(a2 + 12) = v4;
  *(_DWORD *)(a2 + 8) = _mm_cvtsi128_si32(v2);
  *(_QWORD *)a2 = v5;
  return __stack_chk_guard;
}
