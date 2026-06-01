void __fastcall sub_B4BA0(__int64 a1, __int64 a2, double a3, __m128i a4)
{
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = a1 + 8;
  *(_QWORD *)(a1 + 32) = a1 + 8;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 112) = 0;
  sub_ABDE0((__m128i *)(a1 + 48), 0);
  *(_DWORD *)(a1 + 136) = -1;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 160) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 144) = get_nsec_stamp();
  *(_DWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = a1 + 184;
  *(_QWORD *)(a1 + 208) = a1 + 184;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 224) = a2;
  *(_DWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 264) = 0;
  *(_DWORD *)(a1 + 288) = -1;
  *(_BYTE *)(a1 + 292) = 0;
  *(_QWORD *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 320) = 0;
  *(_WORD *)(a1 + 352) = 0;
  *(_QWORD *)(a1 + 360) = 0;
  *(_OWORD *)(a1 + 248) = 0;
  *(_OWORD *)(a1 + 272) = 0;
  *(_OWORD *)(a1 + 304) = 0;
  *(_OWORD *)(a1 + 328) = 0;
  *(_OWORD *)(a1 + 368) = 0;
  sub_B4120(a1, 0, 0.0, a4);
}

