__int64 __fastcall sub_2100AA0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        __int128 a9)
{
  __m128i *v13; // rdi
  __m128i v14; // xmm3
  _BYTE *v15; // rsi
  __int64 v16; // rdx
  __m128i v17; // xmm0
  __m128 v18; // xmm1
  int v19; // eax
  __m128i si128; // xmm1
  _BYTE *v21; // r13
  __m128i v22; // xmm1
  __m128i v23; // xmm1
  __m128i v24; // xmm2
  __m128i v25; // xmm0
  _BYTE *v26; // rsi
  __int64 v27; // rdx
  _BYTE *v28; // r15
  size_t v29; // r12
  size_t v30; // rsi
  __int64 v31; // rax
  _QWORD *v32; // rdx
  const char *(*v33)(); // rax
  size_t v34; // rax
  char *v35; // rsi
  __int64 result; // rax
  __int64 v37; // kr00_8
  __int64 v38; // rax
  _BYTE *v39; // rdi
  size_t v40; // rax
  size_t v41; // rax
  size_t v42; // rdx
  __m128i v43; // [rsp+0h] [rbp-88h] BYREF
  __int64 v44; // [rsp+18h] [rbp-70h]
  size_t v45; // [rsp+28h] [rbp-60h] BYREF
  void *src; // [rsp+30h] [rbp-58h] BYREF
  size_t n; // [rsp+38h] [rbp-50h]
  _BYTE v48[72]; // [rsp+40h] [rbp-48h] BYREF

  v13 = (__m128i *)(a1 + 24);
  v14 = _mm_loadu_si128((const __m128i *)&a9);
  v43.m128i_i64[0] = a4;
  v44 = a3;
  v13[-1] = v14;
  *(_QWORD *)(a1 + 24) = a1 + 40;
  v15 = *(_BYTE **)a2;
  v16 = *(_QWORD *)(a2 + 8);
  v43 = (__m128i)_mm_loadh_ps((const double *)v43.m128i_i64);
  sub_2100320(v13, v15, (__int64)&v15[v16]);
  v17 = _mm_load_si128(&v43);
  *(__m128i *)(a1 + 56) = _mm_loadu_si128((const __m128i *)(a2 + 32));
  v18 = _mm_loadh_ps((const double *)off_2C78A38);
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 48);
  v19 = *(_DWORD *)(a2 + 52);
  *(_QWORD *)(a1 + 256) = a1 + 272;
  *(_DWORD *)(a1 + 76) = v19;
  *(_QWORD *)(a1 + 120) = sub_2100130;
  *(__m128 *)(a1 + 136) = v18;
  si128 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  *(_QWORD *)(a1 + 304) = a1 + 320;
  *(__m128i *)(a1 + 152) = v17;
  *(_QWORD *)(a1 + 208) = a1 + 224;
  *(_QWORD *)(a1 + 352) = a1 + 368;
  *(_QWORD *)(a1 + 176) = a5;
  v21 = (_BYTE *)(a1 + 1480);
  *(_QWORD *)(a1 + 216) = 0x400000000LL;
  *(__m128i *)(a1 + 272) = si128;
  *(_OWORD *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 312) = 0x400000000LL;
  *(_QWORD *)(a1 + 80) = a6;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 360) = 0;
  *(_QWORD *)(a1 + 400) = a1 + 416;
  *(_QWORD *)(a1 + 448) = a1 + 464;
  *(_QWORD *)(a1 + 496) = a1 + 512;
  *(_QWORD *)(a1 + 544) = a1 + 560;
  *(_QWORD *)(a1 + 592) = a1 + 608;
  *(_QWORD *)(a1 + 640) = a1 + 656;
  *(_QWORD *)(a1 + 688) = a1 + 704;
  *(_QWORD *)(a1 + 736) = a1 + 752;
  *(_QWORD *)(a1 + 784) = a1 + 800;
  *(_QWORD *)(a1 + 832) = a1 + 848;
  *(__m128i *)(a1 + 368) = si128;
  *(_OWORD *)(a1 + 384) = 0;
  *(_QWORD *)(a1 + 408) = 0x400000000LL;
  *(_OWORD *)(a1 + 464) = 0;
  *(_OWORD *)(a1 + 480) = 0;
  *(_QWORD *)(a1 + 504) = 0x400000000LL;
  *(_OWORD *)(a1 + 560) = 0;
  *(_OWORD *)(a1 + 576) = 0;
  *(_QWORD *)(a1 + 600) = 0x400000000LL;
  *(_OWORD *)(a1 + 656) = 0;
  *(_OWORD *)(a1 + 672) = 0;
  *(_QWORD *)(a1 + 696) = 0x400000000LL;
  *(_OWORD *)(a1 + 752) = 0;
  *(_OWORD *)(a1 + 768) = 0;
  *(_QWORD *)(a1 + 792) = 0x400000000LL;
  *(_OWORD *)(a1 + 848) = 0;
  *(_OWORD *)(a1 + 864) = 0;
  *(_QWORD *)(a1 + 456) = 0;
  *(_QWORD *)(a1 + 552) = 0;
  *(_QWORD *)(a1 + 648) = 0;
  *(_QWORD *)(a1 + 744) = 0;
  *(_QWORD *)(a1 + 840) = 0;
  *(_QWORD *)(a1 + 880) = a1 + 896;
  v22 = _mm_load_si128((const __m128i *)&xmmword_23A9810);
  *(_QWORD *)(a1 + 928) = a1 + 944;
  *(_QWORD *)(a1 + 976) = a1 + 992;
  *(_QWORD *)(a1 + 1024) = a1 + 1040;
  *(_QWORD *)(a1 + 1072) = a1 + 1088;
  *(_QWORD *)(a1 + 1120) = a1 + 1136;
  *(_QWORD *)(a1 + 1168) = a1 + 1184;
  *(_QWORD *)(a1 + 1216) = a1 + 1232;
  *(_QWORD *)(a1 + 1264) = a1 + 1280;
  *(_QWORD *)(a1 + 888) = 0x400000000LL;
  *(_OWORD *)(a1 + 944) = 0;
  *(_OWORD *)(a1 + 960) = 0;
  *(_QWORD *)(a1 + 984) = 0x400000000LL;
  *(_OWORD *)(a1 + 1040) = 0;
  *(_OWORD *)(a1 + 1056) = 0;
  *(_QWORD *)(a1 + 1080) = 0x400000000LL;
  *(_OWORD *)(a1 + 1136) = 0;
  *(_OWORD *)(a1 + 1152) = 0;
  *(_QWORD *)(a1 + 1176) = 0x400000000LL;
  *(_OWORD *)(a1 + 1232) = 0;
  *(_OWORD *)(a1 + 1248) = 0;
  *(_QWORD *)(a1 + 1272) = 0x400000000LL;
  *(_OWORD *)(a1 + 1328) = 0;
  *(__m128i *)(a1 + 1352) = v22;
  *(_QWORD *)(a1 + 1368) = a1 + 192;
  *(_QWORD *)(a1 + 936) = 0;
  *(_QWORD *)(a1 + 1032) = 0;
  *(_QWORD *)(a1 + 1128) = 0;
  *(_QWORD *)(a1 + 1224) = 0;
  *(_QWORD *)(a1 + 1312) = a1 + 1328;
  *(_QWORD *)(a1 + 1320) = 0;
  *(_QWORD *)(a1 + 1344) = 0;
  *(_QWORD *)(a1 + 1376) = 0;
  v23 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
  *(_QWORD *)(a1 + 1424) = a1 + 192;
  v24 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  *(_QWORD *)(a1 + 1512) = a1 + 1536;
  *(_QWORD *)(a1 + 1680) = a1 + 1696;
  *(_QWORD *)(a1 + 1736) = a1 + 1720;
  *(_QWORD *)(a1 + 1744) = a1 + 1720;
  *(_WORD *)(a1 + 1776) = 0;
  *(_QWORD *)(a1 + 1384) = 0;
  *(_DWORD *)(a1 + 1392) = 0;
  *(_QWORD *)(a1 + 1400) = 0;
  *(__m128i *)(a1 + 1408) = v23;
  *(_QWORD *)(a1 + 1432) = 0;
  *(_QWORD *)(a1 + 1440) = 0;
  *(_DWORD *)(a1 + 1448) = 0;
  *(_BYTE *)(a1 + 1456) = 3;
  *(_QWORD *)(a1 + 1464) = a1 + 1480;
  *(_QWORD *)(a1 + 1472) = 0;
  *(_BYTE *)(a1 + 1480) = 0;
  *(_QWORD *)(a1 + 1496) = 0;
  *(_BYTE *)(a1 + 1504) = 0;
  *(__m128i *)(a1 + 1520) = v24;
  v43.m128i_i64[0] = a1 + 1680;
  *(_QWORD *)(a1 + 1664) = a1 + 1680;
  *(_QWORD *)(a1 + 1672) = 0;
  *(_QWORD *)(a1 + 1688) = 0;
  *(_BYTE *)(a1 + 1696) = 0;
  *(_DWORD *)(a1 + 1720) = 0;
  *(_QWORD *)(a1 + 1728) = 0;
  *(_QWORD *)(a1 + 1752) = 0;
  *(_QWORD *)(a1 + 1760) = 0;
  *(_QWORD *)(a1 + 1768) = &stru_10000;
  *(_QWORD *)(a1 + 1780) = 0;
  *(_QWORD *)(a1 + 1808) = a1 + 1824;
  *(_QWORD *)(a1 + 1896) = a1 + 1944;
  *(_QWORD *)(a1 + 2000) = a1 + 1984;
  *(_QWORD *)(a1 + 2008) = a1 + 1984;
  *(_QWORD *)(a1 + 2072) = a1 + 2056;
  *(_QWORD *)(a1 + 2080) = a1 + 2056;
  *(_OWORD *)(a1 + 1824) = 0;
  *(_OWORD *)(a1 + 1840) = 0;
  *(_QWORD *)(a1 + 1788) = 0;
  *(_QWORD *)(a1 + 1796) = 0;
  *(_QWORD *)(a1 + 1816) = 0;
  *(_QWORD *)(a1 + 1856) = 0;
  *(_QWORD *)(a1 + 1864) = 0;
  *(_QWORD *)(a1 + 1872) = 0;
  *(_DWORD *)(a1 + 1880) = 4;
  *(_BYTE *)(a1 + 1884) = 0;
  *(_DWORD *)(a1 + 1888) = 0;
  *(_QWORD *)(a1 + 1904) = 1;
  *(_QWORD *)(a1 + 1912) = 0;
  *(_QWORD *)(a1 + 1920) = 0;
  *(_DWORD *)(a1 + 1928) = 1065353216;
  *(_QWORD *)(a1 + 1936) = 0;
  *(_QWORD *)(a1 + 1944) = 0;
  *(_QWORD *)(a1 + 1952) = 0;
  *(__m128i *)(a1 + 1960) = v23;
  *(_DWORD *)(a1 + 1984) = 0;
  *(_QWORD *)(a1 + 1992) = 0;
  *(_QWORD *)(a1 + 2016) = 0;
  *(_QWORD *)(a1 + 2024) = 0;
  *(__m128i *)(a1 + 2032) = v23;
  *(_DWORD *)(a1 + 2056) = 0;
  *(_QWORD *)(a1 + 2064) = 0;
  *(_QWORD *)(a1 + 2088) = 0;
  *(_QWORD *)(a1 + 2120) = a1 + 2104;
  *(_QWORD *)(a1 + 2128) = a1 + 2104;
  *(_OWORD *)(a1 + 2240) = 0;
  *(_OWORD *)(a1 + 2320) = 0;
  v25 = _mm_load_si128((const __m128i *)&xmmword_23AB220);
  *(_QWORD *)(a1 + 2168) = a1 + 2152;
  *(_QWORD *)(a1 + 2176) = a1 + 2152;
  *(_QWORD *)(a1 + 2264) = 0x400000000LL;
  *(_DWORD *)(a1 + 2104) = 0;
  *(_QWORD *)(a1 + 2112) = 0;
  *(_QWORD *)(a1 + 2136) = 0;
  *(_DWORD *)(a1 + 2152) = 0;
  *(_QWORD *)(a1 + 2160) = 0;
  *(_QWORD *)(a1 + 2184) = 0;
  *(_QWORD *)(a1 + 2192) = 0;
  *(__m128i *)(a1 + 2200) = v23;
  *(_QWORD *)(a1 + 2216) = 0;
  *(__m128i *)(a1 + 2224) = v23;
  *(_QWORD *)(a1 + 2256) = a1 + 2272;
  *(_QWORD *)(a1 + 2304) = a1 + 2320;
  *(_QWORD *)(a1 + 2312) = 0;
  *(_BYTE *)(a1 + 2336) = a8;
  *(_QWORD *)(a1 + 2344) = a7;
  *(_BYTE *)(a1 + 2352) = 0;
  *(_QWORD *)(a1 + 2360) = 0;
  *(__m128i *)(a1 + 2368) = v25;
  *(_QWORD *)(a1 + 2384) = 0;
  *(_QWORD *)(a1 + 2392) = 0;
  *(_DWORD *)(a1 + 2400) = 0;
  *(_QWORD *)(a1 + 2408) = 0;
  *(_QWORD *)(a1 + 2416) = 0;
  *(_DWORD *)(a1 + 2424) = 0;
  if ( a7 )
  {
    if ( (*(_BYTE *)a7 & 0x40) != 0 )
      *(_WORD *)(a1 + 1883) = 257;
    v26 = *(_BYTE **)(a7 + 128);
    v27 = (__int64)&v26[*(_QWORD *)(a7 + 136)];
    src = v48;
    sub_2100320(&src, v26, v27);
  }
  else
  {
    src = v48;
    v41 = j__strlen(&byte_22F0C30);
    sub_2100260(&src, &byte_22F0C30, (__int64)(&byte_22F0C30 + v41));
  }
  v28 = *(_BYTE **)(a1 + 1464);
  v29 = n;
  if ( v21 == v28 )
    v30 = 15;
  else
    v30 = *(_QWORD *)(a1 + 1480);
  if ( n > v30 )
  {
    v45 = n;
    v38 = sub_2100160((__int64 *)&v45, v30);
    v39 = *(_BYTE **)(a1 + 1464);
    v28 = (_BYTE *)v38;
    if ( v21 != v39 )
      operator delete(v39);
    v40 = v45;
    *(_QWORD *)(a1 + 1464) = v28;
    *(_QWORD *)(a1 + 1480) = v40;
  }
  if ( v29 )
  {
    if ( v29 == 1 )
      *v28 = *(_BYTE *)src;
    else
      memcpy(v28, src, v29);
    v28 = *(_BYTE **)(a1 + 1464);
  }
  *(_QWORD *)(a1 + 1472) = v29;
  v28[v29] = 0;
  if ( src != v48 )
    operator delete(src);
  v31 = *(_QWORD *)(a1 + 80);
  if ( v31 )
  {
    v32 = *(_QWORD **)v31;
    v31 = -1431655765 * (unsigned int)((__int64)(*(_QWORD *)(v31 + 8) - *(_QWORD *)v31) >> 3);
    if ( (_DWORD)v31 )
    {
      v33 = *(const char *(**)())(*(_QWORD *)*v32 + 16LL);
      if ( v33 == sub_FC62B0 )
      {
        v34 = j__strlen("Unknown buffer");
        v35 = "Unknown buffer";
      }
      else
      {
        v35 = (char *)((__int64 (__fastcall *)(_QWORD))v33)(*v32);
        v34 = v42;
      }
      src = v48;
      sub_2100260(&src, v35, (__int64)&v35[v34]);
      v31 = sub_A0AAD0(v43.m128i_i64[0], &src);
      if ( src != v48 )
        operator delete(src);
    }
  }
  v37 = v31;
  result = *(unsigned int *)(a2 + 52);
  switch ( *(_DWORD *)(a2 + 52) )
  {
    case 0:
      sub_2221C70("Cannot initialize MC for unknown object file format.", 1);
    case 1:
      result = (unsigned int)(*(_DWORD *)(a2 + 44) - 14);
      if ( (unsigned int)result > 1 )
        sub_2221CA0("cannot initialize MC for non-Windows COFF object files");
      *(_DWORD *)a1 = 3;
      break;
    case 2:
      *(_DWORD *)a1 = 7;
      break;
    case 3:
      *(_DWORD *)a1 = 1;
      break;
    case 4:
      *(_DWORD *)a1 = 2;
      break;
    case 5:
      *(_DWORD *)a1 = 0;
      break;
    case 6:
      *(_DWORD *)a1 = 4;
      break;
    case 7:
      *(_DWORD *)a1 = 5;
      break;
    case 8:
      *(_DWORD *)a1 = 6;
      break;
    default:
      result = v37;
      break;
  }
  return result;
}
