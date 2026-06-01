/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45F050
// Address: 0x000000000045F050

//----- (000000000045F050) ----------------------------------------------------
void __fastcall sub_45F050(__int64 a1)
{
  __int64 v2; // x20
  _QWORD *v3; // x24
  _QWORD *v4; // x25
  _QWORD *v5; // x22
  char *v6; // x23
  char *v7; // x26
  char *v8; // x0
  void *v9; // x0
  int v10; // w0
  char *v11; // x20
  __int64 v12; // x25
  __int64 i; // x21
  char *v14; // x20
  void *v15; // x0
  void *v16; // x0

  *(_QWORD *)a1 = off_51DCD8;
  v2 = a1 + 8;
  *(_QWORD *)(a1 + 8) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 16) = -1;
  *(_QWORD *)(a1 + 24) = -1;
  *(_DWORD *)(a1 + 32) = 8;
  v3 = (_QWORD *)(a1 + 136);
  *(_BYTE *)(a1 + 36) = 1;
  v4 = (_QWORD *)(a1 + 168);
  *(_DWORD *)(a1 + 40) = 0;
  v5 = (_QWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 128) = 8;
  v6 = (char *)sub_49E050(0x40u);
  *(_QWORD *)(a1 + 120) = v6;
  v7 = &v6[8 * ((unsigned __int64)(v5[1] - 1LL) >> 1)];
  v8 = (char *)sub_49E050(0x1F8u);
  v3[3] = v7;
  v3[1] = v8;
  v3[2] = v8 + 504;
  v4[1] = v8;
  v4[2] = v8 + 504;
  v4[3] = v7;
  v5[2] = v8;
  v5[6] = v8;
  *(_QWORD *)(a1 + 200) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 208) = -1;
  *(_BYTE *)(a1 + 216) = 0;
  *(_DWORD *)(a1 + 220) = 0;
  *(_QWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 272) = 0x800000028LL;
  *(_QWORD *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 296) = 0;
  *(_DWORD *)(a1 + 304) = -1;
  *(_QWORD *)(a1 + 312) = 0;
  *(_QWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 328) = 0;
  *(_DWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 352) = 0;
  *(_QWORD *)(a1 + 360) = a1 + 344;
  *(_QWORD *)(a1 + 368) = a1 + 344;
  *(_QWORD *)(a1 + 376) = 0;
  *(_DWORD *)(a1 + 392) = 0;
  *(_QWORD *)v7 = v8;
  *(_QWORD *)(a1 + 400) = 0;
  *(_QWORD *)(a1 + 408) = a1 + 392;
  *(_QWORD *)(a1 + 416) = a1 + 392;
  *(_QWORD *)(a1 + 424) = 0;
  *(_QWORD *)(a1 + 432) = 0;
  *(_QWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 448) = 0;
  *(_QWORD *)(a1 + 456) = 0;
  *(_QWORD *)(a1 + 464) = 0;
  *(_QWORD *)(a1 + 472) = 0;
  *(_QWORD *)(a1 + 480) = 0;
  *(_QWORD *)(a1 + 488) = 0;
  *(_QWORD *)(a1 + 496) = 0;
  *(_QWORD *)(a1 + 504) = 0;
  *(_DWORD *)(a1 + 520) = 0;
  *(_QWORD *)(a1 + 528) = 0;
  *(_QWORD *)(a1 + 536) = a1 + 520;
  *(_QWORD *)(a1 + 544) = a1 + 520;
  *(_QWORD *)(a1 + 552) = 0;
  *(_QWORD *)(a1 + 560) = 0;
  *(_QWORD *)(a1 + 568) = 0;
  *(_QWORD *)(a1 + 576) = 0;
  *(_QWORD *)(a1 + 584) = 0;
  *(_QWORD *)(a1 + 592) = 0;
  *(_QWORD *)(a1 + 600) = 0;
  *(_DWORD *)(a1 + 616) = 0;
  *(_QWORD *)(a1 + 624) = 0;
  *(_QWORD *)(a1 + 632) = a1 + 616;
  *(_QWORD *)(a1 + 640) = a1 + 616;
  *(_QWORD *)(a1 + 648) = 0;
  *(_DWORD *)(a1 + 656) = -1;
  *(_QWORD *)(a1 + 664) = 0;
  *(_QWORD *)(a1 + 672) = 0;
  *(_QWORD *)(a1 + 680) = 0;
  *(_QWORD *)(a1 + 688) = 0;
  *(_QWORD *)(a1 + 696) = 0;
  *(_QWORD *)(a1 + 704) = 0;
  *(_QWORD *)(a1 + 712) = 0;
  *(_QWORD *)(a1 + 720) = 0;
  *(_QWORD *)(a1 + 728) = 0;
  *(_QWORD *)(a1 + 736) = 0;
  *(_QWORD *)(a1 + 744) = 0;
  *(_QWORD *)(a1 + 752) = 0;
  *(_QWORD *)(a1 + 760) = 0;
  *(_DWORD *)(a1 + 768) = 1;
  *(_QWORD *)(a1 + 776) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 784) = -1;
  *(_BYTE *)(a1 + 792) = 0;
  *(_BYTE *)(a1 + 860) = 0;
  *(_BYTE *)(a1 + 861) = 0;
  *(_QWORD *)(a1 + 800) = 0;
  *(_QWORD *)(a1 + 808) = 0;
  *(_QWORD *)(a1 + 816) = 0;
  *(_QWORD *)(a1 + 824) = 0;
  *(_QWORD *)(a1 + 832) = 0;
  *(_QWORD *)(a1 + 840) = 0;
  *(_QWORD *)(a1 + 848) = 0;
  *(_DWORD *)(a1 + 856) = -1;
  v9 = sub_491288(a1 + 280, nullptr, 0xAu, 1u);
  *(_QWORD *)(a1 + 280) = v9;
  *(_QWORD *)(a1 + 288) = 10;
  qmemcpy(v9, "UNDEFINED", 9);
  *(_BYTE *)(*(_QWORD *)(a1 + 280) + 9LL) = 0;
  v10 = sub_461A10();
  if ( *(_BYTE *)(v2 + 28) )
  {
    if ( v10 == 8 )
    {
      *(_QWORD *)(v2 + 16) = *(_QWORD *)(v2 + 8);
      *(_DWORD *)(v2 + 24) = 8;
    }
    else
    {
      *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 8);
      *(_DWORD *)(v2 + 24) = 4;
    }
  }
  v11 = *(char **)(a1 + 312);
  *(_DWORD *)(a1 + 276) = v10;
  if ( v11 )
  {
    v12 = *(_QWORD *)(a1 + 320);
    if ( v12 )
    {
      for ( i = 0; i != v12; ++i )
      {
        v14 = &v11[64 * i];
        v15 = *((void **)v14 + 5);
        if ( v15 )
        {
          *((_QWORD *)v14 + 6) = 0;
          j__free(v15);
        }
        v16 = *((void **)v14 + 1);
        if ( v16 )
        {
          *((_QWORD *)v14 + 2) = 0;
          j__free(v16);
        }
        v11 = *(char **)(a1 + 312);
      }
    }
    *(_QWORD *)(a1 + 320) = 0;
    j__free(v11);
    *(_QWORD *)(a1 + 312) = 0;
    *(_QWORD *)(a1 + 328) = 0;
  }
}
// 51DCD8: using guessed type __int64 (__fastcall *off_51DCD8[4])();
