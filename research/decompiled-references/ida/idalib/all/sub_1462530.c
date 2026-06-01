__int64 __fastcall sub_1462530(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9,
        int a10)
{
  __int64 v12; // rax
  __int64 v13; // rax
  __m128i si128; // xmm1
  __m128 v15; // xmm0
  __m128i v16; // xmm1
  __m128i *v17; // rbp
  __m128i v18; // xmm1
  void *v19; // rdi
  char v20; // r13
  int v21; // eax
  int v22; // eax
  __m128 *v23; // r14
  __int64 v24; // r13
  void *v25; // rdi
  void *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned int v31; // esi
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned int v34; // edx
  __int64 *v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned int v41; // esi
  __int64 v42; // rcx
  __int64 v43; // r8
  unsigned int v44; // edx
  __int64 *v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rax
  bool v48; // zf
  __int64 v49; // rdx
  __int64 result; // rax
  size_t v51; // rax
  size_t v52; // rax
  size_t v53; // rax
  size_t v54; // rax
  size_t v55; // rax
  size_t v56; // rax
  size_t v57; // rax
  size_t v58; // rax
  int v59; // r10d
  __int64 *v60; // r11
  int v61; // edi
  int v62; // r10d
  __int64 *v63; // r11
  int v64; // edi
  __int64 v65; // [rsp+8h] [rbp-40h] BYREF
  __int64 v66; // [rsp+10h] [rbp-38h] BYREF
  _QWORD v67[6]; // [rsp+18h] [rbp-30h] BYREF

  *(_QWORD *)(a1 + 56) = a4;
  *(_QWORD *)(a1 + 48) = a3;
  *(_QWORD *)(a1 + 40) = a2;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  v12 = *(_QWORD *)(a6 + 40);
  *(_QWORD *)(a1 + 88) = a5;
  *(_QWORD *)(a1 + 80) = v12;
  v13 = operator new(0x18u);
  sub_1466080(v13, *(_QWORD *)(a1 + 88));
  v65 = a6;
  si128 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  *(_QWORD *)(a1 + 112) = a7;
  *(_QWORD *)(a1 + 144) = a1 + 160;
  v15 = _mm_loadh_ps((const double *)&v65);
  *(_QWORD *)(a1 + 192) = a1 + 208;
  *(__m128i *)(a1 + 208) = si128;
  v16 = _mm_load_si128((const __m128i *)&xmmword_23AA5C0);
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 152) = 0x400000000LL;
  *(_QWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 536) = 3;
  *(__m128 *)(a1 + 96) = v15;
  *(_OWORD *)(a1 + 128) = 0;
  *(__m128i *)(a1 + 520) = v16;
  sub_FDE050(a1 + 552, a8);
  sub_FDF780((_QWORD *)(a1 + 680));
  *(_QWORD *)(a1 + 688) = 0;
  v17 = (__m128i *)operator new(0x40u);
  v17->m128i_i64[0] = (__int64)&unk_2C446A0;
  v17->m128i_i64[1] = (__int64)&v17[1].m128i_i64[1];
  sub_145B9F0(&v17->m128i_i64[1], nullptr, 0);
  v18 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
  *(_WORD *)(a1 + 860) = 0;
  *(_QWORD *)(a1 + 904) = a1 + 920;
  v17[3] = v18;
  v17->m128i_i64[0] = (__int64)&off_2BB2C80;
  *(_OWORD *)(a1 + 752) = 0;
  *(_DWORD *)(a1 + 748) = a10;
  *(_QWORD *)(a1 + 784) = a1 + 800;
  *(_QWORD *)(a1 + 792) = 0x200000000LL;
  *(_OWORD *)(a1 + 768) = 0;
  v17[2].m128i_i64[1] = 0;
  *(_QWORD *)(a1 + 696) = v17;
  *(_QWORD *)(a1 + 704) = 0;
  *(_QWORD *)(a1 + 712) = 0;
  *(_QWORD *)(a1 + 720) = 0;
  *(_QWORD *)(a1 + 728) = 0;
  *(_QWORD *)(a1 + 736) = 0;
  *(_BYTE *)(a1 + 744) = 0;
  *(_QWORD *)(a1 + 832) = 0;
  *(_QWORD *)(a1 + 840) = 0;
  *(_DWORD *)(a1 + 848) = 0;
  *(_DWORD *)(a1 + 856) = 0;
  *(_DWORD *)(a1 + 864) = 0;
  *(_QWORD *)(a1 + 872) = 0;
  *(_DWORD *)(a1 + 880) = -1;
  *(_BYTE *)(a1 + 884) = 0;
  *(_DWORD *)(a1 + 888) = -1;
  *(_DWORD *)(a1 + 896) = 0;
  *(_QWORD *)(a1 + 912) = 0;
  *(_BYTE *)(a1 + 920) = 0;
  *(_BYTE *)(a1 + 936) = 0;
  *(_QWORD *)(a1 + 1056) = a1 + 1072;
  *(_QWORD *)(a1 + 1200) = a1 + 1216;
  *(_QWORD *)(a1 + 1152) = sub_1436060;
  *(_QWORD *)(a1 + 1328) = a1 + 1344;
  *(_QWORD *)(a1 + 1208) = 0x200000000LL;
  *(_OWORD *)(a1 + 1112) = 0;
  *(_QWORD *)(a1 + 1336) = 0x800000000LL;
  *(_DWORD *)(a1 + 944) = 0;
  *(_QWORD *)(a1 + 952) = 0;
  *(_QWORD *)(a1 + 960) = 0;
  *(_BYTE *)(a1 + 968) = 0;
  *(_QWORD *)(a1 + 976) = 0;
  *(_QWORD *)(a1 + 984) = 0;
  *(_QWORD *)(a1 + 992) = 0;
  *(_DWORD *)(a1 + 1000) = 0;
  *(_BYTE *)(a1 + 1004) = 1;
  *(_BYTE *)(a1 + 1008) = 0;
  *(_QWORD *)(a1 + 1012) = 0;
  *(_BYTE *)(a1 + 1020) = 0;
  *(_QWORD *)(a1 + 1024) = 0;
  *(_BYTE *)(a1 + 1048) = 0;
  *(_QWORD *)(a1 + 1064) = 0x400000000LL;
  *(_DWORD *)(a1 + 1104) = 0;
  *(_QWORD *)(a1 + 1128) = 0;
  *(_QWORD *)(a1 + 1136) = 0;
  *(_QWORD *)(a1 + 1144) = 0;
  *(_QWORD *)(a1 + 1160) = 0;
  *(_QWORD *)(a1 + 1168) = 0;
  *(_QWORD *)(a1 + 1176) = 0;
  *(_QWORD *)(a1 + 1184) = 0;
  *(_QWORD *)(a1 + 1192) = 0;
  *(_DWORD *)(a1 + 1608) = 0;
  *(_QWORD *)(a1 + 1616) = 0;
  *(_QWORD *)(a1 + 1624) = a1 + 1608;
  *(_QWORD *)(a1 + 1632) = a1 + 1608;
  *(_QWORD *)(a1 + 1704) = a1 + 1648;
  *(_QWORD *)(a1 + 1760) = a1 + 1776;
  *(_QWORD *)(a1 + 1768) = 0x200000000LL;
  *(_QWORD *)(a1 + 1640) = 0;
  *(_DWORD *)(a1 + 1664) = 0;
  *(_QWORD *)(a1 + 1648) = 0;
  *(_QWORD *)(a1 + 1656) = 0;
  *(_QWORD *)(a1 + 1688) = 0;
  *(_DWORD *)(a1 + 1696) = 0;
  *(_QWORD *)(a1 + 1712) = 0;
  *(_QWORD *)(a1 + 1720) = 0;
  *(_DWORD *)(a1 + 1728) = 0;
  *(_QWORD *)(a1 + 1736) = 0;
  *(_QWORD *)(a1 + 1744) = 0;
  *(_DWORD *)(a1 + 1752) = 0;
  *(_OWORD *)(a1 + 1672) = 0;
  sub_2222F10(a1 + 1792, 6);
  v19 = (void *)(a1 + 2112);
  *(_QWORD *)(a1 + 1808) = a1 + 1824;
  *(_QWORD *)(a1 + 1816) = 0x2000000000LL;
  *(_QWORD *)(a1 + 2080) = 0;
  *(_QWORD *)(a1 + 2088) = 0;
  *(_DWORD *)(a1 + 2096) = 0;
  *(_QWORD *)(a1 + 2104) = 1;
  if ( a1 + 2112 != a1 + 2240 )
    memset(v19, 255, 0x80u);
  *(_QWORD *)(a1 + 2360) = a1 + 2376;
  *(_OWORD *)(a1 + 2296) = 0;
  *(_OWORD *)(a1 + 2312) = 0;
  *(_OWORD *)(a1 + 2328) = 0;
  *(_OWORD *)(a1 + 2344) = 0;
  *(_WORD *)(a1 + 2400) = 0;
  *(_OWORD *)(a1 + 2408) = 0;
  *(_OWORD *)(a1 + 2424) = 0;
  *(_OWORD *)(a1 + 2440) = 0;
  *(_OWORD *)(a1 + 2456) = 0;
  *(_QWORD *)(a1 + 2472) = a1 + 2488;
  *(_OWORD *)(a1 + 2872) = 0;
  *(_OWORD *)(a1 + 2888) = 0;
  *(_QWORD *)(a1 + 2912) = 0x100000000LL;
  *(_QWORD *)(a1 + 2480) = 0x1000000000LL;
  *(_QWORD *)(a1 + 2904) = a1 + 2920;
  *(_QWORD *)(a1 + 2240) = 0;
  *(_QWORD *)(a1 + 2248) = 0;
  *(_DWORD *)(a1 + 2256) = 0;
  *(_QWORD *)(a1 + 2264) = 0;
  *(_QWORD *)(a1 + 2272) = 0;
  *(_QWORD *)(a1 + 2280) = 0;
  *(_DWORD *)(a1 + 2288) = 0;
  *(_QWORD *)(a1 + 2368) = 0;
  *(_BYTE *)(a1 + 2376) = 0;
  *(_QWORD *)(a1 + 2392) = 0;
  *(_QWORD *)(a1 + 2944) = 0;
  *(_QWORD *)(a1 + 2952) = 0;
  *(_QWORD *)(a1 + 2960) = 0;
  *(_QWORD *)(a1 + 2968) = 0;
  *(_QWORD *)(a1 + 2976) = 0;
  *(_QWORD *)(a1 + 2984) = 0;
  *(_QWORD *)(a1 + 2992) = 0;
  *(_QWORD *)(a1 + 3168) = 0x1000000000LL;
  v20 = *(_BYTE *)(a1 + 544);
  *(_QWORD *)(a1 + 3160) = a1 + 3176;
  *(_BYTE *)(a1 + 3000) = 0;
  *(_QWORD *)(a1 + 3008) = 0;
  *(_BYTE *)(a1 + 544) = (16 * (a9 & 1)) | v20 & 0xEF;
  v21 = *(_DWORD *)(a1 + 544);
  *(_QWORD *)(a1 + 3016) = 0;
  v22 = v21 & 0xFC10;
  *(_DWORD *)(a1 + 3024) = 0;
  BYTE1(v22) |= 1u;
  *(_QWORD *)(a1 + 3032) = 0;
  *(_QWORD *)(a1 + 3040) = 0;
  *(_DWORD *)(a1 + 3048) = 0;
  *(_BYTE *)(a1 + 3144) = 0;
  *(_BYTE *)(a1 + 3152) = 0;
  *(_DWORD *)(a1 + 3156) = 0;
  *(_QWORD *)(a1 + 3304) = 0;
  *(_QWORD *)(a1 + 3312) = 0;
  *(_DWORD *)(a1 + 3320) = 0;
  *(_QWORD *)(a1 + 512) = 0;
  *(_DWORD *)(a1 + 2404) = 0;
  *(_DWORD *)(a1 + 544) = v22;
  v23 = (__m128 *)operator new(0xB0u);
  sub_FBD5B0(v23);
  v24 = *(_QWORD *)(a1 + 688);
  *(_QWORD *)(a1 + 688) = v23;
  if ( v24 )
  {
    v25 = *(void **)(v24 + 112);
    if ( v25 != (void *)(v24 + 128) )
      free(v25);
    v26 = *(void **)(v24 + 56);
    if ( v26 != (void *)(v24 + 72) )
      free(v26);
    if ( *(_QWORD *)v24 != v24 + 16 )
      free(*(void **)v24);
    operator delete((void *)v24, 0xB0u);
  }
  v27 = sub_6F3470(a1 + 552, "__VA_ARGS__", 0xBu);
  v31 = *(_DWORD *)(a1 + 3048);
  *(_QWORD *)(a1 + 320) = v27;
  *(_BYTE *)(v27 + 3) |= 0xA0u;
  v32 = *(_QWORD *)(a1 + 320);
  v66 = v32;
  if ( !v31 )
  {
    v67[0] = 0;
    goto LABEL_43;
  }
  v30 = v31 - 1;
  v33 = *(_QWORD *)(a1 + 3032);
  v34 = v30 & (((unsigned int)v32 >> 9) ^ ((unsigned int)v32 >> 4));
  v35 = (__int64 *)(v33 + 16LL * v34);
  v36 = *v35;
  if ( v32 == *v35 )
    goto LABEL_13;
  v62 = 1;
  v63 = nullptr;
  if ( v36 == -4096 )
  {
LABEL_37:
    v64 = *(_DWORD *)(a1 + 3040);
    v67[0] = v35;
    v28 = (unsigned int)(v64 + 1);
    v29 = (unsigned int)(4 * v28);
    if ( (unsigned int)v29 < 3 * v31 )
    {
      v29 = v31 >> 3;
      if ( v31 - *(_DWORD *)(a1 + 3044) - (unsigned int)v28 > (unsigned int)v29 )
      {
LABEL_39:
        v48 = *v35 == -4096;
        *(_DWORD *)(a1 + 3040) = v28;
        if ( !v48 )
          --*(_DWORD *)(a1 + 3044);
        *v35 = v32;
        *((_DWORD *)v35 + 2) = 0;
        goto LABEL_13;
      }
LABEL_44:
      sub_1462070((__int64 *)(a1 + 3032), v31, v28, v32, v29, v30);
      sub_145E800((__int64 *)(a1 + 3032), &v66, v67);
      v32 = v66;
      LODWORD(v28) = *(_DWORD *)(a1 + 3040) + 1;
      v35 = (__int64 *)v67[0];
      goto LABEL_39;
    }
LABEL_43:
    v31 *= 2;
    goto LABEL_44;
  }
  while ( 1 )
  {
    if ( v36 == -8192 && !v63 )
      v63 = v35;
    v34 = v30 & (v62 + v34);
    v35 = (__int64 *)(v33 + 16LL * v34);
    v36 = *v35;
    if ( v32 == *v35 )
      break;
    if ( v36 == -4096 )
    {
      if ( v63 )
        v35 = v63;
      goto LABEL_37;
    }
    ++v62;
  }
LABEL_13:
  *((_DWORD *)v35 + 2) = 1235;
  v37 = sub_6F3470(a1 + 552, "__VA_OPT__", 0xAu);
  v41 = *(_DWORD *)(a1 + 3048);
  *(_QWORD *)(a1 + 328) = v37;
  *(_BYTE *)(v37 + 3) |= 0xA0u;
  v42 = *(_QWORD *)(a1 + 328);
  v66 = v42;
  if ( !v41 )
  {
    v67[0] = 0;
    goto LABEL_34;
  }
  v40 = v41 - 1;
  v43 = *(_QWORD *)(a1 + 3032);
  v44 = v40 & (((unsigned int)v42 >> 9) ^ ((unsigned int)v42 >> 4));
  v45 = (__int64 *)(v43 + 16LL * v44);
  v46 = *v45;
  if ( v42 == *v45 )
    goto LABEL_15;
  v59 = 1;
  v60 = nullptr;
  if ( v46 == -4096 )
  {
LABEL_28:
    v61 = *(_DWORD *)(a1 + 3040);
    v67[0] = v45;
    v38 = (unsigned int)(v61 + 1);
    v39 = (unsigned int)(4 * v38);
    if ( (unsigned int)v39 < 3 * v41 )
    {
      v39 = v41 >> 3;
      if ( v41 - *(_DWORD *)(a1 + 3044) - (unsigned int)v38 > (unsigned int)v39 )
      {
LABEL_30:
        v48 = *v45 == -4096;
        *(_DWORD *)(a1 + 3040) = v38;
        if ( !v48 )
          --*(_DWORD *)(a1 + 3044);
        *v45 = v42;
        *((_DWORD *)v45 + 2) = 0;
        goto LABEL_15;
      }
LABEL_35:
      sub_1462070((__int64 *)(a1 + 3032), v41, v38, v42, v39, v40);
      sub_145E800((__int64 *)(a1 + 3032), &v66, v67);
      v42 = v66;
      LODWORD(v38) = *(_DWORD *)(a1 + 3040) + 1;
      v45 = (__int64 *)v67[0];
      goto LABEL_30;
    }
LABEL_34:
    v41 *= 2;
    goto LABEL_35;
  }
  while ( 1 )
  {
    if ( !v60 && v46 == -8192 )
      v60 = v45;
    v44 = v40 & (v59 + v44);
    v45 = (__int64 *)(v43 + 16LL * v44);
    v46 = *v45;
    if ( v42 == *v45 )
      break;
    if ( v46 == -4096 )
    {
      if ( v60 )
        v45 = v60;
      goto LABEL_28;
    }
    ++v59;
  }
LABEL_15:
  *((_DWORD *)v45 + 2) = 1236;
  sub_1456010(a1);
  sub_144C6A0((_QWORD *)a1);
  v47 = *(_QWORD *)(a1 + 56);
  if ( (*(_BYTE *)(v47 + 1) & 4) != 0 )
  {
    v51 = j__strlen("_exception_info");
    *(_QWORD *)(a1 + 3080) = sub_6F3470(a1 + 552, "_exception_info", v51);
    v52 = j__strlen("__exception_info");
    *(_QWORD *)(a1 + 3088) = sub_6F3470(a1 + 552, "__exception_info", v52);
    v53 = j__strlen("GetExceptionInformation");
    *(_QWORD *)(a1 + 3096) = sub_6F3470(a1 + 552, "GetExceptionInformation", v53);
    *(_QWORD *)(a1 + 3056) = sub_6F3470(a1 + 552, "_exception_code", 0xFu);
    v54 = j__strlen("__exception_code");
    *(_QWORD *)(a1 + 3064) = sub_6F3470(a1 + 552, "__exception_code", v54);
    v55 = j__strlen("GetExceptionCode");
    *(_QWORD *)(a1 + 3072) = sub_6F3470(a1 + 552, "GetExceptionCode", v55);
    v56 = j__strlen("_abnormal_termination");
    *(_QWORD *)(a1 + 3104) = sub_6F3470(a1 + 552, "_abnormal_termination", v56);
    v57 = j__strlen("__abnormal_termination");
    *(_QWORD *)(a1 + 3112) = sub_6F3470(a1 + 552, "__abnormal_termination", v57);
    v58 = j__strlen("AbnormalTermination");
    *(_QWORD *)(a1 + 3120) = sub_6F3470(a1 + 552, "AbnormalTermination", v58);
    v47 = *(_QWORD *)(a1 + 56);
  }
  else
  {
    *(_QWORD *)(a1 + 3120) = 0;
    *(_OWORD *)(a1 + 3056) = 0;
    *(_OWORD *)(a1 + 3072) = 0;
    *(_OWORD *)(a1 + 3088) = 0;
    *(_OWORD *)(a1 + 3104) = 0;
  }
  v48 = *(_DWORD *)(a1 + 748) == 1;
  *(_BYTE *)(a1 + 744) = *(_BYTE *)(v47 + 200) & 1;
  v49 = *(_QWORD *)(a1 + 40);
  if ( !v48 && *(_BYTE *)(v49 + 76) )
    *(_BYTE *)(a1 + 2400) = 1;
  if ( *(_QWORD *)(v49 + 88) && *(_QWORD *)(v49 + 120) )
    *(_BYTE *)(a1 + 2401) = 1;
  if ( *(_BYTE *)(v49 + 232) )
    *(_DWORD *)(a1 + 1104) = 1;
  result = *(unsigned int *)(v47 + 168);
  *(_DWORD *)(a1 + 1024) = result;
  return result;
}
