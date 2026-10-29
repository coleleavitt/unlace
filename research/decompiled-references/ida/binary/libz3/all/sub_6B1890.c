_OWORD *__fastcall sub_6B1890(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __m128i v4; // xmm1
  __int64 v5; // rax
  _OWORD *v6; // rax
  _OWORD *result; // rax

  v4 = _mm_unpacklo_epi64((__m128i)a3, (__m128i)a3);
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = a3;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = a3;
  *(_QWORD *)(a1 + 88) = a4;
  *(_QWORD *)(a1 + 96) = a3;
  *(__m128i *)a1 = v4;
  *(_OWORD *)(a1 + 16) = 0;
  *(__m128i *)(a1 + 32) = v4;
  if ( a4 )
    ++*(_DWORD *)(a4 + 8);
  *(_QWORD *)(a1 + 104) = a2;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 1;
  *(_OWORD *)(a1 + 136) = 0;
  v5 = sub_186B270(0x180u);
  *(_BYTE *)(v5 + 12) &= 0xFCu;
  *(_BYTE *)(v5 + 28) &= 0xFCu;
  *(_BYTE *)(v5 + 60) &= 0xFCu;
  *(_BYTE *)(v5 + 76) &= 0xFCu;
  *(_BYTE *)(v5 + 108) &= 0xFCu;
  *(_BYTE *)(v5 + 124) &= 0xFCu;
  *(_BYTE *)(v5 + 156) &= 0xFCu;
  *(_BYTE *)(v5 + 172) &= 0xFCu;
  *(_BYTE *)(v5 + 204) &= 0xFCu;
  *(_QWORD *)v5 = 0;
  *(_QWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = 0;
  *(_QWORD *)(v5 + 48) = 0;
  *(_QWORD *)(v5 + 64) = 0;
  *(_QWORD *)(v5 + 80) = 0;
  *(_QWORD *)(v5 + 96) = 0;
  *(_QWORD *)(v5 + 112) = 0;
  *(_QWORD *)(v5 + 128) = 0;
  *(_QWORD *)(v5 + 144) = 0;
  *(_QWORD *)(v5 + 160) = 0;
  *(_QWORD *)(v5 + 176) = 0;
  *(_QWORD *)(v5 + 192) = 0;
  *(_QWORD *)(v5 + 208) = 0;
  *(_BYTE *)(v5 + 220) &= 0xFCu;
  *(_BYTE *)(v5 + 252) &= 0xFCu;
  *(_BYTE *)(v5 + 268) &= 0xFCu;
  *(_BYTE *)(v5 + 300) &= 0xFCu;
  *(_BYTE *)(v5 + 316) &= 0xFCu;
  *(_BYTE *)(v5 + 348) &= 0xFCu;
  *(_BYTE *)(v5 + 364) &= 0xFCu;
  *(_QWORD *)(v5 + 224) = 0;
  *(_QWORD *)(v5 + 240) = 0;
  *(_QWORD *)(v5 + 256) = 0;
  *(_QWORD *)(v5 + 272) = 0;
  *(_QWORD *)(v5 + 288) = 0;
  *(_QWORD *)(v5 + 304) = 0;
  *(_QWORD *)(v5 + 320) = 0;
  *(_QWORD *)(v5 + 336) = 0;
  *(_QWORD *)(v5 + 352) = 0;
  *(_QWORD *)(v5 + 368) = 0;
  *(_DWORD *)(v5 + 8) = 0;
  *(_DWORD *)(v5 + 56) = 0;
  *(_DWORD *)(v5 + 104) = 0;
  *(_DWORD *)(v5 + 152) = 0;
  *(_DWORD *)(v5 + 200) = 0;
  *(_DWORD *)(v5 + 248) = 0;
  *(_DWORD *)(v5 + 296) = 0;
  *(_DWORD *)(v5 + 344) = 0;
  *(_DWORD *)(v5 + 24) = 1;
  *(_DWORD *)(v5 + 72) = 1;
  *(_DWORD *)(v5 + 120) = 1;
  *(_DWORD *)(v5 + 168) = 1;
  *(_DWORD *)(v5 + 216) = 1;
  *(_DWORD *)(v5 + 264) = 1;
  *(_DWORD *)(v5 + 312) = 1;
  *(_DWORD *)(v5 + 360) = 1;
  *(_QWORD *)(a1 + 152) = v5;
  *(_QWORD *)(a1 + 160) = 8;
  *(_DWORD *)(a1 + 168) = 0;
  v6 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(a1 + 176) = v6;
  *(_QWORD *)(a1 + 184) = 8;
  *(_DWORD *)(a1 + 192) = 0;
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = 0;
  result = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(a1 + 200) = result;
  *(_QWORD *)(a1 + 208) = 8;
  *(_DWORD *)(a1 + 216) = 0;
  *(_BYTE *)(a1 + 224) = 1;
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  return result;
}

