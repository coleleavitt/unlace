/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140040500
// Address: 0x0000000140040500

//----- (0000000140040500) ----------------------------------------------------
__int64 __fastcall sub_140040500(__int64 a1)
{
  __int64 v2; // rsi
  _QWORD *v3; // r14
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  int v10; // eax
  int v11; // ecx
  __int64 v12; // rbp
  __int64 v13; // rsi
  __int64 v14; // rbx
  void *v15; // rcx
  void *v16; // rcx

  *(_QWORD *)a1 = off_1400929E8;
  v2 = a1 + 8;
  *(_QWORD *)(a1 + 8) = 0xFFFFFFFFLL;
  v3 = (_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = -1;
  *(_QWORD *)(a1 + 24) = -1;
  *(_DWORD *)(a1 + 32) = 8;
  *(_BYTE *)(a1 + 36) = 1;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  v4 = (_QWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  v5 = operator new(0x10u);
  v5[1] = 0;
  *v4 = v5;
  *v5 = v4;
  *(_DWORD *)(a1 + 160) = -1;
  *(_DWORD *)(a1 + 164) = 0;
  *(_QWORD *)(a1 + 168) = -1;
  *(_BYTE *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 180) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 216) = 0;
  *(_DWORD *)(a1 + 232) = 40;
  *(_DWORD *)(a1 + 236) = 8;
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  *(_DWORD *)(a1 + 264) = -1;
  *(_QWORD *)(a1 + 272) = 0;
  *(_QWORD *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 304) = 0;
  v6 = operator new(0x40u);
  *v6 = v6;
  v6[1] = v6;
  v6[2] = v6;
  *((_WORD *)v6 + 12) = 257;
  *(_QWORD *)(a1 + 296) = v6;
  *(_QWORD *)(a1 + 312) = 0;
  *(_QWORD *)(a1 + 320) = 0;
  v7 = operator new(0x1D8u);
  *v7 = v7;
  v7[1] = v7;
  v7[2] = v7;
  *((_WORD *)v7 + 12) = 257;
  *(_QWORD *)(a1 + 312) = v7;
  *(_QWORD *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 336) = 0;
  *(_QWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 352) = 0;
  *(_QWORD *)(a1 + 360) = 0;
  *(_QWORD *)(a1 + 368) = 0;
  *(_QWORD *)(a1 + 376) = 0;
  *(_QWORD *)(a1 + 384) = 0;
  *(_QWORD *)(a1 + 392) = 0;
  *(_QWORD *)(a1 + 400) = 0;
  *(_QWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 416) = 0;
  v8 = operator new(0x40u);
  *v8 = v8;
  v8[1] = v8;
  v8[2] = v8;
  *((_WORD *)v8 + 12) = 257;
  *(_QWORD *)(a1 + 408) = v8;
  *(_QWORD *)(a1 + 424) = 0;
  *(_QWORD *)(a1 + 432) = 0;
  *(_QWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 448) = 0;
  *(_QWORD *)(a1 + 456) = 0;
  *(_QWORD *)(a1 + 464) = 0;
  *(_QWORD *)(a1 + 472) = 0;
  *(_QWORD *)(a1 + 480) = 0;
  v9 = operator new(0x50u);
  *v9 = v9;
  v9[1] = v9;
  v9[2] = v9;
  *((_WORD *)v9 + 12) = 257;
  *(_QWORD *)(a1 + 472) = v9;
  *(_DWORD *)(a1 + 488) = -1;
  *(_QWORD *)(a1 + 496) = 0;
  *(_QWORD *)(a1 + 504) = 0;
  *(_QWORD *)(a1 + 512) = 0;
  *(_QWORD *)(a1 + 520) = 0;
  *(_QWORD *)(a1 + 528) = 0;
  *(_QWORD *)(a1 + 536) = 0;
  *(_QWORD *)(a1 + 544) = 0;
  *(_QWORD *)(a1 + 552) = 0;
  *(_QWORD *)(a1 + 560) = 0;
  *(_QWORD *)(a1 + 568) = 0;
  *(_QWORD *)(a1 + 576) = 0;
  *(_QWORD *)(a1 + 584) = 0;
  *(_QWORD *)(a1 + 592) = 0;
  *(_DWORD *)(a1 + 600) = 1;
  *(_DWORD *)(a1 + 608) = 0;
  *(_QWORD *)(a1 + 612) = -1;
  *(_DWORD *)(a1 + 620) = -1;
  *(_BYTE *)(a1 + 624) = 0;
  *(_QWORD *)(a1 + 632) = 0;
  *(_QWORD *)(a1 + 640) = 0;
  *(_QWORD *)(a1 + 648) = 0;
  *(_QWORD *)(a1 + 656) = 0;
  *(_QWORD *)(a1 + 664) = 0;
  *(_QWORD *)(a1 + 672) = 0;
  *(_QWORD *)(a1 + 680) = 0;
  *(_DWORD *)(a1 + 688) = -1;
  *(_WORD *)(a1 + 692) = 0;
  sub_140001810(a1 + 240, "UNDEFINED", 9u);
  v10 = sub_140040160();
  if ( *(_BYTE *)(v2 + 28) )
  {
    if ( v10 != 8 )
      v3 = (_QWORD *)v2;
    *(_QWORD *)(v2 + 16) = *v3;
    v11 = 4;
    if ( v10 == 8 )
      v11 = 8;
    *(_DWORD *)(v2 + 24) = v11;
  }
  *(_DWORD *)(a1 + 236) = v10;
  if ( *(_QWORD *)(a1 + 272) )
  {
    v12 = *(_QWORD *)(a1 + 280);
    if ( v12 )
    {
      v13 = 0;
      do
      {
        v14 = *(_QWORD *)(a1 + 272);
        v15 = *(void **)(v13 + v14 + 40);
        if ( v15 )
        {
          *(_QWORD *)(v13 + v14 + 48) = 0;
          j_free(v15);
          *(_QWORD *)(v13 + v14 + 40) = 0;
          *(_QWORD *)(v13 + v14 + 56) = 0;
        }
        v16 = *(void **)(v13 + v14 + 8);
        if ( v16 )
        {
          *(_QWORD *)(v13 + v14 + 16) = 0;
          j_free(v16);
          *(_QWORD *)(v13 + v14 + 8) = 0;
          *(_QWORD *)(v13 + v14 + 24) = 0;
        }
        v13 += 64;
        --v12;
      }
      while ( v12 );
    }
    *(_QWORD *)(a1 + 280) = 0;
    j_free(*(void **)(a1 + 272));
    *(_QWORD *)(a1 + 272) = 0;
    *(_QWORD *)(a1 + 288) = 0;
  }
  return a1;
}
// 1400929E8: using guessed type __int64 (__fastcall *off_1400929E8[4])();
