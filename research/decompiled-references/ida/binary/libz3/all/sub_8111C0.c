__int64 __fastcall sub_8111C0(__int64 a1, __int64 a2, int a3, int a4, int a5, unsigned int a6, unsigned int a7)
{
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx

  v11 = sub_7E4EC0(a2);
  v12 = sub_180C100(v11, 56);
  v13 = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(v12 + 12) = a3;
  *(_DWORD *)(v12 + 16) = a4;
  *(_DWORD *)(v12 + 20) = a5;
  *(_QWORD *)(v12 + 24) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a6), _mm_cvtsi32_si128(a7)).m128i_u64[0];
  LODWORD(v13) = *(_DWORD *)(v13 + 3612);
  *(_QWORD *)v12 = a2;
  *(_DWORD *)(v12 + 8) = 1;
  *(_QWORD *)(a1 + 8) = v12;
  *(_DWORD *)a1 = v13;
  *(_DWORD *)(a1 + 16) = 3;
  return a1;
}

