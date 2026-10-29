__int64 __fastcall sub_57A940(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  unsigned __int64 v4; // xmm0_8

  v2 = *a2;
  result = a1;
  if ( (*a2 & 1) != 0 )
  {
    LODWORD(v2) = BYTE4(v2);
    v4 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(BYTE6(v2)), _mm_cvtsi32_si128(((unsigned __int64)*a2 >> 40) & 0xF)).m128i_u64[0];
  }
  else
  {
    v4 = *(_QWORD *)(v2 + 4);
    LODWORD(v2) = *(_DWORD *)(v2 + 12);
  }
  *(_DWORD *)(a1 + 8) = v2;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)a1 = v4;
  return result;
}
