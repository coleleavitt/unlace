/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8098700
// Address: 0x08098700

//----- (08098700) --------------------------------------------------------
int __cdecl sub_8098700(int a1, int a2)
{
  int v2; // eax
  int result; // eax
  int v4; // ebp
  int v5; // edi
  char v6; // cl
  __m128i v7; // xmm2
  __m128i v8; // xmm0
  __m128i v9; // xmm2
  __m128i v10; // xmm3
  __m128i v11; // xmm4

  v2 = *(_DWORD *)(a1 + 188) + 1;
  *(_DWORD *)(a1 + 188) = v2;
  if ( v2 > 1023 )
    __longjmp_chk(a1 + 196, 54);
  sub_80997C0(a1, a2, 1);
  if ( *(_WORD *)(*(_DWORD *)(a1 + 352) + 12) != 41 )
    sub_80933C0(a1);
  result = sub_8098690(a1);
  if ( *(_BYTE *)(a1 + 356) )
  {
    v4 = *(_DWORD *)(a1 + 364);
    *(_BYTE *)(a1 + 356) = 0;
    v5 = *(unsigned __int8 *)(a1 + 360);
    sub_8098A10(a1, a2, 0);
    v6 = 8 * (8 - v4);
    v7 = _mm_loadl_epi64((const __m128i *)(a2 + 4));
    v8 = _mm_unpacklo_epi32(
           _mm_cvtsi32_si128(0xFFFFFFFFFFFFFFFFLL >> v6),
           _mm_cvtsi32_si128(0xFFFFFFFFFFFFFFFFLL >> v6 >> 32));
    *(_BYTE *)a2 = v5;
    v9 = _mm_and_si128(v7, v8);
    *(_QWORD *)(a2 + 4) = v9.m128i_i64[0];
    if ( !(_BYTE)v5 )
    {
      v10 = _mm_unpacklo_epi32(
              _mm_cvtsi32_si128(0x8000000000000000LL >> v6),
              _mm_cvtsi32_si128(0x8000000000000000LL >> v6 >> 32));
      v11 = _mm_and_si128(v9, v10);
      if ( _mm_cvtsi128_si32(_mm_srli_epi64(v11, 0x20u)) | _mm_cvtsi128_si32(v11) )
        *(_QWORD *)(a2 + 4) = _mm_or_si128(_mm_or_si128(_mm_xor_si128(v8, (__m128i)-1LL), v10), v9).m128i_u64[0];
    }
    --*(_DWORD *)(a1 + 188);
    *(_BYTE *)(a1 + 360) = v5;
    *(_DWORD *)(a1 + 364) = v4;
    return v5;
  }
  else
  {
    --*(_DWORD *)(a1 + 188);
  }
  return result;
}
// 804B140: using guessed type void __cdecl __noreturn __longjmp_chk(_DWORD, _DWORD);
