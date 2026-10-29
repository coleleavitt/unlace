void __fastcall sub_6BA640(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __m128i v7; // xmm0
  _OWORD *v8; // rax
  _OWORD *v9; // rax
  _OWORD *v10; // rax
  __int64 v11; // rcx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  _OWORD *v15; // rax
  _OWORD *v16; // rax
  _OWORD *v17; // rax
  void *v18; // [rsp+0h] [rbp-78h]
  void *v19; // [rsp+0h] [rbp-78h]
  int v20[2]; // [rsp+38h] [rbp-40h] BYREF

  *(_QWORD *)(a1 + 24) = off_1C52F30;
  v7 = _mm_loadl_epi64((const __m128i *)&off_1C530A0);
  *(_QWORD *)(a1 + 56) = a3;
  *(_QWORD *)(a1 + 16) = a1;
  *(_QWORD *)(a1 + 32) = a1;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = a2;
  *(__m128i *)a1 = _mm_unpacklo_epi64(v7, (__m128i)(unsigned __int64)off_1C52F08);
  *(_QWORD *)v20 = 0;
  sub_14B7810(a1 + 64, a2, (int)v20, a4, a5, a6, v18);
  sub_18572D0(v20);
  *(_QWORD *)v20 = 0;
  sub_8E4C30(a1 + 80, a2, a4, v20);
  sub_18572D0(v20);
  sub_16744A0(a1 + 88, a2);
  *(_QWORD *)(a1 + 112) = a2;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)v20 = 0;
  sub_39A6C0(a1 + 128, a2, (__int64)v20);
  sub_18572D0(v20);
  *(_QWORD *)(a1 + 344) = a2;
  *(_QWORD *)(a1 + 352) = 0;
  *(_QWORD *)(a1 + 360) = a2;
  *(_QWORD *)(a1 + 368) = 0;
  *(_QWORD *)(a1 + 376) = a2;
  *(_QWORD *)(a1 + 384) = 0;
  *(_QWORD *)(a1 + 392) = 0;
  *(_QWORD *)(a1 + 400) = a2;
  *(_QWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 416) = a2;
  v8 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 424) = v8;
  *(_DWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 432) = 8;
  *v8 = 0;
  v8[1] = 0;
  v8[2] = 0;
  v8[3] = 0;
  v8[4] = 0;
  v8[5] = 0;
  v8[6] = 0;
  v8[7] = 0;
  v9 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 448) = v9;
  *(_QWORD *)(a1 + 456) = 8;
  *(_DWORD *)(a1 + 464) = 0;
  *v9 = 0;
  v9[1] = 0;
  v9[2] = 0;
  v9[3] = 0;
  v9[4] = 0;
  v9[5] = 0;
  v9[6] = 0;
  v9[7] = 0;
  v10 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 472) = v10;
  *(_QWORD *)(a1 + 480) = 8;
  v11 = *(_QWORD *)(a2 + 856);
  *(_DWORD *)(a1 + 488) = 0;
  *v10 = 0;
  v10[1] = 0;
  v10[2] = 0;
  v10[3] = 0;
  v10[4] = 0;
  v10[5] = 0;
  v10[6] = 0;
  v10[7] = 0;
  sub_6B1890(a1 + 496, 0, a2, v11);
  *(_QWORD *)(a1 + 744) = a2;
  *(_QWORD *)(a1 + 752) = 0;
  *(_BYTE *)(a1 + 760) = 0;
  *(_QWORD *)(a1 + 768) = 0;
  *(_QWORD *)(a1 + 776) = a2;
  *(_QWORD *)(a1 + 784) = a1 + 8;
  *(_QWORD *)(a1 + 792) = a2;
  *(_QWORD *)(a1 + 800) = a1 + 8;
  *(_OWORD *)(a1 + 728) = 0;
  *(_QWORD *)v20 = 0;
  sub_14B7810(a1 + 808, a2, (int)v20, v12, v13, v14, (void *)(a1 + 24));
  sub_18572D0(v20);
  *(_QWORD *)(a1 + 824) = sub_1434DE0(a2, 0);
  v15 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 832) = v15;
  *(_QWORD *)(a1 + 840) = 8;
  *(_DWORD *)(a1 + 848) = 0;
  *v15 = 0;
  v15[1] = 0;
  v15[2] = 0;
  v15[3] = 0;
  v15[4] = 0;
  v15[5] = 0;
  v15[6] = 0;
  v15[7] = 0;
  v16 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 856) = v16;
  *(_QWORD *)(a1 + 864) = 8;
  *(_DWORD *)(a1 + 872) = 0;
  *(_QWORD *)(a1 + 880) = a2;
  *(_QWORD *)(a1 + 888) = 0;
  *(_QWORD *)(a1 + 896) = a2;
  *(_QWORD *)(a1 + 904) = 0;
  *(_QWORD *)(a1 + 912) = 0;
  *(_QWORD *)(a1 + 920) = 0;
  *v16 = 0;
  v16[1] = 0;
  v16[2] = 0;
  v16[3] = 0;
  v16[4] = 0;
  v16[5] = 0;
  v16[6] = 0;
  v16[7] = 0;
  *(_QWORD *)v20 = 0;
  sub_39A6C0(a1 + 928, a2, (__int64)v20);
  sub_18572D0(v20);
  *(_QWORD *)(a1 + 1144) = a2;
  *(_QWORD *)(a1 + 1152) = a1 + 8;
  *(_QWORD *)(a1 + 1160) = 0;
  *(_QWORD *)(a1 + 1168) = &off_1C62200;
  *(_QWORD *)(a1 + 1184) = 0;
  *(_QWORD *)(a1 + 1192) = 0;
  *(_QWORD *)(a1 + 1208) = 0;
  *(_QWORD *)(a1 + 1216) = 0;
  *(_QWORD *)(a1 + 1224) = a2;
  *(_QWORD *)(a1 + 1232) = a1 + 8;
  *(_QWORD *)(a1 + 1240) = v19;
  v17 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 1248) = v17;
  *(_QWORD *)(a1 + 1256) = 8;
  *(_DWORD *)(a1 + 1264) = 0;
  *(_QWORD *)(a1 + 1272) = 0;
  *(_QWORD *)(a1 + 1280) = a2;
  *(_QWORD *)(a1 + 1288) = 0;
  *(_QWORD *)(a1 + 1296) = 0;
  *v17 = 0;
  v17[1] = 0;
  v17[2] = 0;
  v17[3] = 0;
  v17[4] = 0;
  v17[5] = 0;
  v17[6] = 0;
  v17[7] = 0;
  *(_QWORD *)v20 = 0;
  sub_1862300(v20, "gcd_rounding", 1);
  sub_14B5FE0(a1 + 64, v20);
  sub_18572D0(v20);
}

