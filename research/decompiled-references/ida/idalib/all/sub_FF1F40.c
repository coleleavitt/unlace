void __fastcall sub_FF1F40(__int64 a1, _BYTE *a2, signed __int64 a3, int a4, __int64 a5, char a6, char a7, int a8)
{
  void *v8; // rax
  char v13; // r9
  __int16 v14; // dx
  char v15; // dl
  char v16; // al
  char v17; // al
  char v18; // al
  char v19; // al
  char v20; // al
  __int64 *v21; // rsi
  __int64 v22[8]; // [rsp+18h] [rbp-40h] BYREF

  v8 = (void *)(a1 + 16);
  *(_QWORD *)a1 = a1 + 16;
  if ( &a2[a3] && !a2 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)a3 > 0xF )
  {
    if ( a3 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v8 = (void *)operator new(a3 + 1);
    *(_QWORD *)(a1 + 16) = a3;
    *(_QWORD *)a1 = v8;
LABEL_14:
    memcpy(v8, a2, a3);
    v8 = *(void **)a1;
    goto LABEL_6;
  }
  if ( a3 == 1 )
  {
    *(_BYTE *)(a1 + 16) = *a2;
    goto LABEL_6;
  }
  if ( a3 )
    goto LABEL_14;
LABEL_6:
  *(_QWORD *)(a1 + 8) = a3;
  *((_BYTE *)v8 + a3) = 0;
  *(_QWORD *)(a1 + 56) = a1 + 72;
  *(_QWORD *)(a1 + 128) = a1 + 144;
  *(_QWORD *)(a1 + 160) = a1 + 176;
  *(_QWORD *)(a1 + 192) = a1 + 208;
  *(_QWORD *)(a1 + 224) = a1 + 240;
  *(_QWORD *)(a1 + 296) = 0x1000000000LL;
  *(_DWORD *)(a1 + 32) = a4;
  *(_DWORD *)(a1 + 36) = 0;
  *(_QWORD *)(a1 + 40) = a5;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_BYTE *)(a1 + 72) = 0;
  *(_BYTE *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_BYTE *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  *(_BYTE *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  *(_BYTE *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_BYTE *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 272) = 0;
  *(_QWORD *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 304) = 0;
  *(_QWORD *)(a1 + 312) = 0;
  *(_QWORD *)(a1 + 320) = 0;
  v13 = *(_BYTE *)(a1 + 904);
  *(_QWORD *)(a1 + 336) = a1 + 352;
  *(_DWORD *)(a1 + 416) = a8;
  *(_QWORD *)(a1 + 448) = a1 + 464;
  *(_QWORD *)(a1 + 608) = a1 + 624;
  *(_QWORD *)(a1 + 616) = 0x100000000LL;
  *(_QWORD *)(a1 + 712) = 0x100000000LL;
  *(_BYTE *)(a1 + 904) = (32 * (a7 & 1)) | (16 * (a6 & 1)) | v13 & 0xCF;
  *(_QWORD *)(a1 + 800) = a1 + 816;
  v14 = *(_WORD *)(a1 + 904);
  *(_DWORD *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 344) = 0x200000000LL;
  *(_QWORD *)(a1 + 368) = 0;
  *(_WORD *)(a1 + 904) = v14 & 0x30 | 0x8004;
  *(_QWORD *)(a1 + 944) = a1 + 960;
  *(_QWORD *)(a1 + 376) = 0;
  *(_QWORD *)(a1 + 384) = 0;
  *(_QWORD *)(a1 + 392) = 0;
  *(_QWORD *)(a1 + 400) = 0;
  *(_DWORD *)(a1 + 408) = 0;
  *(_OWORD *)(a1 + 420) = 0;
  *(_QWORD *)(a1 + 436) = 0;
  *(_QWORD *)(a1 + 456) = 0x200000000LL;
  *(_QWORD *)(a1 + 704) = a1 + 720;
  *(_QWORD *)(a1 + 808) = 0x200000000LL;
  *(_QWORD *)(a1 + 896) = 0;
  *(_QWORD *)(a1 + 908) = 0;
  *(_QWORD *)(a1 + 920) = 0;
  *(_QWORD *)(a1 + 928) = 0;
  *(_DWORD *)(a1 + 936) = 0;
  *(_QWORD *)(a1 + 952) = 0x200000000LL;
  *(_DWORD *)(a1 + 992) = 0;
  *(_QWORD *)(a1 + 1000) = a1 + 1016;
  *(_QWORD *)(a1 + 1032) = a1 + 1048;
  *(_QWORD *)(a1 + 1064) = a1 + 1080;
  *(_QWORD *)(a1 + 1304) = a1 + 1320;
  *(_QWORD *)(a1 + 1336) = a1 + 1352;
  *(_QWORD *)(a1 + 1568) = a1 + 1584;
  *(_QWORD *)(a1 + 976) = 0;
  *(_DWORD *)(a1 + 984) = 0;
  *(_DWORD *)(a1 + 988) = 0;
  *(_QWORD *)(a1 + 1008) = 0x200000000LL;
  *(_QWORD *)(a1 + 1040) = 0x200000000LL;
  *(_QWORD *)(a1 + 1072) = 0x200000000LL;
  *(_QWORD *)(a1 + 1312) = 0x200000000LL;
  *(_QWORD *)(a1 + 1344) = 0x200000000LL;
  *(_QWORD *)(a1 + 1544) = 0;
  *(_QWORD *)(a1 + 1552) = 0;
  *(_DWORD *)(a1 + 1560) = 0;
  *(_QWORD *)(a1 + 1576) = 0x200000000LL;
  *(_QWORD *)(a1 + 1600) = a1 + 1616;
  *(_QWORD *)(a1 + 1608) = 0x200000000LL;
  *(_BYTE *)(a1 + 1696) = 0;
  *(_QWORD *)(a1 + 1704) = 0;
  *(_QWORD *)(a1 + 1712) = 0;
  *(_QWORD *)(a1 + 1720) = 0;
  *(_QWORD *)(a1 + 1728) = 0;
  *(_QWORD *)(a1 + 1736) = 0;
  *(_QWORD *)(a1 + 1744) = 0;
  *(_QWORD *)(a1 + 1752) = 0;
  *(_QWORD *)(a1 + 1760) = 0;
  *(_QWORD *)(a1 + 1768) = 0;
  if ( a5 )
  {
    v15 = *(_BYTE *)(a5 + 904);
    v16 = *(_BYTE *)(a1 + 904);
    v22[0] = a1;
    v17 = v15 & 4 | v16 & 0xFB;
    *(_BYTE *)(a1 + 904) = v17;
    v18 = *(_BYTE *)(a5 + 904) & 1 | v17 & 0xFE;
    *(_BYTE *)(a1 + 904) = v18;
    v19 = *(_BYTE *)(a5 + 904) & 0x40 | v18 & 0xBF;
    *(_BYTE *)(a1 + 904) = v19;
    *(_BYTE *)(a1 + 904) = *(_BYTE *)(a5 + 904) & 0x80 | v19 & 0x7F;
    v20 = *(_BYTE *)(a5 + 905) & 0x20 | *(_BYTE *)(a1 + 905) & 0xDF;
    *(_BYTE *)(a1 + 905) = v20;
    *(_BYTE *)(a1 + 905) = *(_BYTE *)(a5 + 905) & 0x40 | v20 & 0xBF;
    v21 = *(__int64 **)(a5 + 264);
    if ( v21 == *(__int64 **)(a5 + 272) )
    {
      sub_FF1DF0(a5 + 256, v21, v22);
    }
    else
    {
      *v21 = a1;
      *(_QWORD *)(a5 + 264) = v21 + 1;
    }
  }
}
