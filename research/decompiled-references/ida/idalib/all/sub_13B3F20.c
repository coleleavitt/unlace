__int64 __fastcall sub_13B3F20(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  __m128i si128; // xmm0
  __m128i v7; // xmm0
  __int64 result; // rax

  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &off_2C44458;
  *(_QWORD *)(a1 + 16) = off_2C444B0;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 48);
  v2 = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a2 + 56) = 0;
  *(_QWORD *)(a1 + 40) = v2;
  v3 = (_QWORD *)operator new(0x88u);
  v3[1] = 0;
  v3[2] = 0;
  *v3 = &off_2C44388;
  v3[3] = 0;
  v3[4] = 0;
  v3[5] = 0;
  v3[6] = 0;
  v3[7] = 0;
  v3[8] = 0;
  v3[9] = 0;
  v3[10] = 0;
  v3[11] = 0;
  v3[12] = 0;
  v3[13] = 0;
  v3[14] = 0;
  v3[15] = 0;
  v3[16] = 0;
  *(_QWORD *)(a1 + 48) = v3;
  v4 = operator new(0x38u);
  v5 = *(_QWORD *)(a1 + 24);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A9810);
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(v4 + 8) = 0;
  *(__m128i *)(v4 + 16) = si128;
  v7 = _mm_load_si128((const __m128i *)&xmmword_23AA460);
  *(_QWORD *)v4 = v5;
  *(_QWORD *)(v4 + 32) = 0;
  *(__m128i *)(v4 + 40) = v7;
  *(_QWORD *)(a1 + 56) = v4;
  *(_QWORD *)(a1 + 104) = a1 + 120;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_BYTE *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_DWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 264) = 0;
  *(_DWORD *)(a1 + 272) = 0;
  result = *(_QWORD *)(v5 + 64);
  if ( result )
    *(_QWORD *)(a1 + 80) = result;
  return result;
}
