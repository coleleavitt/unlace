void __fastcall sub_7045A0(__int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rax
  __int64 v9; // rax
  __m128i si128; // xmm0
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _OWORD *v14; // rax
  __int64 v15; // rax
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rax
  __int64 v21; // rbp
  _DWORD *v22; // r13
  void *v24; // [rsp-8h] [rbp-68h]
  int v25[2]; // [rsp+20h] [rbp-40h] BYREF

  *(_QWORD *)a1 = &off_1C53580;
  *(_DWORD *)(a1 + 8) = 0;
  *(__m128i *)(a1 + 16) = _mm_unpacklo_epi64((__m128i)a2, (__m128i)a2);
  sub_1858590(a1 + 32, a4);
  sub_11456C0(a1 + 40, a2, a4, 1, v6, v7);
  *(_DWORD *)(a1 + 56) = -2;
  *(_QWORD *)(a1 + 80) = sub_1141F90(a1 + 40);
  *(_QWORD *)(a1 + 64) = &off_1C53508;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  v8 = sub_1141F90(a1 + 40);
  *(_QWORD *)(a1 + 104) = &off_1C53508;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = v8;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_BYTE *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 152) = 0;
  *(_OWORD *)(a1 + 168) = 0;
  v9 = sub_186B270(0xA0u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18B6660);
  *(_QWORD *)v9 = 0;
  *(_QWORD *)(v9 + 152) = -1;
  *(_QWORD *)(a1 + 184) = v9;
  *(_QWORD *)(a1 + 192) = 8;
  *(_DWORD *)(a1 + 200) = 0;
  *(__m128i *)(v9 + 12) = si128;
  *(__m128i *)(v9 + 32) = si128;
  *(__m128i *)(v9 + 52) = si128;
  *(__m128i *)(v9 + 72) = si128;
  *(__m128i *)(v9 + 92) = si128;
  *(__m128i *)(v9 + 112) = si128;
  *(__m128i *)(v9 + 132) = si128;
  sub_16234C0(a1 + 208, a2);
  sub_16234C0(a1 + 256, a2);
  v11 = (_QWORD *)sub_186B270(0xC0u);
  *v11 = 0;
  v11[3] = 0;
  v11[6] = 0;
  v11[9] = 0;
  v11[12] = 0;
  v11[15] = 0;
  v11[18] = 0;
  v11[21] = 0;
  *(_QWORD *)(a1 + 304) = v11;
  *(_QWORD *)(a1 + 312) = 8;
  *(_DWORD *)(a1 + 320) = 0;
  v12 = (_QWORD *)sub_186B270(0xC0u);
  *v12 = 0;
  v12[3] = 0;
  v12[6] = 0;
  v12[9] = 0;
  v12[12] = 0;
  v12[15] = 0;
  v12[18] = 0;
  v12[21] = 0;
  *(_QWORD *)(a1 + 328) = v12;
  *(_QWORD *)(a1 + 336) = 8;
  *(_DWORD *)(a1 + 344) = 0;
  *(_OWORD *)(a1 + 352) = 0;
  *(_OWORD *)(a1 + 368) = 0;
  v13 = (_QWORD *)sub_186B270(0xC0u);
  *(_DWORD *)(a1 + 408) = a3;
  *v13 = 0;
  v13[3] = 0;
  v13[6] = 0;
  v13[9] = 0;
  v13[12] = 0;
  v13[15] = 0;
  v13[18] = 0;
  v13[21] = 0;
  *(_QWORD *)(a1 + 384) = v13;
  *(_QWORD *)(a1 + 392) = 8;
  *(_DWORD *)(a1 + 400) = 0;
  sub_1858590(a1 + 416, a4);
  *(_QWORD *)(a1 + 424) = 0;
  *(_DWORD *)(a1 + 432) = 0;
  *(_OWORD *)(a1 + 440) = 0;
  v14 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(a1 + 456) = v14;
  *v14 = 0;
  v14[1] = 0;
  v14[2] = 0;
  v14[3] = 0;
  *(_QWORD *)(a1 + 464) = 8;
  *(_DWORD *)(a1 + 472) = 0;
  *(_QWORD *)(a1 + 480) = a2;
  *(_QWORD *)(a1 + 488) = 0;
  *(_QWORD *)(a1 + 496) = a2;
  *(_QWORD *)(a1 + 504) = a2;
  *(_QWORD *)(a1 + 512) = 0;
  *(_QWORD *)(a1 + 520) = a2;
  *(_QWORD *)(a1 + 528) = 0;
  *(_QWORD *)(a1 + 536) = 0;
  *(_QWORD *)(a1 + 544) = 0;
  *(_QWORD *)(a1 + 552) = 0;
  *(_QWORD *)(a1 + 560) = a2;
  *(_QWORD *)(a1 + 568) = 0;
  *(_QWORD *)(a1 + 576) = a1 + 624;
  *(_QWORD *)(a1 + 584) = 1;
  *(_QWORD *)(a1 + 592) = 0;
  *(_QWORD *)(a1 + 600) = 0;
  *(_DWORD *)(a1 + 608) = 1065353216;
  *(_QWORD *)(a1 + 616) = 0;
  *(_QWORD *)(a1 + 624) = 0;
  *(_QWORD *)(a1 + 632) = a2;
  *(_QWORD *)(a1 + 640) = 0;
  *(_QWORD *)(a1 + 648) = 0;
  v15 = sub_1142070(a1 + 40);
  sub_1132260(v15, 1);
  *(_QWORD *)v25 = 0;
  v20 = sub_D162E0(a2, (int)v25, v16, v17, v18, v19, v24, (void *)(a1 + 32), a1 + 208);
  v21 = v20;
  if ( v20 )
    ++*(_DWORD *)(v20 + 8);
  v22 = *(_DWORD **)(a1 + 424);
  if ( v22 )
  {
    if ( v22[2]-- == 1 )
    {
      (**(void (__fastcall ***)(_DWORD *))v22)(v22);
      sub_186B220(v22);
    }
  }
  *(_QWORD *)(a1 + 424) = v21;
  sub_18572D0(v25);
}

