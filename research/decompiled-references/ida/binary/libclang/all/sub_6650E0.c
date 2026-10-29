void __fastcall sub_6650E0(__int64 *a1, __int64 a2, double a3, __m128i a4, double a5, __m128 a6)
{
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // r14
  __int64 v15; // rbp
  __m128i v16; // rax
  __m128i v17; // xmm5
  __m128i v18; // xmm7
  __m128i v19; // xmm1
  __int64 v20; // rbp
  __m128i v21; // rax
  __int64 v22; // r15
  unsigned __int64 v23; // rax
  _QWORD *v24; // rbx
  __m128i v25; // xmm3
  __m128i v26; // xmm4
  __m128i v27; // xmm0
  _QWORD *v28; // rax
  __m128i v29; // xmm0
  __m128i v30; // xmm0
  __m128i v31; // xmm0
  __m128i v32; // xmm0
  __int64 v33; // rdx
  void **v34; // rsi
  __m128i v35; // xmm0
  void (__fastcall ***v36)(_QWORD); // rdi
  __int64 v37; // rdi
  __int64 v38; // rax
  __m128i v39; // xmm0
  __int64 *v40; // rax
  __m128i v41; // xmm0
  __m128i v42; // xmm0
  __m128i v43; // xmm0
  __m128i v44; // xmm0
  __int64 v45; // rdx
  __m128i v46; // xmm0
  void (__fastcall ***v47)(_QWORD); // rdi
  __int64 v48; // r15
  __int64 v49; // rdi
  __int64 v50; // rax
  int v51; // esi
  __int64 v52; // rdi
  char v53; // al
  __int64 v54; // rdi
  int v55; // esi
  __m128i v56; // rax
  __int64 v57; // r15
  _QWORD *v58; // rbp
  __m128i v59; // xmm0
  __int64 *v60; // rax
  __m128i v61; // xmm0
  __m128i v62; // xmm0
  __m128i v63; // xmm0
  __int64 v64; // rdx
  __m128i v65; // xmm0
  void (__fastcall ***v66)(_QWORD); // rdi
  __int64 v67; // rdi
  __int64 v68; // rdi
  __m128i v69; // [rsp+0h] [rbp-8C8h]
  __m128i v70; // [rsp+0h] [rbp-8C8h]
  __m128i v71; // [rsp+0h] [rbp-8C8h]
  __m128i v72; // [rsp+10h] [rbp-8B8h]
  __m128i v73; // [rsp+10h] [rbp-8B8h]
  __m128i v74; // [rsp+10h] [rbp-8B8h]
  __m128i v75; // [rsp+38h] [rbp-890h]
  __m128i v76; // [rsp+38h] [rbp-890h]
  __m128i v77; // [rsp+38h] [rbp-890h]
  __m128i v78; // [rsp+C0h] [rbp-808h] BYREF
  __m128i v79; // [rsp+D0h] [rbp-7F8h] BYREF
  __m128i v80; // [rsp+E0h] [rbp-7E8h] BYREF
  __m128i v81; // [rsp+F0h] [rbp-7D8h] BYREF
  __m128i v82; // [rsp+100h] [rbp-7C8h] BYREF
  __m128i *v83; // [rsp+110h] [rbp-7B8h]
  __m128i *v84; // [rsp+118h] [rbp-7B0h]
  __m128i *v85; // [rsp+120h] [rbp-7A8h]
  __m128i *v86; // [rsp+128h] [rbp-7A0h]
  __int64 *v87; // [rsp+130h] [rbp-798h]
  unsigned __int8 v88; // [rsp+13Fh] [rbp-789h]
  __m128i v89; // [rsp+140h] [rbp-788h]
  __int64 *v90; // [rsp+150h] [rbp-778h]
  __int64 v91; // [rsp+158h] [rbp-770h]
  __int64 *v92; // [rsp+160h] [rbp-768h]
  void **v93; // [rsp+168h] [rbp-760h]
  __m128i *v94; // [rsp+170h] [rbp-758h]
  __int64 *v95; // [rsp+178h] [rbp-750h]
  __int64 *v96; // [rsp+180h] [rbp-748h]
  void **v97; // [rsp+188h] [rbp-740h]
  _QWORD *v98; // [rsp+190h] [rbp-738h]
  __int64 v99; // [rsp+198h] [rbp-730h]
  __m128i v100; // [rsp+1A0h] [rbp-728h] BYREF
  __int64 v101; // [rsp+1B0h] [rbp-718h]
  __m128 v102; // [rsp+1C0h] [rbp-708h] BYREF
  __int64 v103; // [rsp+1D0h] [rbp-6F8h]
  __int64 v104[4]; // [rsp+1E0h] [rbp-6E8h] BYREF
  __m128i v105; // [rsp+200h] [rbp-6C8h] BYREF
  __int64 v106; // [rsp+210h] [rbp-6B8h]
  __int64 *v107; // [rsp+220h] [rbp-6A8h] BYREF
  char v108; // [rsp+230h] [rbp-698h]
  _BYTE v109[32]; // [rsp+240h] [rbp-688h] BYREF
  __m128i v110; // [rsp+260h] [rbp-668h] BYREF
  __int64 v111; // [rsp+270h] [rbp-658h]
  __m128i v112; // [rsp+280h] [rbp-648h] BYREF
  __int64 v113; // [rsp+290h] [rbp-638h]
  __int64 v114[2]; // [rsp+2A0h] [rbp-628h] BYREF
  char v115; // [rsp+2B0h] [rbp-618h]
  __int64 v116[4]; // [rsp+2C0h] [rbp-608h] BYREF
  _BYTE *v117; // [rsp+2E0h] [rbp-5E8h] BYREF
  __int64 v118; // [rsp+2E8h] [rbp-5E0h]
  __m128i v119; // [rsp+300h] [rbp-5C8h] BYREF
  __int64 v120; // [rsp+310h] [rbp-5B8h]
  __m128i v121; // [rsp+320h] [rbp-5A8h] BYREF
  __int64 v122; // [rsp+330h] [rbp-598h]
  _BYTE v123[32]; // [rsp+340h] [rbp-588h] BYREF
  __int64 v124[4]; // [rsp+360h] [rbp-568h] BYREF
  __int64 v125[3]; // [rsp+380h] [rbp-548h] BYREF
  __int64 v126[3]; // [rsp+398h] [rbp-530h] BYREF
  __m128i v127; // [rsp+3B0h] [rbp-518h] BYREF
  __m128i v128; // [rsp+3C0h] [rbp-508h] BYREF
  __m128i v129; // [rsp+3D0h] [rbp-4F8h] BYREF
  __m128i v130; // [rsp+3E0h] [rbp-4E8h] BYREF
  _OWORD v131[2]; // [rsp+3F0h] [rbp-4D8h] BYREF
  _QWORD v132[3]; // [rsp+410h] [rbp-4B8h] BYREF
  _BYTE v133[24]; // [rsp+428h] [rbp-4A0h] BYREF
  __m128i v134; // [rsp+440h] [rbp-488h] BYREF
  __m128i v135; // [rsp+450h] [rbp-478h] BYREF
  __m128i v136; // [rsp+460h] [rbp-468h] BYREF
  __int64 v137; // [rsp+470h] [rbp-458h]
  __m128i v138; // [rsp+480h] [rbp-448h] BYREF
  __m128i v139; // [rsp+490h] [rbp-438h] BYREF
  __m128i v140; // [rsp+4A0h] [rbp-428h] BYREF
  __int64 v141; // [rsp+4B0h] [rbp-418h]
  void *ptr[2]; // [rsp+4C0h] [rbp-408h] BYREF
  __m128i v143; // [rsp+4D0h] [rbp-3F8h] BYREF
  __m128i v144; // [rsp+4E0h] [rbp-3E8h] BYREF
  __int64 v145; // [rsp+4F0h] [rbp-3D8h]
  void *v146[2]; // [rsp+530h] [rbp-398h] BYREF
  __m128i v147; // [rsp+540h] [rbp-388h] BYREF
  __m128i v148; // [rsp+550h] [rbp-378h] BYREF
  __int64 v149; // [rsp+560h] [rbp-368h]
  void *v150; // [rsp+5A0h] [rbp-328h] BYREF
  _QWORD *v151; // [rsp+5A8h] [rbp-320h]
  _BYTE v152[88]; // [rsp+5B8h] [rbp-310h] BYREF
  void *v153; // [rsp+610h] [rbp-2B8h] BYREF
  __m128i si128; // [rsp+618h] [rbp-2B0h]
  _BYTE v155[136]; // [rsp+628h] [rbp-2A0h] BYREF
  void *v156[2]; // [rsp+6B0h] [rbp-218h] BYREF
  __int64 v157; // [rsp+6C0h] [rbp-208h]
  _BYTE v158[72]; // [rsp+6C8h] [rbp-200h] BYREF
  char v159; // [rsp+710h] [rbp-1B8h] BYREF
  int v160; // [rsp+718h] [rbp-1B0h]
  void *v161[2]; // [rsp+7A0h] [rbp-128h] BYREF
  void (__fastcall ***v162)(_QWORD); // [rsp+7B0h] [rbp-118h] BYREF
  _BYTE v163[72]; // [rsp+7B8h] [rbp-110h] BYREF
  char *v164; // [rsp+800h] [rbp-C8h] BYREF
  __int64 v165; // [rsp+808h] [rbp-C0h]
  char v166; // [rsp+810h] [rbp-B8h] BYREF

  if ( (*(_BYTE *)(a2 + 29) & 2) == 0 && ((*(_BYTE *)(a2 + 28) + 94) & 0x7Fu) > 2 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
    v153 = v155;
    sub_11240B0(a2, &v153);
    sub_CAE550(&v100, *(_QWORD *)(*a1 + 2152), *(unsigned int *)(a2 + 24), 1);
    v103 = 0;
    v102 = 0;
    v8 = sub_63DC30(a1, a2);
    if ( v8 )
    {
      v9 = sub_6BB140(*a1, a2);
      sub_AA92F0(v156, v8, *(_QWORD *)(*a1 + 2152), v9);
      a4 = _mm_load_si128((const __m128i *)v156);
      *(_OWORD *)v161 = 0;
      v103 = v157;
      v162 = nullptr;
      v157 = 0;
      v102 = (__m128)a4;
      *(_OWORD *)v156 = 0;
      sub_646A80((__int64 *)v161);
      sub_646A80((__int64 *)v156);
    }
    sub_FCD270(v104, a2);
    sub_643500((__int64 *)&v117, a2);
    sub_64BE60((__int64)v125, a2, 0.0, *(double *)a4.m128i_i64, a5, a6);
    v14 = (_QWORD *)sub_780E20(a2);
    if ( v14 )
    {
      v15 = a1[1];
      v88 = sub_63DE20(*a1, *(_DWORD *)(a2 + 24));
      v85 = (__m128i *)v156;
      sub_648F60((__int64)v156, v14);
      sub_643500(v121.m128i_i64, (__int64)v14);
      v83 = &v127;
      sub_64BE60((__int64)&v127, a2, 0.0, *(double *)a4.m128i_i64, a5, a6);
      v81 = _mm_load_si128(&v127);
      v80 = _mm_load_si128(&v128);
      v79 = _mm_load_si128(&v129);
      v86 = &v105;
      sub_FD6EC0(&v105, v14);
      sub_766420(ptr, a2);
      sub_63E5A0((__int64)&v134, (__int64)a1, a2);
      v84 = &v119;
      sub_791DD0(&v119, a2 + 40);
      v89 = v119;
      v16.m128i_i64[0] = sub_FC8E80(v15, v153, si128.m128i_i64[0]);
      v82 = v16;
      v17 = _mm_load_si128(&v82);
      v162 = nullptr;
      *(__m128i *)v161 = v17;
      sub_64F120((__int64)&v107, v15 + 160, (__m128i *)v161, (__int64 *)&v162);
      v92 = v107;
      if ( v162 )
        (**v162)(v162);
      v78.m128i_i64[0] = (__int64)&v159;
      if ( v108 )
      {
        v23 = sub_63DDF0(v15, 656, 4);
        v161[0] = &v162;
        v24 = (_QWORD *)v23;
        v161[1] = (void *)0x100000000LL;
        if ( LODWORD(v156[1]) )
          sub_649B50((__int64)v161, (__int64)v85);
        v165 = 0x100000000LL;
        v164 = &v166;
        v78.m128i_i64[0] = (__int64)&v159;
        v93 = (void **)&v164;
        if ( v160 )
          sub_64AB70((__int64)&v164, v78.m128i_i64[0]);
        v87 = (__int64 *)v123;
        std::string::basic_string();
        v25 = _mm_load_si128(&v80);
        v26 = _mm_load_si128(&v79);
        v130 = _mm_load_si128(&v81);
        v131[0] = v25;
        v131[1] = v26;
        v90 = (__int64 *)v109;
        sub_644390((__int64)v109, v104);
        v27 = _mm_load_si128(&v105);
        v111 = v106;
        v110 = v27;
        v105 = 0;
        v106 = 0;
        sub_6435F0((__int64)v146, (__int64)ptr);
        v28 = (_QWORD *)sub_FC8E80(v15, v89.m128i_i64[0], v89.m128i_i64[1]);
        v29 = _mm_load_si128(&v134);
        v98 = v28;
        v138 = v29;
        v30 = _mm_load_si128(&v135);
        v141 = v137;
        v139 = v30;
        v31 = _mm_load_si128(&v136);
        v113 = v101;
        v140 = v31;
        v32 = _mm_load_si128(&v100);
        v81.m128i_i64[0] = (__int64)v124;
        v112 = v32;
        v99 = v33;
        std::string::basic_string();
        v79.m128i_i64[0] = (__int64)v132;
        v89.m128i_i64[0] = (__int64)&v130;
        sub_646AF0(v132, v130.m128i_i64);
        v96 = (__int64 *)v133;
        v95 = (__int64 *)v131 + 1;
        sub_644390((__int64)v133, (__int64 *)v131 + 1);
        v80.m128i_i64[0] = (__int64)v116;
        sub_644390((__int64)v116, v90);
        v94 = &v110;
        sub_644390((__int64)v114, v110.m128i_i64);
        v97 = &v150;
        sub_6435F0((__int64)&v150, (__int64)v146);
        v34 = (void **)&qword_20;
        v75 = _mm_load_si128(&v112);
        v69 = _mm_load_si128(&v138);
        v72 = _mm_load_si128(&v139);
        v35 = _mm_load_si128(&v140);
        sub_6474F0(
          (__int64)v24,
          0x20u,
          v82.m128i_i64[0],
          (_QWORD *)v82.m128i_i64[1],
          v98,
          v99,
          v69.m128i_i64[0],
          v69.m128i_i64[1],
          v72.m128i_i64[0],
          v72.m128i_i64[1],
          v35.m128i_i64[0],
          v35.m128i_i64[1],
          v141,
          v75.m128i_i64[0],
          v75.m128i_i64[1],
          v113,
          (__int64)v97,
          (__int64 *)&v102,
          v114,
          (__int64 *)v80.m128i_i64[0],
          v79.m128i_i64[0],
          v81.m128i_i64[0],
          v88);
        if ( v150 != v152 )
          free(v150);
        sub_6441A0(v114);
        sub_6441A0((__int64 *)v80.m128i_i64[0]);
        sub_6441A0(v96);
        sub_647CF0((__int64 *)v79.m128i_i64[0]);
        std::string::_M_dispose();
        v24[53] = 0x100000000LL;
        *v24 = &off_47D0038;
        v24[52] = v24 + 54;
        if ( LODWORD(v161[1]) )
        {
          v34 = v161;
          sub_64A2B0((__int64)(v24 + 52), (__int64)v161);
        }
        v24[65] = 0x100000000LL;
        v24[64] = v24 + 66;
        if ( (_DWORD)v165 )
        {
          v34 = v93;
          sub_64B430((__int64)(v24 + 64), (__int64 *)v93);
        }
        if ( v146[0] != &v147.m128i_u64[1] )
          free(v146[0]);
        sub_6441A0(v94->m128i_i64);
        sub_6441A0(v90);
        sub_6441A0(v95);
        sub_647CF0((__int64 *)v89.m128i_i64[0]);
        std::string::_M_dispose();
        sub_6469C0((__int64)v93);
        sub_646940((__int64)v161);
        v36 = (void (__fastcall ***)(_QWORD))v92[2];
        v92[2] = (__int64)v24;
        if ( v36 )
          (**v36)(v36);
        v37 = v24[11];
        if ( v37 && (unsigned int)(*(_DWORD *)(v37 + 356) - 2) <= 0x13 && (v38 = sub_FC8C50(v37, v34)) != 0 )
          sub_FC8D50(v38, v24);
        else
          sub_64B900(v15 + 184, (__int64)v24);
        v79 = 0;
        v80 = 0;
        v81 = 0;
      }
      std::string::_M_dispose();
      if ( ptr[0] != &v143.m128i_u64[1] )
        free(ptr[0]);
      sub_6441A0(v86->m128i_i64);
      v18 = _mm_load_si128(&v80);
      v19 = _mm_load_si128(&v79);
      v127 = _mm_load_si128(&v81);
      v128 = v18;
      v129 = v19;
      sub_6441A0(&v128.m128i_i64[1]);
      sub_647CF0(v83->m128i_i64);
      std::string::_M_dispose();
      sub_6469C0(v78.m128i_i64[0]);
      sub_646940((__int64)v85);
LABEL_13:
      sub_6441A0(v126);
      sub_647CF0(v125);
      std::string::_M_dispose();
      sub_6441A0(v104);
      sub_646A80((__int64 *)&v102);
      if ( v153 != v155 )
        free(v153);
      return;
    }
    if ( sub_780F50(a2, a2, v10, v11, v12, v13) )
    {
      v20 = a1[1];
      v88 = sub_63DE20(*a1, *(_DWORD *)(a2 + 24));
      sub_FD7260(&v112, a2);
      sub_766420(&v150, a2);
      sub_63E5A0((__int64)ptr, (__int64)a1, a2);
      v83 = &v127;
      sub_791DD0(&v127, a2 + 40);
      v79 = v127;
      v21.m128i_i64[0] = sub_FC8E80(v20, v153, si128.m128i_i64[0]);
      v162 = nullptr;
      v78 = v21;
      *(__m128i *)v161 = _mm_load_si128(&v78);
      sub_64F120((__int64)v114, v20 + 160, (__m128i *)v161, (__int64 *)&v162);
      v22 = v114[0];
      if ( v162 )
        (**v162)(v162);
      if ( v115 )
      {
        v82.m128i_i64[0] = sub_63DDF0(v20, 416, 4);
        v130.m128i_i64[0] = (__int64)v131;
        v89.m128i_i64[0] = (__int64)&v130;
        sub_63E170(v130.m128i_i64, v117, (__int64)&v117[v118]);
        v85 = &v134;
        sub_646AF0(&v134, v125);
        v86 = (__m128i *)&v135.m128i_u64[1];
        sub_644390((__int64)&v135.m128i_i64[1], v126);
        v80.m128i_i64[0] = (__int64)v116;
        sub_644390((__int64)v116, v104);
        v39 = _mm_load_si128(&v112);
        v93 = v156;
        v120 = v113;
        v119 = v39;
        v112 = 0;
        v113 = 0;
        sub_6435F0((__int64)v156, (__int64)&v150);
        v40 = (__int64 *)sub_FC8E80(v20, v79.m128i_i64[0], v79.m128i_i64[1]);
        v41 = _mm_load_si128((const __m128i *)ptr);
        v90 = v40;
        *(__m128i *)v146 = v41;
        v42 = _mm_load_si128(&v143);
        v149 = v145;
        v147 = v42;
        v43 = _mm_load_si128(&v144);
        v79.m128i_i64[0] = (__int64)v132;
        v148 = v43;
        v44 = _mm_load_si128(&v100);
        v122 = v101;
        v121 = v44;
        v91 = v45;
        std::string::basic_string();
        sub_646AF0(&v138, v85->m128i_i64);
        v92 = &v139.m128i_i64[1];
        sub_644390((__int64)&v139.m128i_i64[1], v86->m128i_i64);
        v81.m128i_i64[0] = (__int64)v124;
        sub_644390((__int64)v124, (__int64 *)v80.m128i_i64[0]);
        v87 = (__int64 *)v123;
        v84 = &v119;
        sub_644390((__int64)v123, v119.m128i_i64);
        sub_6435F0((__int64)v161, (__int64)v93);
        v76 = _mm_load_si128(&v121);
        v70 = _mm_load_si128((const __m128i *)v146);
        v73 = _mm_load_si128(&v147);
        v46 = _mm_load_si128(&v148);
        sub_6474F0(
          v82.m128i_i64[0],
          0x21u,
          v78.m128i_i64[0],
          (_QWORD *)v78.m128i_i64[1],
          v90,
          v91,
          v70.m128i_i64[0],
          v70.m128i_i64[1],
          v73.m128i_i64[0],
          v73.m128i_i64[1],
          v46.m128i_i64[0],
          v46.m128i_i64[1],
          v149,
          v76.m128i_i64[0],
          v76.m128i_i64[1],
          v122,
          (__int64)v161,
          (__int64 *)&v102,
          v87,
          (__int64 *)v81.m128i_i64[0],
          (__int64)&v138,
          v79.m128i_i64[0],
          v88);
        if ( v161[0] != v163 )
          free(v161[0]);
        sub_6441A0(v87);
        sub_6441A0((__int64 *)v81.m128i_i64[0]);
        sub_6441A0(v92);
        sub_647CF0(v138.m128i_i64);
        std::string::_M_dispose();
        *(_QWORD *)v82.m128i_i64[0] = &off_47D0058;
        if ( v156[0] != v158 )
          free(v156[0]);
        sub_6441A0(v84->m128i_i64);
        sub_6441A0((__int64 *)v80.m128i_i64[0]);
        sub_6441A0(v86->m128i_i64);
        sub_647CF0(v85->m128i_i64);
        std::string::_M_dispose();
        v47 = *(void (__fastcall ****)(_QWORD))(v22 + 16);
        *(_QWORD *)(v22 + 16) = v82.m128i_i64[0];
        if ( v47 )
          (**v47)(v47);
        v48 = v82.m128i_i64[0];
        v49 = *(_QWORD *)(v82.m128i_i64[0] + 88);
        if ( v49 && (unsigned int)(*(_DWORD *)(v49 + 356) - 2) <= 0x13 && (v50 = sub_FC8C50(v49, 33)) != 0 )
          sub_FC8D50(v50, v48);
        else
          sub_64B900(v20 + 184, v82.m128i_i64[0]);
      }
LABEL_20:
      std::string::_M_dispose();
      if ( v150 != v152 )
        free(v150);
      sub_6441A0(v112.m128i_i64);
      goto LABEL_13;
    }
    if ( (unsigned int)sub_780B80(a2) )
    {
      v51 = *(_DWORD *)(a2 + 24);
      v52 = *a1;
      v83 = (__m128i *)a1[1];
      LOBYTE(ptr[0]) = sub_63DE20(v52, v51);
      sub_FD3D00(v146, a2);
      sub_766420(v161, a2);
      v78.m128i_i64[0] = (__int64)v156;
      sub_63E5A0((__int64)v156, (__int64)a1, a2);
      sub_791DD0(&v150, a2 + 40);
      sub_6649D0(
        (unsigned __int64 *)v83,
        (__int64)v153,
        si128.m128i_i64[0],
        (__int64)v150,
        v151,
        (const __m128i *)v156,
        &v100,
        (__int64)v161,
        (__int64 *)&v102,
        (const __m128i *)v146,
        v104,
        v125,
        (__int64 *)&v117,
        (char *)ptr);
    }
    else
    {
      v53 = sub_7A4F00(a2);
      v54 = *a1;
      v55 = *(_DWORD *)(a2 + 24);
      v78.m128i_i64[0] = a1[1];
      if ( v53 )
      {
        v88 = sub_63DE20(v54, v55);
        sub_FD3580(&v112, a2);
        sub_766420(&v150, a2);
        sub_63E5A0((__int64)ptr, (__int64)a1, a2);
        v83 = &v127;
        sub_791DD0(&v127, a2 + 40);
        v79 = v127;
        v56.m128i_i64[0] = sub_FC8E80(v78.m128i_i64[0], v153, si128.m128i_i64[0]);
        v162 = nullptr;
        v82 = v56;
        *(__m128i *)v161 = _mm_load_si128(&v82);
        sub_64F120((__int64)v114, v78.m128i_i64[0] + 160, (__m128i *)v161, (__int64 *)&v162);
        v57 = v114[0];
        if ( v162 )
          (**v162)(v162);
        if ( v115 )
        {
          v58 = (_QWORD *)sub_63DDF0(v78.m128i_i64[0], 416, 4);
          v89.m128i_i64[0] = (__int64)&v130;
          v130.m128i_i64[0] = (__int64)v131;
          sub_63E170(v130.m128i_i64, v117, (__int64)&v117[v118]);
          v85 = &v134;
          sub_646AF0(&v134, v125);
          v86 = (__m128i *)&v135.m128i_u64[1];
          sub_644390((__int64)&v135.m128i_i64[1], v126);
          v80.m128i_i64[0] = (__int64)v116;
          sub_644390((__int64)v116, v104);
          v59 = _mm_load_si128(&v112);
          v93 = v156;
          v120 = v113;
          v119 = v59;
          v112 = 0;
          v113 = 0;
          sub_6435F0((__int64)v156, (__int64)&v150);
          v60 = (__int64 *)sub_FC8E80(v78.m128i_i64[0], v79.m128i_i64[0], v79.m128i_i64[1]);
          v61 = _mm_load_si128((const __m128i *)ptr);
          v90 = v60;
          *(__m128i *)v146 = v61;
          v62 = _mm_load_si128(&v143);
          v149 = v145;
          v147 = v62;
          v63 = _mm_load_si128(&v144);
          v122 = v101;
          v148 = v63;
          v79.m128i_i64[0] = (__int64)v132;
          v121 = _mm_load_si128(&v100);
          v91 = v64;
          std::string::basic_string();
          sub_646AF0(&v138, v85->m128i_i64);
          v92 = &v139.m128i_i64[1];
          sub_644390((__int64)&v139.m128i_i64[1], v86->m128i_i64);
          v81.m128i_i64[0] = (__int64)v124;
          sub_644390((__int64)v124, v116);
          v87 = (__int64 *)v123;
          v84 = &v119;
          sub_644390((__int64)v123, v119.m128i_i64);
          sub_6435F0((__int64)v161, (__int64)v93);
          v77 = _mm_load_si128(&v121);
          v71 = _mm_load_si128((const __m128i *)v146);
          v74 = _mm_load_si128(&v147);
          v65 = _mm_load_si128(&v148);
          sub_6474F0(
            (__int64)v58,
            0x1Cu,
            v82.m128i_i64[0],
            (_QWORD *)v82.m128i_i64[1],
            v90,
            v91,
            v71.m128i_i64[0],
            v71.m128i_i64[1],
            v74.m128i_i64[0],
            v74.m128i_i64[1],
            v65.m128i_i64[0],
            v65.m128i_i64[1],
            v149,
            v77.m128i_i64[0],
            v77.m128i_i64[1],
            v122,
            (__int64)v161,
            (__int64 *)&v102,
            v87,
            v124,
            (__int64)&v138,
            (__int64)v132,
            v88);
          if ( v161[0] != v163 )
            free(v161[0]);
          sub_6441A0(v87);
          sub_6441A0((__int64 *)v81.m128i_i64[0]);
          sub_6441A0(v92);
          sub_647CF0(v138.m128i_i64);
          std::string::_M_dispose();
          *v58 = &off_49931D0;
          if ( v156[0] != v158 )
            free(v156[0]);
          sub_6441A0(v84->m128i_i64);
          sub_6441A0((__int64 *)v80.m128i_i64[0]);
          sub_6441A0(v86->m128i_i64);
          sub_647CF0(v85->m128i_i64);
          std::string::_M_dispose();
          v66 = *(void (__fastcall ****)(_QWORD))(v57 + 16);
          *(_QWORD *)(v57 + 16) = v58;
          if ( v66 )
            (**v66)(v66);
          v67 = v58[11];
          if ( v67 && (unsigned int)(*(_DWORD *)(v67 + 356) - 2) <= 0x13 && (v68 = sub_FC8C50(v67, 28)) != 0 )
            sub_FC8D50(v68, v58);
          else
            sub_64B900(v78.m128i_i64[0] + 184, (__int64)v58);
        }
        goto LABEL_20;
      }
      LOBYTE(ptr[0]) = sub_63DE20(v54, v55);
      sub_FD3580(v146, a2);
      sub_766420(v161, a2);
      v83 = (__m128i *)v156;
      sub_63E5A0((__int64)v156, (__int64)a1, a2);
      sub_791DD0(&v150, a2 + 40);
      sub_6649D0(
        (unsigned __int64 *)v78.m128i_i64[0],
        (__int64)v153,
        si128.m128i_i64[0],
        (__int64)v150,
        v151,
        (const __m128i *)v156,
        &v100,
        (__int64)v161,
        (__int64 *)&v102,
        (const __m128i *)v146,
        v104,
        v125,
        (__int64 *)&v117,
        (char *)ptr);
    }
    std::string::_M_dispose();
    if ( v161[0] != v163 )
      free(v161[0]);
    sub_6441A0((__int64 *)v146);
    goto LABEL_13;
  }
}

