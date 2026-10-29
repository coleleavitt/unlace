__int64 __fastcall sub_411B80(__int64 a1, __int64 a2, char *a3, __int64 a4)
{
  char **exception; // rbp
  char **v5; // rbx
  char **v6; // rbp
  char **v7; // rbp
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned int v18; // ebp
  __int64 v19; // rax
  __int64 v20; // r13
  _QWORD *v21; // r15
  __int64 v22; // rax
  _DWORD *v23; // rax
  unsigned int v24; // eax
  __int64 v25; // rdx
  _DWORD **v26; // rdi
  int v27; // eax
  _QWORD *v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rbx
  __int64 v31; // rcx
  int v32; // eax
  __int64 *v33; // rcx
  __int64 v34; // r12
  int v35; // eax
  int v36; // r8d
  int v37; // r9d
  __int64 v38; // rax
  __int64 v39; // r12
  _QWORD *v40; // rdx
  unsigned int v41; // eax
  unsigned int v42; // ecx
  size_t v43; // rsi
  unsigned int *v44; // rax
  _DWORD *v45; // rdx
  __int64 v46; // rax
  __int64 v47; // r13
  __int64 v48; // r13
  __int64 v49; // rbx
  __int64 v50; // rcx
  int v51; // eax
  __int64 *v52; // rcx
  __int64 v53; // r12
  int v54; // eax
  int v55; // r8d
  int v56; // r9d
  __int64 v57; // rax
  __int64 v58; // r12
  _QWORD *v59; // rdx
  unsigned int v60; // eax
  unsigned int v61; // r15d
  size_t v62; // rsi
  unsigned int *v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // r13
  __int64 *v67; // rbx
  __int64 v68; // rax
  __int64 v69; // r15
  _QWORD *v70; // rdx
  __int64 *v71; // rsi
  int v72; // eax
  _QWORD *v73; // rax
  _QWORD *v74; // rax
  unsigned int v75; // ebx
  size_t v76; // rsi
  unsigned int *v77; // rax
  __int64 v78; // rdx
  int *v79; // rdi
  __int64 v80; // rsi
  __int64 v81; // rax
  int *v82; // rbp
  __int64 v83; // rdx
  unsigned int v84; // eax
  __int64 v85; // rdi
  __int64 v86; // rax
  __int64 v87; // rax
  unsigned __int64 v88; // r15
  int *v89; // r14
  __int64 v90; // rbx
  __int64 v91; // rax
  __m128i v92; // xmm1
  __int64 v93; // rax
  _QWORD *v94; // rax
  _QWORD *v95; // rsi
  size_t v96; // rdx
  _DWORD **v97; // r15
  _DWORD *v98; // r13
  _DWORD **v99; // r14
  _QWORD *v100; // rax
  _QWORD *v101; // rcx
  int v102; // eax
  _DWORD *v103; // rdx
  unsigned int v104; // eax
  unsigned int v106; // ecx
  size_t v107; // rsi
  unsigned int *v108; // rax
  _QWORD *v109; // rax
  _DWORD *v110; // [rsp+0h] [rbp-118h]
  unsigned int v111; // [rsp+0h] [rbp-118h]
  unsigned int v112; // [rsp+0h] [rbp-118h]
  unsigned int v113; // [rsp+8h] [rbp-110h]
  _DWORD **v114; // [rsp+10h] [rbp-108h]
  __int64 v115; // [rsp+18h] [rbp-100h]
  int v116[2]; // [rsp+20h] [rbp-F8h]
  char *v117; // [rsp+28h] [rbp-F0h]
  __int64 *v118; // [rsp+30h] [rbp-E8h]
  int *v119; // [rsp+38h] [rbp-E0h]
  char v120; // [rsp+38h] [rbp-E0h]
  int *v121; // [rsp+40h] [rbp-D8h]
  void *v122; // [rsp+48h] [rbp-D0h]
  __int64 v123; // [rsp+58h] [rbp-C0h]
  char v124[8]; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v125; // [rsp+68h] [rbp-B0h] BYREF
  int v126[2]; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v127; // [rsp+78h] [rbp-A0h]
  __int64 v128; // [rsp+80h] [rbp-98h] BYREF
  int v129[2]; // [rsp+88h] [rbp-90h] BYREF
  _DWORD **v130; // [rsp+90h] [rbp-88h] BYREF
  int v131[2]; // [rsp+98h] [rbp-80h] BYREF
  int v132[2]; // [rsp+A0h] [rbp-78h] BYREF
  int v133[2]; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v134; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v135; // [rsp+B8h] [rbp-60h]
  __int64 v136; // [rsp+C0h] [rbp-58h] BYREF
  char v137[8]; // [rsp+C8h] [rbp-50h]

  v117 = a3;
  v122 = (void *)a4;
  v10 = sub_180B150(a1, a2);
  sub_1841000(v124, 0, "mk_rf", v10);
  v11 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)v126 = 0;
  v127 = v11;
  v125 = 0;
  sub_403090(a4, &v125);
  v134 = a4;
  v123 = a1 + 64;
  v115 = v125;
  v12 = *(_QWORD *)(a1 + 8);
  v135 = 0;
  v128 = v12;
  v118 = &v134;
  v13 = sub_41F0C0(a1 + 64, &v134);
  v14 = v13;
  if ( v13 )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(v13 + 8) + 8LL);
    if ( v14 )
      ++*(_DWORD *)(v14 + 8);
  }
  *(_QWORD *)v129 = 0;
  v119 = v129;
  sub_23A6F0((unsigned int **)v129);
  v15 = *(_QWORD *)v129;
  v114 = nullptr;
  v16 = *(unsigned int *)(*(_QWORD *)v129 - 4LL);
  *(_QWORD *)v116 = *(_QWORD *)v129;
  *(_QWORD *)(*(_QWORD *)v129 + 8 * v16) = v14;
  *(_DWORD *)(v15 - 4) = v16 + 1;
  v17 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)v131 = 0;
  v130 = (_DWORD **)v17;
  if ( v115 )
  {
    v18 = 0;
    v121 = v132;
    v19 = v115;
    if ( *(_DWORD *)(v115 - 4) )
    {
      while ( 1 )
      {
        v20 = *(_QWORD *)(v19 + 8LL * v18);
        v21 = (_QWORD *)sub_3FCD00(
                          *(_QWORD **)(*(_QWORD *)(a1 + 16) + 264LL),
                          *(_DWORD *)(*(_QWORD *)(a1 + 16) + 272LL),
                          v20)[1];
        v22 = *(_QWORD *)(a1 + 8);
        v134 = 0;
        v135 = v22;
        v23 = (_DWORD *)sub_3FEFF0(v21, (__int64)v117, v18);
        v110 = v23;
        if ( v23 )
          ++*v23;
        if ( v114 )
        {
          v24 = *((_DWORD *)v114 - 1);
          if ( v24 == *((_DWORD *)v114 - 2) )
          {
            v75 = (3 * v24 + 1) >> 1;
            v76 = 8 * v75 + 8;
            if ( 8 * v24 + 8 >= (unsigned int)v76 || v24 >= v75 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_3FCFD0(&v136, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v136);
              sub_233E40((__int64)&v136);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v77 = (unsigned int *)sub_186B300(v114 - 1, v76);
            v78 = v77[1];
            v26 = (_DWORD **)(v77 + 2);
            *v77 = v75;
            v114 = v26;
            LODWORD(v77) = v78;
            v28 = &v26[v78];
            v27 = (_DWORD)v77 + 1;
          }
          else
          {
            v25 = v24;
            v26 = v114;
            v27 = v24 + 1;
            v28 = &v114[v25];
          }
        }
        else
        {
          v109 = (_QWORD *)sub_186B270(0x18u);
          *v109 = 2;
          v114 = (_DWORD **)(v109 + 1);
          v28 = v109 + 1;
          v26 = (_DWORD **)(v109 + 1);
          v27 = 1;
        }
        ++v18;
        *v28 = v110;
        v29 = *((_QWORD *)v110 + 1);
        *((_DWORD *)v26 - 1) = v27;
        sub_43D1D0(*(_QWORD *)a1 + 8LL, v29, 0, v18, v118, 1);
        *(_QWORD *)v132 = v134;
        if ( v134 )
          ++*(_DWORD *)(v134 + 8);
        *(_QWORD *)v129 = *(_QWORD *)v116;
        sub_407600((unsigned int **)v119, v121);
        v30 = 0;
        *(_QWORD *)v116 = *(_QWORD *)v129;
        if ( *(_DWORD *)(v20 + 32) )
          break;
LABEL_24:
        v46 = *((_QWORD *)v110 + 3);
        if ( v46 )
        {
          v47 = *(unsigned int *)(v46 - 4);
          if ( (_DWORD)v47 )
          {
            v48 = 8 * v47;
            v49 = 0;
            while ( 1 )
            {
              v53 = *(_QWORD *)(a1 + 8);
              v54 = sub_439010(*(_QWORD *)a1 + 8LL, *(_QWORD *)(*(_QWORD *)(v46 + v49) + 16LL), 0, v18);
              v57 = sub_15DC610(
                      v53,
                      v54,
                      0,
                      0,
                      v55,
                      v56,
                      (int)v110,
                      v113,
                      (int)v114,
                      v115,
                      v116[0],
                      (char)v117,
                      (int)v118,
                      (int)v119,
                      (int)v121,
                      v122);
              v58 = v57;
              if ( v57 )
                ++*(_DWORD *)(v57 + 8);
              v59 = *(_QWORD **)v131;
              if ( !*(_QWORD *)v131 )
                break;
              v60 = *(_DWORD *)(*(_QWORD *)v131 - 4LL);
              if ( v60 != *(_DWORD *)(*(_QWORD *)v131 - 8LL) )
              {
                v50 = v60;
                v51 = v60 + 1;
                v52 = (__int64 *)(*(_QWORD *)v131 + 8 * v50);
                goto LABEL_28;
              }
              v61 = (3 * v60 + 1) >> 1;
              v62 = 8 * v61 + 8;
              if ( 8 * v60 + 8 >= (unsigned int)v62 || v60 >= v61 )
              {
                v6 = (char **)__cxa_allocate_exception(0x28u);
                sub_3FCFD0(&v136, "Overflow encountered when expanding vector");
                *v6 = (char *)off_1C63128;
                sub_2333C0(v6 + 1, &v136);
                sub_233E40((__int64)&v136);
                __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v63 = (unsigned int *)sub_186B300((void *)(*(_QWORD *)v131 - 8LL), v62);
              v64 = v63[1];
              *v63 = v61;
              v49 += 8;
              *(_QWORD *)v131 = v63 + 2;
              *(_QWORD *)&v63[2 * v64 + 2] = v58;
              v63[1] = v64 + 1;
              if ( v48 == v49 )
                goto LABEL_37;
LABEL_29:
              v46 = *((_QWORD *)v110 + 3);
            }
            v73 = (_QWORD *)sub_186B270(0x18u);
            v59 = v73 + 1;
            *(_QWORD *)v131 = v73 + 1;
            v52 = v73 + 1;
            *v73 = 2;
            v51 = 1;
LABEL_28:
            v49 += 8;
            *v52 = v58;
            *((_DWORD *)v59 - 1) = v51;
            if ( v48 == v49 )
              goto LABEL_37;
            goto LABEL_29;
          }
        }
LABEL_37:
        sub_3FCDF0(v134, v135);
        v19 = v115;
        if ( v18 >= *(_DWORD *)(v115 - 4) )
          goto LABEL_38;
      }
      while ( 1 )
      {
        v34 = *(_QWORD *)(a1 + 8);
        v35 = sub_439010(*(_QWORD *)a1 + 8LL, *(_QWORD *)(v21[6] + 8 * v30), 1, v18);
        v38 = sub_15DC610(
                v34,
                v35,
                0,
                0,
                v36,
                v37,
                (int)v110,
                v113,
                (int)v114,
                v115,
                v116[0],
                (char)v117,
                (int)v118,
                (int)v119,
                (int)v121,
                v122);
        v39 = v38;
        if ( v38 )
          ++*(_DWORD *)(v38 + 8);
        v40 = *(_QWORD **)v131;
        if ( !*(_QWORD *)v131 )
          break;
        v41 = *(_DWORD *)(*(_QWORD *)v131 - 4LL);
        if ( v41 == *(_DWORD *)(*(_QWORD *)v131 - 8LL) )
        {
          v42 = (3 * v41 + 1) >> 1;
          v43 = 8 * v42 + 8;
          if ( 8 * v41 + 8 >= (unsigned int)v43 || v41 >= v42 )
          {
            v7 = (char **)__cxa_allocate_exception(0x28u);
            sub_3FCFD0(&v136, "Overflow encountered when expanding vector");
            *v7 = (char *)off_1C63128;
            sub_2333C0(v7 + 1, &v136);
            sub_233E40((__int64)&v136);
            __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v113 = (3 * v41 + 1) >> 1;
          v44 = (unsigned int *)sub_186B300((void *)(*(_QWORD *)v131 - 8LL), v43);
          v45 = v44 + 2;
          ++v30;
          *(_QWORD *)v131 = v44 + 2;
          *v44 = v113;
          LODWORD(v44) = v44[1];
          *(_QWORD *)&v45[2 * (unsigned int)v44] = v39;
          *(v45 - 1) = (_DWORD)v44 + 1;
          if ( (unsigned int)v30 >= *(_DWORD *)(v20 + 32) )
            goto LABEL_24;
        }
        else
        {
          v31 = v41;
          v32 = v41 + 1;
          v33 = (__int64 *)(*(_QWORD *)v131 + 8 * v31);
LABEL_16:
          *v33 = v39;
          ++v30;
          *((_DWORD *)v40 - 1) = v32;
          if ( (unsigned int)v30 >= *(_DWORD *)(v20 + 32) )
            goto LABEL_24;
        }
      }
      v74 = (_QWORD *)sub_186B270(0x18u);
      v40 = v74 + 1;
      *(_QWORD *)v131 = v74 + 1;
      v33 = v74 + 1;
      *v74 = 2;
      v32 = 1;
      goto LABEL_16;
    }
  }
LABEL_38:
  *(_QWORD *)v137 = 0;
  v136 = (__int64)v122;
  v65 = sub_41F0C0(v123, &v136);
  if ( !v65 )
  {
    sub_1872CE0("");
    sub_1873130(114, 608);
  }
  v66 = *(_QWORD *)(v65 + 8);
  v120 = *(_BYTE *)(*(_QWORD *)(a1 + 16) + 657LL);
  if ( v120 )
  {
    v67 = *(__int64 **)(v66 + 24);
    if ( v67 )
    {
      v68 = *((unsigned int *)v67 - 1);
      if ( (_DWORD)v68 )
      {
        v69 = *v67;
        v70 = *(_QWORD **)v131;
        v71 = &v67[v68];
        if ( *v67 )
          ++*(_DWORD *)(v69 + 8);
        if ( v70 )
          goto LABEL_49;
LABEL_45:
        sub_3A6B20((unsigned int **)v131);
        v70 = *(_QWORD **)v131;
        v72 = *(_DWORD *)(*(_QWORD *)v131 - 4LL);
        while ( 1 )
        {
          ++v67;
          v70[v72] = v69;
          *((_DWORD *)v70 - 1) = v72 + 1;
          if ( v67 == v71 )
            break;
          v69 = *v67;
          if ( *v67 )
            ++*(_DWORD *)(v69 + 8);
LABEL_49:
          v72 = *((_DWORD *)v70 - 1);
          if ( v72 == *((_DWORD *)v70 - 2) )
            goto LABEL_45;
        }
      }
    }
  }
  *(_QWORD *)v129 = *(_QWORD *)v116;
  sub_41C800(&v136, &v128);
  v79 = *(int **)v126;
  v80 = *(_QWORD *)v137;
  *(_QWORD *)v126 = v136;
  sub_3FCDF0((__int64)v79, *(__int64 *)v137);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 658LL) )
  {
    v81 = *(_QWORD *)(a1 + 8);
    v82 = *(int **)v126;
    *(_QWORD *)v133 = 0;
    *(_QWORD *)v132 = v81;
    if ( *(_QWORD *)v126 )
      ++*(_DWORD *)(*(_QWORD *)v126 + 8LL);
    sub_23A6F0((unsigned int **)v133);
    v83 = *(_QWORD *)v133;
    v84 = *(_DWORD *)(*(_QWORD *)v133 - 4LL);
    *(_QWORD *)(*(_QWORD *)v133 + 8LL * v84) = v82;
    *(_DWORD *)(v83 - 4) = v84 + 1;
    sub_3D6CD0(v118, (unsigned __int64)v117, (__int64 *)v132);
    sub_41C800(&v136, v118);
    v85 = *(_QWORD *)v126;
    v80 = *(_QWORD *)v137;
    *(_QWORD *)v126 = v136;
    sub_3FCDF0(v85, *(__int64 *)v137);
    sub_2334C0(v118);
    v79 = v132;
    sub_2334C0((__int64 *)v132);
  }
  v86 = sub_180B150(v79, v80);
  sub_1841000(&v136, 0, "mk_rf::qe_project", v86);
  sub_3FF2A0(a1, (__int64 *)&v130, (__int64 *)v126, v117, 0, 1);
  sub_18410E0(&v136);
  ++*(_DWORD *)(a1 + 348);
  v87 = sub_186B270(0x48u);
  v88 = *(_QWORD *)(a1 + 8);
  v89 = *(int **)v126;
  *(_DWORD *)v87 = 0;
  v90 = v87;
  *(__m128i *)(v87 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v89, (__m128i)v88);
  if ( v120 )
  {
    if ( v89 )
      ++v89[2];
    *(_QWORD *)(v87 + 24) = 0;
  }
  else
  {
    v91 = *(_QWORD *)(v66 + 24);
    if ( v89 )
      ++v89[2];
    *(_QWORD *)(v90 + 24) = 0;
    if ( v91 )
    {
      v92 = _mm_cvtsi32_si128(*(_DWORD *)(v91 - 4));
      v93 = *(unsigned int *)(v91 - 8);
      v111 = v93;
      v94 = (_QWORD *)sub_186B270(8 * v93 + 8);
      v95 = *(_QWORD **)(v66 + 24);
      *(_QWORD *)(v90 + 24) = v94 + 1;
      *v94 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v111), _mm_cvtsi32_si128(_mm_cvtsi128_si32(v92))).m128i_u64[0];
      if ( v95 )
      {
        v96 = 8LL * *((unsigned int *)v95 - 1);
        if ( v96 <= 8 )
        {
          if ( v96 == 8 )
            v94[1] = *v95;
        }
        else
        {
          memmove(v94 + 1, v95, v96);
        }
      }
    }
  }
  *(_QWORD *)(v90 + 56) = v88;
  *(_QWORD *)(v90 + 40) = 0;
  *(_QWORD *)(v90 + 32) = v122;
  *(_QWORD *)(v90 + 48) = 0;
  *(_BYTE *)(v90 + 64) = 0;
  if ( v114 )
  {
    v97 = &v114[*((unsigned int *)v114 - 1)];
    if ( v97 != v114 )
    {
      v98 = *v114;
      v99 = v114;
      if ( *v114 )
        ++*v98;
      v100 = (_QWORD *)sub_186B270(0x18u);
      v101 = v100 + 1;
      *v100 = 2;
      v102 = 1;
      *(_QWORD *)(v90 + 40) = v101;
      v103 = v101;
      while ( 1 )
      {
        ++v99;
        *v101 = v98;
        *(v103 - 1) = v102;
        if ( v97 == v99 )
          break;
        while ( 1 )
        {
          v98 = *v99;
          if ( *v99 )
            ++*v98;
          v104 = *(v103 - 1);
          if ( v104 == *(v103 - 2) )
            break;
          ++v99;
          *(_QWORD *)&v103[2 * v104] = v98;
          *(v103 - 1) = v104 + 1;
          if ( v97 == v99 )
            goto LABEL_77;
        }
        v106 = (3 * v104 + 1) >> 1;
        v107 = 8 * v106 + 8;
        if ( 8 * v104 + 8 >= (unsigned int)v107 || v104 >= v106 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_3FCFD0(&v136, "Overflow encountered when expanding vector");
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, &v136);
          sub_233E40((__int64)&v136);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v112 = (3 * v104 + 1) >> 1;
        v108 = (unsigned int *)sub_186B300(v103 - 2, v107);
        v103 = v108 + 2;
        *(_QWORD *)(v90 + 40) = v108 + 2;
        *v108 = v112;
        LODWORD(v108) = v108[1];
        v101 = &v103[2 * (unsigned int)v108];
        v102 = (_DWORD)v108 + 1;
      }
    }
  }
LABEL_77:
  sub_2B4F40((__int64 *)&v130);
  sub_2334C0(&v128);
  if ( v115 )
    sub_186B220((void *)(v115 - 8));
  v130 = v114;
  sub_41D1C0(&v130);
  sub_3FCDF0(*(__int64 *)v126, v127);
  sub_18410E0(v124);
  return v90;
}

