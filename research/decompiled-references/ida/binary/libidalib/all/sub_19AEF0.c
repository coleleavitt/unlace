__int64 __fastcall sub_19AEF0(__int64 a1)
{
  __int64 result; // rax
  __m128i si128; // xmm1

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &off_235FD8;
  *(_WORD *)(a1 + 172) = 0;
  result = (unsigned int)dword_2513BC;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 96) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1D3DE0);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 152) = 0;
  *(_BYTE *)(a1 + 156) = 0;
  *(_QWORD *)(a1 + 164) = 0;
  *(_QWORD *)(a1 + 176) = 0;
  dword_2513BC = result + 1;
  *(_DWORD *)(a1 + 160) = result;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  *(__m128i *)(a1 + 112) = si128;
  *(_OWORD *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  return result;
}

