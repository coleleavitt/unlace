void __fastcall sub_34BE70(__int64 a1, __int64 *a2, int a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r13
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  void *v14; // r14
  _OWORD *v15; // rax
  __int64 v16; // rax
  _OWORD *v17; // rax
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // r15
  __int64 v20; // rbp
  unsigned __int64 v21; // rax
  __int64 v22; // rbp
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // r15
  __int64 v25; // rbp
  unsigned __int64 v26; // r15
  _BYTE *v27; // rbp
  __int64 v28; // r15
  unsigned __int64 v29; // rdi
  __int64 v30; // rax
  void *v31; // rdi
  unsigned __int64 v32; // r15
  unsigned __int64 v33; // rdi
  __int64 v34; // rax
  void *v35; // rdi
  unsigned __int64 v36; // r15
  unsigned __int64 v37; // rdi
  _BYTE *v38; // rax
  void *v39; // rdi
  unsigned __int64 v40; // r15
  unsigned __int64 v41; // rdi
  __int64 v42; // rax
  void *v43; // rdi
  unsigned __int64 v44; // rdi
  __int64 v45; // rax

  v5 = a5;
  sub_300750(a1, a2, a4, a3);
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)a1 = &off_1C4D670;
  v7 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 168) = v7;
  *(_QWORD *)(a1 + 184) = v7;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = v7;
  *(_QWORD *)(a1 + 208) = 0;
  v8 = sub_186B270(0x140u);
  *(_QWORD *)v8 = 0;
  *(_QWORD *)(v8 + 224) = 1;
  *(_QWORD *)(v8 + 8) = 0;
  *(_QWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 24) = 1;
  *(_QWORD *)(v8 + 32) = 0;
  *(_QWORD *)(v8 + 40) = 0;
  *(_QWORD *)(v8 + 48) = 0;
  *(_QWORD *)(v8 + 56) = 0;
  *(_QWORD *)(v8 + 64) = 1;
  *(_QWORD *)(v8 + 72) = 0;
  *(_QWORD *)(v8 + 80) = 0;
  *(_QWORD *)(v8 + 88) = 0;
  *(_QWORD *)(v8 + 96) = 0;
  *(_QWORD *)(v8 + 104) = 1;
  *(_QWORD *)(v8 + 112) = 0;
  *(_QWORD *)(v8 + 120) = 0;
  *(_QWORD *)(v8 + 128) = 0;
  *(_QWORD *)(v8 + 136) = 0;
  *(_QWORD *)(v8 + 144) = 1;
  *(_QWORD *)(v8 + 152) = 0;
  *(_QWORD *)(v8 + 160) = 0;
  *(_QWORD *)(v8 + 168) = 0;
  *(_QWORD *)(v8 + 176) = 0;
  *(_QWORD *)(v8 + 184) = 1;
  *(_QWORD *)(v8 + 192) = 0;
  *(_QWORD *)(v8 + 200) = 0;
  *(_QWORD *)(v8 + 208) = 0;
  *(_QWORD *)(v8 + 216) = 0;
  *(_BYTE *)(v8 + 228) = 0;
  *(_QWORD *)(v8 + 248) = 0;
  *(_OWORD *)(v8 + 232) = 0;
  *(_QWORD *)(v8 + 256) = 0;
  *(_QWORD *)(v8 + 264) = 1;
  *(_QWORD *)(v8 + 272) = 0;
  *(_QWORD *)(v8 + 280) = 0;
  *(_QWORD *)(v8 + 288) = 0;
  *(_QWORD *)(v8 + 296) = 0;
  *(_QWORD *)(v8 + 304) = 1;
  *(_QWORD *)(v8 + 312) = 0;
  *(_QWORD *)(a1 + 216) = v8;
  v9 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 224) = 8;
  *(_QWORD *)(a1 + 240) = v9;
  v10 = *a2;
  *(_DWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 248) = 0;
  v11 = (*(__int64 (__fastcall **)(__int64 *))(v10 + 32))(a2);
  sub_E1FF20(a1 + 256, v11);
  v12 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 272) = 0;
  *(_DWORD *)(a1 + 280) = v5;
  *(_QWORD *)(a1 + 264) = v12;
  *(_QWORD *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 304) = 1;
  *(_QWORD *)(a1 + 328) = off_1C4D628;
  *(_QWORD *)(a1 + 336) = a1;
  *(_OWORD *)(a1 + 312) = 0;
  v13 = sub_2FF8B0(a1);
  sub_36D0E0(a1 + 344, v13, a1 + 328);
  v14 = (void *)(a1 + 576);
  *(_DWORD *)(a1 + 528) = 0;
  *(_BYTE *)(a1 + 534) = 0;
  *(_WORD *)(a1 + 532) = 256;
  *(_DWORD *)(a1 + 536) = 3;
  *(_BYTE *)(a1 + 540) = 0;
  *(_DWORD *)(a1 + 544) = 3;
  *(_WORD *)(a1 + 548) = 256;
  *(_BYTE *)(a1 + 551) = 0;
  *(_DWORD *)(a1 + 552) = 1000;
  *(_WORD *)(a1 + 556) = 256;
  *(_QWORD *)(a1 + 560) = a1 + 576;
  *(_QWORD *)(a1 + 568) = 0;
  *(_BYTE *)(a1 + 576) = 0;
  v15 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 592) = v15;
  *(_QWORD *)(a1 + 600) = 8;
  *(_DWORD *)(a1 + 608) = 0;
  *v15 = 0;
  v15[1] = 0;
  v15[2] = 0;
  v15[3] = 0;
  v15[4] = 0;
  v15[5] = 0;
  v15[6] = 0;
  v15[7] = 0;
  v16 = sub_186B270(0x1C0u);
  *(_QWORD *)v16 = 0;
  *(_QWORD *)(v16 + 8) = 0;
  *(_QWORD *)(v16 + 16) = 0;
  *(_QWORD *)(v16 + 24) = 0;
  *(_QWORD *)(v16 + 32) = 0;
  *(_QWORD *)(v16 + 40) = 1;
  *(_QWORD *)(v16 + 48) = 0;
  *(_QWORD *)(v16 + 56) = 0;
  *(_QWORD *)(v16 + 64) = 0;
  *(_QWORD *)(v16 + 72) = 0;
  *(_QWORD *)(v16 + 80) = 0;
  *(_QWORD *)(v16 + 88) = 0;
  *(_QWORD *)(v16 + 96) = 1;
  *(_QWORD *)(v16 + 104) = 0;
  *(_QWORD *)(v16 + 112) = 0;
  *(_QWORD *)(v16 + 120) = 0;
  *(_QWORD *)(v16 + 128) = 0;
  *(_QWORD *)(v16 + 136) = 0;
  *(_QWORD *)(v16 + 144) = 0;
  *(_QWORD *)(v16 + 152) = 1;
  *(_QWORD *)(v16 + 160) = 0;
  *(_QWORD *)(v16 + 168) = 0;
  *(_QWORD *)(v16 + 176) = 0;
  *(_QWORD *)(v16 + 184) = 0;
  *(_QWORD *)(v16 + 192) = 0;
  *(_QWORD *)(v16 + 200) = 0;
  *(_QWORD *)(v16 + 208) = 1;
  *(_QWORD *)(v16 + 216) = 0;
  *(_QWORD *)(v16 + 224) = 0;
  *(_QWORD *)(v16 + 232) = 0;
  *(_QWORD *)(v16 + 240) = 0;
  *(_QWORD *)(v16 + 248) = 0;
  *(_QWORD *)(v16 + 256) = 0;
  *(_QWORD *)(v16 + 320) = 1;
  *(_QWORD *)(v16 + 264) = 1;
  *(_QWORD *)(v16 + 272) = 0;
  *(_QWORD *)(v16 + 280) = 0;
  *(_QWORD *)(v16 + 288) = 0;
  *(_QWORD *)(v16 + 296) = 0;
  *(_QWORD *)(v16 + 304) = 0;
  *(_QWORD *)(v16 + 312) = 0;
  *(_BYTE *)(v16 + 324) = 0;
  *(_QWORD *)(v16 + 344) = 0;
  *(_QWORD *)(v16 + 352) = 0;
  *(_QWORD *)(v16 + 360) = 0;
  *(_QWORD *)(v16 + 368) = 0;
  *(_QWORD *)(v16 + 376) = 1;
  *(_QWORD *)(v16 + 384) = 0;
  *(_QWORD *)(v16 + 392) = 0;
  *(_QWORD *)(v16 + 400) = 0;
  *(_QWORD *)(v16 + 408) = 0;
  *(_QWORD *)(v16 + 416) = 0;
  *(_QWORD *)(v16 + 424) = 0;
  *(_QWORD *)(v16 + 432) = 1;
  *(_QWORD *)(v16 + 440) = 0;
  *(_QWORD *)(a1 + 616) = v16;
  *(_QWORD *)(a1 + 624) = 8;
  *(_DWORD *)(a1 + 632) = 0;
  *(_QWORD *)(a1 + 640) = 0;
  *(_QWORD *)(a1 + 648) = 0;
  *(_QWORD *)(a1 + 656) = 1;
  *(_QWORD *)(a1 + 664) = 0;
  *(_OWORD *)(v16 + 328) = 0;
  v17 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 672) = v17;
  *(_QWORD *)(a1 + 680) = 8;
  *(_DWORD *)(a1 + 688) = 0;
  *v17 = 0;
  v17[1] = 0;
  v17[2] = 0;
  v17[3] = 0;
  v17[4] = 0;
  v17[5] = 0;
  v17[6] = 0;
  v17[7] = 0;
  v18 = *(_QWORD *)(a1 + 560);
  switch ( v5 )
  {
    case 0LL:
      if ( v14 == (void *)v18 || (v23 = *(_QWORD *)(a1 + 576), v23 > 5) )
      {
        if ( (unsigned __int64)"maxres" < v18 || v18 + *(_QWORD *)(a1 + 568) < (unsigned __int64)"maxres" )
        {
          *(_DWORD *)v18 = 1920491885;
          *(_WORD *)(v18 + 4) = 29541;
          goto LABEL_14;
        }
        goto LABEL_62;
      }
      v32 = 2 * v23;
      v33 = v32 + 1;
      if ( v32 <= 6 )
      {
        v32 = 6;
        v33 = 7;
      }
      v34 = operator new(v33);
      v35 = *(void **)(a1 + 560);
      *(_DWORD *)v34 = 1920491885;
      v22 = v34;
      *(_WORD *)(v34 + 4) = 29541;
      if ( v14 == v35 )
        goto LABEL_45;
      goto LABEL_44;
    case 1LL:
      if ( v14 == (void *)v18 || (v24 = *(_QWORD *)(a1 + 576), v24 > 8) )
      {
        if ( (unsigned __int64)"pd-maxres" >= v18 && v18 + *(_QWORD *)(a1 + 568) >= (unsigned __int64)"pd-maxres" )
        {
          std::string::_M_replace_cold();
        }
        else
        {
          *(_BYTE *)(v18 + 8) = 115;
          *(_QWORD *)v18 = 0x657278616D2D6470LL;
        }
        v25 = *(_QWORD *)(a1 + 560);
      }
      else
      {
        v40 = 2 * v24;
        v41 = v40 + 1;
        if ( v40 <= 9 )
        {
          v40 = 9;
          v41 = 10;
        }
        v42 = operator new(v41);
        v43 = *(void **)(a1 + 560);
        v25 = v42;
        *(_QWORD *)v42 = 0x657278616D2D6470LL;
        *(_BYTE *)(v42 + 8) = 115;
        if ( v14 != v43 )
          operator delete(v43, *(_QWORD *)(a1 + 576) + 1LL);
        *(_QWORD *)(a1 + 560) = v25;
        *(_QWORD *)(a1 + 576) = v40;
      }
      *(_QWORD *)(a1 + 568) = 9;
      *(_BYTE *)(v25 + 9) = 0;
      return;
    case 2LL:
      if ( v14 == (void *)v18 || (v26 = *(_QWORD *)(a1 + 576), v26 > 9) )
      {
        if ( (unsigned __int64)"maxres-bin" >= v18 && v18 + *(_QWORD *)(a1 + 568) >= (unsigned __int64)"maxres-bin" )
          std::string::_M_replace_cold();
        else
          qmemcpy((void *)v18, "maxres-bin", 10);
        v27 = *(_BYTE **)(a1 + 560);
      }
      else
      {
        v36 = 2 * v26;
        v37 = v36 + 1;
        if ( v36 <= 0xA )
        {
          v36 = 10;
          v37 = 11;
        }
        v38 = (_BYTE *)operator new(v37);
        v39 = *(void **)(a1 + 560);
        v27 = v38;
        qmemcpy(v38, "maxres-bin", 10);
        if ( v14 != v39 )
          operator delete(v39, *(_QWORD *)(a1 + 576) + 1LL);
        *(_QWORD *)(a1 + 560) = v27;
        *(_QWORD *)(a1 + 576) = v36;
      }
      *(_QWORD *)(a1 + 568) = 10;
      v27[10] = 0;
      return;
    case 3LL:
      if ( v14 == (void *)v18 || (v19 = *(_QWORD *)(a1 + 576), v19 > 2) )
      {
        if ( (unsigned __int64)"rc2" >= v18 && v18 + *(_QWORD *)(a1 + 568) >= (unsigned __int64)"rc2" )
        {
          std::string::_M_replace_cold();
        }
        else
        {
          *(_BYTE *)(v18 + 2) = 50;
          *(_WORD *)v18 = 25458;
        }
        v20 = *(_QWORD *)(a1 + 560);
      }
      else
      {
        v28 = 2 * v19;
        v29 = 5;
        if ( v28 != 4 )
        {
          v28 = 3;
          v29 = 4;
        }
        v30 = operator new(v29);
        v31 = *(void **)(a1 + 560);
        *(_BYTE *)(v30 + 2) = 50;
        v20 = v30;
        *(_WORD *)v30 = 25458;
        if ( v14 != v31 )
          operator delete(v31, *(_QWORD *)(a1 + 576) + 1LL);
        *(_QWORD *)(a1 + 560) = v20;
        *(_QWORD *)(a1 + 576) = v28;
      }
      *(_QWORD *)(a1 + 568) = 3;
      *(_BYTE *)(v20 + 3) = 0;
      return;
    case 4LL:
      if ( v14 == (void *)v18 || (v21 = *(_QWORD *)(a1 + 576), v21 > 5) )
      {
        if ( (unsigned __int64)"rc2bin" >= v18 && v18 + *(_QWORD *)(a1 + 568) >= (unsigned __int64)"rc2bin" )
        {
LABEL_62:
          std::string::_M_replace_cold();
        }
        else
        {
          *(_DWORD *)v18 = 1647469426;
          *(_WORD *)(v18 + 4) = 28265;
        }
LABEL_14:
        v22 = *(_QWORD *)(a1 + 560);
      }
      else
      {
        v32 = 2 * v21;
        v44 = 2 * v21 + 1;
        if ( 2 * v21 <= 6 )
        {
          v32 = 6;
          v44 = 7;
        }
        v45 = operator new(v44);
        v35 = *(void **)(a1 + 560);
        *(_DWORD *)v45 = 1647469426;
        v22 = v45;
        *(_WORD *)(v45 + 4) = 28265;
        if ( v14 != v35 )
LABEL_44:
          operator delete(v35, *(_QWORD *)(a1 + 576) + 1LL);
LABEL_45:
        *(_QWORD *)(a1 + 560) = v22;
        *(_QWORD *)(a1 + 576) = v32;
      }
      *(_QWORD *)(a1 + 568) = 6;
      *(_BYTE *)(v22 + 6) = 0;
      return;
    default:
      sub_1872CE0("");
      sub_1873130(114, 171);
  }
}

