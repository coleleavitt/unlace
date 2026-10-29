__int64 __fastcall sub_15F4E50(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __m128i si128; // xmm0
  __int64 v13; // rdx
  char v14; // si
  int v15; // ecx
  unsigned int v16; // eax
  int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // r13
  __int64 v23; // r13
  __int64 v24; // r13
  __int64 v25; // r13
  __int64 v26; // rbp
  __int64 v27; // rbp
  __int64 v28; // rbp
  __int64 v29; // rbp
  __int64 v30; // rbp
  __int64 v31; // rbp
  __int64 v32; // rbp
  __int64 v33; // rbp
  __int64 v34; // rbp
  __int64 v35; // rbp
  __int64 v36; // rbp
  __int64 v37; // rbp
  __int64 v38; // rbp
  __int64 v39; // rbp
  __int64 v40; // rbp
  __int64 v41; // rbp
  __int64 v42; // rbp
  __int64 v43; // rbp
  __int64 v44; // rbp
  __int64 v45; // rbp
  __int64 v46; // rbp
  __int64 v47; // rbp
  _BYTE *v48; // rdx
  unsigned __int8 v49; // al
  unsigned __int8 v50; // al
  int v51; // eax
  __int64 v52; // rbp
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // r12
  _QWORD *v59; // rbp
  __int64 v60; // r13
  _QWORD *v61; // rax
  __int64 v62; // rdi
  int v63; // edx
  __int64 result; // rax
  int v65; // eax
  _QWORD *v66; // rax
  __int64 v67; // rbp
  void *v68; // rdi
  __int64 v69; // rbp
  __int64 v70; // r12
  void *v71; // rdi
  __int64 v72; // rbp
  __int64 v73; // rdx
  void *v74; // rdi
  int v75; // r12d
  _QWORD v76[8]; // [rsp+8h] [rbp-40h] BYREF

  sub_168B6B0(a1 + 8, a1);
  *(_OWORD *)(a1 + 88) = 0;
  si128 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  *(_QWORD *)(a1 + 104) = a1 + 120;
  *(_QWORD *)a1 = &off_2BC6460;
  *(_QWORD *)(a1 + 32) = a1 + 48;
  *(_QWORD *)(a1 + 40) = 0x400000000LL;
  *(_QWORD *)(a1 + 112) = 0x400000000LL;
  *(_QWORD *)(a1 + 152) = a1 + 168;
  *(_BYTE *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  *(_DWORD *)(a1 + 184) = a5;
  *(__m128i *)(a1 + 168) = si128;
  sub_FFAE80(a1 + 200);
  v13 = a2[7];
  v15 = (*(_WORD *)(v13 + 206) >> 7) & 3;
  if ( v15 == 3 )
    v15 = 2;
  v14 = *(_BYTE *)(v13 + 46);
  v16 = v15
      | (((v14 & 8) != 0) << 14)
      | (((v14 & 4) != 0) << 13)
      | (((v14 & 2) != 0) << 12)
      | (8 * *(unsigned __int8 *)(v13 + 45)) & 0x400
      | (((*(_BYTE *)(v13 + 45) & 0x40) != 0) << 9)
      | (4 * ((unsigned int)*(char *)(v13 + 106) >> 31))
      | ((v14 & 1) << 11)
      | (((*(_BYTE *)(v13 + 207) >> 1) & 3) << 6);
  v17 = v16 | 0x38;
  *(_DWORD *)(a1 + 224) = v16 | 0x38;
  if ( (v16 & 3) == 1 && (v16 & 4) != 0 )
  {
    v65 = v16 | 0x138;
    if ( (unsigned __int8)v17 >> 6 == 2 )
      v17 = v65;
  }
  *(_DWORD *)(a1 + 224) = v17 | ((*(_BYTE *)(v13 + 202) & 7) << 22);
  v18 = a2[7];
  *(_QWORD *)(a1 + 240) = a2;
  *(_QWORD *)(a1 + 232) = v18;
  *(_QWORD *)(a1 + 248) = a3;
  *(_QWORD *)(a1 + 256) = a4;
  *(_QWORD *)(a1 + 264) = a2[6];
  v19 = a2[11];
  *(_QWORD *)(a1 + 272) = v19;
  sub_A04D10(a1 + 280, v19, v18);
  sub_1580E60(a1 + 352, a1);
  v20 = *(_QWORD *)(a1 + 264);
  *(_QWORD *)(a1 + 432) = 0;
  *(_QWORD *)(a1 + 456) = 0;
  *(_QWORD *)(a1 + 480) = 0;
  *(_QWORD *)(a1 + 496) = 0;
  *(_BYTE *)(a1 + 504) = 1;
  *(_QWORD *)(a1 + 512) = 0;
  *(_QWORD *)(a1 + 520) = 0;
  *(_QWORD *)(a1 + 528) = 0;
  *(_DWORD *)(a1 + 536) = 0;
  *(_QWORD *)(a1 + 544) = 0;
  *(_QWORD *)(a1 + 552) = 0;
  *(_BYTE *)(a1 + 568) = 0;
  *(_BYTE *)(a1 + 576) = 0;
  *(_QWORD *)(a1 + 584) = v20;
  *(_BYTE *)(a1 + 592) = 0;
  *(_OWORD *)(a1 + 440) = 0;
  *(_OWORD *)(a1 + 608) = 0;
  v21 = operator new(8u);
  sub_16115E0(v21, a1);
  *(_QWORD *)(a1 + 624) = v21;
  v22 = operator new(8u);
  sub_16292B0(v22, a1);
  *(_QWORD *)(a1 + 632) = v22;
  v23 = operator new(8u);
  sub_164D130(v23, a1);
  *(_QWORD *)(a1 + 640) = v23;
  v24 = operator new(8u);
  sub_16881F0(v24, a1);
  *(_QWORD *)(a1 + 648) = v24;
  v25 = operator new(0x18u);
  sub_1705300(v25, a1, a6);
  *(_QWORD *)(a1 + 656) = v25;
  v26 = operator new(0x50u);
  sub_178E240(v26, a1);
  *(_QWORD *)(a1 + 664) = v26;
  v27 = operator new(8u);
  sub_179A480(v27, a1);
  *(_QWORD *)(a1 + 672) = v27;
  v28 = operator new(0xF0u);
  sub_19F6DA0(v28, a1);
  *(_QWORD *)(a1 + 680) = v28;
  v29 = operator new(8u);
  sub_1A09D70(v29, a1);
  *(_QWORD *)(a1 + 688) = v29;
  v30 = operator new(8u);
  sub_1A6C500(v30, a1);
  *(_QWORD *)(a1 + 696) = v30;
  v31 = operator new(8u);
  sub_1A6CA60(v31, a1);
  *(_QWORD *)(a1 + 704) = v31;
  v32 = operator new(8u);
  sub_1A70BF0(v32, a1);
  *(_QWORD *)(a1 + 712) = v32;
  v33 = operator new(8u);
  sub_1A767D0(v33, a1);
  *(_QWORD *)(a1 + 720) = v33;
  v34 = operator new(8u);
  sub_1A85D40(v34, a1);
  *(_QWORD *)(a1 + 728) = v34;
  v35 = operator new(0x148u);
  sub_1A85FB0(v35, a1);
  *(_QWORD *)(a1 + 736) = v35;
  v36 = operator new(0x128u);
  sub_1AA1720(v36, a1);
  *(_QWORD *)(a1 + 744) = v36;
  v37 = operator new(8u);
  sub_1AD8520(v37, a1);
  *(_QWORD *)(a1 + 752) = v37;
  v38 = operator new(0x228u);
  sub_1AF6040(v38, a1);
  *(_QWORD *)(a1 + 760) = v38;
  v39 = operator new(8u);
  sub_1C0D9E0(v39, a1);
  *(_QWORD *)(a1 + 768) = v39;
  v40 = operator new(8u);
  sub_1C17140(v40, a1);
  *(_QWORD *)(a1 + 776) = v40;
  v41 = operator new(0x18u);
  sub_1C25420(v41, a1);
  *(_QWORD *)(a1 + 784) = v41;
  v42 = operator new(8u);
  sub_1C6BF70(v42, a1);
  *(_QWORD *)(a1 + 792) = v42;
  v43 = operator new(8u);
  sub_1C73EF0(v43, a1);
  *(_QWORD *)(a1 + 800) = v43;
  v44 = operator new(8u);
  sub_1CA24D0(v44, a1);
  *(_QWORD *)(a1 + 808) = v44;
  v45 = operator new(8u);
  sub_1CAE350(v45, a1);
  *(_QWORD *)(a1 + 816) = v45;
  v46 = operator new(8u);
  sub_1E923F0(v46, a1);
  *(_QWORD *)(a1 + 824) = v46;
  v47 = operator new(8u);
  sub_1E9E0B0(v47, a1);
  v48 = *(_BYTE **)(a1 + 232);
  *(_QWORD *)(a1 + 832) = v47;
  v49 = v48[202];
  *(_BYTE *)(a1 + 844) = 0;
  *(_QWORD *)(a1 + 864) = 0;
  *(_BYTE *)(a1 + 872) = 0;
  *(_QWORD *)(a1 + 904) = 0;
  *(_DWORD *)(a1 + 840) = (v49 >> 3) & 3;
  *(_QWORD *)(a1 + 856) = a1 + 872;
  *(_QWORD *)(a1 + 896) = a1 + 912;
  *(_QWORD *)(a1 + 936) = a1 + 952;
  *(_QWORD *)(a1 + 976) = a1 + 992;
  *(_BYTE *)(a1 + 912) = 0;
  *(_QWORD *)(a1 + 944) = 0;
  *(_BYTE *)(a1 + 952) = 0;
  *(_QWORD *)(a1 + 984) = 0;
  *(_BYTE *)(a1 + 992) = 0;
  *(_QWORD *)(a1 + 1016) = a1 + 1032;
  *(_QWORD *)(a1 + 1024) = 0;
  *(_BYTE *)(a1 + 1032) = 0;
  v50 = v48[212];
  *(_DWORD *)(a1 + 848) = 0;
  *(_BYTE *)(a1 + 888) = 0;
  v51 = (v50 >> 2) & 3;
  *(_DWORD *)(a1 + 892) = 0;
  *(_BYTE *)(a1 + 928) = 0;
  *(_DWORD *)(a1 + 932) = 0;
  *(_BYTE *)(a1 + 968) = 0;
  *(_DWORD *)(a1 + 972) = 0;
  *(_BYTE *)(a1 + 1008) = 0;
  *(_DWORD *)(a1 + 1012) = 0;
  *(_BYTE *)(a1 + 1048) = 0;
  *(_DWORD *)(a1 + 1052) = 0;
  *(_QWORD *)(a1 + 1056) = a1 + 1072;
  *(_QWORD *)(a1 + 1064) = 0x200000000LL;
  *(_DWORD *)(a1 + 1136) = v51;
  *(_DWORD *)(a1 + 1140) = v51;
  LOBYTE(v51) = v48[156];
  *(_QWORD *)(a1 + 1152) = a1 + 1168;
  *(_QWORD *)(a1 + 1160) = 0x200000000LL;
  LOBYTE(v51) = (v51 & 2) != 0;
  *(_BYTE *)(a1 + 1235) = v51;
  *(_BYTE *)(a1 + 1239) = v51;
  *(_QWORD *)(a1 + 1248) = a1 + 1264;
  *(_QWORD *)(a1 + 1360) = a1 + 1376;
  *(_QWORD *)(a1 + 1464) = a1 + 1480;
  *(_QWORD *)(a1 + 1568) = a1 + 1584;
  *(_QWORD *)(a1 + 1672) = a1 + 1688;
  *(_WORD *)(a1 + 1232) = 0;
  *(_WORD *)(a1 + 1236) = 0;
  *(_QWORD *)(a1 + 1368) = 0x200000000LL;
  *(_QWORD *)(a1 + 1472) = 0x200000000LL;
  *(_QWORD *)(a1 + 1576) = 0x200000000LL;
  *(_DWORD *)(a1 + 1144) = 0;
  *(_BYTE *)(a1 + 1234) = -1;
  *(_BYTE *)(a1 + 1238) = -1;
  *(_DWORD *)(a1 + 1240) = 0;
  *(_QWORD *)(a1 + 1256) = 0x800000000LL;
  *(_QWORD *)(a1 + 1440) = 0;
  *(_QWORD *)(a1 + 1448) = 0;
  *(_DWORD *)(a1 + 1456) = 0;
  *(_QWORD *)(a1 + 1544) = 0;
  *(_QWORD *)(a1 + 1552) = 0;
  *(_DWORD *)(a1 + 1560) = 0;
  *(_QWORD *)(a1 + 1648) = 0;
  *(_QWORD *)(a1 + 1656) = 0;
  *(_DWORD *)(a1 + 1664) = 0;
  *(_QWORD *)(a1 + 1680) = 0x200000000LL;
  *(_QWORD *)(a1 + 1776) = a1 + 1792;
  *(_QWORD *)(a1 + 1864) = a1 + 1880;
  *(_QWORD *)(a1 + 2000) = 0x2000000000LL;
  *(_QWORD *)(a1 + 2016) = a1 + 2032;
  *(_QWORD *)(a1 + 2360) = a1 + 2376;
  *(_WORD *)(a1 + 1856) = 0;
  *(_QWORD *)(a1 + 2456) = a1 + 2472;
  *(_QWORD *)(a1 + 1784) = 0x200000000LL;
  *(_QWORD *)(a1 + 1872) = 0x200000000LL;
  *(_QWORD *)(a1 + 2024) = 0x200000000LL;
  *(_QWORD *)(a1 + 1752) = 0;
  *(_QWORD *)(a1 + 1760) = 0;
  *(_DWORD *)(a1 + 1768) = 0;
  *(_DWORD *)(a1 + 1860) = 0;
  *(_QWORD *)(a1 + 1944) = 0;
  *(_QWORD *)(a1 + 1952) = 0;
  *(_DWORD *)(a1 + 1960) = 0;
  *(_QWORD *)(a1 + 1968) = 0;
  *(_DWORD *)(a1 + 1976) = 0;
  *(_QWORD *)(a1 + 1984) = 0;
  *(_QWORD *)(a1 + 1992) = 0;
  *(_QWORD *)(a1 + 2008) = 0;
  *(_QWORD *)(a1 + 2320) = 0;
  *(_DWORD *)(a1 + 2328) = 0;
  *(_BYTE *)(a1 + 2332) = 1;
  *(_QWORD *)(a1 + 2336) = 0;
  *(_QWORD *)(a1 + 2344) = 0;
  *(_DWORD *)(a1 + 2352) = 0;
  *(_DWORD *)(a1 + 2368) = 0;
  *(_DWORD *)(a1 + 2372) = 4;
  *(_BYTE *)(a1 + 2440) = 0;
  *(_QWORD *)(a1 + 2448) = 0;
  *(_QWORD *)(a1 + 2464) = 0x400000000LL;
  *(_QWORD *)(a1 + 2600) = 0;
  sub_15C1130((_QWORD *)(a1 + 2608), (__int64)a2);
  *(_QWORD *)(a1 + 2640) = a1 + 2664;
  *(_QWORD *)(a1 + 2744) = a1 + 2760;
  *(_QWORD *)(a1 + 2808) = a1 + 2824;
  *(_QWORD *)(a1 + 2856) = a1 + 2872;
  *(_QWORD *)(a1 + 2888) = a1 + 2904;
  *(_QWORD *)(a1 + 2920) = a1 + 2936;
  *(_QWORD *)(a1 + 2952) = a1 + 2968;
  *(_QWORD *)(a1 + 2984) = a1 + 3000;
  *(_QWORD *)(a1 + 2864) = 0x200000000LL;
  *(_QWORD *)(a1 + 2896) = 0x200000000LL;
  *(_QWORD *)(a1 + 2928) = 0x200000000LL;
  *(_QWORD *)(a1 + 2960) = 0x200000000LL;
  *(_DWORD *)(a1 + 2632) = 0;
  *(_QWORD *)(a1 + 2648) = 4;
  *(_DWORD *)(a1 + 2656) = 0;
  *(_BYTE *)(a1 + 2660) = 1;
  *(_QWORD *)(a1 + 2696) = 0;
  *(_QWORD *)(a1 + 2704) = 0;
  *(_DWORD *)(a1 + 2712) = 0;
  *(_QWORD *)(a1 + 2720) = 0;
  *(_QWORD *)(a1 + 2728) = 0;
  *(_DWORD *)(a1 + 2736) = 0;
  *(_QWORD *)(a1 + 2752) = 0;
  *(_QWORD *)(a1 + 2760) = 0;
  *(_QWORD *)(a1 + 2768) = 0;
  *(_DWORD *)(a1 + 2776) = 0;
  *(_QWORD *)(a1 + 2784) = 0;
  *(_QWORD *)(a1 + 2792) = 0;
  *(_DWORD *)(a1 + 2800) = 0;
  *(_QWORD *)(a1 + 2816) = 0x400000000LL;
  *(_QWORD *)(a1 + 2992) = 0x400000000LL;
  *(_QWORD *)(a1 + 3032) = 0;
  *(_QWORD *)(a1 + 3040) = a1 + 3064;
  *(_QWORD *)(a1 + 3120) = a1 + 3136;
  *(_QWORD *)(a1 + 3192) = a1 + 3208;
  *(_QWORD *)(a1 + 3224) = a1 + 3240;
  *(_QWORD *)(a1 + 3256) = a1 + 3272;
  *(_QWORD *)(a1 + 3288) = a1 + 3304;
  *(_QWORD *)(a1 + 3584) = a1 + 3600;
  *(_QWORD *)(a1 + 3632) = a1 + 3648;
  *(_QWORD *)(a1 + 3680) = a1 + 3696;
  *(_QWORD *)(a1 + 3200) = 0x200000000LL;
  *(_QWORD *)(a1 + 3232) = 0x200000000LL;
  *(_QWORD *)(a1 + 3264) = 0x200000000LL;
  *(_QWORD *)(a1 + 3048) = 4;
  *(_DWORD *)(a1 + 3056) = 0;
  *(_BYTE *)(a1 + 3060) = 1;
  *(_QWORD *)(a1 + 3096) = 0;
  *(_QWORD *)(a1 + 3104) = 0;
  *(_DWORD *)(a1 + 3112) = 0;
  *(_QWORD *)(a1 + 3128) = 0x400000000LL;
  *(_QWORD *)(a1 + 3168) = 0;
  *(_QWORD *)(a1 + 3176) = 0;
  *(_DWORD *)(a1 + 3184) = 0;
  *(_QWORD *)(a1 + 3296) = 0x1000000000LL;
  *(_QWORD *)(a1 + 3560) = 0;
  *(_QWORD *)(a1 + 3568) = 0;
  *(_DWORD *)(a1 + 3576) = 0;
  *(_QWORD *)(a1 + 3592) = 0x400000000LL;
  *(_QWORD *)(a1 + 3640) = 0x400000000LL;
  *(_QWORD *)(a1 + 3688) = 0x400000000LL;
  *(_QWORD *)(a1 + 3920) = 0;
  *(_QWORD *)(a1 + 3928) = 0;
  *(_QWORD *)(a1 + 3936) = 0;
  *(_DWORD *)(a1 + 3944) = 0;
  *(_QWORD *)(a1 + 3952) = a1 + 3968;
  *(_QWORD *)(a1 + 4104) = a1 + 4120;
  *(_QWORD *)(a1 + 4136) = a1 + 4152;
  *(_QWORD *)(a1 + 4240) = a1 + 4256;
  *(_QWORD *)(a1 + 4112) = 0x200000000LL;
  *(_QWORD *)(a1 + 4144) = 0x200000000LL;
  *(_QWORD *)(a1 + 4256) = a1 + 4280;
  *(_QWORD *)(a1 + 3960) = 0x1000000000LL;
  *(_QWORD *)(a1 + 4096) = 0;
  *(_QWORD *)(a1 + 4168) = 0;
  *(_QWORD *)(a1 + 4192) = 0;
  *(_QWORD *)(a1 + 4200) = 0;
  *(_DWORD *)(a1 + 4208) = 0;
  *(_QWORD *)(a1 + 4216) = 0;
  *(_QWORD *)(a1 + 4224) = 0;
  *(_DWORD *)(a1 + 4232) = 0;
  *(_QWORD *)(a1 + 4248) = 0;
  *(_QWORD *)(a1 + 4264) = 4;
  *(_DWORD *)(a1 + 4272) = 0;
  *(_BYTE *)(a1 + 4276) = 1;
  *(_OWORD *)(a1 + 4176) = 0;
  sub_1504FB0((__int64 *)(a1 + 4312), 3, 0);
  *(_QWORD *)(a1 + 4320) = a1 + 4336;
  *(_QWORD *)(a1 + 4368) = a1 + 4384;
  *(_QWORD *)(a1 + 4440) = a1 + 4456;
  *(_QWORD *)(a1 + 4520) = a1 + 4536;
  *(_QWORD *)(a1 + 9752) = a1 + 9776;
  *(_QWORD *)(a1 + 9808) = a1 + 9824;
  *(_WORD *)(a1 + 4512) = 0;
  *(_QWORD *)(a1 + 9816) = 0x100000000LL;
  *(_OWORD *)(a1 + 9840) = 0;
  *(_QWORD *)(a1 + 4328) = 0x200000000LL;
  *(_QWORD *)(a1 + 4376) = 0x200000000LL;
  *(_QWORD *)(a1 + 4416) = 0;
  *(_QWORD *)(a1 + 4424) = 0;
  *(_DWORD *)(a1 + 4432) = 0;
  *(_QWORD *)(a1 + 4448) = 0x400000000LL;
  *(_QWORD *)(a1 + 4488) = 0;
  *(_QWORD *)(a1 + 4496) = 0;
  *(_DWORD *)(a1 + 4504) = 0;
  *(_QWORD *)(a1 + 4528) = 0x800000000LL;
  *(_BYTE *)(a1 + 4600) = 0;
  *(_QWORD *)(a1 + 4608) = 0;
  *(_QWORD *)(a1 + 4616) = a1 + 4632;
  *(_QWORD *)(a1 + 4624) = 0x800000000LL;
  *(_QWORD *)(a1 + 9760) = 4;
  *(_DWORD *)(a1 + 9768) = 0;
  *(_BYTE *)(a1 + 9772) = 1;
  *(_QWORD *)(a1 + 9856) = 0;
  *(_DWORD *)(a1 + 9864) = 0;
  *(_QWORD *)(a1 + 9872) = 0;
  *(_QWORD *)(a1 + 9880) = 0;
  *(_QWORD *)(a1 + 9888) = 0;
  *(_BYTE *)(a1 + 9896) = 0;
  *(_QWORD *)(a1 + 9904) = 0;
  *(_QWORD *)(a1 + 9928) = a1 + 9944;
  *(_QWORD *)(a1 + 9952) = a1 + 9968;
  *(_QWORD *)(a1 + 9912) = 0;
  *(_DWORD *)(a1 + 9920) = 0;
  *(_QWORD *)(a1 + 9936) = 0;
  *(_QWORD *)(a1 + 9944) = 0;
  *(_QWORD *)(a1 + 9960) = 0x400000000LL;
  *(_QWORD *)(a1 + 10000) = 0;
  *(_QWORD *)(a1 + 10008) = 0;
  *(_DWORD *)(a1 + 10016) = 0;
  *(_BYTE *)(a1 + 10024) = 0;
  *(_QWORD *)(a1 + 10028) = 0;
  *(_QWORD *)(a1 + 10036) = 0;
  *(_QWORD *)(a1 + 10044) = 0;
  sub_2222F10(a1 + 10056, 6);
  *(_OWORD *)(a1 + 10928) = 0;
  *(_QWORD *)(a1 + 10096) = a1 + 10112;
  *(_QWORD *)(a1 + 10144) = a1 + 10160;
  *(_QWORD *)(a1 + 10952) = a1 + 10976;
  *(_QWORD *)(a1 + 11040) = a1 + 11064;
  *(_QWORD *)(a1 + 11168) = a1 + 11184;
  *(_QWORD *)(a1 + 11232) = a1 + 11248;
  *(_OWORD *)(a1 + 11128) = 0;
  *(_WORD *)(a1 + 11160) = 0;
  *(_QWORD *)(a1 + 11176) = 0x200000000LL;
  *(_QWORD *)(a1 + 10072) = 0;
  *(_QWORD *)(a1 + 10080) = 0;
  *(_DWORD *)(a1 + 10088) = 0;
  *(_QWORD *)(a1 + 10104) = 0;
  *(_QWORD *)(a1 + 10120) = 0;
  *(_QWORD *)(a1 + 10128) = 0;
  *(_DWORD *)(a1 + 10136) = 0;
  *(_QWORD *)(a1 + 10152) = 0x1000000000LL;
  *(_QWORD *)(a1 + 10944) = 0;
  *(_QWORD *)(a1 + 10960) = 8;
  *(_DWORD *)(a1 + 10968) = 0;
  *(_BYTE *)(a1 + 10972) = 1;
  *(_QWORD *)(a1 + 11048) = 8;
  *(_DWORD *)(a1 + 11056) = 0;
  *(_BYTE *)(a1 + 11060) = 1;
  *(_QWORD *)(a1 + 11144) = 0;
  *(_DWORD *)(a1 + 11152) = 0;
  *(_DWORD *)(a1 + 11200) = 0;
  *(_QWORD *)(a1 + 11208) = 0;
  *(_QWORD *)(a1 + 11216) = 0;
  *(_DWORD *)(a1 + 11224) = 0;
  *(_QWORD *)(a1 + 11240) = 0;
  *(_BYTE *)(a1 + 11248) = 0;
  *(_QWORD *)(a1 + 11312) = a1 + 11328;
  *(_OWORD *)(a1 + 12608) = 0;
  *(_QWORD *)(a1 + 12400) = a1 + 12416;
  *(_QWORD *)(a1 + 11256) = 0;
  *(_QWORD *)(a1 + 11264) = 0;
  *(_DWORD *)(a1 + 11272) = 0;
  *(_QWORD *)(a1 + 11280) = 0;
  *(_QWORD *)(a1 + 11288) = 0;
  *(_QWORD *)(a1 + 11296) = 0;
  *(_DWORD *)(a1 + 11304) = 0;
  *(_QWORD *)(a1 + 11320) = 0x1000000000LL;
  *(_QWORD *)(a1 + 12352) = 0;
  *(_QWORD *)(a1 + 12360) = 0;
  *(_DWORD *)(a1 + 12368) = 0;
  *(_QWORD *)(a1 + 12376) = 0;
  *(_QWORD *)(a1 + 12384) = 0;
  *(_DWORD *)(a1 + 12392) = 0;
  *(_QWORD *)(a1 + 12408) = 0x1000000000LL;
  *(_QWORD *)(a1 + 12544) = 0;
  *(_QWORD *)(a1 + 12552) = 0;
  *(_DWORD *)(a1 + 12560) = 0;
  *(_DWORD *)(a1 + 12584) = 0;
  *(_QWORD *)(a1 + 12568) = 0;
  *(_QWORD *)(a1 + 12576) = 0;
  *(_BYTE *)(a1 + 12592) = 0;
  *(_QWORD *)(a1 + 12596) = 0;
  *(_QWORD *)(a1 + 12624) = 0;
  *(_DWORD *)(a1 + 12632) = 0;
  *(_QWORD *)(a1 + 12640) = 0;
  *(_QWORD *)(a1 + 12648) = 0;
  *(_QWORD *)(a1 + 12656) = 0;
  *(_QWORD *)(a1 + 12664) = 0;
  *(_QWORD *)(a1 + 12672) = 0;
  *(_QWORD *)(a1 + 12680) = 0;
  *(_QWORD *)(a1 + 12688) = 0;
  *(_QWORD *)(a1 + 12696) = 0;
  *(_QWORD *)(a1 + 12704) = 0;
  *(_QWORD *)(a1 + 12712) = 0;
  sub_15F4510(a1 + 12640, 0);
  *(_QWORD *)(a1 + 12728) = 0x100000000LL;
  *(_QWORD *)(a1 + 12752) = a1 + 12768;
  *(_QWORD *)(a1 + 14944) = a1 + 14960;
  *(_QWORD *)(a1 + 12720) = a1 + 12736;
  *(_QWORD *)(a1 + 12760) = 0x800000000LL;
  *(_QWORD *)(a1 + 14952) = 0x800000000LL;
  *(_QWORD *)(a1 + 15600) = 0;
  *(_QWORD *)(a1 + 15608) = 0;
  *(_QWORD *)(a1 + 15616) = 0;
  *(_QWORD *)(a1 + 15624) = 0;
  *(_QWORD *)(a1 + 15632) = 0;
  *(_QWORD *)(a1 + 15640) = 0;
  *(_QWORD *)(a1 + 15648) = 0;
  *(_QWORD *)(a1 + 15656) = 0;
  *(_QWORD *)(a1 + 15664) = 0;
  *(_QWORD *)(a1 + 15672) = 0;
  sub_15F4510(a1 + 15600, 0);
  *(_DWORD *)(a1 + 15680) = 0;
  *(_QWORD *)(a1 + 15688) = 0;
  v52 = *(_QWORD *)(a1 + 248);
  *(_QWORD *)(a1 + 15696) = 0;
  *(_DWORD *)(a1 + 15704) = 0;
  *(_QWORD *)(a1 + 15712) = 0;
  *(_QWORD *)(a1 + 15720) = 0;
  *(_DWORD *)(a1 + 15728) = 0;
  sub_2222F10(a1 + 15736, 6);
  *(_QWORD *)(a1 + 15752) = v52;
  *(_QWORD *)(a1 + 15760) = a1 + 15776;
  *(_QWORD *)(a1 + 15768) = 0xA00000000LL;
  *(_QWORD *)(a1 + 17368) = a1 + 17384;
  *(_QWORD *)(a1 + 17376) = 0x600000000LL;
  v53 = *(_QWORD *)(a1 + 736);
  *(_QWORD *)(a1 + 17296) = 0;
  *(_QWORD *)(a1 + 17304) = 0;
  *(_DWORD *)(a1 + 17312) = 0;
  *(_QWORD *)(a1 + 17320) = 0;
  *(_DWORD *)(a1 + 17328) = 0;
  *(_BYTE *)(a1 + 17333) = 0;
  *(_OWORD *)(a1 + 17336) = 0;
  *(_OWORD *)(a1 + 17352) = 0;
  *(_QWORD *)(a1 + 17432) = 0;
  *(_QWORD *)(a1 + 192) = 0;
  *(_BYTE *)(a1 + 10112) = 0;
  *(_QWORD *)(v53 + 128) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 736) + 136LL) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 736) + 144LL) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 736) + 152LL) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 736) + 160LL) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 736) + 168LL) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 736) + 176LL) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 736) + 184LL) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 736) + 192LL) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 736) + 200LL) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 736) + 208LL) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 736) + 216LL) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 736) + 224LL) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 736) + 232LL) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 736) + 240LL) = 0;
  v54 = *(_QWORD *)(a1 + 232);
  if ( (*(_BYTE *)(v54 + 2) & 4) != 0 )
  {
    v69 = *(_QWORD *)(a1 + 736);
    v70 = operator new(0x2C8u);
    sub_E91D60(v70, *(_QWORD *)(a1 + 248));
    v71 = *(void **)(v69 + 88);
    *(_QWORD *)(v69 + 88) = v70;
    if ( v71 )
      operator delete(v71, 0x2C8u);
    v54 = *(_QWORD *)(a1 + 232);
  }
  if ( (*(_BYTE *)(v54 + 1) & 8) != 0 )
  {
    v66 = (_QWORD *)operator new(0x140u);
    v67 = *(_QWORD *)(a1 + 3920);
    *(_QWORD *)(a1 + 3920) = v66;
    memset(v66, 0, 0x140u);
    *v66 = v66 + 2;
    v66[1] = 0x2000000000LL;
    v66[34] = v66 + 36;
    v66[35] = 0x400000000LL;
    if ( v67 )
    {
      v68 = *(void **)(v67 + 272);
      if ( v68 != (void *)(v67 + 288) )
        free(v68);
      if ( *(_QWORD *)v67 != v67 + 16 )
        free(*(void **)v67);
      operator delete((void *)v67, 0x140u);
    }
  }
  v55 = *(_QWORD *)(a1 + 264);
  *(_QWORD *)(v55 + 216) = *(_QWORD *)(a1 + 248);
  *(_QWORD *)(v55 + 224) = sub_AC97F0;
  if ( *(_DWORD *)(a1 + 4628) <= *(_DWORD *)(a1 + 4624) )
  {
    v72 = sub_2237400(a1 + 4616, a1 + 4632, 0, 640, v76);
    v73 = v72 + 640LL * *(unsigned int *)(a1 + 4624);
    *(_WORD *)(v73 + 4) = 0;
    *(_QWORD *)(v73 + 40) = v73 + 56;
    *(_QWORD *)(v73 + 208) = v73 + 224;
    *(_QWORD *)(v73 + 48) = 0x400000000LL;
    *(_QWORD *)(v73 + 88) = v73 + 104;
    *(_QWORD *)(v73 + 96) = 0x200000000LL;
    *(_QWORD *)(v73 + 288) = v73 + 312;
    *(_QWORD *)(v73 + 384) = 0x200000000LL;
    *(_QWORD *)(v73 + 416) = 0x400000000LL;
    *(_QWORD *)(v73 + 128) = v73 + 144;
    *(_QWORD *)(v73 + 376) = v73 + 392;
    *(_QWORD *)(v73 + 408) = v73 + 424;
    *(_QWORD *)(v73 + 456) = v73 + 480;
    *(_DWORD *)v73 = 6;
    *(_DWORD *)(v73 + 8) = 0;
    *(_QWORD *)(v73 + 16) = 0;
    *(_QWORD *)(v73 + 24) = 0;
    *(_DWORD *)(v73 + 32) = 0;
    *(_QWORD *)(v73 + 120) = 0;
    *(_QWORD *)(v73 + 136) = 0x800000000LL;
    *(_QWORD *)(v73 + 216) = 0x800000000LL;
    *(_QWORD *)(v73 + 296) = 8;
    *(_DWORD *)(v73 + 304) = 0;
    *(_BYTE *)(v73 + 308) = 1;
    *(_QWORD *)(v73 + 464) = 4;
    *(_DWORD *)(v73 + 472) = 0;
    *(_BYTE *)(v73 + 476) = 1;
    *(_QWORD *)(v73 + 512) = v73 + 528;
    *(_QWORD *)(v73 + 520) = 0x800000000LL;
    *(_QWORD *)(v73 + 592) = 4;
    *(_DWORD *)(v73 + 600) = 0;
    *(_BYTE *)(v73 + 632) = 0;
    sub_15F4620((__int64 *)(a1 + 4616), v72);
    v74 = *(void **)(a1 + 4616);
    v75 = v76[0];
    if ( (void *)(a1 + 4632) != v74 )
      free(v74);
    *(_QWORD *)(a1 + 4616) = v72;
    *(_DWORD *)(a1 + 4628) = v75;
    ++*(_DWORD *)(a1 + 4624);
  }
  else
  {
    v56 = *(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624);
    *(_WORD *)(v56 + 4) = 0;
    *(_QWORD *)(v56 + 40) = v56 + 56;
    *(_QWORD *)(v56 + 48) = 0x400000000LL;
    *(_QWORD *)(v56 + 88) = v56 + 104;
    *(_QWORD *)(v56 + 208) = v56 + 224;
    *(_QWORD *)(v56 + 416) = 0x400000000LL;
    *(_QWORD *)(v56 + 96) = 0x200000000LL;
    *(_QWORD *)(v56 + 128) = v56 + 144;
    *(_QWORD *)(v56 + 288) = v56 + 312;
    *(_QWORD *)(v56 + 384) = 0x200000000LL;
    *(_QWORD *)(v56 + 456) = v56 + 480;
    *(_DWORD *)v56 = 6;
    *(_DWORD *)(v56 + 8) = 0;
    *(_QWORD *)(v56 + 16) = 0;
    *(_QWORD *)(v56 + 24) = 0;
    *(_DWORD *)(v56 + 32) = 0;
    *(_QWORD *)(v56 + 120) = 0;
    *(_QWORD *)(v56 + 136) = 0x800000000LL;
    *(_QWORD *)(v56 + 216) = 0x800000000LL;
    *(_QWORD *)(v56 + 296) = 8;
    *(_DWORD *)(v56 + 304) = 0;
    *(_BYTE *)(v56 + 308) = 1;
    *(_QWORD *)(v56 + 376) = v56 + 392;
    *(_QWORD *)(v56 + 408) = v56 + 424;
    *(_QWORD *)(v56 + 464) = 4;
    *(_DWORD *)(v56 + 472) = 0;
    *(_BYTE *)(v56 + 476) = 1;
    *(_QWORD *)(v56 + 512) = v56 + 528;
    *(_QWORD *)(v56 + 520) = 0x800000000LL;
    *(_QWORD *)(v56 + 592) = 4;
    *(_DWORD *)(v56 + 600) = 0;
    *(_BYTE *)(v56 + 632) = 0;
    ++*(_DWORD *)(a1 + 4624);
  }
  sub_1AF2AA0(*(_QWORD *)(a1 + 760));
  v57 = (_QWORD *)operator new(0x90u);
  v58 = *(_QWORD *)(a1 + 240);
  v59 = v57;
  *(_QWORD *)(a1 + 600) = v57;
  memset(v57, 0, 0x90u);
  v57[8] = v57 + 10;
  *v57 = &off_2C48DC8;
  v57[2] = v57 + 4;
  v60 = *(_QWORD *)(v58 + 1192);
  v57[3] = 0x800000000LL;
  v57[9] = 0x800000000LL;
  if ( v60 )
  {
    *(_QWORD *)(v58 + 1192) = 0;
    v61 = (_QWORD *)operator new(0x18u);
    v61[1] = v59;
    v61[2] = v60;
    v62 = *(_QWORD *)(v58 + 1192);
    *v61 = &off_2BB2860;
    *(_QWORD *)(v58 + 1192) = v61;
    if ( v62 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 8LL))(v62);
  }
  else
  {
    *(_QWORD *)(v58 + 1192) = v57;
  }
  v63 = *(_DWORD *)(a1 + 224);
  *(_QWORD *)(*(_QWORD *)(a1 + 600) + 8LL) = a1;
  result = v63 & 0xFFFE7FFF | (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 528LL) << 15);
  *(_DWORD *)(a1 + 224) = result;
  return result;
}
