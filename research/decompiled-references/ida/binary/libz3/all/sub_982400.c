__int64 __fastcall sub_982400(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __m128i *v7; // rax
  __m128i si128; // xmm2
  __m128i v9; // xmm1
  __m128i v10; // xmm0
  _OWORD *v11; // rax
  __int64 v12; // rax
  __int64 result; // rax

  *(_QWORD *)a1 = &off_1C56130;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a5;
  *(_QWORD *)(a1 + 24) = a3;
  *(_QWORD *)(a1 + 32) = a4;
  *(_QWORD *)(a1 + 40) = a6;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = a2;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 128) = 2;
  *(_QWORD *)(a1 + 120) = 0x80000000ALL;
  v7 = (__m128i *)sub_186B270(0xF0u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18B6710);
  v9 = _mm_load_si128((const __m128i *)&xmmword_18B6720);
  *(_QWORD *)(a1 + 112) = v7;
  v7[2] = 0;
  v7 += 12;
  v7[-7] = 0;
  v7[-4] = 0;
  v7[-1] = 0;
  v7[2] = 0;
  v10 = _mm_load_si128((const __m128i *)&xmmword_18B66F0);
  v7[-12] = si128;
  v7[-11] = v9;
  v7[-9] = si128;
  v7[-8] = v9;
  v7[-6] = si128;
  v7[-5] = v9;
  v7[-3] = si128;
  v7[-2] = v9;
  *v7 = si128;
  v7[1] = v9;
  *(_QWORD *)(a1 + 152) = v7;
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 184) = a7;
  *(_QWORD *)(a1 + 192) = 0;
  *(__m128i *)(a1 + 132) = v10;
  v11 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 200) = v11;
  *(_DWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 208) = 8;
  *v11 = 0;
  v11[1] = 0;
  v11[2] = 0;
  v11[3] = 0;
  v11[4] = 0;
  v11[5] = 0;
  v11[6] = 0;
  v11[7] = 0;
  v12 = sub_186B270(0x100u);
  *(_DWORD *)(v12 + 24) = 0;
  *(_DWORD *)(v12 + 56) = 0;
  *(_DWORD *)(v12 + 88) = 0;
  *(_DWORD *)(v12 + 120) = 0;
  *(_DWORD *)(v12 + 152) = 0;
  *(_DWORD *)(v12 + 184) = 0;
  *(_DWORD *)(v12 + 216) = 0;
  *(_DWORD *)(v12 + 248) = 0;
  *(_QWORD *)(a1 + 224) = v12;
  *(_QWORD *)(a1 + 232) = 8;
  *(_DWORD *)(a1 + 240) = 0;
  *(_OWORD *)v12 = 0;
  *(_OWORD *)(v12 + 32) = 0;
  *(_OWORD *)(v12 + 64) = 0;
  *(_OWORD *)(v12 + 96) = 0;
  *(_OWORD *)(v12 + 128) = 0;
  *(_OWORD *)(v12 + 160) = 0;
  *(_OWORD *)(v12 + 192) = 0;
  *(_OWORD *)(v12 + 224) = 0;
  result = sub_186B270(0xC0u);
  *(_QWORD *)(a1 + 256) = 8;
  *(_QWORD *)(a1 + 272) = a2;
  *(_QWORD *)(a1 + 288) = a2;
  *(_QWORD *)(a1 + 312) = a2;
  *(_QWORD *)result = 0;
  *(_DWORD *)(result + 8) = -2;
  *(_QWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 32) = -2;
  *(_QWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 56) = -2;
  *(_QWORD *)(result + 72) = 0;
  *(_DWORD *)(result + 80) = -2;
  *(_QWORD *)(result + 96) = 0;
  *(_DWORD *)(result + 104) = -2;
  *(_QWORD *)(result + 120) = 0;
  *(_DWORD *)(result + 128) = -2;
  *(_QWORD *)(result + 144) = 0;
  *(_DWORD *)(result + 152) = -2;
  *(_QWORD *)(result + 168) = 0;
  *(_DWORD *)(result + 176) = -2;
  *(_QWORD *)(a1 + 248) = result;
  *(_DWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 304) = 0;
  *(_QWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 336) = 0;
  *(_QWORD *)(a1 + 344) = 0;
  *(_DWORD *)(a1 + 352) = 0;
  return result;
}

