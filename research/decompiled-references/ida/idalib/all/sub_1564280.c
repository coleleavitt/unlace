const __m128i *__fastcall sub_1564280(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v8; // rax
  bool v9; // zf
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  _QWORD *v14; // r13
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // rdx
  _QWORD *v18; // rax
  bool v19; // cl
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rax
  __m128i v24; // xmm0
  const __m128i *result; // rax
  __m128i v26; // xmm1
  __int64 (__fastcall *v27)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v28; // rdx
  __int64 v29; // [rsp+8h] [rbp-50h] BYREF
  __m128i v30; // [rsp+10h] [rbp-48h] BYREF
  __int64 (__fastcall *v31)(_QWORD, _QWORD, _QWORD); // [rsp+20h] [rbp-38h]
  __int64 v32; // [rsp+28h] [rbp-30h]

  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)a1 = &off_2BB3D10;
  v8 = *(_QWORD *)(a3 + 248);
  v9 = *(_QWORD *)(a2 + 760) == 0;
  *(_QWORD *)(a1 + 96) = a3;
  *(_BYTE *)(a1 + 56) = !v9;
  v10 = a1 + 504;
  *(_QWORD *)(v10 - 456) = v8;
  *(_DWORD *)(v10 - 444) = 0;
  *(_QWORD *)(v10 - 440) = 0;
  *(_QWORD *)(v10 - 432) = 0;
  *(_QWORD *)(v10 - 416) = 0;
  v11 = *(_QWORD *)(a2 + 48);
  *(_BYTE *)(v10 - 384) = 0;
  *(_QWORD *)(v10 - 400) = v11;
  *(_QWORD *)(v10 - 392) = v11;
  *(_QWORD *)(v10 - 144) = 0;
  *(_BYTE *)(v10 - 136) = 0;
  sub_15DCD40(v10);
  *(_QWORD *)(a1 + 1872) = 0;
  *(_QWORD *)(a1 + 1888) = 0;
  *(_QWORD *)(a1 + 1896) = 0;
  *(_QWORD *)(a1 + 1904) = 0;
  *(_QWORD *)(a1 + 1912) = 0;
  *(_QWORD *)(a1 + 1920) = 0;
  *(_QWORD *)(a1 + 1928) = 0;
  *(_QWORD *)(a1 + 1936) = 0;
  *(_QWORD *)(a1 + 1944) = 0;
  *(_QWORD *)(a1 + 1880) = 8;
  v12 = operator new(0x40u);
  v13 = *(_QWORD *)(a1 + 1880);
  *(_QWORD *)(a1 + 1872) = v12;
  v14 = (_QWORD *)(v12 + 8 * ((unsigned __int64)(v13 - 1) >> 1));
  v15 = operator new(0x200u);
  *(_QWORD *)(a1 + 1912) = v14;
  v29 = v15;
  v16 = _mm_loadl_epi64((const __m128i *)&v29);
  v17 = v15 + 512;
  *v14 = v15;
  *(_QWORD *)(a1 + 1928) = v15;
  *(_QWORD *)(a1 + 1920) = v15;
  v18 = (_QWORD *)(a1 + 1968);
  *(_QWORD *)(a1 + 1904) = v17;
  *(_QWORD *)(a1 + 1936) = v17;
  *(_QWORD *)(a1 + 1944) = v14;
  *(__m128i *)(a1 + 1888) = _mm_unpacklo_epi64(v16, v16);
  *(_BYTE *)(a1 + 1952) = 1;
  for ( *(_QWORD *)(a1 + 1960) = 1; (_QWORD *)(a1 + 2032) != v18; v18 += 2 )
    *v18 = -4096;
  *(_BYTE *)(a1 + 2040) = 0;
  *(_WORD *)(a1 + 2064) = 0;
  *(_WORD *)(a1 + 2152) = 0;
  *(_QWORD *)(a1 + 2032) = 0;
  *(_BYTE *)(a1 + 2154) = 0;
  *(_DWORD *)(a1 + 2156) = 106;
  *(_QWORD *)(a1 + 2160) = 0;
  *(_QWORD *)(a1 + 2168) = 0;
  *(_QWORD *)(a1 + 2176) = 0;
  *(_QWORD *)(a1 + 2184) = 0;
  *(_QWORD *)(a1 + 2192) = 0;
  *(_QWORD *)(a1 + 2200) = 0;
  *(_QWORD *)(a1 + 2208) = 0;
  *(_QWORD *)(a1 + 2216) = 0;
  *(_QWORD *)(a1 + 2224) = 0;
  *(_QWORD *)(a1 + 2232) = 0;
  *(_QWORD *)(a1 + 2240) = 0;
  *(_QWORD *)(a1 + 2248) = 0;
  *(_QWORD *)(a1 + 2256) = 0;
  *(_QWORD *)(a1 + 2264) = 0;
  *(_QWORD *)(a1 + 2272) = 0;
  *(_QWORD *)(a1 + 2280) = 0;
  *(_QWORD *)(a1 + 2288) = 0;
  *(_QWORD *)(a1 + 2296) = 0;
  *(_QWORD *)(a1 + 2304) = 0;
  *(_QWORD *)(a1 + 2312) = 0;
  *(_QWORD *)(a1 + 2320) = 0;
  *(_QWORD *)(a1 + 2328) = 0;
  *(_QWORD *)(a1 + 2336) = 0;
  *(_QWORD *)(a1 + 2344) = 0;
  *(_QWORD *)(a1 + 2352) = 0;
  *(_QWORD *)(a1 + 2360) = 0;
  *(_QWORD *)(a1 + 2368) = 0;
  *(_QWORD *)(a1 + 2552) = a1 + 2568;
  *(_QWORD *)(a1 + 2560) = 0x1000000000LL;
  *(_QWORD *)(a1 + 2704) = a1 + 2720;
  *(_QWORD *)(a1 + 2784) = a1 + 2800;
  *(_QWORD *)(a1 + 2712) = 0x800000000LL;
  *(_QWORD *)(a1 + 2792) = 0x800000000LL;
  *(_QWORD *)(a1 + 2376) = 0;
  *(_QWORD *)(a1 + 2384) = 0;
  *(_QWORD *)(a1 + 2392) = 0;
  *(_QWORD *)(a1 + 2400) = 0;
  *(_QWORD *)(a1 + 2408) = 0;
  *(_QWORD *)(a1 + 2416) = 0;
  *(_QWORD *)(a1 + 2424) = 0;
  *(_QWORD *)(a1 + 2432) = 0;
  *(_QWORD *)(a1 + 2440) = 0;
  *(_QWORD *)(a1 + 2448) = 0;
  *(_QWORD *)(a1 + 2456) = 0;
  *(_QWORD *)(a1 + 2464) = 0;
  *(_QWORD *)(a1 + 2472) = 0;
  *(_QWORD *)(a1 + 2480) = 0;
  *(_QWORD *)(a1 + 2488) = 0;
  *(_QWORD *)(a1 + 2496) = 0;
  *(_QWORD *)(a1 + 2504) = 0;
  *(_QWORD *)(a1 + 2512) = 0;
  *(_QWORD *)(a1 + 2520) = 0;
  *(_QWORD *)(a1 + 2528) = 0;
  *(_QWORD *)(a1 + 2536) = 0;
  *(_QWORD *)(a1 + 2544) = 0;
  *(_BYTE *)(a1 + 2696) = 0;
  v19 = *(_QWORD *)(a2 + 760) != 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_BYTE *)(a1 + 369) = a4 | v19;
  *(_QWORD *)(a1 + 24) = 0;
  v20 = *(_QWORD *)(a1 + 96);
  *(_DWORD *)(a1 + 32) = 1;
  *(_QWORD *)(v20 + 608) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 2072) = 0;
  sub_1524AF0((__int64 *)a1);
  v21 = (_QWORD *)operator new(0x10u);
  v22 = *(_QWORD *)(a1 + 360);
  *v21 = &off_2BB3CE8;
  v21[1] = a3;
  *(_QWORD *)(a1 + 360) = v21;
  if ( v22 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
    v21 = *(_QWORD **)(a1 + 360);
  }
  sub_145EC20(*(_QWORD *)(a1 + 8), (__int64)v21);
  v23 = *(_QWORD *)(a1 + 8);
  v30.m128i_i64[0] = a1;
  v24 = _mm_load_si128(&v30);
  *(_QWORD *)(v23 + 752) = a1;
  result = *(const __m128i **)(a1 + 96);
  v26 = _mm_loadu_si128(result + 29);
  v27 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))result[30].m128i_i64[0];
  result[30].m128i_i64[0] = (__int64)sub_1563960;
  v28 = result[30].m128i_i64[1];
  result[29] = v24;
  v30 = v26;
  v31 = v27;
  v32 = v28;
  result[30].m128i_i64[1] = (__int64)sub_15639E0;
  if ( v27 )
    return (const __m128i *)v27(&v30, &v30, 3);
  return result;
}
