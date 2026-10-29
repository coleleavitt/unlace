/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: emul
// Address: 0x00000001000759B0

//----- (00000001000759B0) ----------------------------------------------------
__int64 __fastcall emul(__int16 *a1, __int16 *a2, __int64 a3)
{
  __int16 v3; // r15
  unsigned __int16 v4; // r15
  __int16 v5; // r12
  unsigned __int16 v6; // r12
  __int64 result; // rax
  int v9; // eax
  char v10; // cl
  __int16 v11; // dx
  int v12; // [rsp+0h] [rbp-60h] BYREF
  __int16 v13; // [rsp+4h] [rbp-5Ch]
  unsigned __int64 v14; // [rsp+6h] [rbp-5Ah] BYREF
  int v15; // [rsp+Eh] [rbp-52h]
  __int16 v16; // [rsp+12h] [rbp-4Eh]
  __int16 v17; // [rsp+14h] [rbp-4Ch]
  _WORD v18[3]; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v19; // [rsp+26h] [rbp-3Ah]
  int v20; // [rsp+2Eh] [rbp-32h]
  __int16 v21; // [rsp+32h] [rbp-2Eh]
  __int16 v22; // [rsp+34h] [rbp-2Ch]

  v3 = a1[7];
  v18[0] = (unsigned int)v3 >> 15;
  v4 = v3 & 0x7FFF;
  v18[1] = v4;
  v18[2] = 0;
  v19 = _mm_shufflelo_epi16(_mm_loadl_epi64((const __m128i *)(a1 + 3)), 27).u64[0];
  v20 = _mm_cvtsi128_si32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(*(_DWORD *)(a1 + 1)), 225));
  v21 = *a1;
  v22 = 0;
  v5 = a2[7];
  LOWORD(v12) = (unsigned int)v5 >> 15;
  v6 = v5 & 0x7FFF;
  HIWORD(v12) = v6;
  v13 = 0;
  v14 = _mm_shufflelo_epi16(_mm_loadl_epi64((const __m128i *)(a2 + 3)), 27).u64[0];
  v15 = _mm_cvtsi128_si32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(*(_DWORD *)(a2 + 1)), 225));
  v16 = *a2;
  v17 = 0;
  *(_OWORD *)a3 = 0;
  result = 1;
  if ( v4 != 0 && v6 != 0 )
  {
    v9 = sub_100075B30((__int64)v18, &v12);
    v10 = emdnorm((__int64)&v12, v9 != 0, 0, v4 + (unsigned int)v6 - 16382, 112);
    result = 2;
    if ( v10 )
    {
      v11 = HIWORD(v12) | 0x8000;
      if ( v18[0] == (_WORD)v12 )
        v11 = HIWORD(v12);
      *(_WORD *)(a3 + 14) = v11;
      *(_WORD *)(a3 + 12) = v14;
      *(_DWORD *)(a3 + 8) = _mm_cvtsi128_si32(_mm_shufflelo_epi16(_mm_loadl_epi64((const __m128i *)((char *)&v14 + 2)), 225));
      *(_QWORD *)a3 = _mm_shufflelo_epi16(_mm_loadl_epi64((const __m128i *)((char *)&v14 + 6)), 27).u64[0];
      return 1;
    }
  }
  return result;
}
