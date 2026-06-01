void __fastcall sub_400BE0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v4; // xmm0_8

  v4 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a4), 224).m128i_u64[0];
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 24) = a2;
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  *(_BYTE *)(a1 + 108) &= 0xF8u;
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)(a1 + 48) = a2;
  *(_QWORD *)(a1 + 64) = a2;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 104) = -65536;
  *(_QWORD *)(a1 + 96) = v4;
  sub_3D8450(a3, (__int64 *)(a1 + 16), 1, 0);
}

