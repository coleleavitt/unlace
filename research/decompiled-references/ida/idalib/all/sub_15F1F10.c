__int64 __fastcall sub_15F1F10(__int64 a1)
{
  __int64 v1; // rbp
  __int64 result; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rdx
  _QWORD *v5; // rdx
  unsigned __int64 v6; // rsi
  char v7; // dl
  __int64 v8; // rcx
  __int64 v9; // [rsp+8h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 264);
  result = operator new(0x7B0u);
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = 2;
  *(_QWORD *)result = &off_2BC63E0;
  v3 = *(_QWORD *)(result + 8);
  *(_DWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 40) = v1;
  *(_QWORD *)(result + 8) = (unsigned int)v3 & 0xFFEC0000 | 0x20000LL;
  *(_DWORD *)(result + 48) = *(_DWORD *)(v1 + 196);
  LODWORD(v3) = *(_DWORD *)(v1 + 200);
  *(_QWORD *)(result + 144) = 0x400000000LL;
  *(_DWORD *)(result + 52) = v3;
  *(_QWORD *)(result + 56) = result + 72;
  *(_QWORD *)(result + 136) = result + 152;
  v4 = (_QWORD *)(result + 200);
  *(_QWORD *)(result + 64) = 0x800000000LL;
  *(_QWORD *)(result + 184) = 0;
  for ( *(_QWORD *)(result + 192) = 1; (_QWORD *)(result + 264) != v4; v4 += 2 )
    *v4 = -4096;
  *(_QWORD *)(result + 416) = 1;
  *(_QWORD *)(result + 360) = result + 376;
  *(_QWORD *)(result + 408) = result + 432;
  *(_QWORD *)(result + 264) = result + 280;
  *(_QWORD *)(result + 448) = result + 464;
  *(_QWORD *)(result + 272) = 0x400000000LL;
  *(_QWORD *)(result + 368) = 0x400000000LL;
  *(_QWORD *)(result + 456) = 0x400000000LL;
  *(_QWORD *)(result + 624) = result + 648;
  *(_QWORD *)(result + 720) = 0x400000000LL;
  v5 = (_QWORD *)(result + 768);
  *(_QWORD *)(result + 712) = result + 728;
  *(_OWORD *)(result + 344) = 0;
  *(_DWORD *)(result + 424) = 0;
  *(_BYTE *)(result + 428) = 1;
  *(_QWORD *)(result + 440) = 0;
  *(_QWORD *)(result + 632) = 8;
  *(_DWORD *)(result + 640) = 0;
  *(_BYTE *)(result + 644) = 1;
  for ( *(_QWORD *)(result + 760) = 1; (_QWORD *)(result + 1280) != v5; *(v5 - 7) = 0 )
  {
    *v5 = 0;
    v5 += 8;
  }
  *(_DWORD *)(result + 1280) = 0;
  *(_WORD *)(result + 1464) = 0;
  *(_QWORD *)(result + 1480) = result + 1496;
  *(_QWORD *)(result + 1536) = result + 1552;
  *(_QWORD *)(result + 1320) = result + 1336;
  *(_OWORD *)(result + 1584) = 0;
  *(_QWORD *)result = &off_2BC6440;
  *(_QWORD *)(result + 1664) = result + 1680;
  *(_QWORD *)(result + 1328) = 0x400000000LL;
  *(_QWORD *)(result + 1488) = 0x400000000LL;
  *(_QWORD *)(result + 1544) = 0x400000000LL;
  *(_QWORD *)(result + 1672) = 0x400000000LL;
  *(_QWORD *)(result + 1712) = result + 1736;
  *(_QWORD *)(result + 1288) = 0;
  *(_QWORD *)(result + 1296) = 0;
  *(_DWORD *)(result + 1304) = 0;
  *(_DWORD *)(result + 1312) = 0;
  *(_QWORD *)(result + 1472) = 0;
  *(_QWORD *)(result + 1528) = 0;
  *(_BYTE *)(result + 1600) = 1;
  *(_QWORD *)(result + 1608) = 0;
  *(_OWORD *)(result + 1616) = 0;
  *(_QWORD *)(result + 1632) = 1;
  *(_DWORD *)(result + 1640) = 0;
  *(_QWORD *)(result + 1648) = 0;
  *(_QWORD *)(result + 1656) = 0;
  *(_QWORD *)(result + 1720) = 8;
  *(_DWORD *)(result + 1728) = 0;
  *(_BYTE *)(result + 1732) = 1;
  *(_QWORD *)(result + 1800) = 0;
  *(_QWORD *)(result + 1808) = 0;
  *(_DWORD *)(result + 1816) = 0;
  v6 = *(unsigned int *)(a1 + 44);
  *(_QWORD *)(result + 1832) = 0x400000000LL;
  *(_QWORD *)(result + 1912) = result + 1936;
  v7 = *(_BYTE *)(result + 8);
  *(_QWORD *)(result + 1824) = result + 1840;
  v8 = *(unsigned int *)(a1 + 40);
  *(_DWORD *)(result + 1904) = 0;
  *(_BYTE *)(result + 1932) = 1;
  *(_BYTE *)(result + 8) = v7 & 0xF8 | 2;
  *(_QWORD *)(result + 1920) = 4;
  *(_DWORD *)(result + 1928) = 0;
  if ( v8 + 1 > v6 )
  {
    v9 = result;
    sub_2237220(a1 + 32, a1 + 48, v8 + 1, 8);
    v8 = *(unsigned int *)(a1 + 40);
    result = v9;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v8) = result;
  ++*(_DWORD *)(a1 + 40);
  ++*(_DWORD *)(a1 + 84);
  return result;
}
