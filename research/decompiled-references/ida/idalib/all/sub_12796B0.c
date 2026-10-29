void __fastcall sub_12796B0(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4)
{
  __int64 v6; // r13
  unsigned __int64 v7; // r12
  __int32 v10; // eax
  __int32 v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rdi
  _BYTE *v19; // rax
  __int64 v20; // rdx
  _BYTE *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rsi
  _BYTE *v26; // rax
  size_t v27; // rdx
  size_t v28; // rsi
  __int64 v29; // rdi
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rsi
  unsigned __int64 v34; // rax
  _QWORD *v35; // rdi
  _BYTE *v36; // rsi
  __int64 v37; // rdx
  size_t v38; // rbx
  size_t v39; // rdx
  _BYTE *v40; // rsi
  __int64 v41; // r15
  __int64 v42; // rdx
  __int64 (__fastcall *v43)(__int64, __m128i *, __int64, void *); // r12
  __int64 v44; // rdx
  __int64 v45; // rdi
  void *v46; // rcx
  size_t v47; // r13
  unsigned __int64 v48; // rax
  char v49; // r12
  __int64 v50; // rax
  _BYTE *v51; // rsi
  __int64 v52; // rdx
  __int64 v53; // rdx
  size_t v54; // r8
  _BYTE *v55; // rdi
  _BYTE *v56; // rcx
  size_t v57; // r13
  unsigned __int64 v58; // rax
  _BYTE *v59; // rdi
  char v60; // al
  __int64 v61; // rdx
  __int64 v62; // rsi
  __int64 v63; // rcx
  __m128i *v64; // rax
  __m128i *v65; // rdx
  _BYTE *v66; // rdi
  __int64 v67; // rax
  _BYTE *v68; // rsi
  __int64 v69; // rdx
  __int64 v70; // rdx
  size_t v71; // r8
  _BYTE *v72; // rdi
  _BYTE *v73; // rcx
  size_t v74; // r10
  unsigned __int64 v75; // rax
  _BYTE *v76; // rdi
  char v77; // al
  __int64 v78; // rdx
  __int64 v79; // rsi
  __int64 v80; // rcx
  __m128i *v81; // rax
  __m128i *v82; // rdx
  _BYTE *v83; // rdi
  _BYTE *v84; // rsi
  __int64 v85; // rdx
  __int64 v86; // rdx
  __int64 v87; // rsi
  __int64 v88; // rcx
  __m128i *v89; // rax
  __m128i *v90; // rdx
  _BYTE *v91; // rdi
  bool v92; // al
  __int64 v93; // rdx
  _BYTE *v94; // rax
  __int64 v95; // rdx
  void *v96; // rdi
  _BYTE *v97; // rdi
  _BYTE *v98; // rdi
  __int64 v99; // rax
  __int64 v100; // rdx
  _BYTE *v101; // rax
  __int64 v102; // rdx
  __m128i *v103; // rdx
  char v104; // al
  void **v105; // rsi
  char v106; // cl
  __m128i *v107; // rdx
  __m128i *v108; // rdx
  char v109; // al
  void **v110; // rsi
  char v111; // cl
  __m128i *v112; // rdx
  unsigned __int64 v113; // r12
  unsigned __int64 v114; // rax
  __int64 v115; // rdi
  unsigned __int64 v116; // rbp
  unsigned __int64 v117; // rax
  __int64 v118; // rdi
  unsigned __int64 v119; // r15
  __int64 v120; // rdi
  unsigned __int64 v121; // rbx
  __int64 v122; // rdi
  __m128i v123; // xmm6
  __m128i v124; // xmm5
  size_t v126; // [rsp+28h] [rbp-200h]
  size_t v127; // [rsp+28h] [rbp-200h]
  __int64 v128; // [rsp+28h] [rbp-200h]
  __int64 v129; // [rsp+30h] [rbp-1F8h]
  void *v130; // [rsp+38h] [rbp-1F0h]
  __int64 v131; // [rsp+40h] [rbp-1E8h]
  __int64 v132; // [rsp+48h] [rbp-1E0h]
  void *v133; // [rsp+50h] [rbp-1D8h]
  __int64 v134; // [rsp+58h] [rbp-1D0h]
  void *v135[2]; // [rsp+60h] [rbp-1C8h] BYREF
  _BYTE v136[16]; // [rsp+70h] [rbp-1B8h] BYREF
  void *src; // [rsp+80h] [rbp-1A8h] BYREF
  size_t n; // [rsp+88h] [rbp-1A0h]
  _QWORD v139[2]; // [rsp+90h] [rbp-198h] BYREF
  void *v140[2]; // [rsp+A0h] [rbp-188h] BYREF
  _BYTE v141[16]; // [rsp+B0h] [rbp-178h] BYREF
  void *v142; // [rsp+C0h] [rbp-168h] BYREF
  size_t v143; // [rsp+C8h] [rbp-160h]
  _QWORD v144[2]; // [rsp+D0h] [rbp-158h] BYREF
  __m128i si128; // [rsp+E0h] [rbp-148h] BYREF
  __m128i v146; // [rsp+F0h] [rbp-138h]
  __int64 v147; // [rsp+100h] [rbp-128h]
  void *v148[2]; // [rsp+110h] [rbp-118h] BYREF
  __m128i v149; // [rsp+120h] [rbp-108h] BYREF
  __int64 v150; // [rsp+130h] [rbp-F8h]
  __m128i v151; // [rsp+140h] [rbp-E8h] BYREF
  _QWORD v152[2]; // [rsp+150h] [rbp-D8h] BYREF
  __int16 v153; // [rsp+160h] [rbp-C8h]
  void *v154[2]; // [rsp+170h] [rbp-B8h] BYREF
  __int64 v155; // [rsp+180h] [rbp-A8h] BYREF
  __m128i v156; // [rsp+1B0h] [rbp-78h] BYREF
  _BYTE v157[16]; // [rsp+1C0h] [rbp-68h] BYREF
  int v158; // [rsp+1D0h] [rbp-58h]
  int v159; // [rsp+1DCh] [rbp-4Ch]

  v6 = a1 + 3816;
  v7 = a1 + 3832;
  sub_1134980(a1, a2, (__int64)a3, a4);
  *(_QWORD *)(a1 + 2384) = a2;
  *(_QWORD *)a1 = off_2C3DA58;
  *(_QWORD *)(a1 + 2392) = a1 + 2408;
  sub_1270B70((_QWORD *)(a1 + 2392), a3->m128i_i64[0], a3->m128i_i64[0] + a3->m128i_i64[1]);
  *(__m128i *)(a1 + 2424) = _mm_loadu_si128(a3 + 2);
  *(_DWORD *)(a1 + 2440) = a3[3].m128i_i32[0];
  v10 = a3[3].m128i_i32[1];
  *(_QWORD *)(a1 + 2448) = a4;
  *(_DWORD *)(a1 + 2444) = v10;
  *(_QWORD *)(a1 + 2656) = a1 + 2672;
  *(_BYTE *)(a1 + 2640) = 0;
  *(_QWORD *)(a1 + 2648) = a2;
  sub_1270B70((_QWORD *)(a1 + 2656), a3->m128i_i64[0], a3->m128i_i64[0] + a3->m128i_i64[1]);
  *(__m128i *)(a1 + 2688) = _mm_loadu_si128(a3 + 2);
  *(_DWORD *)(a1 + 2704) = a3[3].m128i_i32[0];
  v11 = a3[3].m128i_i32[1];
  *(_QWORD *)(a1 + 2712) = a4;
  *(_DWORD *)(a1 + 2708) = v11;
  *(_QWORD *)(a1 + 3832) = a1 + 3848;
  *(_QWORD *)(a1 + 3864) = a1 + 3880;
  *(_QWORD *)(a1 + 3912) = a1 + 3928;
  *(_QWORD *)(a1 + 3944) = a1 + 3960;
  *(_QWORD *)(a1 + 3976) = a1 + 3992;
  *(_QWORD *)(a1 + 4008) = a1 + 4024;
  *(_QWORD *)(a1 + 4040) = a1 + 4056;
  *(_BYTE *)(a1 + 3792) = 0;
  *(_QWORD *)(a1 + 3800) = a1 + 3816;
  *(_QWORD *)(a1 + 3808) = 0;
  *(_BYTE *)(a1 + 3816) = 0;
  *(_QWORD *)(a1 + 3840) = 0;
  *(_BYTE *)(a1 + 3848) = 0;
  *(_QWORD *)(a1 + 3872) = 0;
  *(_BYTE *)(a1 + 3880) = 0;
  *(_QWORD *)(a1 + 3920) = 0;
  *(_BYTE *)(a1 + 3928) = 0;
  *(_QWORD *)(a1 + 3952) = 0;
  *(_BYTE *)(a1 + 3960) = 0;
  *(_QWORD *)(a1 + 3984) = 0;
  *(_BYTE *)(a1 + 3992) = 0;
  *(_QWORD *)(a1 + 4016) = 0;
  *(_BYTE *)(a1 + 4024) = 0;
  *(_QWORD *)(a1 + 4048) = 0;
  *(_BYTE *)(a1 + 4056) = 0;
  v12 = *(unsigned int *)(a1 + 1160);
  *(_QWORD *)(a1 + 4072) = a1 + 4088;
  v13 = *(_QWORD *)(a1 + 8);
  v14 = v12 + 1;
  *(_QWORD *)(a1 + 4080) = 0;
  v15 = v13 + 104;
  v16 = *(unsigned int *)(a1 + 1164);
  *(_BYTE *)(a1 + 4088) = 0;
  *(_QWORD *)(a1 + 4104) = 0;
  *(_QWORD *)(a1 + 4112) = 0;
  if ( v12 + 1 > v16 )
  {
    v114 = *(_QWORD *)(a1 + 1152);
    v115 = a1 + 1152;
    if ( v114 > v15 || v15 >= v114 + 32 * v12 )
    {
      sub_A8C1F0(v115, v14);
      v17 = *(_QWORD *)(a1 + 1152);
      v12 = *(unsigned int *)(a1 + 1160);
    }
    else
    {
      v116 = v15 - v114;
      sub_A8C1F0(v115, v14);
      v17 = *(_QWORD *)(a1 + 1152);
      v12 = *(unsigned int *)(a1 + 1160);
      v15 = v17 + v116;
    }
  }
  else
  {
    v17 = *(_QWORD *)(a1 + 1152);
  }
  v18 = (_QWORD *)(v17 + 32 * v12);
  *v18 = v18 + 2;
  sub_1270B70(v18, *(_BYTE **)v15, *(_QWORD *)v15 + *(_QWORD *)(v15 + 8));
  ++*(_DWORD *)(a1 + 1160);
  v19 = (_BYTE *)sub_228A4B0(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 104LL), *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL), 0);
  v135[0] = v136;
  sub_1270C30(v135, v19, (__int64)&v19[v20]);
  v21 = *(_BYTE **)(a2 + 944);
  v22 = *(_QWORD *)(a2 + 952);
  v156.m128i_i64[0] = (__int64)v157;
  sub_1270B70(&v156, v21, (__int64)&v21[v22]);
  sub_22B9ED0(v154, &v156);
  if ( (_BYTE *)v156.m128i_i64[0] != v157 )
    operator delete((void *)v156.m128i_i64[0]);
  v23 = sub_22B7480(a1 + 16);
  sub_22BAF00(v154, v23, v24);
  v25 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v25 + 496) )
  {
    sub_9EE8A0(a1 + 3800, v25 + 488);
    goto LABEL_7;
  }
  sub_1274160(&v151, v25, (__int64)v154, a1 + 16, (void **)(a1 + 4040));
  if ( (v153 & 1) != 0 )
  {
    if ( (unsigned __int8)sub_1270CF0((__int64)v135) )
    {
      sub_9EE8A0(a1 + 3800, (__int64)v135);
      goto LABEL_90;
    }
    sub_1273940(&v156, (__int64)v154, a1 + 16);
    if ( (v158 & 1) != 0 )
    {
      sub_9EE8A0(a1 + 3800, (__int64)v135);
    }
    else
    {
      v99 = sub_228A4B0(v156.m128i_i64[0], v156.m128i_i64[1], 0);
      v101 = (_BYTE *)sub_228A4B0(v99, v100, 0);
      v148[0] = &v149;
      sub_1270C30(v148, v101, (__int64)&v101[v102]);
      sub_A0AAD0(a1 + 3800, v148);
      if ( v148[0] != &v149 )
        operator delete(v148[0]);
    }
    if ( (v158 & 1) != 0 )
      goto LABEL_90;
    v96 = (void *)v156.m128i_i64[0];
    if ( (_BYTE *)v156.m128i_i64[0] == v157 )
      goto LABEL_90;
    goto LABEL_89;
  }
  v94 = (_BYTE *)sub_228A4B0(v151.m128i_i64[0], v151.m128i_i64[1], 0);
  v156.m128i_i64[0] = (__int64)v157;
  sub_1270C30(&v156, v94, (__int64)&v94[v95]);
  sub_A0AAD0(a1 + 3800, &v156);
  v96 = (void *)v156.m128i_i64[0];
  if ( (_BYTE *)v156.m128i_i64[0] != v157 )
LABEL_89:
    operator delete(v96);
LABEL_90:
  if ( (v153 & 1) == 0 && (_QWORD *)v151.m128i_i64[0] != v152 )
    operator delete((void *)v151.m128i_i64[0]);
LABEL_7:
  v26 = (_BYTE *)sub_228ACC0(0);
  v28 = *(_QWORD *)(a1 + 3808);
  if ( v27 > 0x7FFFFFFFFFFFFFFFLL - v28 )
    goto LABEL_175;
  v29 = *(_QWORD *)(a1 + 3800);
  v30 = v27 + v28;
  v31 = v6 == v29 ? 15LL : *(_QWORD *)(a1 + 3816);
  if ( v30 > v31 )
  {
    sub_998B30(a1 + 3800, v28, 0, v26, v27);
    v29 = *(_QWORD *)(a1 + 3800);
  }
  else if ( v27 )
  {
    v97 = (_BYTE *)(v28 + v29);
    if ( v27 == 1 )
      *v97 = *v26;
    else
      memcpy(v97, v26, v27);
    v29 = *(_QWORD *)(a1 + 3800);
  }
  *(_QWORD *)(a1 + 3808) = v30;
  *(_BYTE *)(v29 + v30) = 0;
  sub_1275B70(a1, (__int64)v154);
  sub_9EE8A0(a1 + 4072, a1 + 4040);
  v32 = *(unsigned int *)(a1 + 632);
  v33 = v32 + 1;
  v34 = *(_QWORD *)(a1 + 624);
  if ( v32 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 636) )
  {
    if ( v34 > v7 || v7 >= v34 + 32 * v32 )
    {
      sub_A8C1F0(a1 + 624, v33);
      v34 = *(_QWORD *)(a1 + 624);
      v32 = *(unsigned int *)(a1 + 632);
    }
    else
    {
      v113 = v7 - v34;
      sub_A8C1F0(a1 + 624, v33);
      v34 = *(_QWORD *)(a1 + 624);
      v32 = *(unsigned int *)(a1 + 632);
      v7 = v34 + v113;
    }
  }
  v35 = (_QWORD *)(v34 + 32 * v32);
  *v35 = v35 + 2;
  sub_1270B70(v35, *(_BYTE **)v7, *(_QWORD *)v7 + *(_QWORD *)(v7 + 8));
  ++*(_DWORD *)(a1 + 632);
  v36 = *(_BYTE **)(a1 + 4040);
  v37 = *(_QWORD *)(a1 + 4048);
  src = v139;
  sub_1270B70(&src, v36, (__int64)&v36[v37]);
  v38 = n;
  if ( 0x7FFFFFFFFFFFFFFFLL - n <= 0xE )
    goto LABEL_175;
  if ( src == v139 )
    v39 = 15;
  else
    v39 = v139[0];
  if ( n + 15 > v39 )
    sub_998B30((__int64)&src, n, 0, "/sys-root/mingw", 0xFu);
  else
    qmemcpy((char *)src + n, "/sys-root/mingw", 15);
  n = v38 + 15;
  *((_BYTE *)src + v38 + 15) = 0;
  v40 = *(_BYTE **)(a1 + 3800);
  v41 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  v42 = (__int64)&v40[*(_QWORD *)(a1 + 3808)];
  v43 = *(__int64 (__fastcall **)(__int64, __m128i *, __int64, void *))(*(_QWORD *)v41 + 96LL);
  v151.m128i_i64[0] = (__int64)v152;
  sub_1270B70(&v151, v40, v42);
  v45 = v151.m128i_i64[0];
  v46 = src;
  v47 = n + v151.m128i_i64[1];
  if ( (_QWORD *)v151.m128i_i64[0] == v152 )
    v48 = 15;
  else
    v48 = v152[0];
  if ( v47 > v48 )
  {
    sub_998B30((__int64)&v151, v151.m128i_u64[1], 0, src, n);
    v45 = v151.m128i_i64[0];
  }
  else if ( n )
  {
    v98 = (_BYTE *)(v151.m128i_i64[1] + v151.m128i_i64[0]);
    if ( n == 1 )
      *v98 = *(_BYTE *)src;
    else
      memcpy(v98, src, n);
    v45 = v151.m128i_i64[0];
  }
  v151.m128i_i64[1] = v47;
  *(_BYTE *)(v45 + v47) = 0;
  LOWORD(v158) = 260;
  v156.m128i_i64[0] = (__int64)&v151;
  v49 = v43(v41, &v156, v44, v46);
  if ( (_QWORD *)v151.m128i_i64[0] != v152 )
    operator delete((void *)v151.m128i_i64[0]);
  if ( v49 )
    sub_9EE8A0(a1 + 4040, (__int64)&src);
  LOWORD(v158) = 259;
  v156.m128i_i64[0] = (__int64)"lib";
  v50 = sub_228ACC0(0);
  v51 = *(_BYTE **)(a1 + 3800);
  v153 = 261;
  v151.m128i_i64[1] = v52;
  v53 = *(_QWORD *)(a1 + 3808);
  v151.m128i_i64[0] = v50;
  v142 = v144;
  sub_1270B70(&v142, v51, (__int64)&v51[v53]);
  v54 = *(_QWORD *)(a1 + 4048);
  v55 = v142;
  v56 = *(_BYTE **)(a1 + 4040);
  v57 = v54 + v143;
  if ( v142 == v144 )
    v58 = 15;
  else
    v58 = v144[0];
  if ( v57 > v58 )
  {
    sub_998B30((__int64)&v142, v143, 0, v56, v54);
    v55 = v142;
  }
  else if ( v54 )
  {
    v59 = (char *)v142 + v143;
    if ( v54 == 1 )
      *v59 = *v56;
    else
      memcpy(v59, *(const void **)(a1 + 4040), *(_QWORD *)(a1 + 4048));
    v55 = v142;
  }
  v143 = v57;
  v55[v57] = 0;
  v60 = v153;
  if ( !(_BYTE)v153 )
  {
    LOWORD(v150) = 256;
LABEL_35:
    LOWORD(v147) = 256;
    goto LABEL_36;
  }
  if ( (_BYTE)v153 == 1 )
  {
    v109 = v158;
    v148[0] = &v142;
    LOWORD(v150) = 260;
    if ( !(_BYTE)v158 )
      goto LABEL_35;
    if ( (_BYTE)v158 != 1 )
    {
      v110 = &v142;
      v130 = v148[1];
      v111 = 4;
      goto LABEL_128;
    }
  }
  else
  {
    if ( HIBYTE(v153) == 1 )
    {
      v129 = v151.m128i_i64[1];
      v108 = (__m128i *)v151.m128i_i64[0];
    }
    else
    {
      v108 = &v151;
      v60 = 2;
    }
    BYTE1(v150) = v60;
    v109 = v158;
    v148[0] = &v142;
    v149.m128i_i64[0] = (__int64)v108;
    v149.m128i_i64[1] = v129;
    LOBYTE(v150) = 4;
    if ( !(_BYTE)v158 )
      goto LABEL_35;
    if ( (_BYTE)v158 != 1 )
    {
      v110 = v148;
      v111 = 2;
LABEL_128:
      if ( BYTE1(v158) == 1 )
      {
        v131 = v156.m128i_i64[1];
        v112 = (__m128i *)v156.m128i_i64[0];
      }
      else
      {
        v112 = &v156;
        v109 = 2;
      }
      si128.m128i_i64[0] = (__int64)v110;
      v146.m128i_i64[0] = (__int64)v112;
      si128.m128i_i64[1] = (__int64)v130;
      LOBYTE(v147) = v111;
      v146.m128i_i64[1] = v131;
      BYTE1(v147) = v109;
      goto LABEL_36;
    }
  }
  v123 = _mm_load_si128(&v149);
  si128 = _mm_load_si128((const __m128i *)v148);
  v146 = v123;
  v147 = v150;
LABEL_36:
  sub_2253560(v140, &si128);
  v61 = *(unsigned int *)(a1 + 632);
  v62 = v61 + 1;
  if ( v61 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 636) )
  {
    v117 = *(_QWORD *)(a1 + 624);
    v118 = a1 + 624;
    if ( v117 > (unsigned __int64)v140 || (v128 = *(_QWORD *)(a1 + 624), (unsigned __int64)v140 >= v117 + 32 * v61) )
    {
      sub_A8C1F0(v118, v62);
      v63 = *(_QWORD *)(a1 + 624);
      v61 = *(unsigned int *)(a1 + 632);
      v64 = (__m128i *)v140;
    }
    else
    {
      sub_A8C1F0(v118, v62);
      v63 = *(_QWORD *)(a1 + 624);
      v61 = *(unsigned int *)(a1 + 632);
      v64 = (__m128i *)((char *)v140 + v63 - v128);
    }
  }
  else
  {
    v63 = *(_QWORD *)(a1 + 624);
    v64 = (__m128i *)v140;
  }
  v65 = (__m128i *)(v63 + 32 * v61);
  v65->m128i_i64[0] = (__int64)v65[1].m128i_i64;
  if ( (__m128i *)v64->m128i_i64[0] == &v64[1] )
  {
    v65[1] = _mm_loadu_si128(v64 + 1);
  }
  else
  {
    v65->m128i_i64[0] = v64->m128i_i64[0];
    v65[1].m128i_i64[0] = v64[1].m128i_i64[0];
  }
  v65->m128i_i64[1] = v64->m128i_i64[1];
  v64->m128i_i64[0] = (__int64)v64[1].m128i_i64;
  v64->m128i_i64[1] = 0;
  v64[1].m128i_i8[0] = 0;
  v66 = v140[0];
  ++*(_DWORD *)(a1 + 632);
  if ( v66 != v141 )
    operator delete(v66);
  if ( v142 != v144 )
    operator delete(v142);
  LOWORD(v158) = 259;
  v156.m128i_i64[0] = (__int64)"mingw/lib";
  v67 = sub_228ACC0(0);
  v68 = *(_BYTE **)(a1 + 3800);
  v151.m128i_i64[1] = v69;
  v70 = *(_QWORD *)(a1 + 3808);
  v153 = 261;
  v151.m128i_i64[0] = v67;
  v142 = v144;
  sub_1270B70(&v142, v68, (__int64)&v68[v70]);
  v71 = *(_QWORD *)(a1 + 4048);
  v72 = v142;
  v73 = *(_BYTE **)(a1 + 4040);
  v74 = v71 + v143;
  if ( v142 == v144 )
    v75 = 15;
  else
    v75 = v144[0];
  if ( v74 > v75 )
  {
    v127 = v71 + v143;
    sub_998B30((__int64)&v142, v143, 0, v73, v71);
    v72 = v142;
    v74 = v127;
  }
  else if ( v71 )
  {
    v76 = (char *)v142 + v143;
    if ( v71 == 1 )
    {
      *v76 = *v73;
      v72 = v142;
    }
    else
    {
      v126 = v71 + v143;
      memcpy(v76, *(const void **)(a1 + 4040), *(_QWORD *)(a1 + 4048));
      v72 = v142;
      v74 = v126;
    }
  }
  v143 = v74;
  v72[v74] = 0;
  v77 = v153;
  if ( !(_BYTE)v153 )
  {
    LOWORD(v150) = 256;
LABEL_52:
    LOWORD(v147) = 256;
    goto LABEL_53;
  }
  if ( (_BYTE)v153 == 1 )
  {
    v104 = v158;
    v148[0] = &v142;
    LOWORD(v150) = 260;
    if ( !(_BYTE)v158 )
      goto LABEL_52;
    if ( (_BYTE)v158 != 1 )
    {
      v105 = &v142;
      v133 = v148[1];
      v106 = 4;
      goto LABEL_119;
    }
  }
  else
  {
    if ( HIBYTE(v153) == 1 )
    {
      v132 = v151.m128i_i64[1];
      v103 = (__m128i *)v151.m128i_i64[0];
    }
    else
    {
      v103 = &v151;
      v77 = 2;
    }
    BYTE1(v150) = v77;
    v104 = v158;
    v148[0] = &v142;
    v149.m128i_i64[0] = (__int64)v103;
    v149.m128i_i64[1] = v132;
    LOBYTE(v150) = 4;
    if ( !(_BYTE)v158 )
      goto LABEL_52;
    if ( (_BYTE)v158 != 1 )
    {
      v105 = v148;
      v106 = 2;
LABEL_119:
      if ( BYTE1(v158) == 1 )
      {
        v134 = v156.m128i_i64[1];
        v107 = (__m128i *)v156.m128i_i64[0];
      }
      else
      {
        v107 = &v156;
        v104 = 2;
      }
      si128.m128i_i64[0] = (__int64)v105;
      v146.m128i_i64[0] = (__int64)v107;
      si128.m128i_i64[1] = (__int64)v133;
      LOBYTE(v147) = v106;
      v146.m128i_i64[1] = v134;
      BYTE1(v147) = v104;
      goto LABEL_53;
    }
  }
  v124 = _mm_load_si128(&v149);
  si128 = _mm_load_si128((const __m128i *)v148);
  v146 = v124;
  v147 = v150;
LABEL_53:
  sub_2253560(v140, &si128);
  v78 = *(unsigned int *)(a1 + 632);
  v79 = v78 + 1;
  if ( v78 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 636) )
  {
    v119 = *(_QWORD *)(a1 + 624);
    v120 = a1 + 624;
    if ( v119 > (unsigned __int64)v140 || (unsigned __int64)v140 >= v119 + 32 * v78 )
    {
      sub_A8C1F0(v120, v79);
      v80 = *(_QWORD *)(a1 + 624);
      v78 = *(unsigned int *)(a1 + 632);
      v81 = (__m128i *)v140;
    }
    else
    {
      sub_A8C1F0(v120, v79);
      v80 = *(_QWORD *)(a1 + 624);
      v78 = *(unsigned int *)(a1 + 632);
      v81 = (__m128i *)((char *)v140 + v80 - v119);
    }
  }
  else
  {
    v80 = *(_QWORD *)(a1 + 624);
    v81 = (__m128i *)v140;
  }
  v82 = (__m128i *)(v80 + 32 * v78);
  v82->m128i_i64[0] = (__int64)v82[1].m128i_i64;
  if ( (__m128i *)v81->m128i_i64[0] == &v81[1] )
  {
    v82[1] = _mm_loadu_si128(v81 + 1);
  }
  else
  {
    v82->m128i_i64[0] = v81->m128i_i64[0];
    v82[1].m128i_i64[0] = v81[1].m128i_i64[0];
  }
  v82->m128i_i64[1] = v81->m128i_i64[1];
  v81->m128i_i64[0] = (__int64)v81[1].m128i_i64;
  v81->m128i_i64[1] = 0;
  v81[1].m128i_i8[0] = 0;
  v83 = v140[0];
  ++*(_DWORD *)(a1 + 632);
  if ( v83 != v141 )
    operator delete(v83);
  if ( v142 != v144 )
    operator delete(v142);
  sub_22BC1E0(&v151, "x86_64-unknown-linux-gnu", 24, 0);
  sub_22B9ED0(&v156, &v151);
  if ( (_QWORD *)v151.m128i_i64[0] != v152 )
    operator delete((void *)v151.m128i_i64[0]);
  if ( v159 == 15 && v158 == *(_DWORD *)(a1 + 48) )
  {
    if ( (_BYTE *)v156.m128i_i64[0] != v157 )
      operator delete((void *)v156.m128i_i64[0]);
    goto LABEL_67;
  }
  if ( (_BYTE *)v156.m128i_i64[0] != v157 )
    operator delete((void *)v156.m128i_i64[0]);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 496LL) )
  {
LABEL_67:
    v84 = *(_BYTE **)(a1 + 3800);
    v85 = *(_QWORD *)(a1 + 3808);
    v156.m128i_i64[0] = (__int64)v157;
    sub_1270B70(&v156, v84, (__int64)&v84[v85]);
    if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v156.m128i_i64[1]) > 2 )
    {
      sub_9EE560(&v156, "lib", 3u);
      v86 = *(unsigned int *)(a1 + 632);
      v87 = v86 + 1;
      if ( v86 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 636) )
      {
        v121 = *(_QWORD *)(a1 + 624);
        v122 = a1 + 624;
        if ( v121 > (unsigned __int64)&v156 || (unsigned __int64)&v156 >= v121 + 32 * v86 )
        {
          sub_A8C1F0(v122, v87);
          v88 = *(_QWORD *)(a1 + 624);
          v86 = *(unsigned int *)(a1 + 632);
          v89 = &v156;
        }
        else
        {
          sub_A8C1F0(v122, v87);
          v88 = *(_QWORD *)(a1 + 624);
          v86 = *(unsigned int *)(a1 + 632);
          v89 = (__m128i *)((char *)&v156 + v88 - v121);
        }
      }
      else
      {
        v88 = *(_QWORD *)(a1 + 624);
        v89 = &v156;
      }
      v90 = (__m128i *)(v88 + 32 * v86);
      v90->m128i_i64[0] = (__int64)v90[1].m128i_i64;
      if ( (__m128i *)v89->m128i_i64[0] == &v89[1] )
      {
        v90[1] = _mm_loadu_si128(v89 + 1);
      }
      else
      {
        v90->m128i_i64[0] = v89->m128i_i64[0];
        v90[1].m128i_i64[0] = v89[1].m128i_i64[0];
      }
      v90->m128i_i64[1] = v89->m128i_i64[1];
      v89->m128i_i64[0] = (__int64)v89[1].m128i_i64;
      v89->m128i_i64[1] = 0;
      v89[1].m128i_i8[0] = 0;
      v91 = (_BYTE *)v156.m128i_i64[0];
      ++*(_DWORD *)(a1 + 632);
      if ( v91 != v157 )
        operator delete(v91);
      goto LABEL_74;
    }
LABEL_175:
    std::__throw_length_error("basic_string::append");
  }
LABEL_74:
  v156.m128i_i64[0] = sub_21B7BC0(a4, 1916, &byte_22F0C30, 0);
  v92 = 0;
  v156.m128i_i64[1] = v93;
  if ( v93 == 3 )
    v92 = (unsigned int)sub_22462B0(&v156, "lld", 3) == 0;
  *(_BYTE *)(a1 + 4120) = v92;
  if ( src != v139 )
    operator delete(src);
  if ( v154[0] != &v155 )
    operator delete(v154[0]);
  if ( v135[0] != v136 )
    operator delete(v135[0]);
}
