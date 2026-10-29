void __fastcall sub_A8D300(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _DWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int8 v19; // cl
  char v20; // dl
  char v21; // cl
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int8 v27; // cl
  char v28; // dl
  char v29; // cl
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  bool v34; // zf
  __m128i v35; // [rsp+10h] [rbp-68h] BYREF
  __m128i v36; // [rsp+20h] [rbp-58h] BYREF
  __int64 v37; // [rsp+30h] [rbp-48h] BYREF
  __int64 v38; // [rsp+38h] [rbp-40h]

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  sub_16669D0(a1 + 16, a3);
  *(_QWORD *)(a1 + 40) = a2;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 48) = a1 + 16;
  v4 = sub_186B270(0x180u);
  *(_QWORD *)(v4 + 32) = 0;
  *(_DWORD *)(v4 + 40) = 0;
  *(_QWORD *)(v4 + 80) = 0;
  *(_DWORD *)(v4 + 88) = 0;
  *(_QWORD *)(v4 + 128) = 0;
  *(_DWORD *)(v4 + 136) = 0;
  *(_QWORD *)(v4 + 176) = 0;
  *(_DWORD *)(v4 + 184) = 0;
  *(_QWORD *)(v4 + 224) = 0;
  *(_DWORD *)(v4 + 232) = 0;
  *(_QWORD *)(v4 + 272) = 0;
  *(_DWORD *)(v4 + 280) = 0;
  *(_QWORD *)(v4 + 320) = 0;
  *(_DWORD *)(v4 + 328) = 0;
  *(_QWORD *)(v4 + 368) = 0;
  *(_DWORD *)(v4 + 376) = 0;
  *(_OWORD *)v4 = 0;
  *(_OWORD *)(v4 + 16) = 0;
  *(_OWORD *)(v4 + 48) = 0;
  *(_OWORD *)(v4 + 64) = 0;
  *(_OWORD *)(v4 + 96) = 0;
  *(_OWORD *)(v4 + 112) = 0;
  *(_OWORD *)(v4 + 144) = 0;
  *(_OWORD *)(v4 + 160) = 0;
  *(_OWORD *)(v4 + 192) = 0;
  *(_OWORD *)(v4 + 208) = 0;
  *(_OWORD *)(v4 + 240) = 0;
  *(_OWORD *)(v4 + 256) = 0;
  *(_OWORD *)(v4 + 288) = 0;
  *(_OWORD *)(v4 + 304) = 0;
  *(_OWORD *)(v4 + 336) = 0;
  *(_OWORD *)(v4 + 352) = 0;
  *(_QWORD *)(a1 + 56) = v4;
  *(_DWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 64) = 8;
  *(_DWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 208) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 128) = -1;
  *(_OWORD *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 160) = 0;
  *(_OWORD *)(a1 + 176) = 0;
  *(_OWORD *)(a1 + 192) = 0;
  v5 = (_QWORD *)sub_186B270(0xC0u);
  *v5 = 0;
  v5[3] = 0;
  v5[6] = 0;
  v5[9] = 0;
  v5[12] = 0;
  v5[15] = 0;
  v5[18] = 0;
  v5[21] = 0;
  *(_QWORD *)(a1 + 216) = v5;
  *(_QWORD *)(a1 + 224) = 8;
  *(_DWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  *(_DWORD *)(a1 + 264) = 0;
  *(_DWORD *)(a1 + 288) = 0;
  *(_DWORD *)(a1 + 296) = 0;
  *(_DWORD *)(a1 + 320) = 0;
  *(_OWORD *)(a1 + 240) = 0;
  *(_OWORD *)(a1 + 272) = 0;
  *(_OWORD *)(a1 + 304) = 0;
  *(_OWORD *)(a1 + 328) = 0;
  *(_OWORD *)(a1 + 344) = 0;
  v6 = (_QWORD *)sub_186B270(0x60u);
  *v6 = 0;
  *(_QWORD *)((char *)v6 + 12) = 0;
  v6[3] = 0;
  *(_QWORD *)((char *)v6 + 36) = 0;
  v6[6] = 0;
  *(_QWORD *)((char *)v6 + 60) = 0;
  v6[9] = 0;
  *(_QWORD *)((char *)v6 + 84) = 0;
  *(_QWORD *)(a1 + 360) = v6;
  *(_QWORD *)(a1 + 368) = 8;
  *(_DWORD *)(a1 + 376) = 0;
  *(__m128i *)(a1 + 384) = _mm_unpacklo_epi64((__m128i)a1, (__m128i)a1);
  v7 = (_DWORD *)sub_186B270(0x40u);
  v7[1] = 0x80000000;
  v7[3] = 0x80000000;
  v7[5] = 0x80000000;
  v7[7] = 0x80000000;
  v7[9] = 0x80000000;
  v7[11] = 0x80000000;
  v7[13] = 0x80000000;
  v7[15] = 0x80000000;
  *(_QWORD *)(a1 + 400) = v7;
  *(_QWORD *)(a1 + 408) = 8;
  *(_DWORD *)(a1 + 416) = 0;
  *(_QWORD *)(a1 + 424) = 0;
  *(_QWORD *)(a1 + 504) = 0;
  *(_QWORD *)(a1 + 512) = off_1C565B0;
  *(_QWORD *)(a1 + 520) = a1;
  *(_QWORD *)(a1 + 528) = 0;
  *(_OWORD *)(a1 + 432) = 0;
  *(_OWORD *)(a1 + 448) = 0;
  *(_OWORD *)(a1 + 464) = 0;
  *(_OWORD *)(a1 + 480) = 0;
  sub_180C5A0(a1 + 536, "farkas");
  *(_QWORD *)(a1 + 576) = 0;
  *(_OWORD *)(a1 + 544) = 0;
  *(_OWORD *)(a1 + 560) = 0;
  v8 = (_QWORD *)sub_186B270(0x80u);
  *v8 = 0;
  v8[2] = 0;
  v8[4] = 0;
  v8[6] = 0;
  v8[8] = 0;
  v8[10] = 0;
  v8[12] = 0;
  v8[14] = 0;
  *(_QWORD *)(a1 + 584) = v8;
  *(_QWORD *)(a1 + 592) = 8;
  *(_DWORD *)(a1 + 600) = 0;
  v9 = (_QWORD *)sub_186B270(0x80u);
  *v9 = 0;
  v9[2] = 0;
  v9[4] = 0;
  v9[6] = 0;
  v9[8] = 0;
  v9[10] = 0;
  v9[12] = 0;
  v9[14] = 0;
  *(_QWORD *)(a1 + 608) = v9;
  *(_QWORD *)(a1 + 616) = 8;
  *(_DWORD *)(a1 + 624) = 0;
  *(_QWORD *)(a1 + 632) = a1;
  *(_QWORD *)(a1 + 640) = a1 + 552;
  v10 = sub_186B270(0x180u);
  *(_BYTE *)(v10 + 12) &= 0xFCu;
  *(_BYTE *)(v10 + 28) &= 0xFCu;
  *(_BYTE *)(v10 + 60) &= 0xFCu;
  *(_BYTE *)(v10 + 76) &= 0xFCu;
  *(_BYTE *)(v10 + 108) &= 0xFCu;
  *(_BYTE *)(v10 + 124) &= 0xFCu;
  *(_BYTE *)(v10 + 156) &= 0xFCu;
  *(_BYTE *)(v10 + 172) &= 0xFCu;
  *(_BYTE *)(v10 + 204) &= 0xFCu;
  *(_QWORD *)v10 = 0;
  *(_QWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 32) = 0;
  *(_QWORD *)(v10 + 48) = 0;
  *(_QWORD *)(v10 + 64) = 0;
  *(_QWORD *)(v10 + 80) = 0;
  *(_QWORD *)(v10 + 96) = 0;
  *(_QWORD *)(v10 + 112) = 0;
  *(_QWORD *)(v10 + 128) = 0;
  *(_QWORD *)(v10 + 144) = 0;
  *(_QWORD *)(v10 + 160) = 0;
  *(_QWORD *)(v10 + 176) = 0;
  *(_QWORD *)(v10 + 192) = 0;
  *(_QWORD *)(v10 + 208) = 0;
  *(_BYTE *)(v10 + 220) &= 0xFCu;
  *(_BYTE *)(v10 + 252) &= 0xFCu;
  *(_BYTE *)(v10 + 268) &= 0xFCu;
  *(_BYTE *)(v10 + 300) &= 0xFCu;
  *(_BYTE *)(v10 + 316) &= 0xFCu;
  *(_BYTE *)(v10 + 348) &= 0xFCu;
  *(_BYTE *)(v10 + 364) &= 0xFCu;
  *(_QWORD *)(v10 + 224) = 0;
  *(_QWORD *)(v10 + 240) = 0;
  *(_QWORD *)(v10 + 256) = 0;
  *(_QWORD *)(v10 + 272) = 0;
  *(_QWORD *)(v10 + 288) = 0;
  *(_QWORD *)(v10 + 304) = 0;
  *(_QWORD *)(v10 + 320) = 0;
  *(_QWORD *)(v10 + 336) = 0;
  *(_QWORD *)(v10 + 352) = 0;
  *(_QWORD *)(v10 + 368) = 0;
  *(_DWORD *)(v10 + 8) = 0;
  *(_DWORD *)(v10 + 56) = 0;
  *(_DWORD *)(v10 + 104) = 0;
  *(_DWORD *)(v10 + 152) = 0;
  *(_DWORD *)(v10 + 200) = 0;
  *(_DWORD *)(v10 + 248) = 0;
  *(_DWORD *)(v10 + 296) = 0;
  *(_DWORD *)(v10 + 344) = 0;
  *(_DWORD *)(v10 + 24) = 1;
  *(_DWORD *)(v10 + 72) = 1;
  *(_DWORD *)(v10 + 120) = 1;
  *(_DWORD *)(v10 + 168) = 1;
  *(_DWORD *)(v10 + 216) = 1;
  *(_DWORD *)(v10 + 264) = 1;
  *(_DWORD *)(v10 + 312) = 1;
  *(_DWORD *)(v10 + 360) = 1;
  *(_QWORD *)(a1 + 648) = v10;
  *(_QWORD *)(a1 + 656) = 8;
  *(_DWORD *)(a1 + 664) = 0;
  v11 = sub_186B270(0x180u);
  *(_BYTE *)(v11 + 12) &= 0xFCu;
  *(_BYTE *)(v11 + 28) &= 0xFCu;
  *(_BYTE *)(v11 + 60) &= 0xFCu;
  *(_BYTE *)(v11 + 76) &= 0xFCu;
  *(_BYTE *)(v11 + 108) &= 0xFCu;
  *(_BYTE *)(v11 + 124) &= 0xFCu;
  *(_BYTE *)(v11 + 156) &= 0xFCu;
  *(_BYTE *)(v11 + 172) &= 0xFCu;
  *(_BYTE *)(v11 + 204) &= 0xFCu;
  *(_QWORD *)v11 = 0;
  *(_QWORD *)(v11 + 16) = 0;
  *(_QWORD *)(v11 + 32) = 0;
  *(_QWORD *)(v11 + 48) = 0;
  *(_QWORD *)(v11 + 64) = 0;
  *(_QWORD *)(v11 + 80) = 0;
  *(_QWORD *)(v11 + 96) = 0;
  *(_QWORD *)(v11 + 112) = 0;
  *(_QWORD *)(v11 + 128) = 0;
  *(_QWORD *)(v11 + 144) = 0;
  *(_QWORD *)(v11 + 160) = 0;
  *(_QWORD *)(v11 + 176) = 0;
  *(_QWORD *)(v11 + 192) = 0;
  *(_QWORD *)(v11 + 208) = 0;
  *(_BYTE *)(v11 + 220) &= 0xFCu;
  *(_BYTE *)(v11 + 252) &= 0xFCu;
  *(_BYTE *)(v11 + 268) &= 0xFCu;
  *(_BYTE *)(v11 + 300) &= 0xFCu;
  *(_BYTE *)(v11 + 316) &= 0xFCu;
  *(_BYTE *)(v11 + 348) &= 0xFCu;
  *(_BYTE *)(v11 + 364) &= 0xFCu;
  *(_QWORD *)(v11 + 224) = 0;
  *(_QWORD *)(v11 + 240) = 0;
  *(_QWORD *)(v11 + 256) = 0;
  *(_QWORD *)(v11 + 272) = 0;
  *(_QWORD *)(v11 + 288) = 0;
  *(_QWORD *)(v11 + 304) = 0;
  *(_QWORD *)(v11 + 320) = 0;
  *(_QWORD *)(v11 + 336) = 0;
  *(_QWORD *)(v11 + 352) = 0;
  *(_QWORD *)(v11 + 368) = 0;
  *(_DWORD *)(v11 + 8) = 0;
  *(_DWORD *)(v11 + 56) = 0;
  *(_DWORD *)(v11 + 104) = 0;
  *(_DWORD *)(v11 + 152) = 0;
  *(_DWORD *)(v11 + 200) = 0;
  *(_DWORD *)(v11 + 248) = 0;
  *(_DWORD *)(v11 + 296) = 0;
  *(_DWORD *)(v11 + 344) = 0;
  *(_DWORD *)(v11 + 24) = 1;
  *(_DWORD *)(v11 + 72) = 1;
  *(_DWORD *)(v11 + 120) = 1;
  *(_DWORD *)(v11 + 168) = 1;
  *(_DWORD *)(v11 + 216) = 1;
  *(_DWORD *)(v11 + 264) = 1;
  *(_DWORD *)(v11 + 312) = 1;
  *(_DWORD *)(v11 + 360) = 1;
  *(_QWORD *)(a1 + 672) = v11;
  *(_QWORD *)(a1 + 680) = 8;
  *(_DWORD *)(a1 + 688) = 0;
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
  *(_QWORD *)(a1 + 696) = v12;
  *(_QWORD *)(a1 + 704) = 8;
  *(_DWORD *)(a1 + 712) = 0;
  *(_OWORD *)(a1 + 720) = 0;
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
  *(_QWORD *)(a1 + 736) = v13;
  *(_WORD *)(a1 + 768) = 0;
  *(_QWORD *)(a1 + 744) = 8;
  *(_DWORD *)(a1 + 752) = 0;
  *(_QWORD *)(a1 + 760) = 0;
  *(_OWORD *)(a1 + 776) = 0;
  *(_OWORD *)(a1 + 792) = 0;
  *(_OWORD *)(a1 + 808) = 0;
  v14 = (_QWORD *)sub_186B270(0x60u);
  *v14 = 0;
  *(_QWORD *)((char *)v14 + 12) = 0;
  v14[3] = 0;
  *(_QWORD *)((char *)v14 + 36) = 0;
  v14[6] = 0;
  *(_QWORD *)((char *)v14 + 60) = 0;
  v14[9] = 0;
  *(_QWORD *)((char *)v14 + 84) = 0;
  *(_QWORD *)(a1 + 824) = v14;
  v15 = *(_QWORD *)(a1 + 536);
  *(_QWORD *)(a1 + 832) = 8;
  v36.m128i_i64[0] = v15;
  v16 = *(_QWORD *)(a1 + 544);
  *(_DWORD *)(a1 + 840) = 0;
  *(_QWORD *)(a1 + 864) = 0;
  *(_QWORD *)(a1 + 872) = 0;
  *(_DWORD *)(a1 + 880) = -2;
  *(_QWORD *)(a1 + 888) = a3;
  *(_QWORD *)(a1 + 896) = 0;
  *(_QWORD *)(a1 + 904) = 0;
  *(_QWORD *)(a1 + 912) = a3;
  v36.m128i_i8[8] = 2;
  *(_OWORD *)(a1 + 848) = 0;
  if ( !v16 || (v17 = *(unsigned int *)(v16 - 4), (_DWORD)v17 == *(_DWORD *)(v16 - 8)) )
  {
    sub_8B4B00((__int64 *)(a1 + 544));
    v16 = *(_QWORD *)(a1 + 544);
    v34 = v36.m128i_i8[8] == 0;
    *(__m128i *)(v16 + 16LL * *(unsigned int *)(v16 - 4)) = _mm_load_si128(&v36);
    if ( v34 )
    {
      v36.m128i_i32[0] = 0;
      goto LABEL_5;
    }
  }
  else
  {
    *(__m128i *)(v16 + 16 * v17) = _mm_load_si128(&v36);
  }
  v36.m128i_i32[0] = 0;
  v36.m128i_i8[8] = 0;
LABEL_5:
  ++*(_DWORD *)(v16 - 4);
  sub_15D0DF0(&v36);
  v36 = (__m128i)1uLL;
  v37 = 1;
  v38 = 0;
  sub_182CBA0(qword_1C7F2C0, &v37);
  BYTE4(v37) &= ~1u;
  LODWORD(v37) = 1;
  v18 = sub_186B270(0x20u);
  v19 = v36.m128i_i8[4];
  v35.m128i_i64[0] = v18;
  v35.m128i_i8[8] = 4;
  *(_DWORD *)v18 = v36.m128i_i32[0];
  v20 = v19 & 3 | *(_BYTE *)(v18 + 4) & 0xFC;
  v21 = BYTE4(v37);
  *(_BYTE *)(v18 + 4) = v20;
  v22 = v36.m128i_i64[1];
  v36.m128i_i64[1] = 0;
  *(_QWORD *)(v18 + 8) = v22;
  *(_DWORD *)(v18 + 16) = v37;
  *(_BYTE *)(v18 + 20) = v21 & 3 | *(_BYTE *)(v18 + 20) & 0xFC;
  v23 = v38;
  v38 = 0;
  *(_QWORD *)(v18 + 24) = v23;
  v24 = *(_QWORD *)(a1 + 544);
  if ( !v24 || (v25 = *(unsigned int *)(v24 - 4), (_DWORD)v25 == *(_DWORD *)(v24 - 8)) )
  {
    sub_8B4B00((__int64 *)(a1 + 544));
    v24 = *(_QWORD *)(a1 + 544);
    v34 = v35.m128i_i8[8] == 0;
    *(__m128i *)(v24 + 16LL * *(unsigned int *)(v24 - 4)) = _mm_load_si128(&v35);
    if ( v34 )
    {
      v35.m128i_i32[0] = 0;
      goto LABEL_9;
    }
  }
  else
  {
    *(__m128i *)(v24 + 16 * v25) = _mm_load_si128(&v35);
  }
  v35.m128i_i32[0] = 0;
  v35.m128i_i8[8] = 0;
LABEL_9:
  ++*(_DWORD *)(v24 - 4);
  sub_15D0DF0(&v35);
  sub_25A130(v36.m128i_i8);
  v36 = (__m128i)1uLL;
  v37 = 1;
  v38 = 0;
  sub_182CBA0(qword_1C7F2C0, &v37);
  BYTE4(v37) &= ~1u;
  LODWORD(v37) = 1;
  v26 = sub_186B270(0x20u);
  v27 = v36.m128i_i8[4];
  v35.m128i_i64[0] = v26;
  v35.m128i_i8[8] = 4;
  *(_DWORD *)v26 = v36.m128i_i32[0];
  v28 = v27 & 3 | *(_BYTE *)(v26 + 4) & 0xFC;
  v29 = BYTE4(v37);
  *(_BYTE *)(v26 + 4) = v28;
  v30 = v36.m128i_i64[1];
  v36.m128i_i64[1] = 0;
  *(_QWORD *)(v26 + 8) = v30;
  *(_DWORD *)(v26 + 16) = v37;
  *(_BYTE *)(v26 + 20) = v29 & 3 | *(_BYTE *)(v26 + 20) & 0xFC;
  v31 = v38;
  v38 = 0;
  *(_QWORD *)(v26 + 24) = v31;
  v32 = *(_QWORD *)(a1 + 544);
  if ( !v32 || (v33 = *(unsigned int *)(v32 - 4), (_DWORD)v33 == *(_DWORD *)(v32 - 8)) )
  {
    sub_8B4B00((__int64 *)(a1 + 544));
    v32 = *(_QWORD *)(a1 + 544);
    v34 = v35.m128i_i8[8] == 0;
    *(__m128i *)(v32 + 16LL * *(unsigned int *)(v32 - 4)) = _mm_load_si128(&v35);
    if ( v34 )
    {
      v35.m128i_i32[0] = 0;
      goto LABEL_13;
    }
  }
  else
  {
    *(__m128i *)(v32 + 16 * v33) = _mm_load_si128(&v35);
  }
  v35.m128i_i32[0] = 0;
  v35.m128i_i8[8] = 0;
LABEL_13:
  ++*(_DWORD *)(v32 - 4);
  sub_15D0DF0(&v35);
  sub_25A130(v36.m128i_i8);
}

