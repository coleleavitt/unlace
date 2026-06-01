void __fastcall sub_11676B0(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        __int64 a6,
        __m128 a7,
        double a8)
{
  unsigned int *v9; // r12
  __int64 v10; // rdi
  void **v11; // rbx
  __int64 v12; // r15
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // r15
  _QWORD *v16; // r14
  __int64 v17; // rax
  __int64 v18; // rsi
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 *v21; // rax
  __int64 v22; // r14
  __int64 v23; // r10
  void *v24; // r15
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 v27; // rsi
  unsigned int v28; // eax
  __int64 v29; // rcx
  void *v30; // rsi
  _QWORD *v31; // rbx
  void (__fastcall *v32)(_QWORD *); // rax
  __int64 v33; // r13
  __int64 v34; // r12
  void *v35; // rdi
  _QWORD *v36; // rdi
  _QWORD *v37; // rdi
  void **v38; // r13
  void **v39; // r12
  void *v40; // rdi
  _QWORD *v41; // rdi
  _QWORD *v42; // rbx
  __int64 v43; // rax
  _QWORD *v44; // r8
  unsigned __int8 *v45; // r15
  _BYTE *v46; // rsi
  signed __int64 v47; // rcx
  _QWORD *v48; // rax
  _QWORD *v49; // rdx
  __int64 v50; // r8
  __int64 v51; // rax
  void **v52; // rcx
  _BYTE *v53; // rdi
  __int64 v54; // rax
  _BYTE *v55; // rsi
  __int64 v56; // rcx
  unsigned __int8 *v57; // r14
  _QWORD *v58; // rax
  _QWORD *v59; // rdx
  __int64 v60; // r8
  __int64 v61; // rax
  void **v62; // rcx
  _BYTE *v63; // rdi
  __int64 v64; // rax
  void **v65; // r14
  unsigned __int64 v66; // rax
  void **v67; // rdx
  void **v68; // r15
  void **v69; // rbx
  void **v70; // rdi
  void **v71; // rdi
  void **v72; // r15
  __int64 v73; // rax
  unsigned __int64 v74; // rdx
  __int64 v75; // r14
  __int64 v76; // rax
  __int64 v77; // r14
  __int64 v78; // rax
  unsigned __int64 v79; // rdx
  size_t v80; // rdx
  size_t v81; // rdx
  __int64 v82; // rdx
  unsigned __int64 v83; // r13
  __int64 v84; // rdi
  unsigned __int64 v85; // rdx
  int v86; // eax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rax
  __int64 v91; // r14
  signed __int64 v92; // r12
  __int64 v93; // rbx
  void *v94; // rdi
  unsigned __int64 v95; // rdx
  int v96; // eax
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rax
  __int64 v101; // r12
  __int64 v102; // rbx
  __int64 v103; // rbp
  void *v104; // rdi
  const __m128i *v107; // [rsp+10h] [rbp-1C8h]
  __int64 v108; // [rsp+18h] [rbp-1C0h]
  __int64 v110; // [rsp+30h] [rbp-1A8h]
  void **v111; // [rsp+30h] [rbp-1A8h]
  __int64 v112; // [rsp+30h] [rbp-1A8h]
  __int64 v113; // [rsp+30h] [rbp-1A8h]
  void **v114; // [rsp+30h] [rbp-1A8h]
  unsigned int *v115; // [rsp+30h] [rbp-1A8h]
  size_t v116; // [rsp+30h] [rbp-1A8h]
  _QWORD *v117; // [rsp+38h] [rbp-1A0h]
  void *v118; // [rsp+38h] [rbp-1A0h]
  void *v119; // [rsp+38h] [rbp-1A0h]
  void **v120; // [rsp+38h] [rbp-1A0h]
  unsigned int *v121; // [rsp+38h] [rbp-1A0h]
  _BYTE *v122; // [rsp+38h] [rbp-1A0h]
  char v123; // [rsp+47h] [rbp-191h]
  void *src; // [rsp+50h] [rbp-188h]
  void *v126; // [rsp+60h] [rbp-178h] BYREF
  size_t n; // [rsp+68h] [rbp-170h]
  _BYTE v128[16]; // [rsp+70h] [rbp-168h] BYREF
  void *v129; // [rsp+80h] [rbp-158h]
  size_t v130; // [rsp+88h] [rbp-150h]
  _QWORD v131[2]; // [rsp+90h] [rbp-148h] BYREF
  void *v132; // [rsp+A0h] [rbp-138h]
  size_t v133; // [rsp+A8h] [rbp-130h]
  _QWORD v134[2]; // [rsp+B0h] [rbp-128h] BYREF
  void *v135; // [rsp+C0h] [rbp-118h] BYREF
  unsigned __int64 v136; // [rsp+C8h] [rbp-110h]
  __int64 v137; // [rsp+D0h] [rbp-108h] BYREF
  void *v138; // [rsp+E0h] [rbp-F8h]
  __int64 v139; // [rsp+F0h] [rbp-E8h] BYREF
  __int16 v140; // [rsp+100h] [rbp-D8h]
  void *ptr; // [rsp+110h] [rbp-C8h] BYREF
  __int64 v142; // [rsp+118h] [rbp-C0h]
  _BYTE v143[184]; // [rsp+120h] [rbp-B8h] BYREF

  v9 = a2;
  v10 = *(_QWORD *)(a1 + 24);
  v11 = &v135;
  v110 = *(_QWORD *)(v10 + 8);
  ptr = v143;
  v142 = 0x1000000000LL;
  v123 = sub_22B7EC0(v10 + 16);
  sub_22B7EA0(*(_QWORD *)(a1 + 24) + 16LL);
  v12 = *((_QWORD *)a2 + 10);
  LODWORD(v135) = 2096;
  v13 = sub_21B6DA0(v12, &v135, 1);
  v14 = *(_QWORD *)(v12 + 8);
  v15 = (_QWORD *)(v14 + 8LL * (unsigned int)v13);
  v16 = (_QWORD *)(v14 + 8 * HIDWORD(v13));
  if ( v15 != v16 )
  {
    while ( !*v15 || !(unsigned __int8)sub_21B9810(*v15, 2096) )
    {
      if ( v16 == ++v15 )
        goto LABEL_5;
    }
    if ( v16 != v15 )
    {
      do
      {
        v42 = (_QWORD *)*v15;
        v43 = *(_QWORD *)(*v15 + 16LL);
        if ( !v43 )
          v43 = *v15;
        ++v15;
        *(_BYTE *)(v43 + 44) |= 1u;
        if ( v15 == v16 )
          break;
        while ( !*v15 || !(unsigned __int8)sub_21B9810(*v15, 2096) )
        {
          if ( v16 == ++v15 )
            goto LABEL_54;
        }
      }
      while ( v16 != v15 );
LABEL_54:
      v44 = v42;
      v11 = &v135;
      v117 = v44;
      sub_FC70B0((__int64)&v135, *(_QWORD *)v110, 0, 495);
      v45 = (unsigned __int8 *)v135;
      v46 = (_BYTE *)v117[3];
      v47 = v117[4];
      if ( !v135 )
      {
        v85 = v136;
        v86 = *(_DWORD *)(v136 + 14976);
        if ( v86 )
        {
          v87 = (unsigned int)(v86 - 1);
          *(_DWORD *)(v136 + 14976) = v87;
          v45 = *(unsigned __int8 **)(v85 + 8 * v87 + 14848);
          v88 = *((unsigned int *)v45 + 134);
          *v45 = 0;
          v89 = *((_QWORD *)v45 + 66);
          *((_DWORD *)v45 + 106) = 0;
          v90 = v89 + (v88 << 6);
          if ( v89 != v90 )
          {
            v121 = v9;
            v91 = v90;
            v92 = v47;
            v93 = v89;
            do
            {
              while ( 1 )
              {
                v91 -= 64;
                v94 = *(void **)(v91 + 24);
                if ( v94 == (void *)(v91 + 40) )
                  break;
                operator delete(v94);
                if ( v93 == v91 )
                  goto LABEL_153;
              }
            }
            while ( v93 != v91 );
LABEL_153:
            v47 = v92;
            v11 = &v135;
            v9 = v121;
          }
          *((_DWORD *)v45 + 134) = 0;
        }
        else
        {
          src = (void *)v117[4];
          v45 = (unsigned __int8 *)operator new(0x3A0u);
          *v45 = 0;
          *((_QWORD *)v45 + 12) = v45 + 112;
          *((_QWORD *)v45 + 16) = v45 + 144;
          *((_QWORD *)v45 + 20) = v45 + 176;
          *((_QWORD *)v45 + 24) = v45 + 208;
          *((_QWORD *)v45 + 28) = v45 + 240;
          *((_QWORD *)v45 + 32) = v45 + 272;
          *((_QWORD *)v45 + 36) = v45 + 304;
          *((_QWORD *)v45 + 40) = v45 + 336;
          *((_QWORD *)v45 + 44) = v45 + 368;
          *((_QWORD *)v45 + 48) = v45 + 400;
          *((_QWORD *)v45 + 52) = v45 + 432;
          *((_QWORD *)v45 + 13) = 0;
          v45[112] = 0;
          *((_QWORD *)v45 + 17) = 0;
          v45[144] = 0;
          *((_QWORD *)v45 + 21) = 0;
          v45[176] = 0;
          *((_QWORD *)v45 + 25) = 0;
          v45[208] = 0;
          *((_QWORD *)v45 + 29) = 0;
          v45[240] = 0;
          *((_QWORD *)v45 + 33) = 0;
          v45[272] = 0;
          *((_QWORD *)v45 + 37) = 0;
          v45[304] = 0;
          *((_QWORD *)v45 + 41) = 0;
          v45[336] = 0;
          *((_QWORD *)v45 + 45) = 0;
          v45[368] = 0;
          *((_QWORD *)v45 + 49) = 0;
          v45[400] = 0;
          *((_QWORD *)v45 + 53) = 0x800000000LL;
          *((_QWORD *)v45 + 66) = v45 + 544;
          v47 = (signed __int64)src;
          *((_QWORD *)v45 + 67) = 0x600000000LL;
        }
        v135 = v45;
      }
      v45[*v45 + 1] = 0;
      v132 = v134;
      if ( &v46[v47] && !v46 )
        goto LABEL_166;
      if ( (unsigned __int64)v47 > 0xF )
      {
        if ( v47 < 0 )
          goto LABEL_173;
        v118 = (void *)v47;
        v48 = (_QWORD *)operator new(v47 + 1);
        v47 = (signed __int64)v118;
        v132 = v48;
        v134[0] = v118;
      }
      else
      {
        if ( v47 == 1 )
        {
          LOBYTE(v134[0]) = *v46;
          v48 = v134;
          goto LABEL_60;
        }
        v48 = v134;
        if ( !v47 )
        {
LABEL_60:
          v133 = v47;
          *((_BYTE *)v48 + v47) = 0;
          v49 = v135;
          v50 = *(unsigned __int8 *)v135;
          *(_BYTE *)v135 = v50 + 1;
          v51 = 4 * (v50 + 3);
          v52 = (void **)&v49[v51];
          v53 = (_BYTE *)v49[v51];
          if ( v132 == v134 )
          {
            v81 = v133;
            if ( v133 )
            {
              if ( v133 == 1 )
              {
                *v53 = v134[0];
                v81 = v133;
                v53 = *v52;
              }
              else
              {
                v120 = v52;
                memcpy(v53, v132, v133);
                v52 = v120;
                v81 = v133;
                v53 = *v120;
              }
            }
            v52[1] = (void *)v81;
            v53[v81] = 0;
            v53 = v132;
          }
          else
          {
            if ( v53 == (_BYTE *)&v49[v51 + 2] )
            {
              *v52 = v132;
              v52[1] = (void *)v133;
              v52[2] = (void *)v134[0];
            }
            else
            {
              v54 = v49[4 * (int)v50 + 14];
              *v52 = v132;
              v52[1] = (void *)v133;
              v52[2] = (void *)v134[0];
              if ( v53 )
              {
                v132 = v53;
                v134[0] = v54;
                goto LABEL_64;
              }
            }
            v53 = v134;
            v132 = v134;
          }
LABEL_64:
          v133 = 0;
          *v53 = 0;
          if ( v132 != v134 )
            operator delete(v132);
          v126 = v128;
          sub_11655A0(&v126, *(_BYTE **)(v110 + 944), *(_QWORD *)(v110 + 944) + *(_QWORD *)(v110 + 952));
          v55 = v126;
          v56 = n;
          v57 = (unsigned __int8 *)v135;
          if ( !v135 )
          {
            v95 = v136;
            v96 = *(_DWORD *)(v136 + 14976);
            if ( v96 )
            {
              v97 = (unsigned int)(v96 - 1);
              *(_DWORD *)(v136 + 14976) = v97;
              v57 = *(unsigned __int8 **)(v95 + 8 * v97 + 14848);
              v98 = *((unsigned int *)v57 + 134);
              *v57 = 0;
              v99 = *((_QWORD *)v57 + 66);
              *((_DWORD *)v57 + 106) = 0;
              v100 = v99 + (v98 << 6);
              if ( v99 != v100 )
              {
                v115 = v9;
                v101 = v56;
                v102 = v100;
                v103 = v99;
                do
                {
                  while ( 1 )
                  {
                    v102 -= 64;
                    v104 = *(void **)(v102 + 24);
                    if ( v104 == (void *)(v102 + 40) )
                      break;
                    operator delete(v104);
                    if ( v103 == v102 )
                      goto LABEL_160;
                  }
                }
                while ( v103 != v102 );
LABEL_160:
                v56 = v101;
                v9 = v115;
                v11 = &v135;
              }
              *((_DWORD *)v57 + 134) = 0;
            }
            else
            {
              v122 = v126;
              v116 = n;
              v57 = (unsigned __int8 *)operator new(0x3A0u);
              *v57 = 0;
              *((_QWORD *)v57 + 12) = v57 + 112;
              *((_QWORD *)v57 + 16) = v57 + 144;
              *((_QWORD *)v57 + 20) = v57 + 176;
              *((_QWORD *)v57 + 24) = v57 + 208;
              *((_QWORD *)v57 + 28) = v57 + 240;
              *((_QWORD *)v57 + 32) = v57 + 272;
              *((_QWORD *)v57 + 36) = v57 + 304;
              *((_QWORD *)v57 + 40) = v57 + 336;
              *((_QWORD *)v57 + 44) = v57 + 368;
              *((_QWORD *)v57 + 48) = v57 + 400;
              *((_QWORD *)v57 + 52) = v57 + 432;
              *((_QWORD *)v57 + 13) = 0;
              v57[112] = 0;
              *((_QWORD *)v57 + 17) = 0;
              v57[144] = 0;
              *((_QWORD *)v57 + 21) = 0;
              v57[176] = 0;
              *((_QWORD *)v57 + 25) = 0;
              v57[208] = 0;
              *((_QWORD *)v57 + 29) = 0;
              v57[240] = 0;
              *((_QWORD *)v57 + 33) = 0;
              v57[272] = 0;
              *((_QWORD *)v57 + 37) = 0;
              v57[304] = 0;
              *((_QWORD *)v57 + 41) = 0;
              v57[336] = 0;
              *((_QWORD *)v57 + 45) = 0;
              v57[368] = 0;
              *((_QWORD *)v57 + 49) = 0;
              v57[400] = 0;
              *((_QWORD *)v57 + 53) = 0x800000000LL;
              v56 = v116;
              *((_QWORD *)v57 + 66) = v57 + 544;
              v55 = v122;
              *((_QWORD *)v57 + 67) = 0x600000000LL;
            }
            v135 = v57;
          }
          v57[*v57 + 1] = 0;
          v129 = v131;
          if ( !&v55[v56] || v55 )
          {
            if ( (unsigned __int64)v56 <= 0xF )
            {
              if ( v56 == 1 )
              {
                LOBYTE(v131[0]) = *v55;
                v58 = v131;
                goto LABEL_72;
              }
              v58 = v131;
              if ( !v56 )
              {
LABEL_72:
                v130 = v56;
                *((_BYTE *)v58 + v56) = 0;
                v59 = v135;
                v60 = *(unsigned __int8 *)v135;
                *(_BYTE *)v135 = v60 + 1;
                v61 = 4 * (v60 + 3);
                v62 = (void **)&v59[v61];
                v63 = (_BYTE *)v59[v61];
                if ( v129 == v131 )
                {
                  v80 = v130;
                  if ( v130 )
                  {
                    if ( v130 == 1 )
                    {
                      *v63 = v131[0];
                      v80 = v130;
                      v63 = *v62;
                    }
                    else
                    {
                      v114 = v62;
                      memcpy(v63, v129, v130);
                      v62 = v114;
                      v80 = v130;
                      v63 = *v114;
                    }
                  }
                  v62[1] = (void *)v80;
                  v63[v80] = 0;
                  v63 = v129;
                }
                else
                {
                  if ( v63 == (_BYTE *)&v59[v61 + 2] )
                  {
                    *v62 = v129;
                    v62[1] = (void *)v130;
                    v62[2] = (void *)v131[0];
                  }
                  else
                  {
                    v64 = v59[4 * (int)v60 + 14];
                    *v62 = v129;
                    v62[1] = (void *)v130;
                    v62[2] = (void *)v131[0];
                    if ( v63 )
                    {
                      v129 = v63;
                      v131[0] = v64;
                      goto LABEL_76;
                    }
                  }
                  v63 = v131;
                  v129 = v131;
                }
LABEL_76:
                v130 = 0;
                *v63 = 0;
                if ( v129 != v131 )
                  operator delete(v129);
                if ( v126 != v128 )
                  operator delete(v126);
                if ( (_BYTE)v140 )
                {
                  sub_FC7790(v137, (__int64 *)&v135, SHIBYTE(v140));
                  v137 = 0;
                  v140 = 0;
                }
                if ( v138 != &v139 )
                  operator delete(v138);
                v65 = (void **)v135;
                if ( v135 )
                {
                  v66 = v136;
                  if ( v136 )
                  {
                    if ( (unsigned __int64)v135 < v136 || (unsigned __int64)v135 > v136 + 14848 )
                    {
                      v67 = *((void ***)v135 + 66);
                      v68 = &v67[8 * (unsigned __int64)*((unsigned int *)v135 + 134)];
                      if ( v67 != v68 )
                      {
                        v69 = *((void ***)v135 + 66);
                        do
                        {
                          while ( 1 )
                          {
                            v68 -= 8;
                            v70 = (void **)v68[3];
                            if ( v70 == v68 + 5 )
                              break;
                            operator delete(v70);
                            if ( v69 == v68 )
                              goto LABEL_91;
                          }
                        }
                        while ( v69 != v68 );
LABEL_91:
                        v11 = &v135;
                        v68 = (void **)v65[66];
                      }
                      if ( v68 != v65 + 68 )
                        free(v68);
                      v71 = (void **)v65[52];
                      v72 = v65 + 52;
                      if ( v71 != v65 + 54 )
                        free(v71);
                      v111 = v65 + 12;
                      do
                      {
                        while ( 1 )
                        {
                          v72 -= 4;
                          if ( *v72 == v72 + 2 )
                            break;
                          operator delete(*v72);
                          if ( v72 == v111 )
                            goto LABEL_99;
                        }
                      }
                      while ( v72 != v111 );
LABEL_99:
                      operator delete(v65, 0x3A0u);
                    }
                    else
                    {
                      v82 = *(unsigned int *)(v136 + 14976);
                      *(_DWORD *)(v136 + 14976) = v82 + 1;
                      *(_QWORD *)(v66 + 8 * v82 + 14848) = v65;
                    }
                  }
                }
                goto LABEL_5;
              }
LABEL_128:
              v113 = v56;
              memcpy(v58, v55, v56);
              v58 = v129;
              v56 = v113;
              goto LABEL_72;
            }
            if ( v56 >= 0 )
            {
              v112 = v56;
              v58 = (_QWORD *)operator new(v56 + 1);
              v56 = v112;
              v129 = v58;
              v131[0] = v112;
              goto LABEL_128;
            }
LABEL_173:
            std::__throw_length_error("basic_string::_M_create");
          }
LABEL_166:
          std::__throw_logic_error("basic_string::_M_construct null not valid");
        }
      }
      v119 = (void *)v47;
      memcpy(v48, v46, v47);
      v48 = v132;
      v47 = (signed __int64)v119;
      goto LABEL_60;
    }
  }
LABEL_5:
  v17 = (unsigned int)v142;
  v18 = (unsigned int)v142;
  v19 = (unsigned int)v142 + 1LL;
  if ( v123 )
  {
    if ( v19 > HIDWORD(v142) )
    {
      sub_2237220(&ptr, v143, v19, 8);
      v17 = (unsigned int)v142;
    }
    *((_QWORD *)ptr + v17) = "-a32";
    v20 = (unsigned int)(v142 + 1);
    LODWORD(v142) = v142 + 1;
  }
  else
  {
    if ( v19 > HIDWORD(v142) )
    {
      sub_2237220(&ptr, v143, v19, 8);
      v18 = (unsigned int)v142;
    }
    *((_QWORD *)ptr + v18) = "-a64";
    v20 = (unsigned int)(v142 + 1);
    LODWORD(v142) = v142 + 1;
  }
  if ( v20 + 1 > (unsigned __int64)HIDWORD(v142) )
  {
    sub_2237220(&ptr, v143, v20 + 1, 8);
    v20 = (unsigned int)v142;
  }
  *((_QWORD *)ptr + v20) = "-many";
  LODWORD(v142) = v142 + 1;
  sub_21B6F20(a6, &ptr, 3403, 3487, 0);
  if ( *(_DWORD *)(a4 + 8) != 1 )
  {
    v21 = *(__int64 **)a5;
    if ( *(_DWORD *)(*(_QWORD *)a5 + 8LL) != 1 )
      goto LABEL_13;
    goto LABEL_112;
  }
  v73 = (unsigned int)v142;
  v74 = (unsigned int)v142 + 1LL;
  if ( v74 > HIDWORD(v142) )
  {
    sub_2237220(&ptr, v143, v74, 8);
    v73 = (unsigned int)v142;
  }
  *((_QWORD *)ptr + v73) = "-o";
  v75 = *(_QWORD *)a4;
  LODWORD(v142) = v142 + 1;
  v76 = (unsigned int)v142;
  if ( (unsigned __int64)(unsigned int)v142 + 1 > HIDWORD(v142) )
  {
    sub_2237220(&ptr, v143, (unsigned int)v142 + 1LL, 8);
    v76 = (unsigned int)v142;
  }
  *((_QWORD *)ptr + v76) = v75;
  LODWORD(v142) = v142 + 1;
  v21 = *(__int64 **)a5;
  if ( *(_DWORD *)(*(_QWORD *)a5 + 8LL) == 1 )
  {
LABEL_112:
    v77 = *v21;
    v78 = (unsigned int)v142;
    v79 = (unsigned int)v142 + 1LL;
    if ( v79 > HIDWORD(v142) )
    {
      sub_2237220(&ptr, v143, v79, 8);
      v78 = (unsigned int)v142;
    }
    *((_QWORD *)ptr + v78) = v77;
    LODWORD(v142) = v142 + 1;
  }
LABEL_13:
  sub_112D530(&v135, *(_QWORD *)(a1 + 24), "as");
  v22 = (*(__int64 (__fastcall **)(__int64, void *, unsigned __int64))(*(_QWORD *)a6 + 16LL))(a6, v135, v136);
  if ( v135 != &v137 )
    operator delete(v135);
  v23 = a5[2];
  v107 = *(const __m128i **)a5;
  v108 = v23;
  v24 = (void *)operator new(0x208u);
  sub_1106AE0((__int64)v24, a3, a1, 2, 0, v22, (__int64)&ptr, v107, v108, a4, 1, 0);
  v25 = v9[40];
  v26 = v9[41];
  v135 = v24;
  v27 = v25 + 1;
  v28 = v25;
  if ( v25 + 1 > v26 )
  {
    v83 = *((_QWORD *)v9 + 19);
    v84 = (__int64)(v9 + 38);
    if ( v83 > (unsigned __int64)&v135 || (unsigned __int64)&v135 >= v83 + 8 * v25 )
    {
      sub_11673D0(v84, v27, a7, a8);
      v25 = v9[40];
      v29 = *((_QWORD *)v9 + 19);
      v28 = v9[40];
    }
    else
    {
      sub_11673D0(v84, v27, a7, a8);
      v29 = *((_QWORD *)v9 + 19);
      v25 = v9[40];
      v11 = (void **)((char *)&v135 + v29 - v83);
      v28 = v9[40];
    }
  }
  else
  {
    v29 = *((_QWORD *)v9 + 19);
  }
  v30 = *v11;
  *v11 = nullptr;
  *(_QWORD *)(v29 + 8 * v25) = v30;
  v31 = v135;
  v9[40] = v28 + 1;
  if ( v31 )
  {
    v32 = *(void (__fastcall **)(_QWORD *))(*v31 + 8LL);
    if ( v32 == sub_10D4290 )
    {
      v33 = v31[58];
      v34 = v31[57];
      *v31 = &off_2BA8F30;
      if ( v33 != v34 )
      {
        do
        {
          if ( *(_BYTE *)(v34 + 32) && *(_QWORD *)v34 != v34 + 16 )
            operator delete(*(void **)v34);
          v34 += 40;
        }
        while ( v33 != v34 );
        v34 = v31[57];
      }
      if ( v34 )
        operator delete((void *)v34);
      v35 = (void *)v31[54];
      if ( v35 )
        operator delete(v35);
      v36 = (_QWORD *)v31[50];
      if ( v36 != v31 + 52 )
        operator delete(v36);
      v37 = (_QWORD *)v31[32];
      if ( v37 != v31 + 34 )
        free(v37);
      v38 = (void **)v31[29];
      v39 = (void **)v31[28];
      if ( v38 != v39 )
      {
        do
        {
          while ( *v39 != v39 + 2 )
          {
            operator delete(*v39);
            v39 += 4;
            if ( v39 == v38 )
              goto LABEL_36;
          }
          v39 += 4;
        }
        while ( v38 != v39 );
LABEL_36:
        v39 = (void **)v31[28];
      }
      if ( v39 )
        operator delete(v39);
      v40 = (void *)v31[25];
      if ( v40 )
        operator delete(v40);
      v41 = (_QWORD *)v31[7];
      if ( v41 != v31 + 9 )
        free(v41);
      operator delete(v31, 0x208u);
    }
    else
    {
      v32(v31);
    }
  }
  if ( ptr != v143 )
    free(ptr);
}
