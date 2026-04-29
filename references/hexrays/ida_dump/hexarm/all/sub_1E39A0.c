__int64 __fastcall sub_1E39A0(__int64 a1, unsigned __int64 a2)
{
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_BYTE *)(a1 + 32) = 1;
  *(_QWORD *)(a1 + 40) = a2;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 72) = 1;
  *(__m128i *)a1 = _mm_unpacklo_epi64((__m128i)a2, (__m128i)a2);
  return sub_1E3900((__int64 *)a1);
}
