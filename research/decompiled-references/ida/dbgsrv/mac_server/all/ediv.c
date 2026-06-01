/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ediv
// Address: 0x0000000100075E50

//----- (0000000100075E50) ----------------------------------------------------
__int64 __fastcall ediv(__int16 *a1, __int16 *a2, __int64 a3)
{
  __int16 v3; // bx
  int v4; // ebx
  __int16 v5; // r12
  int v6; // r12d
  __int64 result; // rax
  _BOOL4 v9; // eax
  char v10; // cl
  __int16 v11; // dx
  _WORD v12[3]; // [rsp+0h] [rbp-60h] BYREF
  unsigned __int64 v13; // [rsp+6h] [rbp-5Ah]
  int v14; // [rsp+Eh] [rbp-52h]
  __int16 v15; // [rsp+12h] [rbp-4Eh]
  __int16 v16; // [rsp+14h] [rbp-4Ch]
  int v17; // [rsp+20h] [rbp-40h] BYREF
  __int16 v18; // [rsp+24h] [rbp-3Ch]
  unsigned __int64 v19; // [rsp+26h] [rbp-3Ah] BYREF
  int v20; // [rsp+2Eh] [rbp-32h]
  __int16 v21; // [rsp+32h] [rbp-2Eh]
  __int16 v22; // [rsp+34h] [rbp-2Ch]

  v3 = a1[7];
  LOWORD(v17) = (unsigned int)v3 >> 15;
  v4 = v3 & 0x7FFF;
  HIWORD(v17) = v4;
  v18 = 0;
  v19 = _mm_shufflelo_epi16(_mm_loadl_epi64((const __m128i *)(a1 + 3)), 27).u64[0];
  v20 = _mm_cvtsi128_si32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(*(_DWORD *)(a1 + 1)), 225));
  v21 = *a1;
  v22 = 0;
  v5 = a2[7];
  v12[0] = (unsigned int)v5 >> 15;
  v6 = v5 & 0x7FFF;
  v12[1] = v6;
  v12[2] = 0;
  v13 = _mm_shufflelo_epi16(_mm_loadl_epi64((const __m128i *)(a2 + 3)), 27).u64[0];
  v14 = _mm_cvtsi128_si32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(*(_DWORD *)(a2 + 1)), 225));
  v15 = *a2;
  v16 = 0;
  *(_OWORD *)a3 = 0;
  if ( !v6 )
    return 4;
  result = 1;
  if ( (_WORD)v4 )
  {
    v9 = sub_100075FE0(v12, &v17);
    v10 = emdnorm((__int64)&v17, v9, 0, v4 - v6 + 0x3FFF, 112);
    result = 2;
    if ( v10 )
    {
      v11 = HIWORD(v17) | 0x8000;
      if ( (_WORD)v17 == v12[0] )
        v11 = HIWORD(v17);
      *(_WORD *)(a3 + 14) = v11;
      *(_WORD *)(a3 + 12) = v19;
      *(_DWORD *)(a3 + 8) = _mm_cvtsi128_si32(_mm_shufflelo_epi16(_mm_loadl_epi64((const __m128i *)((char *)&v19 + 2)), 225));
      *(_QWORD *)a3 = _mm_shufflelo_epi16(_mm_loadl_epi64((const __m128i *)((char *)&v19 + 6)), 27).u64[0];
      return 1;
    }
  }
  return result;
}
