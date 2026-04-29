__int64 __fastcall sub_3A5F90(__int64 a1)
{
  __int64 result; // rax
  __m128i v2; // xmm0

  result = operator new(0x30u);
  v2 = _mm_loadl_epi64((const __m128i *)&off_4E17D0);
  *(_QWORD *)(result + 8) = 40;
  *(_DWORD *)(result + 16) = 67108865;
  *(_QWORD *)result = off_4E13D8;
  *(_QWORD *)(result + 40) = a1;
  *(__m128i *)(result + 24) = _mm_unpacklo_epi64(v2, (__m128i)(unsigned __int64)"Hex-Rays Decompiler");
  return result;
}
