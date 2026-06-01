__int64 __fastcall sub_811060(__int64 a1, __int64 a2, int a3, int a4, unsigned int a5, unsigned int a6)
{
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx

  v10 = sub_7E4EC0(a2);
  v11 = sub_180C100(v10, 56);
  *(_DWORD *)(v11 + 16) = a3;
  *(_QWORD *)(v11 + 8) = 0xFFFFFFFF00000000LL;
  v12 = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(v11 + 20) = a4;
  *(_QWORD *)(v11 + 24) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a5), _mm_cvtsi32_si128(a6)).m128i_u64[0];
  LODWORD(v12) = *(_DWORD *)(v12 + 3612);
  *(_QWORD *)v11 = a2;
  *(_QWORD *)(a1 + 8) = v11;
  *(_DWORD *)a1 = v12;
  *(_DWORD *)(a1 + 16) = 3;
  return a1;
}

