void __fastcall sub_12726C0(__int64 a1, __int64 a2, __int64 a3)
{
  size_t v5; // rdx
  size_t v6; // rbp
  int v7; // eax
  unsigned __int64 v8; // rax
  __m128i *v9; // rax
  __m128i *v10; // rdi
  __m128i *v11; // rax
  __int64 v12; // rsi
  void **v13; // rbx
  __m128i *v14; // rax
  __m128i *v15; // r12
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rbp
  _BYTE *v24; // rsi
  __int64 v25; // rdx
  _BYTE *v26; // rsi
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdi
  unsigned __int8 (__fastcall *v43)(__int64, __m128i *); // rax
  __int64 v44; // rdx
  _BYTE *v45; // rsi
  __int64 v46; // r9
  size_t v47; // r8
  _BYTE *v48; // rdi
  _BYTE *v49; // rcx
  size_t v50; // rbx
  unsigned __int64 v51; // rax
  _BYTE *v52; // rdi
  const __m128i *v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  _BYTE *v69; // rsi
  __int64 v70; // rdx
  unsigned __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __m128i *v84; // [rsp+0h] [rbp-2058h]
  __m128i *v85; // [rsp+8h] [rbp-2050h]
  __m128i *v86; // [rsp+10h] [rbp-2048h]
  void *src; // [rsp+18h] [rbp-2040h]
  __m128i *v88; // [rsp+20h] [rbp-2038h]
  __m128i *v89; // [rsp+28h] [rbp-2030h]
  __int64 v90; // [rsp+30h] [rbp-2028h]
  void **v91; // [rsp+38h] [rbp-2020h]
  const __m128i *v92; // [rsp+40h] [rbp-2018h]
  __m128i *v93; // [rsp+48h] [rbp-2010h]
  __m128i *v94; // [rsp+50h] [rbp-2008h]
  __m128i *v95; // [rsp+58h] [rbp-2000h]
  __m128i *v96; // [rsp+60h] [rbp-1FF8h]
  const __m128i *v97; // [rsp+68h] [rbp-1FF0h]
  const __m128i *v98; // [rsp+70h] [rbp-1FE8h]
  _QWORD *v99; // [rsp+78h] [rbp-1FE0h]
  void *v100[4]; // [rsp+80h] [rbp-1FD8h] BYREF
  void *v101[2]; // [rsp+A0h] [rbp-1FB8h] BYREF
  __int64 v102; // [rsp+B0h] [rbp-1FA8h] BYREF
  void *v103[2]; // [rsp+C0h] [rbp-1F98h] BYREF
  _BYTE v104[16]; // [rsp+D0h] [rbp-1F88h] BYREF
  void *v105[2]; // [rsp+E0h] [rbp-1F78h] BYREF
  _BYTE v106[16]; // [rsp+F0h] [rbp-1F68h] BYREF
  void *v107; // [rsp+100h] [rbp-1F58h] BYREF
  size_t v108; // [rsp+108h] [rbp-1F50h]
  _QWORD v109[2]; // [rsp+110h] [rbp-1F48h] BYREF
  __m128i v110[2]; // [rsp+120h] [rbp-1F38h] BYREF
  __int16 v111; // [rsp+140h] [rbp-1F18h]
  __m128i v112[2]; // [rsp+150h] [rbp-1F08h] BYREF
  __int16 v113; // [rsp+170h] [rbp-1EE8h]
  __m128i v114[2]; // [rsp+180h] [rbp-1ED8h] BYREF
  __int16 v115; // [rsp+1A0h] [rbp-1EB8h]
  __m128i v116[2]; // [rsp+1B0h] [rbp-1EA8h] BYREF
  __int16 v117; // [rsp+1D0h] [rbp-1E88h]
  __m128i v118[2]; // [rsp+1E0h] [rbp-1E78h] BYREF
  __int16 v119; // [rsp+200h] [rbp-1E58h]
  __m128i v120[2]; // [rsp+210h] [rbp-1E48h] BYREF
  __int16 v121; // [rsp+230h] [rbp-1E28h]
  __m128i v122[2]; // [rsp+240h] [rbp-1E18h] BYREF
  __int16 v123; // [rsp+260h] [rbp-1DF8h]
  __m128i v124; // [rsp+270h] [rbp-1DE8h] BYREF
  __int64 v125; // [rsp+280h] [rbp-1DD8h] BYREF
  __int16 v126; // [rsp+290h] [rbp-1DC8h]
  __m128i v127; // [rsp+2A0h] [rbp-1DB8h] BYREF
  __m128i v128; // [rsp+2B0h] [rbp-1DA8h]
  __int16 v129; // [rsp+2C0h] [rbp-1D98h]
  __m128i v130; // [rsp+2D0h] [rbp-1D88h] BYREF
  __m128i v131; // [rsp+2E0h] [rbp-1D78h]
  __int16 v132; // [rsp+2F0h] [rbp-1D68h]
  __m128i v133[2]; // [rsp+300h] [rbp-1D58h] BYREF
  __int16 v134; // [rsp+320h] [rbp-1D38h]
  __m128i v135; // [rsp+330h] [rbp-1D28h] BYREF
  __m128i *v136; // [rsp+340h] [rbp-1D18h]
  __int16 v137; // [rsp+350h] [rbp-1D08h]
  __m128i v138; // [rsp+360h] [rbp-1CF8h] BYREF
  char v139; // [rsp+370h] [rbp-1CE8h] BYREF
  __int16 v140; // [rsp+380h] [rbp-1CD8h]

  v90 = a3;
  src = (void *)sub_228ACC0(0);
  v6 = v5;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 608LL))(a1, a2);
  if ( !v7 )
  {
    v24 = *(_BYTE **)(a1 + 16);
    v25 = *(_QWORD *)(a1 + 24);
    v135.m128i_i64[0] = (__int64)"v1";
    v132 = 261;
    v121 = 261;
    v124.m128i_i64[0] = (__int64)"c++";
    v137 = 259;
    v130.m128i_i64[0] = (__int64)src;
    v126 = 259;
    v120[0].m128i_i64[0] = (__int64)src;
    v107 = v109;
    v130.m128i_i64[1] = v6;
    v120[0].m128i_i64[1] = v6;
    sub_1270B70(&v107, v24, (__int64)&v24[v25]);
    v26 = *(_BYTE **)(a1 + 3800);
    v27 = *(_QWORD *)(a1 + 3808);
    v112[0].m128i_i64[0] = (__int64)src;
    v117 = 260;
    v113 = 261;
    v116[0].m128i_i64[0] = (__int64)&v107;
    v112[0].m128i_i64[1] = v6;
    v105[0] = v106;
    sub_1270B70(v105, v26, (__int64)&v26[v27]);
    v28 = j__strlen("include");
    if ( v28 <= 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v105[1] )
    {
      sub_9EE560(v105, "include", v28);
      v110[0].m128i_i64[0] = (__int64)v105;
      v96 = v114;
      v98 = v110;
      v111 = 260;
      v95 = v112;
      sub_A41580(v114, v110, v112, v29, v30, v31);
      v94 = v118;
      v97 = v116;
      sub_A41580(v118, v114, v116, (__int64)v116, v32, v33);
      v93 = v122;
      v92 = v120;
      sub_A41580(v122, v118, v120, (__int64)v120, v34, v35);
      v85 = &v127;
      v89 = &v124;
      sub_A41580(&v127, v122, &v124, (__int64)&v124, v36, v37);
      v88 = v133;
      v86 = &v130;
      sub_A41580(v133, &v127, &v130, (__int64)&v130, v38, v39);
      v84 = &v138;
      sub_A41580(&v138, v133, &v135, (__int64)&v138, v40, v41);
      v91 = v100;
      sub_2253560(v100, &v138);
      if ( v105[0] != v106 )
        operator delete(v105[0]);
      if ( v107 != v109 )
        operator delete(v107);
      v42 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
      v43 = *(unsigned __int8 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v42 + 96LL);
      v138.m128i_i64[0] = (__int64)v91;
      v140 = 260;
      if ( v43(v42, v84) )
      {
        v140 = 260;
        v138.m128i_i64[0] = (__int64)v91;
        sub_112FA80(a2, v90, (__int64)v84);
      }
      v135.m128i_i64[0] = (__int64)"v1";
      v137 = 259;
      v132 = 261;
      v126 = 259;
      v44 = *(_QWORD *)(a1 + 3808);
      v117 = 259;
      v45 = *(_BYTE **)(a1 + 3800);
      v124.m128i_i64[0] = (__int64)"c++";
      v130.m128i_i64[0] = (__int64)src;
      v121 = 261;
      v120[0].m128i_i64[0] = (__int64)src;
      v113 = 261;
      v112[0].m128i_i64[0] = (__int64)src;
      v116[0].m128i_i64[0] = (__int64)"include";
      v107 = v109;
      v99 = v109;
      v130.m128i_i64[1] = v6;
      v120[0].m128i_i64[1] = v6;
      v112[0].m128i_i64[1] = v6;
      sub_1270B70(&v107, v45, (__int64)&v45[v44]);
      v47 = *(_QWORD *)(a1 + 4048);
      v48 = v107;
      v49 = *(_BYTE **)(a1 + 4040);
      v50 = v47 + v108;
      v51 = v107 == v109 ? 15LL : v109[0];
      if ( v50 > v51 )
      {
        sub_998B30((__int64)&v107, v108, 0, v49, v47);
        v48 = v107;
      }
      else if ( v47 )
      {
        v52 = (char *)v107 + v108;
        if ( v47 == 1 )
          *v52 = *v49;
        else
          memcpy(v52, v49, *(_QWORD *)(a1 + 4048));
        v48 = v107;
      }
      v108 = v50;
      v53 = v95;
      v48[v50] = 0;
      v111 = 260;
      v110[0].m128i_i64[0] = (__int64)&v107;
      sub_A41580(v96, v98, v53, (__int64)v49, v47, v46);
      sub_A41580(v94, v96, v97, v54, v55, v56);
      sub_A41580(v93, v94, v92, v57, v58, v59);
      sub_A41580(v85, v93, v89, v60, v61, v62);
      sub_A41580(v88, v85, v86, v63, v64, v65);
      sub_A41580(v84, v88, &v135, v66, v67, v68);
      sub_112FA80(a2, v90, (__int64)v84);
      if ( v107 != v109 )
        operator delete(v107);
      v69 = *(_BYTE **)(a1 + 3800);
      v70 = *(_QWORD *)(a1 + 3808);
      v127.m128i_i64[1] = v6;
      v133[0].m128i_i64[0] = (__int64)"v1";
      v118[0].m128i_i64[1] = v6;
      v122[0].m128i_i64[0] = (__int64)"c++";
      v134 = 259;
      v129 = 261;
      v127.m128i_i64[0] = (__int64)src;
      v123 = 259;
      v119 = 261;
      v118[0].m128i_i64[0] = (__int64)src;
      v103[0] = v104;
      sub_1270B70(v103, v69, (__int64)&v69[v70]);
      v71 = j__strlen("include");
      if ( v71 <= 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v103[1] )
      {
        sub_9EE560(v103, "include", v71);
        v121 = 260;
        v120[0].m128i_i64[0] = (__int64)v103;
        sub_A41580(v89, v92, v94, v72, v73, v74);
        sub_A41580(v86, v89, v93, v75, v76, v77);
        sub_A41580(&v135, v86, v85, v78, v79, v80);
        sub_A41580(v84, &v135, v88, v81, v82, v83);
        sub_112FA80(a2, v90, (__int64)v84);
        if ( v103[0] != v104 )
          operator delete(v103[0]);
        if ( v100[0] != v91 + 2 )
          operator delete(v100[0]);
        return;
      }
    }
LABEL_60:
    std::__throw_length_error("basic_string::append");
  }
  if ( v7 != 1 )
    return;
  v138.m128i_i64[0] = (__int64)&v139;
  v138.m128i_i64[1] = 0x700000000LL;
  v84 = &v138;
  sub_1271F20(v138.m128i_i64, a1 + 3800);
  v137 = 257;
  v134 = 259;
  v132 = 259;
  v129 = 260;
  v86 = &v130;
  v85 = &v127;
  v127.m128i_i64[0] = a1 + 4040;
  v133[0].m128i_i64[0] = (__int64)"c++";
  v88 = v133;
  v130.m128i_i64[0] = (__int64)"include";
  sub_228A3B0(v138.m128i_i64[0], &v127, &v130, v133, &v135);
  sub_1271F20(v138.m128i_i64, a1 + 3800);
  v137 = 260;
  v134 = 259;
  v132 = 259;
  v135.m128i_i64[0] = a1 + 4008;
  v129 = 260;
  v127.m128i_i64[0] = a1 + 4040;
  v133[0].m128i_i64[0] = (__int64)"c++";
  v130.m128i_i64[0] = (__int64)"include";
  sub_228A3B0(v138.m128i_i64[0] + 1048, &v127, &v130, v133, &v135);
  sub_1271F20(v138.m128i_i64, a1 + 3800);
  v137 = 257;
  v130.m128i_i64[0] = (__int64)"c++";
  v134 = 260;
  v133[0].m128i_i64[0] = a1 + 4008;
  v132 = 259;
  v129 = 259;
  v127.m128i_i64[0] = (__int64)"include";
  sub_228A3B0(v138.m128i_i64[0] + 2096, &v127, &v130, v133, &v135);
  v91 = (void **)(a1 + 3832);
  sub_1271F20(v138.m128i_i64, a1 + 3832);
  v137 = 257;
  v130.m128i_i64[0] = (__int64)"c++";
  v134 = 257;
  v132 = 259;
  v129 = 259;
  v127.m128i_i64[0] = (__int64)"include";
  sub_228A3B0(v138.m128i_i64[0] + 3144, &v127, &v130, v133, &v135);
  sub_1271F20(v138.m128i_i64, a1 + 3832);
  v137 = 257;
  v134 = 257;
  v89 = &v124;
  sub_C05100((__int64)&v124, "g++-v", a1 + 3864);
  v132 = 260;
  v129 = 259;
  v130.m128i_i64[0] = (__int64)&v124;
  v127.m128i_i64[0] = (__int64)"include";
  sub_228A3B0(v138.m128i_i64[0] + 4192, &v127, &v130, v133, &v135);
  if ( (__int64 *)v124.m128i_i64[0] != &v125 )
    operator delete((void *)v124.m128i_i64[0]);
  sub_1271F20(v84->m128i_i64, (__int64)v91);
  v115 = 257;
  v111 = 257;
  v92 = (const __m128i *)(a1 + 3912);
  sub_C05100((__int64)v101, "g++-v", a1 + 3912);
  v8 = j__strlen(".");
  if ( v8 > 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v101[1] )
    goto LABEL_60;
  v9 = (__m128i *)sub_9EE560(v101, ".", v8);
  v127.m128i_i64[0] = (__int64)v85[1].m128i_i64;
  if ( (__m128i *)v9->m128i_i64[0] == &v9[1] )
  {
    v128 = _mm_loadu_si128(v9 + 1);
  }
  else
  {
    v127.m128i_i64[0] = v9->m128i_i64[0];
    v128.m128i_i64[0] = v9[1].m128i_i64[0];
  }
  v10 = v85;
  v127.m128i_i64[1] = v9->m128i_i64[1];
  v9->m128i_i64[0] = (__int64)v9[1].m128i_i64;
  v9->m128i_i64[1] = 0;
  v9[1].m128i_i8[0] = 0;
  v11 = (__m128i *)sub_9EE560(v10, *(_BYTE **)(a1 + 3944), *(_QWORD *)(a1 + 3952));
  v130.m128i_i64[0] = (__int64)v86[1].m128i_i64;
  if ( (__m128i *)v11->m128i_i64[0] == &v11[1] )
  {
    v131 = _mm_loadu_si128(v11 + 1);
  }
  else
  {
    v130.m128i_i64[0] = v11->m128i_i64[0];
    v131.m128i_i64[0] = v11[1].m128i_i64[0];
  }
  v130.m128i_i64[1] = v11->m128i_i64[1];
  v11->m128i_i64[0] = (__int64)v11[1].m128i_i64;
  v11[1].m128i_i8[0] = 0;
  v12 = v138.m128i_i64[0];
  v11->m128i_i64[1] = 0;
  v137 = 260;
  v135.m128i_i64[0] = (__int64)v86;
  v134 = 259;
  v133[0].m128i_i64[0] = (__int64)"include";
  sub_228A3B0(v12 + 5240, v88, &v135, v110, v114);
  if ( (__m128i *)v130.m128i_i64[0] != &v86[1] )
    operator delete((void *)v130.m128i_i64[0]);
  if ( (__m128i *)v127.m128i_i64[0] != &v85[1] )
    operator delete((void *)v127.m128i_i64[0]);
  if ( v101[0] != &v102 )
    operator delete(v101[0]);
  sub_1271F20(v84->m128i_i64, (__int64)v91);
  v137 = 257;
  v134 = 257;
  sub_C05100((__int64)v89, "g++-v", (__int64)v92);
  v130.m128i_i64[0] = (__int64)v89;
  v132 = 260;
  v127.m128i_i64[0] = (__int64)"include";
  v129 = 259;
  sub_228A3B0(v138.m128i_i64[0] + 6288, v85, v86, v88, &v135);
  if ( (__m128i *)v124.m128i_i64[0] != &v89[1] )
    operator delete((void *)v124.m128i_i64[0]);
  v13 = (void **)(v138.m128i_i64[0] + 1048LL * v138.m128i_u32[2]);
  if ( (void **)v138.m128i_i64[0] != v13 )
  {
    v14 = (__m128i *)(a1 + 4072);
    v86 = (__m128i *)(v138.m128i_i64[0] + 1048LL * v138.m128i_u32[2]);
    v15 = (__m128i *)v138.m128i_i64[0];
    v85 = v14;
    v16 = v90;
    do
    {
      v22 = v15->m128i_i64[0];
      v137 = 261;
      v135.m128i_i64[0] = v22;
      v135.m128i_i64[1] = v15->m128i_i64[1];
      sub_112FA80(a2, v16, (__int64)&v135);
      v18 = v15->m128i_i64[1];
      if ( v6 + v18 > v15[1].m128i_i64[0] )
      {
        sub_2236E10(v15, &v15[1].m128i_u64[1], v6 + v18, 1);
        v18 = v15->m128i_i64[1];
      }
      v17 = v15->m128i_i64[0];
      if ( v6 )
      {
        memcpy((void *)(v17 + v18), src, v6);
        v17 = v15->m128i_i64[0];
        v18 = v15->m128i_i64[1];
      }
      v19 = v6 + v18;
      v15 = (__m128i *)((char *)v15 + 1048);
      v15[-65].m128i_i64[0] = v19;
      v135.m128i_i64[0] = v17;
      v135.m128i_i64[1] = v19;
      v136 = v85;
      v137 = 1029;
      sub_112FA80(a2, v16, (__int64)&v135);
      v20 = v15[-66].m128i_i64[1];
      v21 = v15[-65].m128i_i64[0];
      v137 = 773;
      v136 = (__m128i *)"backward";
      v135.m128i_i64[0] = v20;
      v135.m128i_i64[1] = v21;
      sub_112FA80(a2, v16, (__int64)&v135);
    }
    while ( v86 != v15 );
    v23 = v138.m128i_i64[0];
    v13 = (void **)(v138.m128i_i64[0] + 1048LL * v138.m128i_u32[2]);
    if ( (void **)v138.m128i_i64[0] != v13 )
    {
      do
      {
        while ( 1 )
        {
          v13 -= 131;
          if ( *v13 == v13 + 3 )
            break;
          free(*v13);
          if ( (void **)v23 == v13 )
          {
            v13 = (void **)v138.m128i_i64[0];
            goto LABEL_30;
          }
        }
      }
      while ( (void **)v23 != v13 );
      v13 = (void **)v138.m128i_i64[0];
    }
  }
LABEL_30:
  if ( v13 != (void **)&v84[1] )
    free(v13);
}
