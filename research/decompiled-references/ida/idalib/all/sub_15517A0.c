__int64 __fastcall sub_15517A0(__int64 a1, int a2, int a3, __m128i a4, __m128 a5)
{
  __int16 v7; // dx
  int v8; // r15d
  unsigned __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r13
  void *v13; // rdi
  void *v14; // rdi
  _BYTE *v15; // r14
  __int64 v16; // r13
  _BYTE *v17; // rbx
  int v18; // eax
  unsigned int v19; // ecx
  unsigned int i; // r14d
  __int64 v21; // rax
  void **v22; // r15
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // r15
  void **v26; // rdx
  void *v27; // r14
  __int64 v28; // r14
  void *v29; // rdi
  void *v30; // rdi
  char v31; // al
  _BYTE *v32; // rbx
  _BYTE *v33; // rdi
  _QWORD *v34; // r13
  _QWORD *v35; // rbx
  _QWORD *v36; // rdi
  __int64 v37; // rbx
  __int64 v38; // rbp
  void *v39; // rdi
  void *v40; // rdi
  void *v42; // rdi
  void **v43; // rbx
  __int64 v44; // rsi
  __int64 v45; // r13
  void *v46; // rdi
  void *v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // rbp
  void *v50; // rdi
  void *v51; // rdi
  __int64 *v52; // rdi
  __int64 v53; // rdi
  unsigned __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // r14
  char v57; // al
  __int64 v58; // rax
  __int64 v59; // r8
  __int64 *v60; // rdi
  int v61; // eax
  unsigned int v62; // esi
  unsigned __int8 v63; // r8
  void **v64; // r13
  unsigned __int64 v65; // rax
  void **v66; // r14
  void **v67; // rbx
  void **v68; // rdi
  void **v69; // rdi
  void **v70; // rbx
  void **v71; // r14
  unsigned __int8 *v72; // rsi
  _QWORD *v73; // rdx
  __int64 v74; // rax
  unsigned __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rax
  void *v78; // rdi
  void **v79; // rdi
  void **v80; // rdi
  void **v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rdx
  unsigned __int64 v84; // rdx
  int v85; // eax
  __int64 v86; // rax
  __int64 v87; // rax
  char *v88; // rcx
  char *v89; // rax
  char *v90; // rdi
  void **v92; // [rsp+0h] [rbp-C68h]
  __int64 v93; // [rsp+8h] [rbp-C60h]
  char v94; // [rsp+8h] [rbp-C60h]
  __int64 v95; // [rsp+8h] [rbp-C60h]
  void **v96; // [rsp+8h] [rbp-C60h]
  char *v97; // [rsp+8h] [rbp-C60h]
  __int64 v98; // [rsp+10h] [rbp-C58h]
  __int64 v99; // [rsp+10h] [rbp-C58h]
  __int64 v100; // [rsp+10h] [rbp-C58h]
  __int64 v101; // [rsp+10h] [rbp-C58h]
  void **v102; // [rsp+10h] [rbp-C58h]
  void **v103; // [rsp+18h] [rbp-C50h]
  char *v104; // [rsp+18h] [rbp-C50h]
  int v105; // [rsp+20h] [rbp-C48h] BYREF
  __int64 v106; // [rsp+28h] [rbp-C40h]
  __int64 v107; // [rsp+30h] [rbp-C38h]
  void *v108; // [rsp+40h] [rbp-C28h] BYREF
  unsigned __int64 v109; // [rsp+48h] [rbp-C20h]
  __int64 v110; // [rsp+50h] [rbp-C18h]
  void *v111; // [rsp+60h] [rbp-C08h]
  _BYTE v112[16]; // [rsp+70h] [rbp-BF8h] BYREF
  __int16 v113; // [rsp+80h] [rbp-BE8h]
  _QWORD v114[5]; // [rsp+90h] [rbp-BD8h] BYREF
  void *v115; // [rsp+B8h] [rbp-BB0h]
  __int64 v116; // [rsp+C0h] [rbp-BA8h]
  _BYTE v117[16]; // [rsp+C8h] [rbp-BA0h] BYREF
  __int64 v118; // [rsp+D8h] [rbp-B90h] BYREF
  void *v119; // [rsp+E0h] [rbp-B88h]
  __int64 v120; // [rsp+E8h] [rbp-B80h]
  _QWORD v121[4]; // [rsp+F0h] [rbp-B78h] BYREF
  void *v122; // [rsp+110h] [rbp-B58h]
  __int64 v123; // [rsp+118h] [rbp-B50h]
  __int64 v124; // [rsp+120h] [rbp-B48h]
  __int64 v125; // [rsp+128h] [rbp-B40h]
  __int64 v126; // [rsp+130h] [rbp-B38h]
  __int64 v127; // [rsp+138h] [rbp-B30h]
  __int64 v128; // [rsp+140h] [rbp-B28h]
  __int64 v129; // [rsp+148h] [rbp-B20h]
  __int64 v130; // [rsp+150h] [rbp-B18h]
  __int64 v131; // [rsp+158h] [rbp-B10h]
  __int64 v132; // [rsp+160h] [rbp-B08h]
  __int64 v133; // [rsp+168h] [rbp-B00h]
  __int64 v134; // [rsp+170h] [rbp-AF8h]
  __int64 v135; // [rsp+178h] [rbp-AF0h]
  __int64 v136; // [rsp+180h] [rbp-AE8h]
  __int64 v137; // [rsp+188h] [rbp-AE0h]
  __int64 v138; // [rsp+190h] [rbp-AD8h]
  __int64 v139; // [rsp+198h] [rbp-AD0h]
  __int64 v140; // [rsp+1A0h] [rbp-AC8h]
  __int16 v141; // [rsp+1A8h] [rbp-AC0h]
  __int64 v142; // [rsp+1B0h] [rbp-AB8h]
  _QWORD *v143; // [rsp+1C0h] [rbp-AA8h] BYREF
  __int64 v144; // [rsp+1C8h] [rbp-AA0h]
  void *v145[2]; // [rsp+1D0h] [rbp-A98h]
  __int64 v146; // [rsp+1E0h] [rbp-A88h]
  __int64 v147; // [rsp+1E8h] [rbp-A80h]
  __int64 v148; // [rsp+1F0h] [rbp-A78h]
  int v149; // [rsp+1F8h] [rbp-A70h]
  __int64 v150; // [rsp+200h] [rbp-A68h]
  __int64 v151; // [rsp+210h] [rbp-A58h]
  __int64 v152; // [rsp+218h] [rbp-A50h]
  int v153; // [rsp+220h] [rbp-A48h]
  __int64 v154; // [rsp+228h] [rbp-A40h]
  __int64 v155; // [rsp+230h] [rbp-A38h]
  int v156; // [rsp+238h] [rbp-A30h]
  _BYTE *v157; // [rsp+240h] [rbp-A28h]
  __int64 v158; // [rsp+248h] [rbp-A20h]
  _BYTE v159[576]; // [rsp+250h] [rbp-A18h] BYREF
  __int16 v160; // [rsp+490h] [rbp-7D8h]
  __int64 v161; // [rsp+498h] [rbp-7D0h]
  void *v162; // [rsp+4A0h] [rbp-7C8h]
  __int64 v163; // [rsp+4A8h] [rbp-7C0h]
  _BYTE v164[16]; // [rsp+4B0h] [rbp-7B8h] BYREF
  __int64 v165; // [rsp+4C0h] [rbp-7A8h] BYREF
  void *ptr; // [rsp+4C8h] [rbp-7A0h]
  __int64 v167; // [rsp+4D0h] [rbp-798h]
  _QWORD v168[3]; // [rsp+4D8h] [rbp-790h] BYREF
  __int64 v169; // [rsp+4F0h] [rbp-778h]
  __int64 v170; // [rsp+4F8h] [rbp-770h]
  __int64 v171; // [rsp+500h] [rbp-768h]
  __int64 v172; // [rsp+508h] [rbp-760h]
  __int64 v173; // [rsp+510h] [rbp-758h]
  __int64 v174; // [rsp+C18h] [rbp-50h]
  __int64 v175; // [rsp+C20h] [rbp-48h]

  v114[0] &= 0xFFFFFFC000000000LL;
  v115 = v117;
  v118 = a1 + 504;
  v119 = v121;
  memset(&v114[2], 0, 24);
  v116 = 0x200000000LL;
  v120 = 0x200000000LL;
  v121[2] = 0;
  v121[3] = 0;
  v122 = nullptr;
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
  v135 = 0;
  v136 = 0;
  v137 = 0;
  v138 = 0;
  v139 = 0;
  v140 = 0;
  v142 = 0;
  v105 = 0;
  v106 = 0;
  v107 = 0;
  v141 &= 0xF000u;
  sub_1487580(a1, (__int64)v114, (__int64)&v105, 3u, 7, 0, a4, a5, 1u);
  if ( !(_BYTE)qword_2CD8AC8 && __cxa_guard_acquire(&qword_2CD8AC8) )
  {
    qword_2CD8AE0[2] = 0x200000000LL;
    qword_2CD8AE0[0] = 0;
    qword_2CD8AE0[1] = &qword_2CD8AE0[3];
    __cxa_atexit((void (*)(void *))sub_1477960, qword_2CD8AE0, &off_2B25620);
    __cxa_guard_release(&qword_2CD8AC8);
  }
  v143 = v114;
  v152 = v126;
  v157 = v159;
  v158 = 0x400000000LL;
  v144 = 0;
  *(_OWORD *)v145 = 0;
  v146 = 0;
  v147 = 0;
  v148 = 0;
  v149 = 0;
  v150 = 0;
  LOBYTE(v160) = (((LODWORD(v114[0]) >> 12) & 0x7F) == 69) | v160 & 0xFE;
  v162 = v164;
  v165 = v118;
  v160 &= 0xFC01u;
  v151 = 0;
  v153 = 12;
  v154 = 0;
  v155 = 0;
  v156 = 0;
  v161 = 0;
  v163 = 0x200000000LL;
  ptr = v168;
  v167 = 0x200000000LL;
  v168[2] = qword_2CD8AE0;
  v169 = 0;
  v170 = 0;
  v171 = 0;
  v172 = 0;
  v173 = 0;
  v174 = 0;
  sub_147E3E0(a1, (__int64)&v143);
  if ( (v114[0] & 0x7F000) != 0 )
  {
    v7 = *(_WORD *)(a1 + 32);
    if ( v7 == 27 )
    {
      v60 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v60, (int *)(a1 + 16));
      v61 = HIDWORD(v174);
      v62 = *(_DWORD *)(a1 + 40);
      if ( !HIDWORD(v174) )
        HIDWORD(v174) = *(_DWORD *)(a1 + 40);
      v63 = 1;
      if ( !v150 )
        v63 = (v149 | (unsigned int)v154) != 0;
      sub_154FF40(a1, v62, v151, v61 != 0, v63);
      v7 = *(_WORD *)(a1 + 32);
    }
    v8 = 0;
    v9 = 0;
    if ( v7 == 64 )
    {
      v52 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v52, (int *)(a1 + 16));
      v8 = *(_DWORD *)(a1 + 40);
      if ( *(_WORD *)(a1 + 32) == 22
        && ((v53 = *(_QWORD *)(a1 + 8), v54 = *(_QWORD *)(v53 + 2944), v54 >= *(unsigned int *)(v53 + 2912))
          ? (v55 = sub_14180A0(v53, 1u))
          : (v55 = *(_QWORD *)(v53 + 2904) + 24 * v54),
            *(_WORD *)(v55 + 16) == 24) )
      {
        sub_1564820(&v108, a1, *(unsigned int *)(a1 + 16), 5033);
        v72 = (unsigned __int8 *)v108;
        if ( !v108 )
        {
          v84 = v109;
          v85 = *(_DWORD *)(v109 + 14976);
          if ( v85 )
          {
            v86 = (unsigned int)(v85 - 1);
            *(_DWORD *)(v109 + 14976) = v86;
            v72 = *(unsigned __int8 **)(v84 + 8 * v86 + 14848);
            v87 = *((unsigned int *)v72 + 134);
            *v72 = 0;
            v88 = *((char **)v72 + 66);
            *((_DWORD *)v72 + 106) = 0;
            v89 = &v88[64 * v87];
            while ( v88 != v89 )
            {
              while ( 1 )
              {
                v89 -= 64;
                v90 = *((char **)v89 + 3);
                if ( v90 == v89 + 40 )
                  break;
                v104 = v88;
                v97 = v89;
                operator delete(v90);
                v89 = v97;
                v88 = v104;
                if ( v104 == v97 )
                  goto LABEL_196;
              }
            }
LABEL_196:
            *((_DWORD *)v72 + 134) = 0;
          }
          else
          {
            v72 = (unsigned __int8 *)operator new(0x3A0u);
            *v72 = 0;
            *((_QWORD *)v72 + 12) = v72 + 112;
            *((_QWORD *)v72 + 16) = v72 + 144;
            *((_QWORD *)v72 + 20) = v72 + 176;
            *((_QWORD *)v72 + 24) = v72 + 208;
            *((_QWORD *)v72 + 28) = v72 + 240;
            *((_QWORD *)v72 + 32) = v72 + 272;
            *((_QWORD *)v72 + 36) = v72 + 304;
            *((_QWORD *)v72 + 40) = v72 + 336;
            *((_QWORD *)v72 + 44) = v72 + 368;
            *((_QWORD *)v72 + 48) = v72 + 400;
            *((_QWORD *)v72 + 52) = v72 + 432;
            *((_QWORD *)v72 + 13) = 0;
            v72[112] = 0;
            *((_QWORD *)v72 + 17) = 0;
            v72[144] = 0;
            *((_QWORD *)v72 + 21) = 0;
            v72[176] = 0;
            *((_QWORD *)v72 + 25) = 0;
            v72[208] = 0;
            *((_QWORD *)v72 + 29) = 0;
            v72[240] = 0;
            *((_QWORD *)v72 + 33) = 0;
            v72[272] = 0;
            *((_QWORD *)v72 + 37) = 0;
            v72[304] = 0;
            *((_QWORD *)v72 + 41) = 0;
            v72[336] = 0;
            *((_QWORD *)v72 + 45) = 0;
            v72[368] = 0;
            *((_QWORD *)v72 + 49) = 0;
            v72[400] = 0;
            *((_QWORD *)v72 + 53) = 0x800000000LL;
            *((_QWORD *)v72 + 66) = v72 + 544;
            *((_QWORD *)v72 + 67) = 0x600000000LL;
          }
          v108 = v72;
        }
        v72[*v72 + 1] = 2;
        v73 = v108;
        v74 = *(unsigned __int8 *)v108;
        *(_BYTE *)v108 = v74 + 1;
        v73[v74 + 2] = 1;
        if ( (_BYTE)v113 )
        {
          sub_FC7790(v110, (__int64 *)&v108, SHIBYTE(v113));
          v110 = 0;
          v113 = 0;
        }
        if ( v111 != v112 )
          operator delete(v111);
        v103 = (void **)v108;
        if ( v108 )
        {
          v75 = v109;
          if ( v109 )
          {
            if ( (unsigned __int64)v108 < v109 || (unsigned __int64)v108 > v109 + 14848 )
            {
              v76 = *((_QWORD *)v108 + 66);
              v77 = v76 + ((unsigned __int64)*((unsigned int *)v108 + 134) << 6);
              while ( v76 != v77 )
              {
                while ( 1 )
                {
                  v77 -= 64;
                  v78 = *(void **)(v77 + 24);
                  if ( v78 == (void *)(v77 + 40) )
                    break;
                  v101 = v76;
                  v95 = v77;
                  operator delete(v78);
                  v77 = v95;
                  v76 = v101;
                  if ( v101 == v95 )
                    goto LABEL_170;
                }
              }
LABEL_170:
              v79 = (void **)v103[66];
              if ( v79 != v103 + 68 )
                free(v79);
              v80 = (void **)v103[52];
              v81 = v103 + 52;
              if ( v80 != v103 + 54 )
              {
                free(v80);
                v81 = v103 + 52;
              }
              v96 = v103 + 12;
              do
              {
                while ( 1 )
                {
                  v81 -= 4;
                  if ( *v81 == v81 + 2 )
                    break;
                  v102 = v81;
                  operator delete(*v81);
                  v81 = v102;
                  if ( v102 == v96 )
                    goto LABEL_177;
                }
              }
              while ( v81 != v96 );
LABEL_177:
              operator delete(v103, 0x3A0u);
            }
            else
            {
              v83 = *(unsigned int *)(v109 + 14976);
              *(_DWORD *)(v109 + 14976) = v83 + 1;
              *(_QWORD *)(v75 + 8 * v83 + 14848) = v103;
            }
          }
        }
        LODWORD(v108) = 3407938;
        sub_15680D0(a1, &v108, 2, 3);
        v9 = 0;
      }
      else
      {
        v56 = *(_QWORD *)(a1 + 96);
        ++*(_DWORD *)(a1 + 2548);
        v57 = *(_BYTE *)(a1 + 1952);
        *(_BYTE *)(a1 + 1952) = 0;
        v94 = v57;
        sub_18C74E0(v56, 4, 0, 4);
        v99 = *(_QWORD *)(a1 + 96);
        if ( *(_WORD *)(a1 + 32) == 24 )
          v58 = sub_14EE310(a1, (__m128i)0LL);
        else
          v58 = sub_14BDAD0(a1, 0, (__m128i)0LL);
        v59 = sub_19146D0(v99, v58);
        if ( v59 == 1 )
        {
          LODWORD(v108) = 3407938;
          sub_15680D0(a1, &v108, 2, 3);
          v59 = 1;
        }
        v100 = v59;
        sub_190D5E0(v56);
        --*(_DWORD *)(a1 + 2548);
        *(_BYTE *)(a1 + 1952) = v94;
        v9 = v100 & 0xFFFFFFFFFFFFFFFELL;
      }
    }
    v93 = sub_1CD25D0(
            *(_QWORD *)(a1 + 96),
            *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
            (unsigned int)&v143,
            a2,
            a3,
            v8,
            v9);
  }
  else
  {
    sub_1564820(&v108, a1, *(unsigned int *)(a1 + 16), 1655);
    if ( (_BYTE)v113 )
    {
      sub_FC7790(v110, (__int64 *)&v108, SHIBYTE(v113));
      v110 = 0;
      v113 = 0;
    }
    if ( v111 != v112 )
      operator delete(v111);
    v64 = (void **)v108;
    if ( v108 )
    {
      v65 = v109;
      if ( v109 )
      {
        if ( (unsigned __int64)v108 >= v109 && (unsigned __int64)v108 <= v109 + 14848 )
        {
          v82 = *(unsigned int *)(v109 + 14976);
          *(_DWORD *)(v109 + 14976) = v82 + 1;
          *(_QWORD *)(v65 + 8 * v82 + 14848) = v64;
        }
        else
        {
          v66 = *((void ***)v108 + 66);
          v67 = &v66[8 * (unsigned __int64)*((unsigned int *)v108 + 134)];
          if ( v66 != v67 )
          {
            do
            {
              while ( 1 )
              {
                v67 -= 8;
                v68 = (void **)v67[3];
                if ( v68 == v67 + 5 )
                  break;
                operator delete(v68);
                if ( v66 == v67 )
                  goto LABEL_147;
              }
            }
            while ( v66 != v67 );
LABEL_147:
            v67 = (void **)v64[66];
          }
          if ( v67 != v64 + 68 )
            free(v67);
          v69 = (void **)v64[52];
          v70 = v64 + 52;
          if ( v69 != v64 + 54 )
            free(v69);
          v71 = v64 + 12;
          do
          {
            while ( 1 )
            {
              v70 -= 4;
              if ( *v70 == v70 + 2 )
                break;
              operator delete(*v70);
              if ( v70 == v71 )
                goto LABEL_155;
            }
          }
          while ( v70 != v71 );
LABEL_155:
          operator delete(v64, 0x3A0u);
        }
      }
    }
    v93 = 0;
  }
  v144 = 0;
  v145[0] = nullptr;
  v10 = v155;
  v11 = v143[20];
  LODWORD(v146) = 0;
  v149 = 0;
  v150 = 0;
  v151 = 0;
  v152 = v11;
  v154 = 0;
  if ( v156 < 0 )
  {
    if ( v155 )
    {
      v44 = 112LL * *(_QWORD *)(v155 - 8);
      v45 = v155 + v44;
      if ( v155 + v44 != v155 )
      {
        while ( 1 )
        {
          v10 = v45 - 112;
          if ( !*(_BYTE *)(v45 - 16) )
            goto LABEL_97;
          sub_15DCED0(*(_QWORD *)(v45 - 56), v10 + 56);
          v46 = *(void **)(v45 - 48);
          if ( v46 != (void *)(v10 + 80) )
            free(v46);
          v47 = *(void **)(v10 + 24);
          if ( v47 == (void *)(v10 + 40) )
          {
LABEL_97:
            if ( v155 == v10 )
              goto LABEL_104;
          }
          else
          {
            free(v47);
            if ( v155 == v10 )
            {
LABEL_104:
              v44 = 112LL * *(_QWORD *)(v45 - 120);
              break;
            }
          }
          v45 -= 112;
        }
      }
      operator delete[]((void *)(v10 - 8), v44 + 8);
    }
  }
  else
  {
    v12 = v155 + 112LL * (v156 & 0x7FFFFFFF);
    if ( v12 != v155 )
    {
      do
      {
        while ( 1 )
        {
          if ( *(_BYTE *)(v10 + 96) )
          {
            *(_BYTE *)(v10 + 96) = 0;
            sub_15DCED0(*(_QWORD *)(v10 + 56), v10 + 56);
            v13 = *(void **)(v10 + 64);
            if ( v13 != (void *)(v10 + 80) )
              free(v13);
            v14 = *(void **)(v10 + 24);
            if ( v14 != (void *)(v10 + 40) )
              break;
          }
          v10 += 112;
          if ( v12 == v10 )
            goto LABEL_15;
        }
        free(v14);
        v10 += 112;
      }
      while ( v12 != v10 );
    }
  }
LABEL_15:
  v155 = 0;
  v156 = 0;
  if ( !(_DWORD)v158 )
    goto LABEL_58;
  v15 = v157;
  v16 = 0;
  v98 = 16 * (9LL * (unsigned int)(v158 - 1) + 9);
  do
  {
    while ( 1 )
    {
      v17 = &v15[v16];
      v18 = *(_DWORD *)&v15[v16];
      if ( v18 != 3 )
      {
        if ( v18 != 5 || !*((_DWORD *)v17 + 23) )
          goto LABEL_19;
        free(*((void **)v17 + 10));
        goto LABEL_53;
      }
      v19 = *((_DWORD *)v17 + 18);
      for ( i = 0; i < v19; ++i )
      {
        v21 = *((_QWORD *)v17 + 12) + 32LL * i;
        v22 = *(void ***)(v21 + 24);
        *(_QWORD *)(v21 + 24) = 0;
        if ( v22 )
        {
          if ( *v22 != v22 + 2 )
            free(*v22);
          operator delete(v22, 0x70u);
          v19 = *((_DWORD *)v17 + 18);
        }
      }
      if ( (v17[57] & 1) != 0 )
      {
        v23 = *((_QWORD *)v17 + 12);
        if ( v23 )
        {
          v24 = 32LL * *(_QWORD *)(v23 - 8);
          v25 = v23 + v24;
          if ( v23 != v23 + v24 )
          {
            while ( 1 )
            {
              v26 = *(void ***)(v25 - 8);
              if ( v26 )
              {
                if ( *v26 != v26 + 2 )
                {
                  v92 = *(void ***)(v25 - 8);
                  free(*v26);
                  v26 = v92;
                }
                operator delete(v26, 0x70u);
                v23 = *((_QWORD *)v17 + 12);
              }
              if ( v25 - 32 == v23 )
                break;
              v25 -= 32;
            }
            v24 = 32LL * *(_QWORD *)(v25 - 40);
          }
          operator delete[]((void *)(v23 - 8), v24 + 8);
        }
        v17[57] &= ~1u;
      }
      v27 = *((void **)v17 + 14);
      *((_DWORD *)v17 + 18) = 0;
      if ( v27 )
      {
        sub_15D7C30(v27);
        operator delete(v27, 0x520u);
      }
      v28 = *((_QWORD *)v17 + 13);
      if ( v28 )
      {
        if ( *(_DWORD *)(v28 + 140) )
          free(*(void **)(v28 + 128));
        sub_15DCED0(*(_QWORD *)(v28 + 72), v28 + 72);
        v29 = *(void **)(v28 + 80);
        if ( v29 != (void *)(v28 + 96) )
          free(v29);
        v30 = *(void **)(v28 + 40);
        if ( v30 != (void *)(v28 + 56) )
          free(v30);
        operator delete((void *)v28, 0x128u);
      }
      v31 = v17[56] >> 4;
      if ( v31 != 2 )
        break;
LABEL_85:
      v42 = *((void **)v17 + 15);
      if ( !v42 )
        goto LABEL_53;
      operator delete[](v42);
      v15 = v157;
LABEL_19:
      v16 += 144;
      if ( v98 == v16 )
        goto LABEL_54;
    }
    if ( v31 == 11 )
    {
      v43 = *((void ***)v17 + 15);
      if ( v43 )
      {
        if ( *v43 != v43 + 2 )
          free(*v43);
        operator delete(v43, 0x70u);
        v15 = v157;
        goto LABEL_19;
      }
    }
    else if ( !v31 && *((_DWORD *)v17 + 19) )
    {
      goto LABEL_85;
    }
LABEL_53:
    v15 = v157;
    v16 += 144;
  }
  while ( v98 != v16 );
LABEL_54:
  v32 = &v15[144 * (unsigned int)v158];
  while ( v32 != v15 )
  {
    while ( 1 )
    {
      v32 -= 144;
      v33 = *((_BYTE **)v32 + 3);
      if ( v33 == v32 + 40 )
        break;
      free(v33);
      if ( v32 == v15 )
        goto LABEL_58;
    }
  }
LABEL_58:
  LODWORD(v158) = 0;
  LODWORD(v163) = 0;
  sub_15DCED0(v165, &v165);
  LODWORD(v167) = 0;
  v161 = 0;
  v169 = 0;
  v160 &= 0xFC3Fu;
  v174 = 0;
  v175 = 0;
  sub_15DCED0(v165, &v165);
  if ( ptr != v168 )
    free(ptr);
  if ( v162 != v164 )
    free(v162);
  v34 = v157;
  v35 = &v157[144 * (unsigned int)v158];
  if ( v157 != (_BYTE *)v35 )
  {
    do
    {
      while ( 1 )
      {
        v35 -= 18;
        v36 = (_QWORD *)v35[3];
        if ( v36 == v35 + 5 )
          break;
        free(v36);
        if ( v34 == v35 )
          goto LABEL_65;
      }
    }
    while ( v34 != v35 );
LABEL_65:
    v35 = v157;
  }
  if ( v35 != (_QWORD *)v159 )
    free(v35);
  v37 = v155;
  v154 = 0;
  if ( v156 < 0 )
  {
    if ( !v155 )
      goto LABEL_77;
    v48 = 112LL * *(_QWORD *)(v155 - 8);
    v49 = v155 + v48;
    if ( v155 + v48 != v155 )
    {
      while ( 1 )
      {
        v37 = v49 - 112;
        if ( !*(_BYTE *)(v49 - 16) )
          goto LABEL_109;
        sub_15DCED0(*(_QWORD *)(v49 - 56), v37 + 56);
        v50 = *(void **)(v49 - 48);
        if ( v50 != (void *)(v37 + 80) )
          free(v50);
        v51 = *(void **)(v37 + 24);
        if ( v51 == (void *)(v37 + 40) )
        {
LABEL_109:
          if ( v155 == v37 )
            goto LABEL_116;
        }
        else
        {
          free(v51);
          if ( v155 == v37 )
          {
LABEL_116:
            v48 = 112LL * *(_QWORD *)(v49 - 120);
            break;
          }
        }
        v49 -= 112;
      }
    }
    operator delete[]((void *)(v37 - 8), v48 + 8);
    if ( HIDWORD(v146) )
      goto LABEL_118;
LABEL_78:
    if ( HIDWORD(v123) )
LABEL_119:
      free(v122);
  }
  else
  {
    v38 = v155 + 112LL * (v156 & 0x7FFFFFFF);
    if ( v38 != v155 )
    {
      do
      {
        while ( 1 )
        {
          if ( *(_BYTE *)(v37 + 96) )
          {
            *(_BYTE *)(v37 + 96) = 0;
            sub_15DCED0(*(_QWORD *)(v37 + 56), v37 + 56);
            v39 = *(void **)(v37 + 64);
            if ( v39 != (void *)(v37 + 80) )
              free(v39);
            v40 = *(void **)(v37 + 24);
            if ( v40 != (void *)(v37 + 40) )
              break;
          }
          v37 += 112;
          if ( v38 == v37 )
            goto LABEL_77;
        }
        free(v40);
        v37 += 112;
      }
      while ( v38 != v37 );
    }
LABEL_77:
    if ( !HIDWORD(v146) )
      goto LABEL_78;
LABEL_118:
    free(v145[1]);
    if ( HIDWORD(v123) )
      goto LABEL_119;
  }
  sub_15DCED0(v118, &v118);
  if ( v119 != v121 )
    free(v119);
  if ( v115 != v117 )
    free(v115);
  return v93;
}
