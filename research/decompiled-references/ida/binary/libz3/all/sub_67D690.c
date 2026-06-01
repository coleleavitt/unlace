unsigned int *__fastcall sub_67D690(__int64 a1, int a2, unsigned __int64 a3, __int64 a4)
{
  __m128i si128; // xmm1
  unsigned int *v8; // rsi
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rsi
  void *v15; // rax
  __m128i v16; // xmm0
  _OWORD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  _OWORD *v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // r14
  __int64 v24; // rax
  void *v26[2]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v27; // [rsp+10h] [rbp-78h]
  __int64 v28; // [rsp+18h] [rbp-70h]
  __int64 v29; // [rsp+20h] [rbp-68h]
  __int64 v30; // [rsp+28h] [rbp-60h]
  __int64 v31; // [rsp+30h] [rbp-58h]
  __int64 v32; // [rsp+38h] [rbp-50h]
  _BYTE v33[8]; // [rsp+40h] [rbp-48h] BYREF
  int v34[2]; // [rsp+48h] [rbp-40h] BYREF

  *(__m128i *)v26 = _mm_unpacklo_epi64((__m128i)a3, (__m128i)a3);
  v27 = a4;
  sub_E1F060(a1, a3);
  si128 = _mm_load_si128((const __m128i *)v26);
  *(_QWORD *)a1 = &off_1C69218;
  *(_QWORD *)(a1 + 72) = off_1C693C8;
  *(_OWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 176) = a3;
  *(_QWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 192) = a3;
  *(_QWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 208) = a3;
  *(_QWORD *)(a1 + 216) = 0;
  *(__m128i *)(a1 + 136) = si128;
  *(__m128i *)(a1 + 152) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(a1 + 120), (__m128i)a3);
  sub_1684300(a1 + 224, a3);
  sub_16744A0(a1 + 240, a3);
  *(_QWORD *)(a1 + 264) = a3;
  sub_180C5A0(v33, "pb");
  *(_DWORD *)(a1 + 272) = sub_15DA4C0(a3 + 560, v33);
  *(_QWORD *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 312) = 1;
  *(_QWORD *)(a1 + 304) = 0;
  *(_QWORD *)(a1 + 336) = 0;
  *(_DWORD *)(a1 + 344) = 0;
  *(_DWORD *)(a1 + 400) = 0;
  *(_OWORD *)(a1 + 280) = 0;
  *(_OWORD *)(a1 + 320) = 0;
  v8 = *(unsigned int **)(a3 + 856);
  *(_OWORD *)(a1 + 352) = 0;
  *(_OWORD *)(a1 + 368) = 0;
  *(_OWORD *)(a1 + 384) = 0;
  sub_67B850((__int64 *)(a1 + 144), v8);
  sub_67B850((__int64 *)(a1 + 144), *(unsigned int **)(a3 + 864));
  *(_DWORD *)(a1 + 408) = a2;
  *(_QWORD *)(a1 + 416) = a3;
  *(_QWORD *)(a1 + 424) = a1 + 144;
  *(_QWORD *)(a1 + 432) = a3;
  *(_QWORD *)(a1 + 440) = 0;
  *(_QWORD *)v34 = 0;
  sub_14B7810(a1 + 456, a3, (int)v34, v9, v10, v11, v26[0]);
  sub_18572D0(v34);
  *(_OWORD *)(a1 + 472) = 0;
  v28 = a1 + 488;
  sub_679960(a1 + 488, (__int64 *)(a1 + 416));
  *(_QWORD *)(a1 + 488) = &off_1C52CD0;
  v12 = sub_186B270(0x80u);
  *(_QWORD *)v12 = 0;
  *(_DWORD *)(v12 + 8) = 0;
  *(_QWORD *)(v12 + 16) = 0;
  *(_DWORD *)(v12 + 24) = 0;
  *(_QWORD *)(v12 + 32) = 0;
  *(_DWORD *)(v12 + 40) = 0;
  *(_QWORD *)(v12 + 48) = 0;
  *(_DWORD *)(v12 + 56) = 0;
  *(_QWORD *)(v12 + 64) = 0;
  *(_DWORD *)(v12 + 72) = 0;
  *(_QWORD *)(v12 + 80) = 0;
  *(_DWORD *)(v12 + 88) = 0;
  *(_QWORD *)(v12 + 96) = 0;
  *(_DWORD *)(v12 + 104) = 0;
  *(_QWORD *)(v12 + 112) = 0;
  *(_DWORD *)(v12 + 120) = 0;
  *(_QWORD *)(a1 + 632) = v12;
  *(_QWORD *)(a1 + 640) = 8;
  *(_DWORD *)(a1 + 648) = 0;
  *(_QWORD *)(a1 + 656) = 0;
  v29 = a1 + 664;
  sub_679960(a1 + 664, (__int64 *)(a1 + 416));
  v13 = *(_QWORD *)(a1 + 672);
  *(_QWORD *)(a1 + 664) = &off_1C52D38;
  sub_1684300(a1 + 808, v13);
  *(_QWORD *)(a1 + 824) = 0;
  v30 = a1 + 832;
  sub_679960(a1 + 832, (__int64 *)(a1 + 416));
  v14 = *(_QWORD *)(a1 + 840);
  *(_QWORD *)(a1 + 832) = &off_1C52C68;
  sub_16744A0(a1 + 976, v14);
  v32 = a1 + 1000;
  sub_679960(a1 + 1000, (__int64 *)(a1 + 416));
  *(_QWORD *)(a1 + 1000) = &off_1C52B98;
  v31 = a1 + 1144;
  sub_679960(a1 + 1144, (__int64 *)(a1 + 416));
  *(_QWORD *)(a1 + 1144) = &off_1C52C00;
  v15 = *(void **)(a1 + 1152);
  *(_QWORD *)(a1 + 1288) = v15;
  v26[0] = v15;
  sub_180C5A0(v34, "pb");
  *(_DWORD *)(a1 + 1296) = sub_15DA4C0((char *)v26[0] + 560, v34);
  *(_OWORD *)(a1 + 1304) = 0;
  *(_OWORD *)(a1 + 1344) = 0;
  v16 = _mm_loadl_epi64((const __m128i *)(a1 + 416));
  *(_QWORD *)(a1 + 1320) = 0;
  *(_QWORD *)(a1 + 1328) = 0;
  *(_QWORD *)(a1 + 1336) = 1;
  *(_QWORD *)(a1 + 1360) = 0;
  *(__m128i *)(a1 + 1368) = _mm_unpacklo_epi64(v16, (__m128i)(unsigned __int64)(a1 + 416));
  v17 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(a1 + 1384) = v17;
  *(_QWORD *)(a1 + 1392) = 8;
  *(_DWORD *)(a1 + 1400) = 0;
  *v17 = 0;
  v17[1] = 0;
  v17[2] = 0;
  v17[3] = 0;
  *(_OWORD *)(a1 + 1408) = 0;
  v18 = sub_186B270(0x100u);
  *(_DWORD *)(v18 + 24) = 0;
  *(_DWORD *)(v18 + 56) = 0;
  *(_DWORD *)(v18 + 88) = 0;
  *(_DWORD *)(v18 + 120) = 0;
  *(_DWORD *)(v18 + 152) = 0;
  *(_DWORD *)(v18 + 184) = 0;
  *(_DWORD *)(v18 + 216) = 0;
  *(_DWORD *)(v18 + 248) = 0;
  *(_QWORD *)(a1 + 1424) = v18;
  *(_OWORD *)v18 = 0;
  *(_OWORD *)(v18 + 32) = 0;
  *(_OWORD *)(v18 + 64) = 0;
  *(_OWORD *)(v18 + 96) = 0;
  *(_OWORD *)(v18 + 128) = 0;
  *(_OWORD *)(v18 + 160) = 0;
  *(_OWORD *)(v18 + 192) = 0;
  *(_OWORD *)(v18 + 224) = 0;
  v19 = *(_QWORD *)(a1 + 1368);
  *(_QWORD *)(a1 + 1432) = 8;
  *(_DWORD *)(a1 + 1440) = 0;
  *(_QWORD *)(a1 + 1448) = v19;
  *(_QWORD *)(a1 + 1456) = 0;
  *(_QWORD *)(a1 + 1464) = v19;
  *(_QWORD *)(a1 + 1472) = 0;
  v20 = (_OWORD *)sub_186B270(0x80u);
  v21 = v27;
  *(_QWORD *)(a1 + 1480) = v20;
  *v20 = 0;
  v20[1] = 0;
  v20[2] = 0;
  v20[3] = 0;
  v20[4] = 0;
  v20[5] = 0;
  v20[6] = 0;
  v20[7] = 0;
  *(_QWORD *)(a1 + 1488) = 8;
  *(_DWORD *)(a1 + 1496) = 0;
  *(_QWORD *)(a1 + 1504) = 0;
  *(_QWORD *)(a1 + 1512) = a3;
  *(_QWORD *)(a1 + 1520) = 0;
  *(_QWORD *)(a1 + 1528) = 0;
  *(_DWORD *)(a1 + 1536) = 0;
  *(_QWORD *)(a1 + 1544) = a3;
  *(_QWORD *)(a1 + 1552) = 0;
  *(_QWORD *)(a1 + 1560) = 0;
  *(_QWORD *)(a1 + 1568) = a3;
  *(_QWORD *)(a1 + 1576) = 0;
  *(_QWORD *)(a1 + 1584) = 0;
  *(_QWORD *)(a1 + 1592) = 0;
  *(_QWORD *)(a1 + 1600) = a1 + 1616;
  *(_QWORD *)(a1 + 1608) = 0;
  *(_BYTE *)(a1 + 1616) = 0;
  sub_E5E9C0(a1, v21);
  v22 = *(_QWORD *)(a1 + 1352);
  if ( v22 )
  {
    v23 = v27;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 88LL))(v22, v27);
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 1360) + 88LL))(*(_QWORD *)(a1 + 1360), v23);
  }
  *(_DWORD *)(a1 + 448) = -1;
  v24 = sub_67B850((__int64 *)(a1 + 144), *(unsigned int **)(a3 + 856));
  *(_QWORD *)v34 = v24;
  if ( v24 )
    ++*(_DWORD *)(v24 + 8);
  return sub_6761A0((unsigned int **)(a1 + 1576), v34);
}

