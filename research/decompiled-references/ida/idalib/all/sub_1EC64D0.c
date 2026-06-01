void __fastcall sub_1EC64D0(
        __int64 a1,
        _QWORD *a2,
        __int64 (__fastcall **a3)(),
        __int64 *a4,
        _QWORD *a5,
        int a6,
        _QWORD *a7,
        __int64 a8,
        _BYTE *a9,
        __int64 **a10,
        __int32 a11,
        __int32 a12,
        int a13,
        int a14,
        int a15,
        char a16,
        __int64 *a17)
{
  _QWORD *v19; // rbx
  __m128 v20; // xmm0
  _QWORD *v21; // rax
  __int64 (__fastcall **v22)(); // rdx
  __int64 *v23; // r10
  _QWORD *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __m128i si128; // xmm0
  __int64 v28; // rax
  __int64 v29; // rax
  __m128i v30; // xmm0
  __int64 v31; // rax
  __m128i v32; // xmm0
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  __int64 **v36; // rdx
  __int8 v37; // al
  __int8 v38; // al
  char v39; // al
  char v40; // al
  char v41; // al
  _QWORD *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 *v45; // r12
  __int64 v46; // rax
  __m128i v47; // xmm0
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 *v50; // rbp
  __int64 v51; // rax
  __m128i v52; // xmm0
  __int64 v53; // rdx
  __m128i *v54; // rax
  __m128i v55; // xmm0
  _QWORD *i; // rax
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // rax
  void *v63; // r14
  size_t v64; // r13
  unsigned int v65; // eax
  int v66; // eax
  void *v67; // r13
  volatile signed __int32 *v68; // r13
  size_t v69; // r14
  unsigned int v70; // eax
  unsigned int v71; // eax
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 *v74; // r9
  __int64 v75; // rax
  unsigned int v76; // r10d
  __int64 *v77; // r9
  _QWORD *v78; // rcx
  __int64 v79; // rax
  __int64 (__fastcall **v80)(); // rdi
  unsigned int v81; // eax
  __m128i v82; // [rsp+0h] [rbp-108h] BYREF
  __int64 (__fastcall **v83)(); // [rsp+10h] [rbp-F8h] BYREF
  _QWORD *v84; // [rsp+18h] [rbp-F0h]
  __int64 *v85; // [rsp+20h] [rbp-E8h]
  __int64 v86; // [rsp+28h] [rbp-E0h]
  __int64 **v87; // [rsp+30h] [rbp-D8h]
  __int64 v88; // [rsp+38h] [rbp-D0h]
  __int64 *v89; // [rsp+40h] [rbp-C8h]
  _QWORD *v90; // [rsp+48h] [rbp-C0h]
  char v91; // [rsp+58h] [rbp-B0h] BYREF
  void *v92; // [rsp+60h] [rbp-A8h]
  size_t n; // [rsp+68h] [rbp-A0h]
  __m128i v94; // [rsp+70h] [rbp-98h] BYREF
  void *v95; // [rsp+80h] [rbp-88h] BYREF
  size_t v96; // [rsp+88h] [rbp-80h]
  __m128i v97; // [rsp+90h] [rbp-78h] BYREF
  void *v98; // [rsp+A8h] [rbp-60h]
  __int64 v99; // [rsp+B8h] [rbp-50h] BYREF

  v19 = a7;
  v88 = a8;
  v87 = a10;
  v82.m128i_i32[0] = a11;
  v82.m128i_i32[2] = a12;
  LODWORD(v84) = a13;
  LODWORD(v85) = a14;
  *(_QWORD *)(a1 + 32) = 0;
  LODWORD(v86) = a15;
  v83 = off_2C70EA0;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v83);
  v83 = off_2C70F08;
  v90 = a5;
  v89 = a4;
  *(__m128 *)(a1 + 16) = _mm_loadh_ps((const double *)&v83);
  v83 = off_2C710E8;
  v20 = _mm_loadh_ps((const double *)&v83);
  v83 = a3;
  *(__m128 *)(a1 + 40) = v20;
  if ( (a6 & 1) != 0 )
  {
    v21 = (_QWORD *)operator new(0x10u);
    v22 = v83;
    v23 = v89;
    v24 = v90;
    v21[1] = a2;
    *v21 = off_2BE4668;
  }
  else
  {
    v21 = (_QWORD *)operator new(0x18u);
    v24 = v90;
    v23 = v89;
    v22 = v83;
    v21[1] = a2;
    v21[2] = a1;
    *v21 = off_2BE45B0;
  }
  *(_QWORD *)(a1 + 56) = v21;
  *(_QWORD *)(a1 + 64) = 0;
  *(_BYTE *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = a2[11];
  v25 = a2[10];
  *(_QWORD *)(a1 + 96) = v24;
  *(_QWORD *)(a1 + 88) = v25;
  v26 = a2[6];
  *(_QWORD *)(a1 + 144) = v23;
  *(_QWORD *)(a1 + 104) = v26;
  *(_QWORD *)(a1 + 112) = v26;
  *(_QWORD *)(a1 + 136) = a2;
  *(_BYTE *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  sub_1FDD820(a1 + 160, a2[10], v22, v24, a2[13]);
  sub_15C1130((_QWORD *)(a1 + 448), (__int64)a2);
  v83 = (__int64 (__fastcall **)())(a1 + 472);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A9810);
  *(_QWORD *)(a1 + 1648) = a1 + 1664;
  v28 = *a17;
  *(_BYTE *)(a1 + 512) = 0;
  *a17 = 0;
  *(_QWORD *)(a1 + 496) = v28;
  *(_QWORD *)(a1 + 528) = a1 + 544;
  *(_QWORD *)(a1 + 608) = a1 + 624;
  *(_QWORD *)(a1 + 616) = 0x4000000000LL;
  *(_QWORD *)(a1 + 1656) = 0x4000000000LL;
  *(_QWORD *)(a1 + 472) = 0;
  *(_DWORD *)(a1 + 504) = 0;
  *(_QWORD *)(a1 + 520) = 0;
  *(_QWORD *)(a1 + 536) = 0x400000000LL;
  *(_QWORD *)(a1 + 2688) = 0;
  *(_QWORD *)(a1 + 2696) = a1 + 2712;
  *(_QWORD *)(a1 + 2704) = 0;
  *(__m128i *)(a1 + 480) = si128;
  v29 = operator new(0x60u);
  v30 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  *(_OWORD *)v29 = 0;
  *(_QWORD *)(v29 + 16) = v29 + 32;
  *(_QWORD *)(v29 + 64) = v29 + 80;
  *(__m128i *)(v29 + 80) = v30;
  *(_QWORD *)(v29 + 24) = 0x400000000LL;
  *(_QWORD *)(v29 + 72) = 0;
  *(_QWORD *)(a1 + 2712) = v29 | 4;
  *(_QWORD *)(a1 + 2720) = 0;
  *(_QWORD *)(a1 + 2728) = a1 + 2744;
  *(_QWORD *)(a1 + 2736) = 0;
  v31 = operator new(0x60u);
  v32 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  *(_QWORD *)(a1 + 2752) = 0;
  *(_OWORD *)v31 = 0;
  *(_QWORD *)(v31 + 16) = v31 + 32;
  *(_QWORD *)(v31 + 64) = v31 + 80;
  *(_QWORD *)(v31 + 24) = 0x400000000LL;
  *(_QWORD *)(v31 + 72) = 0;
  *(__m128i *)(v31 + 80) = v32;
  *(_QWORD *)(a1 + 2744) = v31 | 4;
  *(_QWORD *)(a1 + 2824) = a1 + 2840;
  *(_QWORD *)(a1 + 2832) = 0x1000000000LL;
  v33 = (_QWORD *)(a1 + 3256);
  *(_QWORD *)(a1 + 2760) = 0;
  *(_DWORD *)(a1 + 2768) = 0;
  *(_QWORD *)(a1 + 2776) = 0;
  *(_QWORD *)(a1 + 2784) = 0;
  *(_DWORD *)(a1 + 2792) = 0;
  *(_QWORD *)(a1 + 2800) = 0;
  *(_QWORD *)(a1 + 2808) = 0;
  *(_DWORD *)(a1 + 2816) = 0;
  *(_QWORD *)(a1 + 3224) = 0;
  *(_QWORD *)(a1 + 3232) = 0;
  *(_DWORD *)(a1 + 3240) = 0;
  *(_QWORD *)(a1 + 3248) = 1;
  if ( a1 + 3256 != a1 + 3320 )
  {
    do
    {
      *v33 = -4096;
      v33 += 2;
    }
    while ( (_QWORD *)(a1 + 3320) != v33 );
  }
  *(_QWORD *)(a1 + 3400) = 1;
  *(_QWORD *)(a1 + 3320) = a1 + 3336;
  *(_QWORD *)(a1 + 3328) = 0x400000000LL;
  v34 = (_QWORD *)(a1 + 3408);
  if ( a1 + 3408 != a1 + 3472 )
  {
    do
    {
      *v34 = -4096;
      v34 += 2;
    }
    while ( (_QWORD *)(a1 + 3472) != v34 );
  }
  *(_QWORD *)(a1 + 3600) = 0;
  *(_QWORD *)(a1 + 3472) = a1 + 3488;
  *(_QWORD *)(a1 + 3480) = 0x400000000LL;
  *(_QWORD *)(a1 + 3560) = 0x400000000LL;
  *(_QWORD *)(a1 + 3552) = a1 + 3568;
  *(_QWORD *)(a1 + 3608) = 0;
  *(_DWORD *)(a1 + 3616) = 0;
  *(_QWORD *)(a1 + 3624) = 0;
  *(_QWORD *)(a1 + 3632) = 0;
  *(_DWORD *)(a1 + 3640) = 0;
  *(_QWORD *)(a1 + 3648) = 0;
  *(_QWORD *)(a1 + 3656) = 0;
  *(_DWORD *)(a1 + 3664) = 0;
  *(_QWORD *)(a1 + 3672) = 0;
  *(_QWORD *)(a1 + 3680) = 0;
  *(_DWORD *)(a1 + 3688) = 0;
  *(_QWORD *)(a1 + 3696) = 0;
  *(_QWORD *)(a1 + 3704) = 0;
  *(_DWORD *)(a1 + 3712) = 0;
  *(_QWORD *)(a1 + 3720) = 0;
  *(_QWORD *)(a1 + 3728) = 0;
  *(_DWORD *)(a1 + 3736) = 0;
  *(_QWORD *)(a1 + 3744) = 0;
  *(_QWORD *)(a1 + 3752) = 0;
  *(_QWORD *)(a1 + 3760) = 0;
  *(_QWORD *)(a1 + 3768) = 0;
  *(_QWORD *)(a1 + 3776) = 0;
  *(_DWORD *)(a1 + 3784) = 0;
  *(_QWORD *)(a1 + 3792) = 0;
  *(_QWORD *)(a1 + 3800) = 0;
  *(_DWORD *)(a1 + 3808) = 0;
  *(_QWORD *)(a1 + 3816) = 0;
  *(_QWORD *)(a1 + 3824) = 0;
  *(_QWORD *)(a1 + 4008) = a1 + 4032;
  v35 = (_QWORD *)(a1 + 4072);
  *(_DWORD *)(a1 + 3832) = 0;
  *(_QWORD *)(a1 + 3840) = 0;
  *(_QWORD *)(a1 + 3848) = 0;
  *(_DWORD *)(a1 + 3856) = 0;
  *(_QWORD *)(a1 + 3864) = 0;
  *(_QWORD *)(a1 + 3872) = 0;
  *(_DWORD *)(a1 + 3880) = 0;
  *(_QWORD *)(a1 + 3888) = 0;
  *(_QWORD *)(a1 + 3896) = 0;
  *(_DWORD *)(a1 + 3904) = 0;
  *(_QWORD *)(a1 + 3912) = 0;
  *(_QWORD *)(a1 + 3920) = 0;
  *(_DWORD *)(a1 + 3928) = 0;
  *(_QWORD *)(a1 + 3936) = 0;
  *(_QWORD *)(a1 + 3944) = 0;
  *(_DWORD *)(a1 + 3952) = 0;
  *(_DWORD *)(a1 + 3976) = 0;
  *(_QWORD *)(a1 + 3960) = 0;
  *(_QWORD *)(a1 + 3968) = 0;
  *(_QWORD *)(a1 + 3984) = 0;
  *(_QWORD *)(a1 + 3992) = 0;
  *(_DWORD *)(a1 + 4000) = 0;
  *(_QWORD *)(a1 + 4016) = 4;
  *(_DWORD *)(a1 + 4024) = 0;
  *(_BYTE *)(a1 + 4028) = 1;
  *(_QWORD *)(a1 + 4064) = 1;
  if ( a1 + 4072 != a1 + 4136 )
  {
    do
    {
      *v35 = -4096;
      v35 += 2;
    }
    while ( (_QWORD *)(a1 + 4136) != v35 );
  }
  *(_QWORD *)(a1 + 4136) = a1 + 4152;
  *(_QWORD *)(a1 + 4240) = a1 + 4256;
  *(_QWORD *)(a1 + 4256) = a1 + 4272;
  *(_QWORD *)(a1 + 4504) = a1 + 4520;
  *(_QWORD *)(a1 + 4392) = a1 + 4408;
  *(_QWORD *)(a1 + 4608) = a1 + 4624;
  *(_QWORD *)(a1 + 4472) = a1 + 4488;
  *(_QWORD *)(a1 + 4720) = a1 + 4736;
  *(_QWORD *)(a1 + 4864) = a1 + 4880;
  *(_QWORD *)(a1 + 4480) = 0x200000000LL;
  *(_QWORD *)(a1 + 4616) = 0x200000000LL;
  *(_QWORD *)(a1 + 4264) = 0x300000000LL;
  *(_QWORD *)(a1 + 4728) = 0x1000000000LL;
  *(_QWORD *)(a1 + 4144) = 0x400000000LL;
  *(_QWORD *)(a1 + 4216) = 0;
  *(_QWORD *)(a1 + 4224) = 0;
  *(_DWORD *)(a1 + 4232) = 0;
  *(_QWORD *)(a1 + 4248) = 0;
  *(_QWORD *)(a1 + 4320) = 0;
  *(_QWORD *)(a1 + 4328) = 0;
  *(_QWORD *)(a1 + 4336) = 0;
  *(_QWORD *)(a1 + 4344) = 0;
  *(_QWORD *)(a1 + 4352) = 0;
  *(_QWORD *)(a1 + 4360) = 0;
  *(_QWORD *)(a1 + 4368) = 0;
  *(_QWORD *)(a1 + 4376) = 0;
  *(_DWORD *)(a1 + 4384) = 0;
  *(_QWORD *)(a1 + 4400) = 0x400000000LL;
  *(_QWORD *)(a1 + 4512) = 0x400000000LL;
  *(_QWORD *)(a1 + 4584) = 0;
  *(_QWORD *)(a1 + 4592) = 0;
  *(_DWORD *)(a1 + 4600) = 0;
  *(_QWORD *)(a1 + 4872) = 0x400000000LL;
  *(_QWORD *)(a1 + 5016) = a1 + 5032;
  *(_QWORD *)(a1 + 5032) = a1 + 5048;
  *(_QWORD *)(a1 + 5112) = a1 + 5128;
  *(_QWORD *)(a1 + 5192) = a1 + 5208;
  *(_QWORD *)(a1 + 5336) = a1 + 5352;
  *(_QWORD *)(a1 + 5480) = a1 + 5496;
  *(_QWORD *)(a1 + 5624) = a1 + 5640;
  *(_QWORD *)(a1 + 6728) = a1 + 6744;
  *(_QWORD *)(a1 + 5632) = 0x300000000LL;
  *(_QWORD *)(a1 + 6872) = a1 + 6888;
  *(_QWORD *)(a1 + 5688) = a1 + 5704;
  *(_QWORD *)(a1 + 6920) = a1 + 6936;
  *(_QWORD *)(a1 + 7192) = a1 + 7208;
  *(_QWORD *)(a1 + 5200) = 0x1000000000LL;
  *(_QWORD *)(a1 + 5344) = 0x1000000000LL;
  *(_QWORD *)(a1 + 5488) = 0x1000000000LL;
  *(_QWORD *)(a1 + 5696) = 0x4000000000LL;
  *(_QWORD *)(a1 + 6736) = 0x1000000000LL;
  *(_QWORD *)(a1 + 6928) = 0x4000000000LL;
  *(_QWORD *)(a1 + 4944) = 0;
  *(_QWORD *)(a1 + 4952) = 0;
  *(_DWORD *)(a1 + 4960) = 0;
  *(_QWORD *)(a1 + 4968) = 0;
  *(_QWORD *)(a1 + 4976) = 0;
  *(_DWORD *)(a1 + 4984) = 0;
  *(_QWORD *)(a1 + 4992) = 0;
  *(_QWORD *)(a1 + 5000) = 0;
  *(_DWORD *)(a1 + 5008) = 0;
  *(_QWORD *)(a1 + 5024) = 0;
  *(_QWORD *)(a1 + 5040) = 0x400000000LL;
  *(_QWORD *)(a1 + 5120) = 0x400000000LL;
  *(_QWORD *)(a1 + 6880) = 0x400000000LL;
  *(_QWORD *)(a1 + 7200) = 0x4000000000LL;
  *(_QWORD *)(a1 + 7720) = a1 + 7736;
  *(_QWORD *)(a1 + 7776) = 0x1000000000LL;
  *(_QWORD *)(a1 + 7976) = 0x1000000000LL;
  *(_QWORD *)(a1 + 7768) = a1 + 7784;
  *(_QWORD *)(a1 + 8112) = a1 + 8128;
  *(_QWORD *)(a1 + 7920) = a1 + 7936;
  *(_QWORD *)(a1 + 8144) = a1 + 8160;
  *(_QWORD *)(a1 + 7968) = a1 + 7984;
  *(_QWORD *)(a1 + 8200) = a1 + 8216;
  *(_QWORD *)(a1 + 8152) = 0x100000000LL;
  *(_QWORD *)(a1 + 8280) = a1 + 8296;
  *(_QWORD *)(a1 + 8168) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 8376) = a1 + 8392;
  *(_QWORD *)(a1 + 8120) = 0x200000000LL;
  *(_QWORD *)(a1 + 8176) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 8208) = 0x200000000LL;
  *(_QWORD *)(a1 + 8288) = 0x200000000LL;
  *(_QWORD *)(a1 + 8384) = 0x200000000LL;
  *(_QWORD *)(a1 + 8456) = a1 + 8472;
  *(_QWORD *)(a1 + 8464) = 0x200000000LL;
  *(_QWORD *)(a1 + 7728) = 0x400000000LL;
  *(_DWORD *)(a1 + 7912) = 0;
  *(_QWORD *)(a1 + 7928) = 0x400000000LL;
  *(_BYTE *)(a1 + 0x2000) = 0;
  *(_DWORD *)(a1 + 8196) = 0;
  *(_BYTE *)(a1 + 8364) = 0;
  *(_DWORD *)(a1 + 8368) = 0;
  sub_FFAE80(a1 + 8536);
  *(_QWORD *)(a1 + 8608) = a1 + 8624;
  *(_QWORD *)(a1 + 8656) = a1 + 8672;
  *(_QWORD *)(a1 + 8664) = 0x800000000LL;
  *(_QWORD *)(a1 + 8808) = 0x800000000LL;
  *(_QWORD *)(a1 + 8880) = a1 + 8896;
  *(_QWORD *)(a1 + 9048) = a1 + 9064;
  *(_QWORD *)(a1 + 9096) = a1 + 9112;
  *(_QWORD *)(a1 + 9104) = 0x600000000LL;
  *(_QWORD *)(a1 + 9160) = a1 + 9176;
  *(_QWORD *)(a1 + 9168) = 0x200000000LL;
  *(_QWORD *)(a1 + 9200) = 0x200000000LL;
  *(_QWORD *)(a1 + 8800) = a1 + 8816;
  *(_QWORD *)(a1 + 9192) = a1 + 9208;
  v36 = v87;
  *(_QWORD *)(a1 + 9224) = a1 + 9240;
  *(_QWORD *)(a1 + 8560) = 0;
  *(_QWORD *)(a1 + 8568) = 0;
  *(_DWORD *)(a1 + 8576) = 0;
  *(_QWORD *)(a1 + 8584) = 0;
  *(_QWORD *)(a1 + 8592) = 0;
  *(_DWORD *)(a1 + 8600) = 0;
  *(_QWORD *)(a1 + 8616) = 0x400000000LL;
  *(_QWORD *)(a1 + 8888) = 0x400000000LL;
  *(_QWORD *)(a1 + 9024) = 0;
  *(_QWORD *)(a1 + 9032) = 0;
  *(_DWORD *)(a1 + 9040) = 0;
  *(_QWORD *)(a1 + 9056) = 0x400000000LL;
  sub_1EA9D80((_QWORD *)(a1 + 9224), a9, (__int64)v36 + (_QWORD)a9);
  v37 = v82.m128i_i8[0];
  *(_DWORD *)(a1 + 9256) = a6;
  *(_BYTE *)(a1 + 9265) = a16;
  *(_BYTE *)(a1 + 9260) = v37;
  v38 = v82.m128i_i8[8];
  *(_QWORD *)(a1 + 9272) = 0;
  *(_BYTE *)(a1 + 9261) = v38;
  v39 = (char)v84;
  *(_QWORD *)(a1 + 9280) = 0;
  *(_BYTE *)(a1 + 9262) = v39;
  v40 = (char)v85;
  *(_DWORD *)(a1 + 9288) = 0;
  *(_BYTE *)(a1 + 9263) = v40;
  v41 = v86;
  *(_OWORD *)(a1 + 9304) = 0;
  *(_BYTE *)(a1 + 9264) = v41;
  *(_WORD *)(a1 + 9266) = 0;
  *(_QWORD *)(a1 + 9296) = a1 + 9272;
  *(_QWORD *)(a1 + 9440) = a1 + 9456;
  v42 = (_QWORD *)(a1 + 9464);
  *(_OWORD *)(a1 + 9320) = 0;
  *(_OWORD *)(a1 + 9336) = 0;
  *(_OWORD *)(a1 + 9352) = 0;
  *(_OWORD *)(a1 + 9368) = 0;
  *(_QWORD *)(a1 + 9384) = 0;
  *(_DWORD *)(a1 + 9392) = 0;
  *(_QWORD *)(a1 + 9400) = 0;
  *(_DWORD *)(a1 + 9408) = 0;
  *(_BYTE *)(a1 + 9412) = 1;
  *(_QWORD *)(a1 + 9416) = 0;
  *(_QWORD *)(a1 + 9424) = 0;
  *(_DWORD *)(a1 + 9432) = 0;
  *(_QWORD *)(a1 + 9448) = 0;
  *(_QWORD *)(a1 + 9456) = 1;
  if ( a1 + 9464 != a1 + 9720 )
  {
    do
    {
      *v42 = -4096;
      v42 += 2;
    }
    while ( (_QWORD *)(a1 + 9720) != v42 );
  }
  *(_QWORD *)(a1 + 10376) = 0;
  *(_QWORD *)(a1 + 9728) = 0x1000000000LL;
  *(_QWORD *)(a1 + 9720) = a1 + 9736;
  *(_QWORD *)(a1 + 10384) = 0;
  *(_DWORD *)(a1 + 10392) = 0;
  *(_QWORD *)(a1 + 10400) = 0;
  *(_QWORD *)(a1 + 10416) = 0;
  *(_QWORD *)(a1 + 10424) = 0;
  *(_QWORD *)(a1 + 10432) = 0;
  *(_QWORD *)(a1 + 10440) = 0;
  *(_QWORD *)(a1 + 10448) = 0;
  *(_QWORD *)(a1 + 10456) = 0;
  *(_QWORD *)(a1 + 10464) = 0;
  *(_QWORD *)(a1 + 10472) = 0;
  *(_QWORD *)(a1 + 10408) = 8;
  v43 = operator new(0x40u);
  v44 = *(_QWORD *)(a1 + 10408);
  *(_QWORD *)(a1 + 10400) = v43;
  v45 = (__int64 *)(v43 + 8 * ((unsigned __int64)(v44 - 1) >> 1));
  v46 = operator new(0x200u);
  *(_QWORD *)(a1 + 10488) = 0x1000000000LL;
  v82.m128i_i64[0] = v46;
  v47 = _mm_loadl_epi64(&v82);
  *v45 = v46;
  *(_QWORD *)(a1 + 10456) = v46;
  *(_QWORD *)(a1 + 10448) = v46;
  *(_QWORD *)(a1 + 10480) = a1 + 10496;
  *(_QWORD *)(a1 + 10752) = a1 + 10768;
  *(_QWORD *)(a1 + 11024) = a1 + 11040;
  *(_QWORD *)(a1 + 10432) = v46 + 512;
  *(_QWORD *)(a1 + 10464) = v46 + 512;
  *(_QWORD *)(a1 + 10760) = 0x1000000000LL;
  *(_QWORD *)(a1 + 11032) = 0x1000000000LL;
  *(_QWORD *)(a1 + 11304) = 0x1000000000LL;
  *(_QWORD *)(a1 + 10440) = v45;
  *(_QWORD *)(a1 + 10472) = v45;
  *(_QWORD *)(a1 + 11296) = a1 + 11312;
  *(_QWORD *)(a1 + 11440) = 0;
  *(_QWORD *)(a1 + 11456) = 0;
  *(_QWORD *)(a1 + 11464) = 0;
  *(_QWORD *)(a1 + 11472) = 0;
  *(_QWORD *)(a1 + 11480) = 0;
  *(_QWORD *)(a1 + 11488) = 0;
  *(_QWORD *)(a1 + 11496) = 0;
  *(_QWORD *)(a1 + 11504) = 0;
  *(_QWORD *)(a1 + 11512) = 0;
  *(_QWORD *)(a1 + 11448) = 8;
  *(__m128i *)(a1 + 10416) = _mm_unpacklo_epi64(v47, v47);
  v48 = operator new(0x40u);
  v49 = *(_QWORD *)(a1 + 11448);
  *(_QWORD *)(a1 + 11440) = v48;
  v50 = (__int64 *)(v48 + 8 * ((unsigned __int64)(v49 - 1) >> 1));
  v51 = operator new(0x1F8u);
  *(_QWORD *)(a1 + 11480) = v50;
  v82.m128i_i64[0] = v51;
  v52 = _mm_loadl_epi64(&v82);
  v53 = v51 + 504;
  *v50 = v51;
  *(_QWORD *)(a1 + 11496) = v51;
  *(_QWORD *)(a1 + 11488) = v51;
  v54 = (__m128i *)(a1 + 11528);
  *(_QWORD *)(a1 + 11472) = v53;
  *(_QWORD *)(a1 + 11504) = v53;
  *(__m128i *)(a1 + 11456) = _mm_unpacklo_epi64(v52, v52);
  v55 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
  *(_QWORD *)(a1 + 11512) = v50;
  for ( *(_QWORD *)(a1 + 11520) = 1; (__m128i *)(a1 + 11576) != v54; v54 = (__m128i *)((char *)v54 + 24) )
    *v54 = v55;
  *(_QWORD *)(a1 + 12008) = 1;
  *(_QWORD *)(a1 + 11576) = a1 + 11592;
  *(_QWORD *)(a1 + 11584) = 0x200000000LL;
  *(_QWORD *)(a1 + 11784) = a1 + 11800;
  *(_QWORD *)(a1 + 11792) = 0x400000000LL;
  *(_QWORD *)(a1 + 11864) = a1 + 11880;
  *(_QWORD *)(a1 + 11872) = 0x1000000000LL;
  for ( i = (_QWORD *)(a1 + 12016); (_QWORD *)(a1 + 12128) != i; i += 7 )
    *i = -4096;
  v57 = (_QWORD *)(a1 + 12136);
  for ( *(_QWORD *)(a1 + 12128) = 1; (_QWORD *)(a1 + 12216) != v57; v57 += 5 )
    *v57 = -4096;
  v58 = (_QWORD *)(a1 + 12224);
  for ( *(_QWORD *)(a1 + 12216) = 1; (_QWORD *)(a1 + 12304) != v58; v58 += 5 )
    *v58 = -4096;
  v59 = (_QWORD *)(a1 + 12312);
  for ( *(_QWORD *)(a1 + 12304) = 1; (_QWORD *)(a1 + 12392) != v59; v59 += 5 )
    *v59 = -4096;
  v60 = (_QWORD *)(a1 + 12400);
  for ( *(_QWORD *)(a1 + 12392) = 1; (_QWORD *)(a1 + 12512) != v60; v60 += 7 )
    *v60 = -4096;
  v61 = (_QWORD *)(a1 + 12520);
  for ( *(_QWORD *)(a1 + 12512) = 1; (_QWORD *)(a1 + 12632) != v61; v61 += 7 )
    *v61 = -4096;
  *(_QWORD *)(a1 + 12640) = 2;
  *(_QWORD *)(a1 + 12632) = a1 + 12656;
  *(_QWORD *)(a1 + 12672) = a1 + 12696;
  *(_QWORD *)(a1 + 12824) = a1 + 12840;
  *(_QWORD *)(a1 + 13064) = a1 + 13080;
  *(_QWORD *)(a1 + 12832) = 0x1000000000LL;
  *(_QWORD *)(a1 + 13072) = 0x1000000000LL;
  *(_QWORD *)(a1 + 13216) = a1 + 13232;
  *(_DWORD *)(a1 + 12648) = 0;
  *(_BYTE *)(a1 + 12652) = 1;
  *(_QWORD *)(a1 + 12680) = 16;
  *(_DWORD *)(a1 + 12688) = 0;
  *(_BYTE *)(a1 + 12692) = 1;
  *(_QWORD *)(a1 + 12968) = 0;
  *(_QWORD *)(a1 + 12976) = 0;
  *(_DWORD *)(a1 + 12984) = 0;
  *(_QWORD *)(a1 + 12992) = 0;
  *(_QWORD *)(a1 + 13000) = 0;
  *(_DWORD *)(a1 + 13008) = 0;
  *(_QWORD *)(a1 + 13016) = 0;
  *(_QWORD *)(a1 + 13024) = 0;
  *(_DWORD *)(a1 + 13032) = 0;
  *(_QWORD *)(a1 + 13040) = 0;
  *(_QWORD *)(a1 + 13048) = 0;
  *(_DWORD *)(a1 + 13056) = 0;
  *(_DWORD *)(a1 + 13208) = 0;
  *(_QWORD *)(a1 + 13224) = 0;
  *(_BYTE *)(a1 + 13232) = 0;
  *(_QWORD *)(a1 + 13248) = 0;
  *(_QWORD *)(a1 + 13256) = 0;
  *(_DWORD *)(a1 + 13264) = 0;
  *(_QWORD *)(a1 + 13272) = 0;
  *(_QWORD *)(a1 + 13280) = 0;
  *(_QWORD *)(a1 + 13328) = 0x1000000000LL;
  *(_QWORD *)(a1 + 13464) = a1 + 13480;
  *(_QWORD *)(a1 + 13472) = 0x800000000LL;
  v62 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 13320) = a1 + 13336;
  *(_DWORD *)(a1 + 13288) = 0;
  *(_QWORD *)(a1 + 13296) = a1 + 13320;
  *(_OWORD *)(a1 + 13304) = 0;
  *(_QWORD *)(v62 + 464) = a1 + 48;
  sub_2236E10(a1 + 13296, a1 + 13320, 256, 1);
  v84 = &a7[2 * v88];
  if ( v84 != a7 )
  {
    v82.m128i_i64[0] = (__int64)&v94;
    v85 = &v99;
    v87 = (__int64 **)&v91;
    do
    {
      (*(void (__fastcall **)(void **))(*(_QWORD *)*v19 + 40LL))(&v95);
      v92 = (void *)v82.m128i_i64[0];
      if ( v95 == &v97 )
      {
        v94 = _mm_load_si128(&v97);
      }
      else
      {
        v92 = v95;
        v94.m128i_i64[0] = v97.m128i_i64[0];
      }
      v95 = &v97;
      v97.m128i_i8[0] = 0;
      n = v96;
      v96 = 0;
      if ( v98 != v85 )
      {
        operator delete(v98);
        if ( v95 != &v97 )
          operator delete(v95);
      }
      v63 = v92;
      v64 = n;
      v65 = sub_2244B30(v92, n);
      v66 = sub_2244E60(v83, v63, v64, v65);
      if ( v66 == -1 )
        sub_1EC6490((__int64 **)&v95, (__int64 *)(*(_QWORD *)(a1 + 472) + 8LL * *(unsigned int *)(a1 + 480)), 1);
      else
        sub_1EC6490((__int64 **)&v95, (__int64 *)(*(_QWORD *)(a1 + 472) + 8LL * v66), 1);
      v67 = v95;
      sub_1EC6490((__int64 **)&v95, (__int64 *)(*(_QWORD *)(a1 + 472) + 8LL * *(unsigned int *)(a1 + 480)), 1);
      if ( v95 == v67 )
      {
        v68 = (volatile signed __int32 *)v19[1];
        v69 = n;
        v82.m128i_i64[1] = (__int64)v92;
        v86 = *v19;
        if ( v68 )
        {
          if ( &_pthread_key_create )
            _InterlockedAdd(v68 + 2, 1u);
          else
            ++*((_DWORD *)v68 + 2);
        }
        v96 = v69;
        v95 = (void *)v82.m128i_i64[1];
        v70 = sub_2244B30(v82.m128i_i64[1], v69);
        v71 = sub_2244CB0(v83, v82.m128i_i64[1], v69, v70);
        v74 = (__int64 *)(*(_QWORD *)(a1 + 472) + 8LL * v71);
        if ( !*v74 )
          goto LABEL_49;
        if ( *v74 == -8 )
        {
          --*(_DWORD *)(a1 + 488);
LABEL_49:
          v89 = v74;
          LODWORD(v88) = v71;
          v75 = sub_22300B0(v69 + 25, 8, v71, v72, v73, v74);
          v76 = v88;
          v77 = v89;
          v78 = (_QWORD *)v75;
          if ( v69 )
          {
            v90 = (_QWORD *)v75;
            memcpy((void *)(v75 + 24), (const void *)v82.m128i_i64[1], v69);
            v78 = v90;
            v77 = v89;
            v76 = v88;
          }
          v79 = v86;
          *((_BYTE *)v78 + v69 + 24) = 0;
          *v78 = v69;
          v80 = v83;
          v78[1] = v79;
          v78[2] = v68;
          *v77 = (__int64)v78;
          ++*(_DWORD *)(a1 + 484);
          v81 = sub_22450D0(v80, v76);
          sub_1EC6490(v87, (__int64 *)(*(_QWORD *)(a1 + 472) + 8LL * v81), 0);
          goto LABEL_28;
        }
        sub_1EC6490(v87, v74, 0);
        if ( v68 )
          sub_4343A0(v68);
      }
      else
      {
        sub_FC70B0((__int64)&v95, *(_QWORD *)(a1 + 104), 0, 949);
        sub_AEC220((unsigned __int8 **)&v95, v92, n);
        sub_AEA040((__int64)&v95);
      }
LABEL_28:
      if ( v92 != (void *)v82.m128i_i64[0] )
        operator delete(v92);
      v19 += 2;
    }
    while ( v84 != v19 );
  }
}
