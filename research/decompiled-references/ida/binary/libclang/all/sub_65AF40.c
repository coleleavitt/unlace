void __fastcall sub_65AF40(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // r14
  const char *v3; // r13
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  const __m128i *v9; // rbp
  int v10; // eax
  _QWORD *v11; // rdi
  __int64 v12; // rax
  __m128i v13; // rax
  __int64 v14; // rbx
  __int64 v15; // r12
  void **v16; // rbx
  unsigned int *v17; // r13
  __int64 v18; // rax
  char v19; // al
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  void **v22; // rcx
  __m128i v23; // xmm1
  __m128i v24; // xmm1
  __int64 v25; // r15
  void *v26; // rdx
  void *v27; // r13
  __int128 v28; // kr00_16
  void **v29; // rdi
  __m128i v30; // xmm0
  void **v31; // rcx
  __m128i v32; // xmm1
  __m128i v33; // xmm3
  __m128i v34; // xmm1
  void *v35; // rax
  bool v36; // zf
  __int16 v37; // ax
  __m128i v38; // xmm0
  __m128i v39; // xmm0
  unsigned __int64 v40; // rbx
  __int64 v41; // rax
  __m128i *v42; // r12
  const __m128i *v43; // r13
  __int64 v44; // rax
  __m128i v45; // xmm0
  __int64 v46; // rax
  _BYTE *m128i_i8; // rdi
  size_t v48; // r14
  __int8 *v49; // r15
  __int64 v50; // rax
  __int64 v51; // rdi
  void **v52; // rcx
  char *v53; // rax
  _QWORD *v54; // rdx
  __int64 v55; // rax
  _BYTE *v56; // rdi
  _BYTE *v57; // rax
  void **v58; // rcx
  __int64 v59; // rcx
  void (__fastcall ***v60)(_QWORD); // rdi
  __int64 v61; // rdi
  __int64 v62; // rax
  unsigned int v63; // esi
  unsigned __int64 v64; // rdi
  char *v65; // rdx
  char *v66; // rbx
  unsigned int v67; // eax
  unsigned int v68; // edx
  __int64 v69; // rsi
  __m128i *v70; // [rsp+0h] [rbp-668h]
  __int64 v71; // [rsp+10h] [rbp-658h]
  __int64 v72; // [rsp+18h] [rbp-650h]
  bool v73; // [rsp+38h] [rbp-630h]
  void **v74; // [rsp+38h] [rbp-630h]
  void **v75; // [rsp+38h] [rbp-630h]
  void **v76; // [rsp+38h] [rbp-630h]
  void **v77; // [rsp+38h] [rbp-630h]
  void **v78; // [rsp+38h] [rbp-630h]
  __int64 v79; // [rsp+50h] [rbp-618h]
  __int64 v80; // [rsp+58h] [rbp-610h]
  unsigned __int64 v81; // [rsp+60h] [rbp-608h]
  unsigned __int64 v82; // [rsp+60h] [rbp-608h]
  void **v83; // [rsp+70h] [rbp-5F8h]
  __int128 v84; // [rsp+80h] [rbp-5E8h]
  void **v85; // [rsp+80h] [rbp-5E8h]
  void **v86; // [rsp+80h] [rbp-5E8h]
  void **v87; // [rsp+80h] [rbp-5E8h]
  void *v88; // [rsp+90h] [rbp-5D8h]
  double v89; // [rsp+A0h] [rbp-5C8h]
  double v90; // [rsp+A8h] [rbp-5C0h]
  __m128 v91; // [rsp+B0h] [rbp-5B8h] BYREF
  void *v92; // [rsp+C0h] [rbp-5A8h]
  void **v93; // [rsp+C8h] [rbp-5A0h]
  _BYTE *v94; // [rsp+D0h] [rbp-598h]
  _BYTE *v95; // [rsp+D8h] [rbp-590h]
  unsigned __int8 **v96; // [rsp+E0h] [rbp-588h]
  void **v97; // [rsp+E8h] [rbp-580h]
  size_t v98; // [rsp+F8h] [rbp-570h]
  double v99[4]; // [rsp+100h] [rbp-568h] BYREF
  __int64 v100[4]; // [rsp+120h] [rbp-548h] BYREF
  __int64 v101[4]; // [rsp+140h] [rbp-528h] BYREF
  __int64 v102; // [rsp+160h] [rbp-508h] BYREF
  char v103; // [rsp+170h] [rbp-4F8h]
  __int64 v104[4]; // [rsp+180h] [rbp-4E8h] BYREF
  __int64 v105[4]; // [rsp+1A0h] [rbp-4C8h] BYREF
  __int64 v106[4]; // [rsp+1C0h] [rbp-4A8h] BYREF
  __int64 v107[4]; // [rsp+1E0h] [rbp-488h] BYREF
  void *v108; // [rsp+200h] [rbp-468h]
  __int64 v109; // [rsp+208h] [rbp-460h]
  char v110[16]; // [rsp+210h] [rbp-458h] BYREF
  __int128 v111; // [rsp+220h] [rbp-448h] BYREF
  __int128 v112; // [rsp+230h] [rbp-438h]
  __int128 v113; // [rsp+240h] [rbp-428h]
  __int64 v114; // [rsp+250h] [rbp-418h]
  void *ptr[3]; // [rsp+260h] [rbp-408h] BYREF
  char v116; // [rsp+278h] [rbp-3F0h] BYREF
  __m128i v117; // [rsp+298h] [rbp-3D0h] BYREF
  __m128i v118; // [rsp+2A8h] [rbp-3C0h] BYREF
  __m128i v119; // [rsp+2B8h] [rbp-3B0h] BYREF
  __int16 v120; // [rsp+2C8h] [rbp-3A0h]
  char v121; // [rsp+2CAh] [rbp-39Eh]
  void *v122; // [rsp+2D0h] [rbp-398h] BYREF
  __m128i v123; // [rsp+2D8h] [rbp-390h]
  _BYTE v124[32]; // [rsp+2E8h] [rbp-380h] BYREF
  __m128i v125; // [rsp+308h] [rbp-360h] BYREF
  __m128i v126; // [rsp+318h] [rbp-350h] BYREF
  __m128i v127; // [rsp+328h] [rbp-340h] BYREF
  __int16 v128; // [rsp+338h] [rbp-330h]
  char v129; // [rsp+33Ah] [rbp-32Eh]
  void *v130; // [rsp+340h] [rbp-328h] BYREF
  __m128i v131; // [rsp+348h] [rbp-320h]
  _BYTE v132[32]; // [rsp+358h] [rbp-310h] BYREF
  __m128i v133; // [rsp+378h] [rbp-2F0h] BYREF
  __m128i v134; // [rsp+388h] [rbp-2E0h] BYREF
  __m128i v135; // [rsp+398h] [rbp-2D0h] BYREF
  __int16 v136; // [rsp+3A8h] [rbp-2C0h]
  char v137; // [rsp+3AAh] [rbp-2BEh]
  void *v138; // [rsp+3B0h] [rbp-2B8h] BYREF
  __m128i si128; // [rsp+3B8h] [rbp-2B0h]
  _BYTE v140[136]; // [rsp+3C8h] [rbp-2A0h] BYREF
  __int128 v141; // [rsp+450h] [rbp-218h] BYREF
  __int64 v142; // [rsp+460h] [rbp-208h]
  char v143[8]; // [rsp+4B0h] [rbp-1B8h] BYREF
  int v144; // [rsp+4B8h] [rbp-1B0h]
  __m128i v145; // [rsp+540h] [rbp-128h] BYREF
  __int64 v146[10]; // [rsp+550h] [rbp-118h] BYREF
  char *v147; // [rsp+5A0h] [rbp-C8h] BYREF
  __int64 v148; // [rsp+5A8h] [rbp-C0h]
  char v149; // [rsp+5B0h] [rbp-B8h] BYREF

  v2 = 0;
  v3 = &byte_3B9466E;
  v5 = a2;
  v6 = *(_QWORD *)(a2 + 40);
  if ( (v6 & 7) == 0 )
  {
    v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    v2 = v7;
    if ( v7 )
    {
      v17 = *(unsigned int **)(v7 + 16);
      v2 = *v17;
      v3 = (const char *)(v17 + 4);
    }
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
  v138 = v140;
  sub_11240B0(a2, &v138);
  sub_CAE550(v99, *(_QWORD *)(*a1 + 2152LL), *(unsigned int *)(a2 + 24), 1);
  v70 = (__m128i *)sub_6B37C0(*a1);
  if ( v70
    || (*(_BYTE *)(a2 + 28) & 0x7Fu) - 32 <= 0x11
    && (v18 = sub_B0D8A0(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL)), (a2 = v18) != 0)
    && (v19 = *(_BYTE *)(v18 + 74), (v19 & 4) != 0)
    && (v19 & 1) != 0
    && (v70 = (__m128i *)sub_6B37C0(*a1)) != nullptr
    || (a2 = v5, (v70 = (__m128i *)sub_6F4910(*a1, v5, 0)) != nullptr) )
  {
    v8 = sub_6BB140(*a1, a2);
    sub_AA92F0(&v141, v70, *(_QWORD *)(*a1 + 2152LL), v8);
    v9 = *((const __m128i **)&v141 + 1);
    v146[0] = 0;
    v70 = (__m128i *)v141;
    v145 = 0;
    v79 = v142;
    v142 = 0;
    v141 = 0;
    sub_646A80(v145.m128i_i64);
    sub_646A80((__int64 *)&v141);
  }
  else
  {
    v9 = nullptr;
    v79 = 0;
  }
  sub_FD5020(v100, v5);
  sub_FCD270(v101, v5);
  v73 = 0;
  v71 = a1[1];
  if ( *(_DWORD *)(v5 + 24) )
  {
    v10 = sub_CAE830(*(_QWORD *)(*a1 + 2152LL));
    v73 = v10 != 3 && v10 != 0;
  }
  sub_648F60((__int64)&v141, (_QWORD *)v5);
  sub_766420(ptr, v5);
  v11 = (_QWORD *)(*(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(v5 + 16) & 4) != 0 )
    v11 = (_QWORD *)*v11;
  if ( v11 && (v12 = sub_79A2E0(v11)) != 0 && (*(_BYTE *)(v12 + 28) & 0x7F) != 0 )
  {
    sub_63E460((__int64)&v111, (__int64)a1, v12);
  }
  else
  {
    v114 = 0;
    v111 = 0;
    v112 = 0;
    v113 = 0;
  }
  v13.m128i_i64[0] = sub_FC8E80(v71, v138, si128.m128i_i64[0]);
  v14 = v13.m128i_i64[1];
  v15 = v13.m128i_i64[0];
  v145 = v13;
  v146[0] = 0;
  sub_64F120((__int64)&v102, v71 + 160, &v145, v146);
  v80 = v102;
  if ( v146[0] )
    (**(void (__fastcall ***)(__int64))v146[0])(v146[0]);
  if ( !v103 )
    goto LABEL_17;
  v20 = sub_63DDF0(v71, 608, 4);
  v145.m128i_i64[0] = (__int64)v146;
  v21 = v20;
  v145.m128i_i64[1] = 0x100000000LL;
  if ( DWORD2(v141) )
  {
    v82 = v20;
    sub_649B50((__int64)&v145, (__int64)&v141);
    v21 = v82;
  }
  v147 = &v149;
  v148 = 0x100000000LL;
  if ( v144 )
  {
    v81 = v21;
    sub_64AB70((__int64)&v147, (__int64)v143);
    v21 = v81;
  }
  v83 = (void **)v21;
  sub_644390((__int64)v104, v101);
  sub_644390((__int64)v105, v100);
  v22 = v83;
  v96 = (unsigned __int8 **)&v122;
  v94 = v124;
  v122 = v124;
  v123 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  if ( ptr[1] )
  {
    sub_63DE60((__int64)v96, (unsigned __int8 **)ptr);
    v22 = v83;
  }
  v93 = v22;
  v23 = _mm_loadu_si128(&v117);
  v128 = v120;
  v125 = v23;
  v24 = _mm_loadu_si128(&v118);
  v129 = v121;
  v126 = v24;
  v127 = _mm_loadu_si128(&v119);
  v25 = sub_FC8E80(v71, v3, v2);
  v27 = v26;
  v28 = v111;
  v91 = _mm_loadh_ps(v99);
  v88 = (void *)v112;
  strcpy(v110, "public");
  v92 = *((void **)&v112 + 1);
  v109 = 6;
  v84 = v113;
  v90 = v99[1];
  v89 = v99[2];
  v108 = v110;
  sub_644390((__int64)v107, v104);
  v29 = (void **)v106;
  sub_644390((__int64)v106, v105);
  v30 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  v95 = v132;
  v31 = v93;
  v130 = v132;
  v131 = v30;
  if ( v123.m128i_i64[0] )
  {
    v29 = &v130;
    v97 = v93;
    v93 = &v130;
    sub_63DE60((__int64)&v130, v96);
    v30 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    v31 = v97;
  }
  v32 = _mm_loadu_si128(&v125);
  v33 = _mm_load_si128((const __m128i *)&v91);
  v136 = v128;
  v133 = v32;
  v34 = _mm_loadu_si128(&v126);
  v137 = v129;
  v134 = v34;
  v135 = _mm_loadu_si128(&v127);
  *v31 = &off_49F4B08;
  v31[1] = (void *)v15;
  v31[6] = *((void **)&v28 + 1);
  v31[2] = (void *)v14;
  v31[7] = v88;
  v35 = v92;
  v31[3] = (void *)v25;
  v31[8] = v35;
  v31[4] = v27;
  v31[9] = (void *)v84;
  v31[5] = (void *)v28;
  v31[10] = *((void **)&v84 + 1);
  *(__m128i *)(v31 + 11) = v33;
  *((double *)v31 + 13) = v90;
  *((double *)v31 + 14) = v89;
  v36 = v131.m128i_i64[0] == 0;
  v31[15] = v31 + 18;
  *((__m128i *)v31 + 8) = v30;
  if ( !v36 )
  {
    v29 = v31 + 15;
    v87 = v31;
    sub_63DE60((__int64)(v31 + 15), (unsigned __int8 **)&v130);
    v31 = v87;
  }
  v37 = v136;
  v38 = _mm_loadu_si128(&v133);
  v31[32] = nullptr;
  *((_WORD *)v31 + 112) = v37;
  LOBYTE(v37) = v137;
  *((__m128i *)v31 + 11) = v38;
  v39 = _mm_loadu_si128(&v134);
  *((_BYTE *)v31 + 226) = v37;
  LOBYTE(v37) = *((_BYTE *)v31 + 232);
  *((__m128i *)v31 + 12) = v39;
  *((__m128i *)v31 + 13) = _mm_loadu_si128(&v135);
  *((_BYTE *)v31 + 232) = v37 & 0xC0 | 0x11;
  *((_OWORD *)v31 + 15) = 0;
  v40 = (char *)v9 - (char *)v70;
  if ( v9 == v70 )
  {
    v42 = nullptr;
  }
  else
  {
    if ( v40 > 0x7FFFFFFFFFFFFFD0LL )
      sub_555886(v29);
    v85 = v31;
    v41 = operator new(v40);
    v31 = v85;
    v42 = (__m128i *)v41;
  }
  v31[32] = &v42->m128i_i8[v40];
  *((__m128i *)v31 + 15) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v42, (__m128i)(unsigned __int64)v42);
  if ( v9 != v70 )
  {
    v86 = v31;
    v43 = v70;
    while ( 1 )
    {
      m128i_i8 = v42[1].m128i_i8;
      v42->m128i_i64[0] = (__int64)v42[1].m128i_i64;
      v48 = v43->m128i_u64[1];
      v49 = (__int8 *)v43->m128i_i64[0];
      v98 = v48;
      if ( v48 > 0xF )
        break;
      if ( v48 == 1 )
      {
        v42[1].m128i_i8[0] = *v49;
        goto LABEL_52;
      }
      if ( v48 )
        goto LABEL_55;
LABEL_52:
      v42->m128i_i64[1] = v48;
      v43 += 5;
      v42 += 5;
      m128i_i8[v48] = 0;
      v44 = v43[-2].m128i_i64[0];
      v42[-3] = _mm_loadu_si128(v43 - 3);
      v45 = _mm_loadu_si128((const __m128i *)((char *)v43 - 24));
      v42[-2].m128i_i64[0] = v44;
      v46 = v43[-1].m128i_i64[1];
      *(__m128i *)((char *)v42 - 24) = v45;
      v42[-1].m128i_i64[1] = v46;
      if ( v9 == v43 )
      {
        v86[31] = v42;
        v51 = (__int64)(v86 + 33);
        goto LABEL_60;
      }
    }
    v50 = std::string::_M_create();
    v42->m128i_i64[0] = v50;
    m128i_i8 = (_BYTE *)v50;
    v42[1].m128i_i64[0] = v98;
LABEL_55:
    memcpy(m128i_i8, v49, v48);
    v48 = v98;
    m128i_i8 = (_BYTE *)v42->m128i_i64[0];
    goto LABEL_52;
  }
  v86 = v31;
  v51 = (__int64)(v31 + 33);
LABEL_60:
  sub_644390(v51, v106);
  sub_644390((__int64)(v86 + 36), v107);
  v52 = v86;
  *((_BYTE *)v86 + 312) = v73;
  v53 = (char *)v108;
  v54 = v86 + 42;
  v86[40] = v86 + 42;
  if ( v53 == v110 )
  {
    v55 = v109;
    v63 = v109 + 1;
    if ( (unsigned int)(v109 + 1) >= 8 )
    {
      *v54 = *(_QWORD *)v110;
      *(_QWORD *)((char *)v54 + v63 - 8) = *(_QWORD *)&v110[v63 - 8];
      v64 = (unsigned __int64)(v86 + 43) & 0xFFFFFFFFFFFFFFF8LL;
      v65 = (char *)v54 - v64;
      v66 = (char *)(v110 - v65);
      if ( ((v63 + (_DWORD)v65) & 0xFFFFFFF8) >= 8 )
      {
        v67 = (v63 + (_DWORD)v65) & 0xFFFFFFF8;
        v68 = 0;
        do
        {
          v69 = v68;
          v68 += 8;
          *(_QWORD *)(v64 + v69) = *(_QWORD *)&v66[v69];
        }
        while ( v68 < v67 );
      }
      v55 = v109;
    }
    else if ( (v63 & 4) != 0 )
    {
      *(_DWORD *)v54 = *(_DWORD *)v110;
      *(_DWORD *)((char *)v54 + v63 - 4) = *(_DWORD *)&v110[v63 - 4];
      v55 = v109;
    }
    else if ( (_DWORD)v109 != -1 )
    {
      *(_BYTE *)v54 = v110[0];
      v55 = v109;
      if ( (v63 & 2) != 0 )
      {
        *(_WORD *)((char *)v54 + v63 - 2) = *(_WORD *)&v110[v63 - 2];
        v55 = v109;
      }
    }
  }
  else
  {
    v86[40] = v53;
    v86[42] = *(void **)v110;
    v55 = v109;
  }
  v86[41] = (void *)v55;
  v56 = v130;
  v109 = 0;
  v108 = v110;
  v110[0] = 0;
  v86[44] = (void *)0x1B0000001BLL;
  v57 = v95;
  v86[45] = nullptr;
  if ( v56 != v57 )
  {
    free(v56);
    v52 = v86;
  }
  v74 = v52;
  sub_6441A0(v106);
  sub_6441A0(v107);
  v58 = v74;
  if ( v108 != v110 )
  {
    operator delete(v108, *(_QWORD *)v110 + 1LL);
    v58 = v74;
  }
  *v58 = &off_47D0078;
  v58[46] = v58 + 48;
  v58[47] = (void *)0x100000000LL;
  if ( v145.m128i_i32[2] )
  {
    v78 = v58;
    sub_64A2B0((__int64)(v58 + 46), (__int64)&v145);
    v58 = v78;
  }
  v58[58] = v58 + 60;
  v58[59] = (void *)0x100000000LL;
  if ( (_DWORD)v148 )
  {
    v77 = v58;
    sub_64B430((__int64)(v58 + 58), (__int64 *)&v147);
    v58 = v77;
  }
  if ( v122 != v94 )
  {
    v75 = v58;
    free(v122);
    v58 = v75;
  }
  v76 = v58;
  sub_6441A0(v105);
  sub_6441A0(v104);
  sub_6469C0((__int64)&v147);
  sub_646940((__int64)&v145);
  v59 = (__int64)v76;
  v60 = *(void (__fastcall ****)(_QWORD))(v80 + 16);
  *(_QWORD *)(v80 + 16) = v76;
  if ( v60 )
  {
    (**v60)(v60);
    v59 = (__int64)v76;
  }
  v61 = *(_QWORD *)(v59 + 88);
  if ( v61 && (unsigned int)(*(_DWORD *)(v61 + 356) - 2) <= 0x13 && (v72 = v59, v62 = sub_FC8C50(), v59 = v72, v62) )
    sub_FC8D50(v62, v72);
  else
    sub_64B900(v71 + 184, v59);
LABEL_17:
  if ( ptr[0] != &v116 )
    free(ptr[0]);
  sub_6469C0((__int64)v143);
  sub_646940((__int64)&v141);
  sub_6441A0(v101);
  sub_6441A0(v100);
  v16 = (void **)v70;
  if ( v9 != v70 )
  {
    do
    {
      if ( *v16 != v16 + 2 )
        operator delete(*v16, (unsigned __int64)v16[2] + 1);
      v16 += 10;
    }
    while ( v9 != (const __m128i *)v16 );
  }
  if ( v70 )
    operator delete(v70, v79 - (_QWORD)v70);
  if ( v138 != v140 )
    free(v138);
}

