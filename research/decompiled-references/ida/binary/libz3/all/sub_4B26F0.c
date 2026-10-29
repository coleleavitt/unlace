__int64 __fastcall sub_4B26F0(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax

  *(__m128i *)a1 = _mm_unpacklo_epi64((__m128i)a2, (__m128i)a2);
  *(_OWORD *)(a1 + 16) = 0;
  result = sub_186B270(0x100u);
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 56) = 0;
  *(_DWORD *)(result + 88) = 0;
  *(_DWORD *)(result + 120) = 0;
  *(_DWORD *)(result + 152) = 0;
  *(_DWORD *)(result + 184) = 0;
  *(_DWORD *)(result + 216) = 0;
  *(_DWORD *)(result + 248) = 0;
  *(_QWORD *)(a1 + 32) = result;
  *(_QWORD *)(a1 + 40) = 8;
  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_OWORD *)result = 0;
  *(_OWORD *)(result + 32) = 0;
  *(_OWORD *)(result + 64) = 0;
  *(_OWORD *)(result + 96) = 0;
  *(_OWORD *)(result + 128) = 0;
  *(_OWORD *)(result + 160) = 0;
  *(_OWORD *)(result + 192) = 0;
  *(_OWORD *)(result + 224) = 0;
  return result;
}

