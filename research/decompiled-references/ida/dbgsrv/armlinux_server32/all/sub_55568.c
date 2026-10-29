/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_55568
// Address: 0x00055568

//----- (00055568) --------------------------------------------------------
int __fastcall sub_55568(int a1)
{
  char *v2; // r0
  int v3; // r5
  char *v4; // r7
  unsigned int v5; // r5
  char *v6; // r8
  char *v7; // r0
  void *v8; // r0
  int v9; // r0
  char *v10; // r5
  int v11; // r7
  int i; // r6
  char *v13; // r5
  void *v14; // r0
  void *v15; // r0

  *(_DWORD *)(a1 + 12) = 4;
  *(_DWORD *)a1 = &off_D2810;
  *(_DWORD *)(a1 + 60) = 8u;
  *(_DWORD *)(a1 + 4) = -1;
  *(_DWORD *)(a1 + 8) = -1;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 92) = 0;
  v2 = (char *)sub_808A4(0x20u);
  v3 = *(_DWORD *)(a1 + 60);
  v4 = v2;
  *(_DWORD *)(a1 + 56) = v2;
  v5 = (unsigned int)(v3 - 1) >> 1;
  v6 = &v2[4 * v5];
  v7 = (char *)sub_808A4(0x1E4u);
  *(_DWORD *)(a1 + 76) = v6;
  *(_DWORD *)(a1 + 80) = v7;
  *(_DWORD *)(a1 + 68) = v7;
  *(_DWORD *)(a1 + 84) = v7;
  *(_DWORD *)(a1 + 64) = v7;
  *(_DWORD *)(a1 + 92) = v6;
  *(_DWORD *)&v4[4 * v5] = v7;
  *(_DWORD *)(a1 + 72) = v7 + 484;
  *(_DWORD *)(a1 + 88) = v7 + 484;
  *(_DWORD *)(a1 + 96) = -1;
  *(_DWORD *)(a1 + 104) = -1;
  *(_DWORD *)(a1 + 156) = 0;
  *(_DWORD *)(a1 + 160) = -1;
  *(_DWORD *)(a1 + 140) = 24;
  *(_DWORD *)(a1 + 144) = 4;
  *(_DWORD *)(a1 + 100) = 0;
  *(_BYTE *)(a1 + 108) = 0;
  *(_DWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 116) = 0;
  *(_DWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 124) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 132) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 148) = 0;
  *(_DWORD *)(a1 + 152) = 0;
  *(_DWORD *)(a1 + 164) = 0;
  *(_DWORD *)(a1 + 168) = 0;
  *(_DWORD *)(a1 + 172) = 0;
  *(_DWORD *)(a1 + 180) = 0;
  *(_DWORD *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 188) = a1 + 180;
  *(_DWORD *)(a1 + 192) = a1 + 180;
  *(_DWORD *)(a1 + 196) = 0;
  *(_DWORD *)(a1 + 204) = 0;
  *(_DWORD *)(a1 + 208) = 0;
  *(_DWORD *)(a1 + 220) = 0;
  *(_DWORD *)(a1 + 224) = 0;
  *(_DWORD *)(a1 + 228) = 0;
  *(_DWORD *)(a1 + 232) = 0;
  *(_DWORD *)(a1 + 236) = 0;
  *(_DWORD *)(a1 + 240) = 0;
  *(_DWORD *)(a1 + 244) = 0;
  *(_DWORD *)(a1 + 248) = 0;
  *(_DWORD *)(a1 + 252) = 0;
  *(_DWORD *)(a1 + 256) = 0;
  *(_DWORD *)(a1 + 260) = 0;
  *(_DWORD *)(a1 + 268) = 0;
  *(_DWORD *)(a1 + 272) = 0;
  *(_DWORD *)(a1 + 284) = 0;
  *(_DWORD *)(a1 + 288) = 0;
  *(_DWORD *)(a1 + 292) = 0;
  *(_DWORD *)(a1 + 296) = 0;
  *(_DWORD *)(a1 + 300) = 0;
  *(_DWORD *)(a1 + 304) = 0;
  *(_DWORD *)(a1 + 308) = 0;
  *(_DWORD *)(a1 + 316) = 0;
  *(_DWORD *)(a1 + 320) = 0;
  *(_DWORD *)(a1 + 332) = 0;
  *(_DWORD *)(a1 + 212) = a1 + 204;
  *(_DWORD *)(a1 + 216) = a1 + 204;
  *(_DWORD *)(a1 + 276) = a1 + 268;
  *(_DWORD *)(a1 + 280) = a1 + 268;
  *(_DWORD *)(a1 + 324) = a1 + 316;
  *(_DWORD *)(a1 + 328) = a1 + 316;
  *(_DWORD *)(a1 + 336) = -1;
  *(_DWORD *)(a1 + 340) = 0;
  *(_DWORD *)(a1 + 396) = 0;
  *(_DWORD *)(a1 + 400) = -1;
  *(_DWORD *)(a1 + 404) = -1;
  *(_DWORD *)(a1 + 408) = -1;
  *(_DWORD *)(a1 + 448) = -1;
  *(_DWORD *)(a1 + 344) = 0;
  *(_DWORD *)(a1 + 348) = 0;
  *(_DWORD *)(a1 + 352) = 0;
  *(_DWORD *)(a1 + 356) = 0;
  *(_DWORD *)(a1 + 360) = 0;
  *(_DWORD *)(a1 + 364) = 0;
  *(_DWORD *)(a1 + 368) = 0;
  *(_DWORD *)(a1 + 372) = 0;
  *(_DWORD *)(a1 + 376) = 0;
  *(_DWORD *)(a1 + 380) = 0;
  *(_DWORD *)(a1 + 384) = 0;
  *(_DWORD *)(a1 + 388) = 0;
  *(_BYTE *)(a1 + 412) = 0;
  *(_DWORD *)(a1 + 424) = 0;
  *(_DWORD *)(a1 + 428) = 0;
  *(_DWORD *)(a1 + 432) = 0;
  *(_DWORD *)(a1 + 436) = 0;
  *(_DWORD *)(a1 + 440) = 0;
  *(_DWORD *)(a1 + 444) = 0;
  *(_BYTE *)(a1 + 452) = 0;
  *(_BYTE *)(a1 + 453) = 0;
  *(_DWORD *)(a1 + 392) = 1;
  *(_QWORD *)(a1 + 416) = 0;
  v8 = sub_78018(a1 + 148, nullptr, 0xAu, 1u);
  *(_DWORD *)(a1 + 148) = v8;
  *(_DWORD *)(a1 + 152) = 10;
  qmemcpy(v8, "UNDEFINED", 9);
  *(_BYTE *)(*(_DWORD *)(a1 + 148) + 9) = 0;
  v9 = sub_57164();
  if ( v9 > 7 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78C64(2777);
  }
  v10 = *(char **)(a1 + 164);
  *(_DWORD *)(a1 + 144) = v9;
  if ( v10 )
  {
    v11 = *(_DWORD *)(a1 + 168);
    if ( v11 )
    {
      for ( i = 0; i != v11; ++i )
      {
        v13 = &v10[32 * i];
        v14 = *((void **)v13 + 5);
        if ( v14 )
        {
          *((_DWORD *)v13 + 6) = 0;
          sub_77F70(v14);
        }
        v15 = *((void **)v13 + 1);
        if ( v15 )
        {
          *((_DWORD *)v13 + 2) = 0;
          sub_77F70(v15);
        }
        v10 = *(char **)(a1 + 164);
      }
    }
    *(_DWORD *)(a1 + 168) = 0;
    sub_77F70(v10);
    *(_DWORD *)(a1 + 164) = 0;
    *(_DWORD *)(a1 + 172) = 0;
  }
  return a1;
}
// D2810: using guessed type _UNKNOWN *off_D2810;
// D6C20: using guessed type char under_debugger;
