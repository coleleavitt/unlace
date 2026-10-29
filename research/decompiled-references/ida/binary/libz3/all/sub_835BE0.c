__int64 __fastcall sub_835BE0(__int64 a1, _QWORD *a2, int a3)
{
  __m128i v6; // xmm1
  __m128i v7; // xmm0
  _DWORD *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rbp
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  void (__fastcall ***v25)(_QWORD); // r14
  __int64 v26; // rax
  unsigned int v27; // r12d
  bool v28; // bp
  __int64 v29; // rbp
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rbp
  __int64 v33; // rbp
  __int64 result; // rax
  void *v35; // r12
  __m128i v36; // [rsp+0h] [rbp-58h] BYREF
  __int64 v37; // [rsp+10h] [rbp-48h]
  __int64 v38[8]; // [rsp+18h] [rbp-40h] BYREF

  v36 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1, (__m128i)(unsigned __int64)a1);
  sub_180C5A0(v38, "arith");
  sub_7E4DF0(a1, a2, v38, a3);
  v6 = _mm_load_si128(&v36);
  v7 = _mm_loadl_epi64((const __m128i *)off_1C552B0);
  *(_QWORD *)a1 = &off_1C6D358;
  *(__m128i *)(a1 + 112) = v6;
  *(_QWORD *)(a1 + 48) = off_1C6D648;
  *(__m128i *)(a1 + 32) = _mm_unpacklo_epi64(v7, (__m128i)(unsigned __int64)off_1C6D620);
  v8 = (_DWORD *)sub_186B270(0x40u);
  v8[1] = 0x80000000;
  v8[3] = 0x80000000;
  v8[5] = 0x80000000;
  v8[7] = 0x80000000;
  v8[9] = 0x80000000;
  v8[11] = 0x80000000;
  v8[13] = 0x80000000;
  v8[15] = 0x80000000;
  *(_QWORD *)(a1 + 128) = v8;
  *(_QWORD *)(a1 + 136) = 8;
  *(_DWORD *)(a1 + 144) = 0;
  *(_BYTE *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  *(_DWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 288) = 0;
  *(_OWORD *)(a1 + 176) = 0;
  *(_OWORD *)(a1 + 192) = -1;
  *(_OWORD *)(a1 + 208) = 0;
  *(_OWORD *)(a1 + 224) = 0;
  *(_OWORD *)(a1 + 240) = 0;
  *(_OWORD *)(a1 + 256) = 0;
  *(_OWORD *)(a1 + 272) = 0;
  v9 = (_QWORD *)sub_186B270(0xC0u);
  *v9 = 0;
  v9[3] = 0;
  v9[6] = 0;
  v9[9] = 0;
  v9[12] = 0;
  v9[15] = 0;
  v9[18] = 0;
  v9[21] = 0;
  *(_QWORD *)(a1 + 296) = v9;
  *(_QWORD *)(a1 + 304) = 8;
  *(_DWORD *)(a1 + 312) = 0;
  *(_QWORD *)(a1 + 336) = 0;
  *(_DWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 352) = 0;
  *(_DWORD *)(a1 + 360) = 0;
  *(_DWORD *)(a1 + 368) = 0;
  *(_DWORD *)(a1 + 392) = 0;
  *(_BYTE *)(a1 + 480) = 0;
  *(_QWORD *)(a1 + 504) = off_1C551F8;
  *(_QWORD *)(a1 + 512) = a1;
  *(_QWORD *)(a1 + 520) = 0;
  *(_QWORD *)(a1 + 528) = 0;
  *(_QWORD *)(a1 + 536) = 0;
  *(_QWORD *)(a1 + 544) = 0;
  *(_OWORD *)(a1 + 320) = 0;
  *(_OWORD *)(a1 + 376) = 0;
  *(_OWORD *)(a1 + 396) = 0;
  *(_OWORD *)(a1 + 412) = 0;
  *(_OWORD *)(a1 + 428) = 0;
  *(_OWORD *)(a1 + 444) = 0;
  *(_OWORD *)(a1 + 464) = 0;
  *(_OWORD *)(a1 + 488) = 0;
  *(_QWORD *)(a1 + 552) = 0;
  *(_QWORD *)(a1 + 560) = 0;
  v10 = (_QWORD *)sub_186B270(0x80u);
  *v10 = 0;
  v10[2] = 0;
  v10[4] = 0;
  v10[6] = 0;
  v10[8] = 0;
  v10[10] = 0;
  v10[12] = 0;
  v10[14] = 0;
  *(_QWORD *)(a1 + 568) = v10;
  *(_QWORD *)(a1 + 576) = 8;
  *(_DWORD *)(a1 + 584) = 0;
  v11 = (_QWORD *)sub_186B270(0x80u);
  *v11 = 0;
  v11[2] = 0;
  v11[4] = 0;
  v11[6] = 0;
  v11[8] = 0;
  v11[10] = 0;
  v11[12] = 0;
  v11[14] = 0;
  *(_QWORD *)(a1 + 592) = v11;
  *(_QWORD *)(a1 + 600) = 8;
  *(_DWORD *)(a1 + 608) = 0;
  *(_QWORD *)(a1 + 616) = a1;
  *(_QWORD *)(a1 + 624) = a1 + 536;
  v12 = sub_186B270(0x180u);
  *(_BYTE *)(v12 + 12) &= 0xFCu;
  *(_BYTE *)(v12 + 28) &= 0xFCu;
  *(_BYTE *)(v12 + 60) &= 0xFCu;
  *(_BYTE *)(v12 + 76) &= 0xFCu;
  *(_BYTE *)(v12 + 108) &= 0xFCu;
  *(_BYTE *)(v12 + 124) &= 0xFCu;
  *(_BYTE *)(v12 + 156) &= 0xFCu;
  *(_BYTE *)(v12 + 172) &= 0xFCu;
  *(_BYTE *)(v12 + 204) &= 0xFCu;
  *(_QWORD *)v12 = 0;
  *(_QWORD *)(v12 + 16) = 0;
  *(_QWORD *)(v12 + 32) = 0;
  *(_QWORD *)(v12 + 48) = 0;
  *(_QWORD *)(v12 + 64) = 0;
  *(_QWORD *)(v12 + 80) = 0;
  *(_QWORD *)(v12 + 96) = 0;
  *(_QWORD *)(v12 + 112) = 0;
  *(_QWORD *)(v12 + 128) = 0;
  *(_QWORD *)(v12 + 144) = 0;
  *(_QWORD *)(v12 + 160) = 0;
  *(_QWORD *)(v12 + 176) = 0;
  *(_QWORD *)(v12 + 192) = 0;
  *(_QWORD *)(v12 + 208) = 0;
  *(_BYTE *)(v12 + 220) &= 0xFCu;
  *(_BYTE *)(v12 + 252) &= 0xFCu;
  *(_BYTE *)(v12 + 268) &= 0xFCu;
  *(_BYTE *)(v12 + 300) &= 0xFCu;
  *(_BYTE *)(v12 + 316) &= 0xFCu;
  *(_BYTE *)(v12 + 348) &= 0xFCu;
  *(_BYTE *)(v12 + 364) &= 0xFCu;
  *(_QWORD *)(v12 + 224) = 0;
  *(_QWORD *)(v12 + 240) = 0;
  *(_QWORD *)(v12 + 256) = 0;
  *(_QWORD *)(v12 + 272) = 0;
  *(_QWORD *)(v12 + 288) = 0;
  *(_QWORD *)(v12 + 304) = 0;
  *(_QWORD *)(v12 + 320) = 0;
  *(_QWORD *)(v12 + 336) = 0;
  *(_QWORD *)(v12 + 352) = 0;
  *(_QWORD *)(v12 + 368) = 0;
  *(_DWORD *)(v12 + 8) = 0;
  *(_DWORD *)(v12 + 56) = 0;
  *(_DWORD *)(v12 + 104) = 0;
  *(_DWORD *)(v12 + 152) = 0;
  *(_DWORD *)(v12 + 200) = 0;
  *(_DWORD *)(v12 + 248) = 0;
  *(_DWORD *)(v12 + 296) = 0;
  *(_DWORD *)(v12 + 344) = 0;
  *(_DWORD *)(v12 + 24) = 1;
  *(_DWORD *)(v12 + 72) = 1;
  *(_DWORD *)(v12 + 120) = 1;
  *(_DWORD *)(v12 + 168) = 1;
  *(_DWORD *)(v12 + 216) = 1;
  *(_DWORD *)(v12 + 264) = 1;
  *(_DWORD *)(v12 + 312) = 1;
  *(_DWORD *)(v12 + 360) = 1;
  *(_QWORD *)(a1 + 632) = v12;
  *(_QWORD *)(a1 + 640) = 8;
  *(_DWORD *)(a1 + 648) = 0;
  v13 = sub_186B270(0x180u);
  *(_BYTE *)(v13 + 12) &= 0xFCu;
  *(_BYTE *)(v13 + 28) &= 0xFCu;
  *(_BYTE *)(v13 + 60) &= 0xFCu;
  *(_BYTE *)(v13 + 76) &= 0xFCu;
  *(_BYTE *)(v13 + 108) &= 0xFCu;
  *(_BYTE *)(v13 + 124) &= 0xFCu;
  *(_BYTE *)(v13 + 156) &= 0xFCu;
  *(_BYTE *)(v13 + 172) &= 0xFCu;
  *(_BYTE *)(v13 + 204) &= 0xFCu;
  *(_QWORD *)v13 = 0;
  *(_QWORD *)(v13 + 16) = 0;
  *(_QWORD *)(v13 + 32) = 0;
  *(_QWORD *)(v13 + 48) = 0;
  *(_QWORD *)(v13 + 64) = 0;
  *(_QWORD *)(v13 + 80) = 0;
  *(_QWORD *)(v13 + 96) = 0;
  *(_QWORD *)(v13 + 112) = 0;
  *(_QWORD *)(v13 + 128) = 0;
  *(_QWORD *)(v13 + 144) = 0;
  *(_QWORD *)(v13 + 160) = 0;
  *(_QWORD *)(v13 + 176) = 0;
  *(_QWORD *)(v13 + 192) = 0;
  *(_QWORD *)(v13 + 208) = 0;
  *(_BYTE *)(v13 + 220) &= 0xFCu;
  *(_BYTE *)(v13 + 252) &= 0xFCu;
  *(_BYTE *)(v13 + 268) &= 0xFCu;
  *(_BYTE *)(v13 + 300) &= 0xFCu;
  *(_BYTE *)(v13 + 316) &= 0xFCu;
  *(_BYTE *)(v13 + 348) &= 0xFCu;
  *(_BYTE *)(v13 + 364) &= 0xFCu;
  *(_QWORD *)(v13 + 224) = 0;
  *(_QWORD *)(v13 + 240) = 0;
  *(_QWORD *)(v13 + 256) = 0;
  *(_QWORD *)(v13 + 272) = 0;
  *(_QWORD *)(v13 + 288) = 0;
  *(_QWORD *)(v13 + 304) = 0;
  *(_QWORD *)(v13 + 320) = 0;
  *(_QWORD *)(v13 + 336) = 0;
  *(_QWORD *)(v13 + 352) = 0;
  *(_QWORD *)(v13 + 368) = 0;
  *(_DWORD *)(v13 + 8) = 0;
  *(_DWORD *)(v13 + 56) = 0;
  *(_DWORD *)(v13 + 104) = 0;
  *(_DWORD *)(v13 + 152) = 0;
  *(_DWORD *)(v13 + 200) = 0;
  *(_DWORD *)(v13 + 248) = 0;
  *(_DWORD *)(v13 + 296) = 0;
  *(_DWORD *)(v13 + 344) = 0;
  *(_DWORD *)(v13 + 24) = 1;
  *(_DWORD *)(v13 + 72) = 1;
  *(_DWORD *)(v13 + 120) = 1;
  *(_DWORD *)(v13 + 168) = 1;
  *(_DWORD *)(v13 + 216) = 1;
  *(_DWORD *)(v13 + 264) = 1;
  *(_DWORD *)(v13 + 312) = 1;
  *(_DWORD *)(v13 + 360) = 1;
  *(_QWORD *)(a1 + 656) = v13;
  *(_QWORD *)(a1 + 664) = 8;
  *(_DWORD *)(a1 + 672) = 0;
  v14 = sub_186B270(0x180u);
  *(_BYTE *)(v14 + 12) &= 0xFCu;
  *(_BYTE *)(v14 + 28) &= 0xFCu;
  *(_BYTE *)(v14 + 60) &= 0xFCu;
  *(_BYTE *)(v14 + 76) &= 0xFCu;
  *(_BYTE *)(v14 + 108) &= 0xFCu;
  *(_BYTE *)(v14 + 124) &= 0xFCu;
  *(_BYTE *)(v14 + 156) &= 0xFCu;
  *(_BYTE *)(v14 + 172) &= 0xFCu;
  *(_BYTE *)(v14 + 204) &= 0xFCu;
  *(_QWORD *)v14 = 0;
  *(_QWORD *)(v14 + 16) = 0;
  *(_QWORD *)(v14 + 32) = 0;
  *(_QWORD *)(v14 + 48) = 0;
  *(_QWORD *)(v14 + 64) = 0;
  *(_QWORD *)(v14 + 80) = 0;
  *(_QWORD *)(v14 + 96) = 0;
  *(_QWORD *)(v14 + 112) = 0;
  *(_QWORD *)(v14 + 128) = 0;
  *(_QWORD *)(v14 + 144) = 0;
  *(_QWORD *)(v14 + 160) = 0;
  *(_QWORD *)(v14 + 176) = 0;
  *(_QWORD *)(v14 + 192) = 0;
  *(_QWORD *)(v14 + 208) = 0;
  *(_BYTE *)(v14 + 220) &= 0xFCu;
  *(_BYTE *)(v14 + 252) &= 0xFCu;
  *(_BYTE *)(v14 + 268) &= 0xFCu;
  *(_BYTE *)(v14 + 300) &= 0xFCu;
  *(_BYTE *)(v14 + 316) &= 0xFCu;
  *(_BYTE *)(v14 + 348) &= 0xFCu;
  *(_BYTE *)(v14 + 364) &= 0xFCu;
  *(_QWORD *)(v14 + 224) = 0;
  *(_QWORD *)(v14 + 240) = 0;
  *(_QWORD *)(v14 + 256) = 0;
  *(_QWORD *)(v14 + 272) = 0;
  *(_QWORD *)(v14 + 288) = 0;
  *(_QWORD *)(v14 + 304) = 0;
  *(_QWORD *)(v14 + 320) = 0;
  *(_QWORD *)(v14 + 336) = 0;
  *(_QWORD *)(v14 + 352) = 0;
  *(_QWORD *)(v14 + 368) = 0;
  *(_DWORD *)(v14 + 8) = 0;
  *(_DWORD *)(v14 + 56) = 0;
  *(_DWORD *)(v14 + 104) = 0;
  *(_DWORD *)(v14 + 152) = 0;
  *(_DWORD *)(v14 + 200) = 0;
  *(_DWORD *)(v14 + 248) = 0;
  *(_DWORD *)(v14 + 296) = 0;
  *(_DWORD *)(v14 + 344) = 0;
  *(_DWORD *)(v14 + 24) = 1;
  *(_DWORD *)(v14 + 72) = 1;
  *(_DWORD *)(v14 + 120) = 1;
  *(_DWORD *)(v14 + 168) = 1;
  *(_DWORD *)(v14 + 216) = 1;
  *(_DWORD *)(v14 + 264) = 1;
  *(_DWORD *)(v14 + 312) = 1;
  *(_DWORD *)(v14 + 360) = 1;
  *(_QWORD *)(a1 + 680) = v14;
  *(_QWORD *)(a1 + 688) = 8;
  *(_DWORD *)(a1 + 696) = 0;
  *(_QWORD *)(a1 + 720) = 0;
  *(_OWORD *)(a1 + 704) = 0;
  v15 = (_QWORD *)sub_186B270(0x60u);
  *v15 = 0;
  *(_QWORD *)((char *)v15 + 12) = 0;
  v15[3] = 0;
  *(_QWORD *)((char *)v15 + 36) = 0;
  v15[6] = 0;
  *(_QWORD *)((char *)v15 + 60) = 0;
  v15[9] = 0;
  *(_QWORD *)((char *)v15 + 84) = 0;
  *(_QWORD *)(a1 + 728) = v15;
  *(_QWORD *)(a1 + 736) = 8;
  *(_DWORD *)(a1 + 744) = 0;
  *(_QWORD *)(a1 + 800) = 0;
  *(_OWORD *)(a1 + 752) = 0;
  *(_OWORD *)(a1 + 768) = 0;
  *(_OWORD *)(a1 + 784) = 0;
  v16 = (_QWORD *)sub_186B270(0x60u);
  *v16 = 0;
  v17 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)((char *)v16 + 12) = 0;
  v16[3] = 0;
  *(_QWORD *)((char *)v16 + 36) = 0;
  v16[6] = 0;
  *(_QWORD *)((char *)v16 + 60) = 0;
  v16[9] = 0;
  *(_QWORD *)((char *)v16 + 84) = 0;
  *(_QWORD *)(a1 + 808) = v16;
  *(_QWORD *)(a1 + 816) = 8;
  *(_DWORD *)(a1 + 824) = 0;
  sub_16669D0(a1 + 832, v17);
  *(_BYTE *)(a1 + 848) = 0;
  *(_OWORD *)(a1 + 856) = 0;
  *(_OWORD *)(a1 + 872) = 0;
  v18 = sub_186B270(0x180u);
  *(_BYTE *)(v18 + 12) &= 0xFCu;
  *(_BYTE *)(v18 + 28) &= 0xFCu;
  *(_BYTE *)(v18 + 60) &= 0xFCu;
  *(_BYTE *)(v18 + 76) &= 0xFCu;
  *(_BYTE *)(v18 + 108) &= 0xFCu;
  *(_BYTE *)(v18 + 124) &= 0xFCu;
  *(_BYTE *)(v18 + 156) &= 0xFCu;
  *(_BYTE *)(v18 + 172) &= 0xFCu;
  *(_BYTE *)(v18 + 204) &= 0xFCu;
  *(_QWORD *)v18 = 0;
  *(_QWORD *)(v18 + 16) = 0;
  *(_QWORD *)(v18 + 32) = 0;
  *(_QWORD *)(v18 + 48) = 0;
  *(_QWORD *)(v18 + 64) = 0;
  *(_QWORD *)(v18 + 80) = 0;
  *(_QWORD *)(v18 + 96) = 0;
  *(_QWORD *)(v18 + 112) = 0;
  *(_QWORD *)(v18 + 128) = 0;
  *(_QWORD *)(v18 + 144) = 0;
  *(_QWORD *)(v18 + 160) = 0;
  *(_QWORD *)(v18 + 176) = 0;
  *(_QWORD *)(v18 + 192) = 0;
  *(_QWORD *)(v18 + 208) = 0;
  *(_BYTE *)(v18 + 220) &= 0xFCu;
  *(_BYTE *)(v18 + 252) &= 0xFCu;
  *(_BYTE *)(v18 + 268) &= 0xFCu;
  *(_BYTE *)(v18 + 300) &= 0xFCu;
  *(_BYTE *)(v18 + 316) &= 0xFCu;
  *(_BYTE *)(v18 + 348) &= 0xFCu;
  *(_BYTE *)(v18 + 364) &= 0xFCu;
  *(_QWORD *)(v18 + 224) = 0;
  *(_QWORD *)(v18 + 240) = 0;
  *(_QWORD *)(v18 + 256) = 0;
  *(_QWORD *)(v18 + 272) = 0;
  *(_QWORD *)(v18 + 288) = 0;
  *(_QWORD *)(v18 + 304) = 0;
  *(_QWORD *)(v18 + 320) = 0;
  *(_QWORD *)(v18 + 336) = 0;
  *(_QWORD *)(v18 + 352) = 0;
  *(_QWORD *)(v18 + 368) = 0;
  *(_DWORD *)(v18 + 8) = 0;
  *(_DWORD *)(v18 + 56) = 0;
  *(_DWORD *)(v18 + 104) = 0;
  *(_DWORD *)(v18 + 152) = 0;
  *(_DWORD *)(v18 + 200) = 0;
  *(_DWORD *)(v18 + 248) = 0;
  *(_DWORD *)(v18 + 296) = 0;
  *(_DWORD *)(v18 + 344) = 0;
  *(_DWORD *)(v18 + 24) = 1;
  *(_DWORD *)(v18 + 72) = 1;
  *(_DWORD *)(v18 + 120) = 1;
  *(_DWORD *)(v18 + 168) = 1;
  *(_DWORD *)(v18 + 216) = 1;
  *(_DWORD *)(v18 + 264) = 1;
  *(_DWORD *)(v18 + 312) = 1;
  *(_DWORD *)(v18 + 360) = 1;
  *(_QWORD *)(a1 + 888) = v18;
  v19 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 896) = 8;
  *(_DWORD *)(a1 + 904) = 0;
  *(_DWORD *)(a1 + 916) = -2;
  *(_QWORD *)(a1 + 920) = v19;
  *(_QWORD *)(a1 + 928) = 0;
  *(_QWORD *)(a1 + 936) = 0;
  *(_QWORD *)(a1 + 944) = v19;
  *(_BYTE *)(a1 + 952) = 0;
  *(_OWORD *)(a1 + 960) = 0;
  *(_OWORD *)(a1 + 980) = 0;
  v20 = sub_186B270(0x98u);
  sub_10012A0(v20, v17, v21, v22, v23, v24, v36.m128i_i64[0], v36.m128i_i64[1], v37);
  v25 = *(void (__fastcall ****)(_QWORD))(a1 + 496);
  if ( (void (__fastcall ***)(_QWORD))v20 != v25 )
  {
    if ( v25 )
    {
      (**v25)(*(_QWORD *)(a1 + 496));
      sub_186B220(v25);
    }
    *(_QWORD *)(a1 + 496) = v20;
    v25 = (void (__fastcall ***)(_QWORD))v20;
  }
  sub_FF9A40(v25, a2[3] + 3904LL);
  v26 = sub_FF9A10(*(_QWORD *)(a1 + 496));
  v27 = *(_DWORD *)(a1 + 392);
  *(_QWORD *)(v26 + 40) = a1 + 504;
  v28 = 0;
  if ( v27 < *(_DWORD *)(sub_7E4EB0(a1) + 344) )
    v28 = *(_DWORD *)(sub_7E4EB0(a1) + 268) != 0;
  *(_BYTE *)(sub_FF9A10(*(_QWORD *)(a1 + 496)) + 272) = v28;
  v29 = sub_FF9A10(*(_QWORD *)(a1 + 496));
  v30 = sub_7E4EB0(a1);
  v31 = *(_QWORD *)(a1 + 496);
  *(_BYTE *)(v29 + 320) = *(_BYTE *)(v30 + 338);
  v32 = sub_FF9A10(v31);
  *(_DWORD *)(v32 + 232) = *(_DWORD *)(sub_7E4EB0(a1) + 484);
  v33 = sub_186B270(0x20u);
  result = sub_FECE10(v33, *(_QWORD *)(a1 + 496));
  v35 = *(void **)(a1 + 488);
  if ( (void *)v33 != v35 )
  {
    if ( v35 )
    {
      sub_FE7900(*(_QWORD *)(a1 + 488));
      result = sub_186B220(v35);
    }
    *(_QWORD *)(a1 + 488) = v33;
  }
  return result;
}

