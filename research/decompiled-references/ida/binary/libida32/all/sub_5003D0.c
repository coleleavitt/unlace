__int64 __fastcall sub_5003D0(unsigned __int64 a1)
{
  __int64 result; // rax
  __m128i v2; // xmm0

  result = operator new(0xA0u);
  *(_QWORD *)(result + 32) = 0;
  v2 = _mm_unpacklo_epi64((__m128i)a1, (__m128i)(a1 + 760));
  *(_QWORD *)(result + 88) = 0;
  *(_QWORD *)(result + 56) = -1;
  *(_QWORD *)(result + 64) = -1;
  *(__m128i *)result = v2;
  *(__m128i *)(result + 16) = v2;
  *(_DWORD *)(result + 104) = 0;
  *(_QWORD *)(result + 112) = 0;
  *(_QWORD *)(result + 120) = result + 104;
  *(_QWORD *)(result + 128) = result + 104;
  *(_QWORD *)(result + 136) = 0;
  *(_BYTE *)(result + 144) = 0;
  *(_BYTE *)(result + 152) = 0;
  *(_OWORD *)(result + 40) = 0;
  *(_OWORD *)(result + 72) = 0;
  return result;
}

