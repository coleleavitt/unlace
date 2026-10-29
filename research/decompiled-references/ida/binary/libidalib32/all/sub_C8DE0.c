__int64 __fastcall sub_C8DE0(unsigned __int64 *a1, __int64 a2)
{
  unsigned int v2; // ecx
  __int64 v3; // rax
  _DWORD *v4; // rdx
  unsigned int v5; // eax
  unsigned __int64 v6; // xmm0_8
  __int64 result; // rax

  v2 = *(_DWORD *)(a2 + 8);
  if ( v2 )
  {
    v3 = 0;
    v4 = &unk_22F740;
    while ( v2 != *v4 )
    {
      ++v3;
      v4 += 6;
      if ( v3 == 35 )
        goto LABEL_7;
    }
    v5 = *((_DWORD *)&unk_22F740 + 6 * v3 + 4);
    v6 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v2), _mm_cvtsi32_si128(v5)).m128i_u64[0];
    if ( v5 )
      *a1 = v6;
  }
LABEL_7:
  result = sub_C8D60(a2);
  if ( (int)result <= 0 )
  {
    if ( *(_DWORD *)a1 )
      *a1 = 0;
  }
  return result;
}

