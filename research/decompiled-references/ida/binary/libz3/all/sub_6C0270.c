__int64 __fastcall sub_6C0270(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  int v5; // eax
  __int64 v6; // rax
  _OWORD *v7; // rax
  __m128i v8; // xmm1
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __m128i si128; // xmm1
  __int64 v15; // r13
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  void *v19[2]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v20; // [rsp+18h] [rbp-50h]
  int v21[2]; // [rsp+28h] [rbp-40h] BYREF

  if ( *(_BYTE *)(a3 + 65) )
  {
    v3 = sub_186B270(0x370u);
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    sub_180C5A0(v21, "arith");
    v5 = sub_15DA4C0(v4 + 560, v21);
    *(_QWORD *)(v3 + 24) = a1;
    *(_DWORD *)(v3 + 16) = v5;
    *(_QWORD *)(v3 + 8) = v4;
    *(_QWORD *)v3 = &off_1C53160;
    v6 = sub_186B270(0x100u);
    *(_DWORD *)(v3 + 48) = 0;
    *(_DWORD *)(v6 + 24) = 0;
    *(_DWORD *)(v6 + 56) = 0;
    *(_DWORD *)(v6 + 88) = 0;
    *(_DWORD *)(v6 + 120) = 0;
    *(_DWORD *)(v6 + 152) = 0;
    *(_DWORD *)(v6 + 184) = 0;
    *(_DWORD *)(v6 + 216) = 0;
    *(_DWORD *)(v6 + 248) = 0;
    *(_QWORD *)(v3 + 32) = v6;
    *(_QWORD *)(v3 + 40) = 8;
    *(_OWORD *)v6 = 0;
    *(_OWORD *)(v6 + 32) = 0;
    *(_OWORD *)(v6 + 64) = 0;
    *(_OWORD *)(v6 + 96) = 0;
    *(_OWORD *)(v6 + 128) = 0;
    *(_OWORD *)(v6 + 160) = 0;
    *(_OWORD *)(v6 + 192) = 0;
    *(_OWORD *)(v6 + 224) = 0;
    v7 = (_OWORD *)sub_186B270(0x80u);
    *(_QWORD *)(v3 + 56) = v7;
    *(_QWORD *)(v3 + 64) = 8;
    v8 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v4, (__m128i)(unsigned __int64)v4);
    *(_DWORD *)(v3 + 72) = 0;
    *v7 = 0;
    v7[1] = 0;
    v7[2] = 0;
    v7[3] = 0;
    v7[4] = 0;
    v7[5] = 0;
    v7[6] = 0;
    v7[7] = 0;
    v20 = v3 + 80;
    *(_QWORD *)v21 = 0;
    v19[1] = (void *)v8.m128i_i64[1];
    sub_14B7810(v3 + 80, v4, (int)v21, v9, v10, v11, (void *)v8.m128i_i64[0]);
    sub_18572D0(v21);
    sub_6DE6B0(v3 + 96, v4);
    si128 = _mm_load_si128((const __m128i *)v19);
    *(_QWORD *)(v3 + 120) = 0;
    *(_QWORD *)(v3 + 184) = v3 + 232;
    *(_QWORD *)(v3 + 128) = v4;
    *(_QWORD *)(v3 + 136) = 0;
    *(_QWORD *)(v3 + 144) = 0;
    *(_QWORD *)(v3 + 152) = 0;
    *(_QWORD *)(v3 + 160) = 0;
    *(_QWORD *)(v3 + 168) = v4;
    *(_QWORD *)(v3 + 176) = 0;
    *(_QWORD *)(v3 + 192) = 1;
    *(_QWORD *)(v3 + 200) = 0;
    *(_QWORD *)(v3 + 208) = 0;
    *(_DWORD *)(v3 + 216) = 1065353216;
    *(_QWORD *)(v3 + 224) = 0;
    *(_QWORD *)(v3 + 232) = 0;
    *(_QWORD *)(v3 + 240) = v4;
    *(_QWORD *)(v3 + 248) = 0;
    *(__m128i *)(v3 + 104) = si128;
    v19[0] = (void *)(v3 + 256);
    sub_146B780(v3 + 256, v4, 0, v3 + 792);
    *(_QWORD *)(v3 + 256) = &off_1C530D8;
    sub_14682C0(v3 + 792, v4);
    *(_BYTE *)(v3 + 872) = a2;
    sub_6DE330(v3 + 96, 1);
  }
  else
  {
    v3 = sub_186B270(0x358u);
    v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    sub_180C5A0(v21, "arith");
    v16 = sub_15DA4C0(v15 + 560, v21);
    *(_QWORD *)(v3 + 8) = v15;
    *(_DWORD *)(v3 + 16) = v16;
    *(_QWORD *)(v3 + 24) = a1;
    *(_QWORD *)v3 = &off_1C530F8;
    sub_6CC640(v3 + 32, v15, a3, a1);
    *(_QWORD *)(v3 + 792) = v15;
    *(_QWORD *)(v3 + 800) = 0;
    v17 = sub_186B270(0x100u);
    *(_DWORD *)(v17 + 24) = 0;
    *(_DWORD *)(v17 + 56) = 0;
    *(_DWORD *)(v17 + 88) = 0;
    *(_DWORD *)(v17 + 120) = 0;
    *(_DWORD *)(v17 + 152) = 0;
    *(_DWORD *)(v17 + 184) = 0;
    *(_DWORD *)(v17 + 216) = 0;
    *(_DWORD *)(v17 + 248) = 0;
    *(_QWORD *)(v3 + 808) = v17;
    *(_QWORD *)(v3 + 816) = 8;
    *(_DWORD *)(v3 + 824) = 0;
    *(_OWORD *)v17 = 0;
    *(_OWORD *)(v17 + 32) = 0;
    *(_OWORD *)(v17 + 64) = 0;
    *(_OWORD *)(v17 + 96) = 0;
    *(_OWORD *)(v17 + 128) = 0;
    *(_OWORD *)(v17 + 160) = 0;
    *(_OWORD *)(v17 + 192) = 0;
    *(_OWORD *)(v17 + 224) = 0;
    v18 = sub_186B270(0x2C0u);
    *(_BYTE *)(v18 + 44) &= 0xFCu;
    *(_BYTE *)(v18 + 60) &= 0xFCu;
    *(_BYTE *)(v18 + 132) &= 0xFCu;
    *(_BYTE *)(v18 + 148) &= 0xFCu;
    *(_QWORD *)v18 = 0;
    *(_DWORD *)(v18 + 24) = 0;
    *(_QWORD *)(v18 + 32) = 0;
    *(_DWORD *)(v18 + 40) = 0;
    *(_QWORD *)(v18 + 48) = 0;
    *(_DWORD *)(v18 + 56) = 1;
    *(_QWORD *)(v18 + 80) = 0;
    *(_QWORD *)(v18 + 88) = 0;
    *(_DWORD *)(v18 + 112) = 0;
    *(_QWORD *)(v18 + 120) = 0;
    *(_DWORD *)(v18 + 128) = 0;
    *(_QWORD *)(v18 + 136) = 0;
    *(_DWORD *)(v18 + 144) = 1;
    *(_QWORD *)(v18 + 168) = 0;
    *(_QWORD *)(v18 + 176) = 0;
    *(_DWORD *)(v18 + 200) = 0;
    *(_QWORD *)(v18 + 208) = 0;
    *(_DWORD *)(v18 + 216) = 0;
    *(_OWORD *)(v18 + 8) = 0;
    *(_OWORD *)(v18 + 64) = 0;
    *(_OWORD *)(v18 + 96) = 0;
    *(_OWORD *)(v18 + 152) = 0;
    *(_OWORD *)(v18 + 184) = 0;
    *(_BYTE *)(v18 + 220) &= 0xFCu;
    *(_BYTE *)(v18 + 236) &= 0xFCu;
    *(_BYTE *)(v18 + 308) &= 0xFCu;
    *(_BYTE *)(v18 + 324) &= 0xFCu;
    *(_BYTE *)(v18 + 396) &= 0xFCu;
    *(_BYTE *)(v18 + 412) &= 0xFCu;
    *(_QWORD *)(v18 + 224) = 0;
    *(_DWORD *)(v18 + 232) = 1;
    *(_QWORD *)(v18 + 256) = 0;
    *(_QWORD *)(v18 + 264) = 0;
    *(_DWORD *)(v18 + 288) = 0;
    *(_QWORD *)(v18 + 296) = 0;
    *(_DWORD *)(v18 + 304) = 0;
    *(_QWORD *)(v18 + 312) = 0;
    *(_DWORD *)(v18 + 320) = 1;
    *(_QWORD *)(v18 + 344) = 0;
    *(_QWORD *)(v18 + 352) = 0;
    *(_DWORD *)(v18 + 376) = 0;
    *(_QWORD *)(v18 + 384) = 0;
    *(_DWORD *)(v18 + 392) = 0;
    *(_QWORD *)(v18 + 400) = 0;
    *(_DWORD *)(v18 + 408) = 1;
    *(_OWORD *)(v18 + 240) = 0;
    *(_OWORD *)(v18 + 272) = 0;
    *(_OWORD *)(v18 + 328) = 0;
    *(_OWORD *)(v18 + 360) = 0;
    *(_OWORD *)(v18 + 416) = 0;
    *(_QWORD *)(v18 + 432) = 0;
    *(_BYTE *)(v18 + 484) &= 0xFCu;
    *(_BYTE *)(v18 + 500) &= 0xFCu;
    *(_BYTE *)(v18 + 572) &= 0xFCu;
    *(_BYTE *)(v18 + 588) &= 0xFCu;
    *(_QWORD *)(v18 + 440) = 0;
    *(_DWORD *)(v18 + 464) = 0;
    *(_QWORD *)(v18 + 472) = 0;
    *(_DWORD *)(v18 + 480) = 0;
    *(_QWORD *)(v18 + 488) = 0;
    *(_DWORD *)(v18 + 496) = 1;
    *(_QWORD *)(v18 + 520) = 0;
    *(_QWORD *)(v18 + 528) = 0;
    *(_DWORD *)(v18 + 552) = 0;
    *(_QWORD *)(v18 + 560) = 0;
    *(_DWORD *)(v18 + 568) = 0;
    *(_QWORD *)(v18 + 576) = 0;
    *(_DWORD *)(v18 + 584) = 1;
    *(_QWORD *)(v18 + 608) = 0;
    *(_QWORD *)(v18 + 616) = 0;
    *(_DWORD *)(v18 + 640) = 0;
    *(_QWORD *)(v18 + 648) = 0;
    *(_DWORD *)(v18 + 656) = 0;
    *(_OWORD *)(v18 + 448) = 0;
    *(_OWORD *)(v18 + 504) = 0;
    *(_OWORD *)(v18 + 536) = 0;
    *(_OWORD *)(v18 + 592) = 0;
    *(_OWORD *)(v18 + 624) = 0;
    *(_BYTE *)(v18 + 660) &= 0xFCu;
    *(_BYTE *)(v18 + 676) &= 0xFCu;
    *(_QWORD *)(v18 + 664) = 0;
    *(_DWORD *)(v18 + 672) = 1;
    *(_QWORD *)(v18 + 696) = 0;
    *(_QWORD *)(v3 + 832) = v18;
    *(_QWORD *)(v3 + 840) = 8;
    *(_DWORD *)(v3 + 848) = 0;
    *(_OWORD *)(v18 + 680) = 0;
  }
  return v3;
}

