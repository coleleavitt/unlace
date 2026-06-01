__int64 __fastcall sub_547E30(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  __m128i v4; // xmm0
  __int64 v5; // rax
  __m128i v6; // xmm1
  __int64 result; // rax

  v3 = *a3;
  v4 = _mm_loadu_si128((const __m128i *)(a3 + 1));
  *a3 = 0;
  *(__m128i *)(a2 + 8) = v4;
  *(_QWORD *)a2 = v3;
  v5 = a3[3];
  v6 = _mm_loadu_si128((const __m128i *)a3 + 2);
  *(_OWORD *)(a3 + 1) = 0;
  *(_QWORD *)(a2 + 24) = v5;
  *(__m128i *)(a2 + 32) = v6;
  LODWORD(v5) = *((_DWORD *)a3 + 12);
  a3[3] = 0;
  *((_OWORD *)a3 + 2) = 0;
  *(_DWORD *)(a2 + 48) = v5;
  result = *((unsigned __int8 *)a3 + 52);
  *(_BYTE *)(a2 + 52) = result;
  return result;
}
