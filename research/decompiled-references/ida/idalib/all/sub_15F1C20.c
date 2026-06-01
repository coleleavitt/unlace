__int64 __fastcall sub_15F1C20(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  char v9; // dl
  __m128 v10; // xmm0
  __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  __int64 v13; // [rsp+0h] [rbp-28h] BYREF
  __int64 v14; // [rsp+8h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 264);
  v13 = a2;
  v14 = a3;
  result = operator new(0x610u);
  v5 = v14;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = 2;
  *(_QWORD *)result = &off_2BC63E0;
  v6 = *(_QWORD *)(result + 8);
  *(_DWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 40) = v3;
  *(_QWORD *)(result + 8) = (unsigned int)v6 & 0xFFEC0000 | 0x20000LL;
  *(_DWORD *)(result + 48) = *(_DWORD *)(v3 + 196);
  LODWORD(v6) = *(_DWORD *)(v3 + 200);
  *(_QWORD *)(result + 64) = 0x800000000LL;
  *(_DWORD *)(result + 52) = v6;
  *(_QWORD *)(result + 56) = result + 72;
  *(_QWORD *)(result + 136) = result + 152;
  v7 = (_QWORD *)(result + 200);
  *(_QWORD *)(result + 144) = 0x400000000LL;
  *(_QWORD *)(result + 184) = 0;
  for ( *(_QWORD *)(result + 192) = 1; (_QWORD *)(result + 264) != v7; v7 += 2 )
    *v7 = -4096;
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
  v8 = (_QWORD *)(result + 768);
  *(_QWORD *)(result + 712) = result + 728;
  *(_OWORD *)(result + 344) = 0;
  *(_DWORD *)(result + 424) = 0;
  *(_BYTE *)(result + 428) = 1;
  *(_QWORD *)(result + 440) = 0;
  *(_QWORD *)(result + 632) = 8;
  *(_DWORD *)(result + 640) = 0;
  *(_BYTE *)(result + 644) = 1;
  for ( *(_QWORD *)(result + 760) = 1; (_QWORD *)(result + 1280) != v8; *(v8 - 7) = 0 )
  {
    *v8 = 0;
    v8 += 8;
  }
  v14 = v5;
  v9 = *(_BYTE *)(result + 8);
  *(_QWORD *)(result + 1320) = result + 1336;
  *(_QWORD *)(result + 1328) = 0x400000000LL;
  *(_QWORD *)(result + 1488) = 0x400000000LL;
  v10 = _mm_loadh_ps((const double *)&v13);
  *(_WORD *)(result + 1464) = 0;
  *(_BYTE *)(result + 8) = v9 & 0xF8 | 1;
  *(_QWORD *)result = &off_2BC6400;
  v11 = *(unsigned int *)(a1 + 40);
  *(_QWORD *)(result + 1480) = result + 1496;
  v12 = *(unsigned int *)(a1 + 44);
  *(_DWORD *)(result + 1280) = 3;
  *(_QWORD *)(result + 1288) = 0;
  *(_QWORD *)(result + 1296) = 0;
  *(_DWORD *)(result + 1304) = 0;
  *(_DWORD *)(result + 1312) = 0;
  *(_QWORD *)(result + 1472) = 0;
  *(__m128 *)(result + 1528) = v10;
  *(_QWORD *)(result + 1544) = 0;
  if ( v11 + 1 > v12 )
  {
    v13 = result;
    sub_2237220(a1 + 32, a1 + 48, v11 + 1, 8);
    v11 = *(unsigned int *)(a1 + 40);
    result = v13;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v11) = result;
  ++*(_DWORD *)(a1 + 40);
  ++*(_DWORD *)(a1 + 84);
  return result;
}
