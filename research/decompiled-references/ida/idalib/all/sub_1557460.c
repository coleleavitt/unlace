__int64 *__fastcall sub_1557460(const __m128i *a1, unsigned int a2, unsigned int a3, __m128i a4, __m128 a5)
{
  int v8; // eax
  __int32 v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // r12
  void *v15; // rdi
  void *v16; // rdi
  _BYTE *v17; // r12
  __int64 *v18; // rbx
  char *v19; // r15
  int v20; // edx
  unsigned int v21; // esi
  unsigned int i; // r14d
  __int64 v23; // rdx
  void **v24; // r12
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // r14
  void **v28; // rdx
  void *v29; // rdi
  void *v30; // r12
  __int64 v31; // r12
  void *v32; // rdi
  void *v33; // rdi
  char v34; // dl
  _BYTE *v35; // rbx
  _BYTE *v36; // rdi
  _QWORD *v37; // r12
  _QWORD *v38; // rbx
  _QWORD *v39; // rdi
  __int64 v40; // rbx
  __int64 v41; // rbp
  void *v42; // rdi
  void *v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // r12
  void *v46; // rdi
  void *v47; // rdi
  void *v48; // rdi
  void **v49; // r12
  __int64 v50; // rsi
  __int64 v51; // rbp
  void *v52; // rdi
  void *v53; // rdi
  __int64 *v54; // r13
  unsigned __int64 v55; // rax
  __int64 *v56; // rdx
  __int64 *v57; // r15
  __int64 *v58; // rdi
  __int64 *v59; // rdi
  void **v60; // r15
  bool v61; // zf
  __int32 v62; // eax
  __int32 v63; // edx
  __int64 *v64; // r9
  __int64 v65; // r15
  __int64 *v66; // rax
  unsigned __int64 v67; // rcx
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // r15
  unsigned __int64 *v70; // r8
  void *v71; // rax
  __int64 *v72; // rsi
  __int64 *v73; // rcx
  void **v74; // r13
  unsigned __int64 v75; // rax
  void **v76; // r15
  void **v77; // rbp
  void **v78; // rdi
  void **v79; // rdi
  void **v80; // rbp
  void **v81; // r15
  __int64 v82; // r12
  __int64 v83; // rdx
  __int64 v84; // rdx
  unsigned __int64 v85; // rdx
  int v86; // eax
  int v87; // r15d
  __int64 *v88; // rax
  unsigned __int64 *v89; // rdi
  __int64 v90; // r15
  __int64 *v91; // r8
  __int64 v92; // rax
  __int64 v93; // r15
  __int64 *v94; // r15
  __int64 *v95; // rdi
  __int64 v96; // r15
  int v97; // eax
  __int64 *v98; // rdi
  __int64 *v99; // [rsp+8h] [rbp-C20h]
  __int64 *v100; // [rsp+10h] [rbp-C18h]
  __int64 *v101; // [rsp+18h] [rbp-C10h]
  unsigned __int64 *v102; // [rsp+20h] [rbp-C08h]
  __int64 *v103; // [rsp+28h] [rbp-C00h]
  _QWORD v104[4]; // [rsp+30h] [rbp-BF8h] BYREF
  unsigned __int64 v105; // [rsp+50h] [rbp-BD8h] BYREF
  char v106; // [rsp+58h] [rbp-BD0h]
  _BYTE v107[12]; // [rsp+5Ch] [rbp-BCCh]
  void *v108; // [rsp+68h] [rbp-BC0h]
  __int64 v109; // [rsp+70h] [rbp-BB8h]
  void *v110[2]; // [rsp+78h] [rbp-BB0h] BYREF
  _BYTE v111[16]; // [rsp+88h] [rbp-BA0h] BYREF
  __int8 *v112; // [rsp+98h] [rbp-B90h] BYREF
  void *v113; // [rsp+A0h] [rbp-B88h]
  __int64 v114; // [rsp+A8h] [rbp-B80h]
  _QWORD v115[4]; // [rsp+B0h] [rbp-B78h] BYREF
  void *v116; // [rsp+D0h] [rbp-B58h]
  __int64 v117; // [rsp+D8h] [rbp-B50h]
  __int64 v118; // [rsp+E0h] [rbp-B48h]
  __int64 v119; // [rsp+E8h] [rbp-B40h]
  __int64 v120; // [rsp+F0h] [rbp-B38h]
  __int64 v121; // [rsp+F8h] [rbp-B30h]
  __int64 v122; // [rsp+100h] [rbp-B28h]
  __int64 v123; // [rsp+108h] [rbp-B20h]
  __int64 v124; // [rsp+110h] [rbp-B18h]
  __int64 v125; // [rsp+118h] [rbp-B10h]
  __int64 v126; // [rsp+120h] [rbp-B08h]
  __int64 v127; // [rsp+128h] [rbp-B00h]
  __int64 v128; // [rsp+130h] [rbp-AF8h]
  __int64 v129; // [rsp+138h] [rbp-AF0h]
  __int64 v130; // [rsp+140h] [rbp-AE8h]
  __int64 v131; // [rsp+148h] [rbp-AE0h]
  __int64 v132; // [rsp+150h] [rbp-AD8h]
  __int64 v133; // [rsp+158h] [rbp-AD0h]
  __int64 v134; // [rsp+160h] [rbp-AC8h]
  __int16 v135; // [rsp+168h] [rbp-AC0h]
  __int64 v136; // [rsp+170h] [rbp-AB8h]
  void *v137; // [rsp+180h] [rbp-AA8h] BYREF
  unsigned __int64 v138; // [rsp+188h] [rbp-AA0h]
  void *v139[2]; // [rsp+190h] [rbp-A98h]
  void *v140; // [rsp+1A0h] [rbp-A88h]
  __int64 v141; // [rsp+1A8h] [rbp-A80h]
  __int64 v142; // [rsp+1B0h] [rbp-A78h] BYREF
  int v143; // [rsp+1B8h] [rbp-A70h]
  __int64 v144; // [rsp+1C0h] [rbp-A68h]
  __int64 v145; // [rsp+1D0h] [rbp-A58h]
  __int64 v146; // [rsp+1D8h] [rbp-A50h]
  int v147; // [rsp+1E0h] [rbp-A48h]
  __int64 v148; // [rsp+1E8h] [rbp-A40h]
  __int64 v149; // [rsp+1F0h] [rbp-A38h]
  int v150; // [rsp+1F8h] [rbp-A30h]
  _BYTE *v151; // [rsp+200h] [rbp-A28h]
  __int64 v152; // [rsp+208h] [rbp-A20h]
  _BYTE v153[576]; // [rsp+210h] [rbp-A18h] BYREF
  __int16 v154; // [rsp+450h] [rbp-7D8h]
  __int64 v155; // [rsp+458h] [rbp-7D0h]
  void *v156; // [rsp+460h] [rbp-7C8h]
  __int64 v157; // [rsp+468h] [rbp-7C0h]
  _BYTE v158[16]; // [rsp+470h] [rbp-7B8h] BYREF
  __int8 *v159; // [rsp+480h] [rbp-7A8h] BYREF
  void *ptr; // [rsp+488h] [rbp-7A0h]
  __int64 v161; // [rsp+490h] [rbp-798h]
  _QWORD v162[3]; // [rsp+498h] [rbp-790h] BYREF
  __int64 v163; // [rsp+4B0h] [rbp-778h]
  __int64 v164; // [rsp+4B8h] [rbp-770h]
  __int64 v165; // [rsp+4C0h] [rbp-768h]
  __int64 v166; // [rsp+4C8h] [rbp-760h]
  __int64 v167; // [rsp+4D0h] [rbp-758h]
  __int64 v168; // [rsp+BD8h] [rbp-50h]
  __int64 v169; // [rsp+BE0h] [rbp-48h]

  v8 = sub_1557100(a1, *(double *)a4.m128i_i64, a5);
  if ( !v8 )
  {
    if ( a1[2].m128i_i16[0] != 105 )
      return (__int64 *)sub_1550EE0(a1, a2, a3, *(double *)a4.m128i_i64, a5);
    sub_1564820(&v137, a1, a1[1].m128i_u32[0], 1655);
    if ( (_BYTE)v144 )
    {
      sub_FC7790((__int64)v139[0], (__int64 *)&v137, SBYTE1(v144));
      v139[0] = nullptr;
      LOWORD(v144) = 0;
    }
    if ( v140 != &v142 )
      operator delete(v140);
    v54 = (__int64 *)v137;
    if ( v137 )
    {
      v55 = v138;
      if ( v138 )
      {
        if ( (unsigned __int64)v137 < v138 || (unsigned __int64)v137 > v138 + 14848 )
        {
          v56 = *((__int64 **)v137 + 66);
          v57 = &v56[8 * (unsigned __int64)*((unsigned int *)v137 + 134)];
          if ( v56 != v57 )
          {
            do
            {
              while ( 1 )
              {
                v57 -= 8;
                v58 = (__int64 *)v57[3];
                if ( v58 == v57 + 5 )
                  break;
                v99 = v56;
                operator delete(v58);
                v56 = v99;
                if ( v99 == v57 )
                  goto LABEL_135;
              }
            }
            while ( v56 != v57 );
LABEL_135:
            v57 = (__int64 *)v54[66];
          }
          if ( v57 != v54 + 68 )
            free(v57);
          v59 = (__int64 *)v54[52];
          if ( v59 != v54 + 54 )
            free(v59);
          v60 = (void **)(v54 + 48);
          v99 = v54 + 8;
          do
          {
            while ( *v60 != v60 + 2 )
            {
              operator delete(*v60);
              v60 -= 4;
              if ( v60 == (void **)v99 )
                goto LABEL_143;
            }
            v60 -= 4;
          }
          while ( v60 != (void **)v99 );
LABEL_143:
          operator delete(v54, 0x3A0u);
        }
        else
        {
          v83 = *(unsigned int *)(v138 + 14976);
          *(_DWORD *)(v138 + 14976) = v83 + 1;
          *(_QWORD *)(v55 + 8 * v83 + 14848) = v54;
        }
      }
    }
    sub_1564820(&v137, a1, a1[1].m128i_u32[0], 2034);
    v61 = !sub_10CCDE0(a1[2].m128i_i16[0]);
    v62 = a1[1].m128i_i32[0];
    if ( v61 )
    {
      v63 = v62 + a1[1].m128i_i32[1];
    }
    else
    {
      v63 = a1[1].m128i_i32[1];
      if ( !v63 )
        v63 = a1[1].m128i_i32[0];
    }
    v107[8] = 0;
    v111[0] = 0;
    v108 = v110;
    *(_QWORD *)v107 = 0;
    v105 = __PAIR64__(v63, v62);
    v106 = 0;
    v104[2] = 0x656D616E65707974LL;
    strcpy((char *)v110, "typename");
    v109 = 8;
    if ( !v62 || !v63 )
    {
LABEL_158:
      if ( (_BYTE)v144 )
      {
        sub_FC7790((__int64)v139[0], (__int64 *)&v137, SBYTE1(v144));
        v139[0] = nullptr;
        LOWORD(v144) = 0;
      }
      if ( v140 != &v142 )
        operator delete(v140);
      v74 = (void **)v137;
      if ( v137 )
      {
        v75 = v138;
        if ( v138 )
        {
          if ( (unsigned __int64)v137 < v138 || (unsigned __int64)v137 > v138 + 14848 )
          {
            v76 = *((void ***)v137 + 66);
            v77 = &v76[8 * (unsigned __int64)*((unsigned int *)v137 + 134)];
            if ( v76 != v77 )
            {
              do
              {
                while ( 1 )
                {
                  v77 -= 8;
                  v78 = (void **)v77[3];
                  if ( v78 == v77 + 5 )
                    break;
                  operator delete(v78);
                  if ( v76 == v77 )
                    goto LABEL_168;
                }
              }
              while ( v76 != v77 );
LABEL_168:
              v77 = (void **)v74[66];
            }
            if ( v77 != v74 + 68 )
              free(v77);
            v79 = (void **)v74[52];
            v80 = v74 + 52;
            if ( v79 != v74 + 54 )
              free(v79);
            v81 = v74 + 12;
            do
            {
              while ( 1 )
              {
                v80 -= 4;
                if ( *v80 == v80 + 2 )
                  break;
                operator delete(*v80);
                if ( v80 == v81 )
                  goto LABEL_176;
              }
            }
            while ( v80 != v81 );
LABEL_176:
            operator delete(v74, 0x3A0u);
          }
          else
          {
            v84 = *(unsigned int *)(v138 + 14976);
            *(_DWORD *)(v138 + 14976) = v84 + 1;
            *(_QWORD *)(v75 + 8 * v84 + 14848) = v74;
          }
        }
      }
      a1[2].m128i_i16[0] = 151;
      return (__int64 *)sub_1550EE0(a1, a2, a3, *(double *)a4.m128i_i64, a5);
    }
    v64 = (__int64 *)v137;
    if ( v137 )
    {
      v65 = *((unsigned int *)v137 + 134);
      v66 = *((__int64 **)v137 + 66);
      v67 = *((unsigned int *)v137 + 135);
      v68 = v65 + 1;
      v69 = (unsigned __int64)&v66[8 * v65];
    }
    else
    {
      v85 = v138;
      v86 = *(_DWORD *)(v138 + 14976);
      if ( v86 )
      {
        v92 = (unsigned int)(v86 - 1);
        *(_DWORD *)(v138 + 14976) = v92;
        v64 = *(__int64 **)(v85 + 8 * v92 + 14848);
        v93 = *((unsigned int *)v64 + 134);
        *(_BYTE *)v64 = 0;
        v66 = (__int64 *)v64[66];
        *((_DWORD *)v64 + 106) = 0;
        v94 = &v66[8 * v93];
        if ( v66 != v94 )
        {
          do
          {
            while ( 1 )
            {
              v94 -= 8;
              v95 = (__int64 *)v94[3];
              if ( v95 == v94 + 5 )
                break;
              v100 = v66;
              v99 = v64;
              operator delete(v95);
              v66 = v100;
              v64 = v99;
              if ( v100 == v94 )
                goto LABEL_208;
            }
          }
          while ( v66 != v94 );
LABEL_208:
          v66 = (__int64 *)v64[66];
        }
        *((_DWORD *)v64 + 134) = 0;
        v67 = *((unsigned int *)v64 + 135);
      }
      else
      {
        v64 = (__int64 *)operator new(0x3A0u);
        *(_BYTE *)v64 = 0;
        v64[12] = (__int64)(v64 + 14);
        v64[16] = (__int64)(v64 + 18);
        v64[20] = (__int64)(v64 + 22);
        v64[24] = (__int64)(v64 + 26);
        v64[28] = (__int64)(v64 + 30);
        v64[32] = (__int64)(v64 + 34);
        v64[36] = (__int64)(v64 + 38);
        v64[40] = (__int64)(v64 + 42);
        v64[44] = (__int64)(v64 + 46);
        v64[48] = (__int64)(v64 + 50);
        v64[52] = (__int64)(v64 + 54);
        v64[13] = 0;
        *((_BYTE *)v64 + 112) = 0;
        v64[17] = 0;
        *((_BYTE *)v64 + 144) = 0;
        v64[21] = 0;
        *((_BYTE *)v64 + 176) = 0;
        v64[25] = 0;
        *((_BYTE *)v64 + 208) = 0;
        v64[29] = 0;
        *((_BYTE *)v64 + 240) = 0;
        v64[33] = 0;
        *((_BYTE *)v64 + 272) = 0;
        v64[37] = 0;
        *((_BYTE *)v64 + 304) = 0;
        v64[41] = 0;
        *((_BYTE *)v64 + 336) = 0;
        v64[45] = 0;
        *((_BYTE *)v64 + 368) = 0;
        v64[49] = 0;
        *((_BYTE *)v64 + 400) = 0;
        v64[53] = 0x800000000LL;
        v66 = v64 + 68;
        v64[66] = (__int64)(v64 + 68);
        v64[67] = 0x600000000LL;
        v67 = 6;
      }
      v137 = v64;
      v69 = (unsigned __int64)v66;
      v68 = 1;
    }
    v70 = &v105;
    if ( v68 > v67 )
    {
      if ( v66 > (__int64 *)&v105 || v69 <= (unsigned __int64)&v105 )
      {
        v101 = v64;
        v100 = v64 + 68;
        v99 = v64 + 66;
        v96 = sub_2237400(v64 + 66, v64 + 68, v68, 64, v104);
        sub_9EF810(v99, v96);
        v64 = v101;
        v97 = v104[0];
        v98 = (__int64 *)v101[66];
        if ( v98 != v100 )
        {
          v100 = (__int64 *)v104[0];
          v99 = v101;
          free(v98);
          v64 = v101;
          v97 = (int)v100;
        }
        v101[66] = v96;
        *((_DWORD *)v64 + 135) = v97;
        v70 = &v105;
        v69 = ((unsigned __int64)*((unsigned int *)v64 + 134) << 6) + v96;
      }
      else
      {
        v103 = v64;
        v102 = (unsigned __int64 *)(v64 + 68);
        v99 = (__int64 *)((char *)&v105 - (char *)v66);
        v101 = v64 + 66;
        v100 = (__int64 *)sub_2237400(v64 + 66, v64 + 68, v68, 64, v104);
        sub_9EF810(v101, (__int64)v100);
        v64 = v103;
        v87 = v104[0];
        v88 = v100;
        v89 = (unsigned __int64 *)v103[66];
        if ( v89 != v102 )
        {
          v101 = v100;
          v100 = v103;
          free(v89);
          v64 = v103;
          v88 = v101;
        }
        *((_DWORD *)v64 + 135) = v87;
        v90 = *((unsigned int *)v64 + 134);
        v91 = v99;
        v64[66] = (__int64)v88;
        v70 = (unsigned __int64 *)((char *)v91 + (_QWORD)v88);
        v69 = (unsigned __int64)&v88[8 * v90];
      }
    }
    *(_QWORD *)v69 = *v70;
    *(_DWORD *)(v69 + 8) = *((_DWORD *)v70 + 2);
    *(_QWORD *)(v69 + 12) = *(unsigned __int64 *)((char *)v70 + 12);
    *(_DWORD *)(v69 + 20) = *((_DWORD *)v70 + 5);
    v71 = (void *)(v69 + 40);
    *(_QWORD *)(v69 + 24) = v69 + 40;
    v72 = (__int64 *)v70[3];
    v73 = (__int64 *)v70[4];
    if ( (__int64 *)((char *)v72 + (_QWORD)v73) && !v72 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( (unsigned __int64)v73 > 0xF )
    {
      if ( (__int64)v73 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v102 = v70;
      v101 = v72;
      v100 = v64;
      v99 = v73;
      v71 = (void *)operator new((unsigned __int64)v73 + 1);
      v73 = v99;
      v64 = v100;
      v72 = v101;
      v70 = v102;
      *(_QWORD *)(v69 + 24) = v71;
      *(_QWORD *)(v69 + 40) = v73;
    }
    else
    {
      if ( v73 == (__int64 *)((char *)&dword_0 + 1) )
      {
        *(_BYTE *)(v69 + 40) = *(_BYTE *)v72;
        goto LABEL_156;
      }
      if ( !v73 )
      {
LABEL_156:
        *(_QWORD *)(v69 + 32) = v73;
        *((_BYTE *)v73 + (_QWORD)v71) = 0;
        *(_BYTE *)(v69 + 56) = *((_BYTE *)v70 + 56);
        ++*((_DWORD *)v64 + 134);
        if ( v108 != v110 )
          operator delete(v108);
        goto LABEL_158;
      }
    }
    v101 = (__int64 *)v70;
    v100 = v64;
    v99 = v73;
    memcpy(v71, v72, (size_t)v73);
    v71 = *(void **)(v69 + 24);
    v70 = (unsigned __int64 *)v101;
    v64 = v100;
    v73 = v99;
    goto LABEL_156;
  }
  if ( v8 != 3 )
  {
    if ( a1[2].m128i_i16[0] == 146 )
      return (__int64 *)sub_15594A0(a1, a2, a3);
    else
      return (__int64 *)sub_15517A0((__int64)a1, a2, a3, a4, a5);
  }
  v105 &= 0xFFFFFFC000000000LL;
  *(_QWORD *)&v107[4] = 0;
  v110[0] = v111;
  v112 = &a1[31].m128i_i8[8];
  v113 = v115;
  v108 = nullptr;
  v109 = 0;
  v110[1] = (void *)0x200000000LL;
  v114 = 0x200000000LL;
  v115[2] = 0;
  v115[3] = 0;
  v116 = nullptr;
  v117 = 0;
  v118 = 0;
  v119 = 0;
  v120 = 0;
  v121 = 0;
  v122 = 0;
  v123 = 0;
  v124 = 0;
  v125 = 0;
  v126 = 0;
  v127 = 0;
  v128 = 0;
  v129 = 0;
  v130 = 0;
  v131 = 0;
  v132 = 0;
  v133 = 0;
  v134 = 0;
  v135 &= 0xF000u;
  v136 = 0;
  sub_15AEFC0(&v105);
  if ( !(_BYTE)qword_2CD8AC8 && __cxa_guard_acquire(&qword_2CD8AC8) )
  {
    qword_2CD8AE0[0] = 0;
    qword_2CD8AE0[1] = &qword_2CD8AE0[3];
    qword_2CD8AE0[2] = 0x200000000LL;
    v99 = qword_2CD8AE0;
    __cxa_atexit((void (*)(void *))sub_1477960, qword_2CD8AE0, &off_2B25620);
    __cxa_guard_release(&qword_2CD8AC8);
  }
  v162[2] = qword_2CD8AE0;
  v146 = v120;
  v151 = v153;
  v152 = 0x400000000LL;
  v156 = v158;
  v159 = v112;
  ptr = v162;
  v137 = &v105;
  v138 = 0;
  *(_OWORD *)v139 = 0;
  v140 = nullptr;
  v141 = 0;
  v142 = 0;
  v143 = 0;
  v144 = 0;
  v147 = 12;
  v148 = 0;
  v149 = 0;
  v150 = 0;
  v155 = 0;
  v157 = 0x200000000LL;
  v161 = 0x200000000LL;
  v163 = 0;
  v164 = 0;
  v165 = 0;
  v166 = 0;
  v167 = 0;
  v168 = 0;
  v154 &= 0xFC01u;
  v10 = a1[1].m128i_i32[0];
  v11 = a1[6].m128i_i64[0];
  LOBYTE(v154) = 1;
  HIDWORD(v145) = v10;
  LODWORD(v145) = v10;
  v99 = (__int64 *)sub_1CD25D0(v11, *(_QWORD *)(v11 + 608), (unsigned int)&v137, a2, a3, 0, 0);
  sub_B88650((__int64)v99, 1);
  LODWORD(v104[0]) = 3407938;
  WORD2(v104[0]) = 53;
  sub_15680D0(a1, v104, 3, 3);
  v138 = 0;
  v139[0] = nullptr;
  LODWORD(v140) = 0;
  v143 = 0;
  v144 = 0;
  v145 = 0;
  v12 = *((_QWORD *)v137 + 20);
  v148 = 0;
  v146 = v12;
  v13 = v149;
  if ( v150 < 0 )
  {
    if ( v149 )
    {
      v44 = 112LL * *(_QWORD *)(v149 - 8);
      v45 = v149 + v44;
      if ( v149 != v149 + v44 )
      {
        while ( 1 )
        {
          v13 = v45 - 112;
          if ( *(_BYTE *)(v45 - 16) )
          {
            sub_15DCED0(*(_QWORD *)(v45 - 56), v13 + 56);
            v46 = *(void **)(v45 - 48);
            if ( v46 != (void *)(v13 + 80) )
              free(v46);
            v47 = *(void **)(v13 + 24);
            if ( v47 != (void *)(v13 + 40) )
              free(v47);
          }
          if ( v149 == v13 )
            break;
          v45 -= 112;
        }
        v44 = 112LL * *(_QWORD *)(v45 - 120);
      }
      operator delete[]((void *)(v13 - 8), v44 + 8);
    }
  }
  else
  {
    v14 = v149 + 112LL * (v150 & 0x7FFFFFFF);
    if ( v149 != v14 )
    {
      do
      {
        while ( 1 )
        {
          if ( *(_BYTE *)(v13 + 96) )
          {
            *(_BYTE *)(v13 + 96) = 0;
            sub_15DCED0(*(_QWORD *)(v13 + 56), v13 + 56);
            v15 = *(void **)(v13 + 64);
            if ( v15 != (void *)(v13 + 80) )
              free(v15);
            v16 = *(void **)(v13 + 24);
            if ( v16 != (void *)(v13 + 40) )
              break;
          }
          v13 += 112;
          if ( v14 == v13 )
            goto LABEL_18;
        }
        free(v16);
        v13 += 112;
      }
      while ( v14 != v13 );
    }
  }
LABEL_18:
  v149 = 0;
  v150 = 0;
  if ( !(_DWORD)v152 )
    goto LABEL_61;
  v17 = v151;
  v18 = nullptr;
  v100 = (__int64 *)(16 * (9LL * (unsigned int)(v152 - 1) + 9));
  do
  {
    while ( 1 )
    {
      v19 = (char *)v18 + (_QWORD)v17;
      v20 = *(_DWORD *)((char *)v18 + (_QWORD)v17);
      if ( v20 != 3 )
      {
        if ( v20 != 5 || !*((_DWORD *)v19 + 23) )
          goto LABEL_22;
        free(*((void **)v19 + 10));
        goto LABEL_56;
      }
      v21 = *((_DWORD *)v19 + 18);
      for ( i = 0; v21 > i; ++i )
      {
        v23 = *((_QWORD *)v19 + 12) + 32LL * i;
        v24 = *(void ***)(v23 + 24);
        *(_QWORD *)(v23 + 24) = 0;
        if ( v24 )
        {
          if ( *v24 != v24 + 2 )
            free(*v24);
          operator delete(v24, 0x70u);
          v21 = *((_DWORD *)v19 + 18);
        }
      }
      if ( (v19[57] & 1) != 0 )
      {
        v25 = *((_QWORD *)v19 + 12);
        if ( v25 )
        {
          v26 = 32LL * *(_QWORD *)(v25 - 8);
          v27 = v25 + v26;
          if ( v25 == v25 + v26 )
          {
            v82 = *((_QWORD *)v19 + 12);
          }
          else
          {
            while ( 1 )
            {
              v28 = *(void ***)(v27 - 8);
              v82 = v27 - 32;
              if ( v28 )
              {
                v29 = *v28;
                if ( *v28 != v28 + 2 )
                {
                  v101 = *(__int64 **)(v27 - 8);
                  free(v29);
                  v28 = (void **)v101;
                }
                operator delete(v28, 0x70u);
                v25 = *((_QWORD *)v19 + 12);
              }
              if ( v25 == v82 )
                break;
              v27 -= 32;
            }
            v26 = 32LL * *(_QWORD *)(v27 - 40);
          }
          operator delete[]((void *)(v82 - 8), v26 + 8);
        }
        v19[57] &= ~1u;
      }
      v30 = *((void **)v19 + 14);
      *((_DWORD *)v19 + 18) = 0;
      if ( v30 )
      {
        sub_15D7C30(v30);
        operator delete(v30, 0x520u);
      }
      v31 = *((_QWORD *)v19 + 13);
      if ( v31 )
      {
        if ( *(_DWORD *)(v31 + 140) )
          free(*(void **)(v31 + 128));
        sub_15DCED0(*(_QWORD *)(v31 + 72), v31 + 72);
        v32 = *(void **)(v31 + 80);
        if ( v32 != (void *)(v31 + 96) )
          free(v32);
        v33 = *(void **)(v31 + 40);
        if ( v33 != (void *)(v31 + 56) )
          free(v33);
        operator delete((void *)v31, 0x128u);
      }
      v34 = (unsigned __int8)v19[56] >> 4;
      if ( v34 != 2 )
        break;
LABEL_100:
      v48 = *((void **)v19 + 15);
      if ( !v48 )
        goto LABEL_56;
      operator delete[](v48);
      v17 = v151;
LABEL_22:
      v18 += 18;
      if ( v100 == v18 )
        goto LABEL_57;
    }
    if ( v34 == 11 )
    {
      v49 = *((void ***)v19 + 15);
      if ( v49 )
      {
        if ( *v49 != v49 + 2 )
          free(*v49);
        operator delete(v49, 0x70u);
        v17 = v151;
        goto LABEL_22;
      }
    }
    else if ( !v34 && *((_DWORD *)v19 + 19) )
    {
      goto LABEL_100;
    }
LABEL_56:
    v17 = v151;
    v18 += 18;
  }
  while ( v100 != v18 );
LABEL_57:
  v35 = &v17[144 * (unsigned int)v152];
  while ( v17 != v35 )
  {
    while ( 1 )
    {
      v35 -= 144;
      v36 = *((_BYTE **)v35 + 3);
      if ( v36 == v35 + 40 )
        break;
      free(v36);
      if ( v17 == v35 )
        goto LABEL_61;
    }
  }
LABEL_61:
  LODWORD(v152) = 0;
  LODWORD(v157) = 0;
  sub_15DCED0(v159, &v159);
  LODWORD(v161) = 0;
  v155 = 0;
  v163 = 0;
  v154 &= 0xFC3Fu;
  v168 = 0;
  v169 = 0;
  sub_15DCED0(v159, &v159);
  if ( ptr != v162 )
    free(ptr);
  if ( v156 != v158 )
    free(v156);
  v37 = v151;
  v38 = &v151[144 * (unsigned int)v152];
  if ( v151 != (_BYTE *)v38 )
  {
    do
    {
      while ( 1 )
      {
        v38 -= 18;
        v39 = (_QWORD *)v38[3];
        if ( v39 == v38 + 5 )
          break;
        free(v39);
        if ( v37 == v38 )
          goto LABEL_68;
      }
    }
    while ( v37 != v38 );
LABEL_68:
    v38 = v151;
  }
  if ( v38 != (_QWORD *)v153 )
    free(v38);
  v40 = v149;
  v148 = 0;
  if ( v150 < 0 )
  {
    if ( v149 )
    {
      v50 = 112LL * *(_QWORD *)(v149 - 8);
      v51 = v149 + v50;
      if ( v149 + v50 != v149 )
      {
        while ( 1 )
        {
          v40 = v51 - 112;
          if ( *(_BYTE *)(v51 - 16) )
          {
            sub_15DCED0(*(_QWORD *)(v51 - 56), v40 + 56);
            v52 = *(void **)(v51 - 48);
            if ( v52 != (void *)(v40 + 80) )
              free(v52);
            v53 = *(void **)(v40 + 24);
            if ( v53 != (void *)(v40 + 40) )
              free(v53);
          }
          if ( v149 == v40 )
            break;
          v51 -= 112;
        }
        v50 = 112LL * *(_QWORD *)(v51 - 120);
      }
      operator delete[]((void *)(v40 - 8), v50 + 8);
    }
  }
  else
  {
    v41 = v149 + 112LL * (v150 & 0x7FFFFFFF);
    if ( v41 != v149 )
    {
      do
      {
        while ( 1 )
        {
          if ( *(_BYTE *)(v40 + 96) )
          {
            *(_BYTE *)(v40 + 96) = 0;
            sub_15DCED0(*(_QWORD *)(v40 + 56), v40 + 56);
            v42 = *(void **)(v40 + 64);
            if ( v42 != (void *)(v40 + 80) )
              free(v42);
            v43 = *(void **)(v40 + 24);
            if ( v43 != (void *)(v40 + 40) )
              break;
          }
          v40 += 112;
          if ( v41 == v40 )
            goto LABEL_80;
        }
        free(v43);
        v40 += 112;
      }
      while ( v41 != v40 );
    }
  }
LABEL_80:
  if ( HIDWORD(v140) )
    free(v139[1]);
  if ( HIDWORD(v117) )
    free(v116);
  sub_15DCED0(v112, &v112);
  if ( v113 != v115 )
    free(v113);
  if ( v110[0] != v111 )
    free(v110[0]);
  return v99;
}
