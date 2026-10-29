__int64 __fastcall sub_518000(unsigned __int64 a1)
{
  __int64 result; // rax
  __m128i v2; // xmm0

  result = operator new(0xA8u);
  *(_QWORD *)(result + 32) = 0;
  v2 = _mm_unpacklo_epi64((__m128i)a1, (__m128i)(a1 + 928));
  *(_QWORD *)(result + 56) = -1;
  *(__m128i *)result = v2;
  *(__m128i *)(result + 16) = v2;
  *(_QWORD *)(result + 96) = 0;
  *(_DWORD *)(result + 112) = 0;
  *(_QWORD *)(result + 120) = 0;
  *(_QWORD *)(result + 128) = result + 112;
  *(_QWORD *)(result + 136) = result + 112;
  *(_QWORD *)(result + 144) = 0;
  *(_BYTE *)(result + 152) = 0;
  *(_BYTE *)(result + 160) = 0;
  *(_OWORD *)(result + 40) = 0;
  *(_OWORD *)(result + 64) = -1;
  *(_OWORD *)(result + 80) = 0;
  return result;
}
