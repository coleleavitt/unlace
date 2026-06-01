__int64 __fastcall sub_15F2CA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int16 a6)
{
  __int16 v6; // r15
  __int64 v10; // rax
  __int64 v11; // r13
  __int16 v12; // r12
  __int64 result; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rdx
  _QWORD *v16; // rcx
  __m128 v17; // xmm0
  char v18; // dl
  __m128 v19; // xmm0
  unsigned __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // [rsp+8h] [rbp-50h] BYREF
  __int64 v25; // [rsp+10h] [rbp-48h] BYREF
  __int64 v26; // [rsp+18h] [rbp-40h]

  v6 = a5;
  v10 = *(unsigned int *)(a3 + 76);
  v11 = *(_QWORD *)(a1 + 264);
  v25 = a4;
  v24 = *(_QWORD *)(a3 + 8 * v10 + 88);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 232) + 64LL) && a5 == 2 )
  {
    v23 = *(_QWORD *)(a1 + 760);
    v26 = a2;
    v12 = sub_1AF2DE0(v23);
  }
  else
  {
    v12 = 0;
  }
  v26 = a2;
  result = operator new(0x620u);
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = 2;
  *(_QWORD *)result = &off_2BC63E0;
  v14 = *(_QWORD *)(result + 8);
  *(_DWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 40) = v11;
  *(_QWORD *)(result + 8) = (unsigned int)v14 & 0xFFEC0000 | 0x20000LL;
  *(_DWORD *)(result + 48) = *(_DWORD *)(v11 + 196);
  LODWORD(v14) = *(_DWORD *)(v11 + 200);
  *(_QWORD *)(result + 64) = 0x800000000LL;
  *(_DWORD *)(result + 52) = v14;
  *(_QWORD *)(result + 56) = result + 72;
  *(_QWORD *)(result + 136) = result + 152;
  v15 = (_QWORD *)(result + 200);
  *(_QWORD *)(result + 144) = 0x400000000LL;
  *(_QWORD *)(result + 184) = 0;
  for ( *(_QWORD *)(result + 192) = 1; (_QWORD *)(result + 264) != v15; v15 += 2 )
    *v15 = -4096;
  *(_QWORD *)(result + 416) = 1;
  *(_QWORD *)(result + 360) = result + 376;
  *(_QWORD *)(result + 408) = result + 432;
  *(_QWORD *)(result + 448) = result + 464;
  *(_QWORD *)(result + 624) = result + 648;
  *(_QWORD *)(result + 264) = result + 280;
  *(_QWORD *)(result + 712) = result + 728;
  v16 = (_QWORD *)(result + 768);
  *(_QWORD *)(result + 272) = 0x400000000LL;
  *(_QWORD *)(result + 368) = 0x400000000LL;
  *(_QWORD *)(result + 456) = 0x400000000LL;
  *(_QWORD *)(result + 720) = 0x400000000LL;
  *(_OWORD *)(result + 344) = 0;
  *(_DWORD *)(result + 424) = 0;
  *(_BYTE *)(result + 428) = 1;
  *(_QWORD *)(result + 440) = 0;
  *(_QWORD *)(result + 632) = 8;
  *(_DWORD *)(result + 640) = 0;
  *(_BYTE *)(result + 644) = 1;
  for ( *(_QWORD *)(result + 760) = 1; (_QWORD *)(result + 1280) != v16; *(v16 - 7) = 0 )
  {
    *v16 = 0;
    v16 += 8;
  }
  v26 = a3;
  *(_QWORD *)(result + 1320) = result + 1336;
  *(_QWORD *)(result + 1328) = 0x400000000LL;
  v17 = _mm_loadh_ps((const double *)&v25);
  *(_QWORD *)(result + 1488) = 0x400000000LL;
  *(__m128 *)(result + 1528) = v17;
  v25 = a2;
  *(_QWORD *)result = &off_2BC6420;
  v18 = *(_BYTE *)(result + 8);
  *(_WORD *)(result + 1464) = 0;
  v19 = _mm_loadh_ps((const double *)&v24);
  v20 = *(unsigned int *)(a1 + 44);
  *(_QWORD *)(result + 1472) = 0;
  *(_QWORD *)(result + 1480) = result + 1496;
  v21 = *(unsigned int *)(a1 + 40);
  *(_BYTE *)(result + 8) = v18 & 0xF8 | 3;
  v22 = *(_QWORD *)(a1 + 248);
  *(_DWORD *)(result + 1280) = 4;
  *(_QWORD *)(result + 1288) = 0;
  *(_QWORD *)(result + 1296) = 0;
  *(_DWORD *)(result + 1304) = 0;
  *(_DWORD *)(result + 1312) = 0;
  *(__m128 *)(result + 1544) = v19;
  *(_WORD *)(result + 1560) = v6;
  *(_WORD *)(result + 1562) = v12;
  *(_WORD *)(result + 1564) = a6;
  *(_QWORD *)(result + 1472) = *(_QWORD *)(v22 + 18632);
  if ( v21 + 1 > v20 )
  {
    v24 = result;
    sub_2237220(a1 + 32, a1 + 48, v21 + 1, 8);
    v21 = *(unsigned int *)(a1 + 40);
    result = v24;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v21) = result;
  ++*(_DWORD *)(a1 + 40);
  ++*(_DWORD *)(a1 + 84);
  return result;
}
