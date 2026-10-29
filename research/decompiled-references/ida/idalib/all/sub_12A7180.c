__int64 __fastcall sub_12A7180(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // r13
  _QWORD *v9; // r15
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  void ***v13; // rdx
  void ***v14; // r13
  void **v15; // r15
  void **v16; // rdi
  char v17; // al
  char v18; // al
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // r13
  _QWORD *v23; // r15
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // r13
  _QWORD *v28; // r15
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  _QWORD *v32; // r13
  _QWORD *v33; // r15
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  _QWORD *v37; // r12
  _QWORD *v38; // r13
  __int64 result; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  __int64 v42; // rdx
  void ***v43; // r13
  void ***v44; // r15
  void **v45; // r8
  __int64 *v46; // rax
  _BYTE *v47; // rsi
  __int64 v48; // rcx
  unsigned __int8 *v49; // r15
  _QWORD *v50; // rax
  _QWORD *v51; // rdx
  __int64 v52; // r8
  __int64 v53; // rax
  void **v54; // rcx
  _BYTE *v55; // rdi
  __int64 v56; // rax
  unsigned __int8 *v57; // r15
  _BYTE *v58; // rsi
  signed __int64 v59; // rcx
  _QWORD *v60; // rax
  _QWORD *v61; // rdx
  __int64 v62; // r8
  __int64 v63; // rax
  void **v64; // rcx
  _BYTE *v65; // rdi
  __int64 v66; // rax
  void **v67; // r15
  _QWORD *v68; // rax
  void **v69; // rdx
  void **v70; // r13
  void **v71; // rdi
  void **v72; // rdi
  void **v73; // r13
  void **v74; // rsi
  void ***v75; // r15
  void **v76; // rax
  __int64 v77; // rax
  unsigned __int64 v78; // rcx
  __int64 v79; // rax
  unsigned __int64 v80; // rax
  __int64 v81; // rdx
  void ***v82; // r13
  void ***v83; // r15
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  unsigned __int64 v87; // rax
  __int64 v88; // rdx
  void ***v89; // r13
  void ***v90; // r15
  __int64 v91; // rax
  void **v92; // rax
  void **v93; // rdi
  char v94; // al
  void **v95; // rcx
  void **v96; // rax
  void **v97; // rdi
  char v98; // al
  void **v99; // rcx
  void **v100; // rax
  void **v101; // rdi
  char v102; // al
  size_t v103; // rdx
  size_t v104; // rdx
  __int64 v105; // rdx
  _QWORD *v106; // rdx
  int v107; // eax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // r8
  __int64 v111; // rax
  void *v112; // rdi
  _QWORD *v113; // rdx
  int v114; // eax
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // r8
  __int64 v118; // rax
  void *v119; // rdi
  void **v120; // [rsp+0h] [rbp-108h] BYREF
  void *src; // [rsp+8h] [rbp-100h]
  __int64 v122; // [rsp+10h] [rbp-F8h]
  __int64 v123; // [rsp+18h] [rbp-F0h]
  void *v124; // [rsp+20h] [rbp-E8h] BYREF
  size_t n; // [rsp+28h] [rbp-E0h]
  __int64 v126; // [rsp+30h] [rbp-D8h] BYREF
  void *v127; // [rsp+40h] [rbp-C8h]
  size_t v128; // [rsp+48h] [rbp-C0h]
  _QWORD v129[2]; // [rsp+50h] [rbp-B8h] BYREF
  void *v130; // [rsp+60h] [rbp-A8h]
  size_t v131; // [rsp+68h] [rbp-A0h]
  _QWORD v132[2]; // [rsp+70h] [rbp-98h] BYREF
  void *v133[2]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v134; // [rsp+90h] [rbp-78h]
  void *v135; // [rsp+A0h] [rbp-68h]
  __int64 v136; // [rsp+B0h] [rbp-58h] BYREF
  __int16 v137; // [rsp+C0h] [rbp-48h]

  LODWORD(v133[0]) = 1915;
  v6 = sub_21B6DA0(a2, v133, 1);
  v7 = *(_QWORD *)(a2 + 8);
  v8 = (_QWORD *)(v7 + 8LL * (unsigned int)v6);
  v9 = (_QWORD *)(v7 + 8 * HIDWORD(v6));
  if ( v8 != v9 )
  {
    while ( !*v8 || !(unsigned __int8)sub_21B9810(*v8, 1915) )
    {
      if ( v9 == ++v8 )
        goto LABEL_5;
    }
    if ( v9 != v8 )
    {
      do
      {
        v40 = *v8;
        if ( *(_QWORD *)(*v8 + 16LL) )
          v40 = *(_QWORD *)(*v8 + 16LL);
        ++v8;
        *(_BYTE *)(v40 + 44) |= 1u;
        if ( v8 == v9 )
          break;
        while ( !*v8 || !(unsigned __int8)sub_21B9810(*v8, 1915) )
        {
          if ( v9 == ++v8 )
            goto LABEL_54;
        }
      }
      while ( v9 != v8 );
LABEL_54:
      LODWORD(v133[0]) = 1915;
      v41 = sub_21B6DA0(a2, v133, 1);
      v42 = *(_QWORD *)(a2 + 8);
      v43 = (void ***)(v42 + 8LL * (unsigned int)v41);
      v44 = (void ***)(v42 + 8 * HIDWORD(v41));
      if ( v43 == v44 )
        goto LABEL_58;
      while ( !*v43 || !(unsigned __int8)sub_21B9810(*v43, 1915) )
      {
        if ( v44 == ++v43 )
          goto LABEL_58;
      }
      if ( v44 == v43 )
      {
LABEL_58:
        v45 = nullptr;
      }
      else
      {
        do
        {
          v45 = *v43;
          v92 = (void **)(*v43)[2];
          if ( !v92 )
            v92 = *v43;
          ++v43;
          *((_BYTE *)v92 + 44) |= 1u;
          if ( v43 == v44 )
            break;
          while ( 1 )
          {
            v93 = *v43;
            if ( *v43 )
            {
              v120 = v45;
              v94 = sub_21B9810(v93, 1915);
              v45 = v120;
              if ( v94 )
                break;
            }
            if ( v44 == ++v43 )
              goto LABEL_59;
          }
        }
        while ( v44 != v43 );
      }
LABEL_59:
      v46 = *(__int64 **)(a1 + 8);
      v120 = v45;
      sub_FC70B0((__int64)v133, *v46, 0, 495);
      sub_21B5FF0(&v124, v120, a2);
      v47 = v124;
      v48 = n;
      v49 = (unsigned __int8 *)v133[0];
      if ( !v133[0] )
      {
        v113 = v133[1];
        v114 = *((_DWORD *)v133[1] + 3744);
        if ( v114 )
        {
          v115 = (unsigned int)(v114 - 1);
          *((_DWORD *)v133[1] + 3744) = v115;
          v49 = (unsigned __int8 *)v113[v115 + 1856];
          v116 = *((unsigned int *)v49 + 134);
          *v49 = 0;
          v117 = *((_QWORD *)v49 + 66);
          *((_DWORD *)v49 + 106) = 0;
          v118 = v117 + (v116 << 6);
          while ( v117 != v118 )
          {
            while ( 1 )
            {
              v118 -= 64;
              v119 = *(void **)(v118 + 24);
              if ( v119 == (void *)(v118 + 40) )
                break;
              v123 = v118;
              v122 = v117;
              src = v47;
              v120 = (void **)v48;
              operator delete(v119);
              v117 = v122;
              v118 = v123;
              v48 = (__int64)v120;
              if ( v122 == v123 )
                goto LABEL_255;
            }
          }
LABEL_255:
          *((_DWORD *)v49 + 134) = 0;
        }
        else
        {
          src = v124;
          v120 = (void **)n;
          v49 = (unsigned __int8 *)operator new(0x3A0u);
          *v49 = 0;
          *((_QWORD *)v49 + 12) = v49 + 112;
          *((_QWORD *)v49 + 16) = v49 + 144;
          *((_QWORD *)v49 + 20) = v49 + 176;
          *((_QWORD *)v49 + 24) = v49 + 208;
          *((_QWORD *)v49 + 28) = v49 + 240;
          *((_QWORD *)v49 + 32) = v49 + 272;
          *((_QWORD *)v49 + 36) = v49 + 304;
          *((_QWORD *)v49 + 40) = v49 + 336;
          *((_QWORD *)v49 + 44) = v49 + 368;
          *((_QWORD *)v49 + 48) = v49 + 400;
          *((_QWORD *)v49 + 52) = v49 + 432;
          *((_QWORD *)v49 + 13) = 0;
          v49[112] = 0;
          *((_QWORD *)v49 + 17) = 0;
          v49[144] = 0;
          *((_QWORD *)v49 + 21) = 0;
          v49[176] = 0;
          *((_QWORD *)v49 + 25) = 0;
          v49[208] = 0;
          *((_QWORD *)v49 + 29) = 0;
          v49[240] = 0;
          *((_QWORD *)v49 + 33) = 0;
          v49[272] = 0;
          *((_QWORD *)v49 + 37) = 0;
          v49[304] = 0;
          *((_QWORD *)v49 + 41) = 0;
          v49[336] = 0;
          *((_QWORD *)v49 + 45) = 0;
          v49[368] = 0;
          *((_QWORD *)v49 + 49) = 0;
          v49[400] = 0;
          *((_QWORD *)v49 + 53) = 0x800000000LL;
          v48 = (__int64)v120;
          *((_QWORD *)v49 + 66) = v49 + 544;
          v47 = src;
          *((_QWORD *)v49 + 67) = 0x600000000LL;
        }
        v133[0] = v49;
      }
      v49[*v49 + 1] = 0;
      v130 = v132;
      if ( &v47[v48] && !v47 )
        goto LABEL_267;
      if ( (unsigned __int64)v48 > 0xF )
      {
        if ( v48 < 0 )
          goto LABEL_268;
        src = v47;
        v120 = (void **)v48;
        v50 = (_QWORD *)operator new(v48 + 1);
        v48 = (__int64)v120;
        v130 = v50;
        v132[0] = v120;
      }
      else
      {
        if ( v48 == 1 )
        {
          LOBYTE(v132[0]) = *v47;
          v50 = v132;
          goto LABEL_65;
        }
        v50 = v132;
        if ( !v48 )
        {
LABEL_65:
          v131 = v48;
          *((_BYTE *)v50 + v48) = 0;
          v51 = v133[0];
          v52 = *(unsigned __int8 *)v133[0];
          *(_BYTE *)v133[0] = v52 + 1;
          v53 = 4 * (v52 + 3);
          v54 = (void **)&v51[v53];
          v55 = (_BYTE *)v51[v53];
          if ( v130 == v132 )
          {
            v103 = v131;
            if ( v131 )
            {
              if ( v131 == 1 )
              {
                *v55 = v132[0];
                v103 = v131;
                v55 = *v54;
              }
              else
              {
                v120 = v54;
                memcpy(v55, v130, v131);
                v54 = v120;
                v103 = v131;
                v55 = *v120;
              }
            }
            v54[1] = (void *)v103;
            v55[v103] = 0;
            v55 = v130;
          }
          else
          {
            if ( v55 == (_BYTE *)&v51[v53 + 2] )
            {
              *v54 = v130;
              v54[1] = (void *)v131;
              v54[2] = (void *)v132[0];
            }
            else
            {
              v56 = v51[4 * (int)v52 + 14];
              *v54 = v130;
              v54[1] = (void *)v131;
              v54[2] = (void *)v132[0];
              if ( v55 )
              {
                v130 = v55;
                v132[0] = v56;
                goto LABEL_69;
              }
            }
            v55 = v132;
            v130 = v132;
          }
LABEL_69:
          v131 = 0;
          *v55 = 0;
          if ( v130 != v132 )
            operator delete(v130);
          v57 = (unsigned __int8 *)v133[0];
          v58 = *(_BYTE **)(a1 + 16);
          v59 = *(_QWORD *)(a1 + 24);
          if ( !v133[0] )
          {
            v106 = v133[1];
            v107 = *((_DWORD *)v133[1] + 3744);
            if ( v107 )
            {
              v108 = (unsigned int)(v107 - 1);
              *((_DWORD *)v133[1] + 3744) = v108;
              v57 = (unsigned __int8 *)v106[v108 + 1856];
              v109 = *((unsigned int *)v57 + 134);
              *v57 = 0;
              v110 = *((_QWORD *)v57 + 66);
              *((_DWORD *)v57 + 106) = 0;
              v111 = v110 + (v109 << 6);
              while ( v110 != v111 )
              {
                while ( 1 )
                {
                  v111 -= 64;
                  v112 = *(void **)(v111 + 24);
                  if ( v112 == (void *)(v111 + 40) )
                    break;
                  v123 = v111;
                  v122 = v110;
                  src = v58;
                  v120 = (void **)v59;
                  operator delete(v112);
                  v110 = v122;
                  v111 = v123;
                  v59 = (signed __int64)v120;
                  if ( v122 == v123 )
                    goto LABEL_249;
                }
              }
LABEL_249:
              *((_DWORD *)v57 + 134) = 0;
            }
            else
            {
              src = *(void **)(a1 + 16);
              v120 = (void **)v59;
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
              v59 = (signed __int64)v120;
              *((_QWORD *)v57 + 66) = v57 + 544;
              v58 = src;
              *((_QWORD *)v57 + 67) = 0x600000000LL;
            }
            v133[0] = v57;
          }
          v57[*v57 + 1] = 0;
          v127 = v129;
          if ( !&v58[v59] || v58 )
          {
            if ( (unsigned __int64)v59 <= 0xF )
            {
              if ( v59 == 1 )
              {
                LOBYTE(v129[0]) = *v58;
                v60 = v129;
                goto LABEL_77;
              }
              v60 = v129;
              if ( !v59 )
              {
LABEL_77:
                v128 = v59;
                *((_BYTE *)v60 + v59) = 0;
                v61 = v133[0];
                v62 = *(unsigned __int8 *)v133[0];
                *(_BYTE *)v133[0] = v62 + 1;
                v63 = 4 * (v62 + 3);
                v64 = (void **)&v61[v63];
                v65 = (_BYTE *)v61[v63];
                if ( v127 == v129 )
                {
                  v104 = v128;
                  if ( v128 )
                  {
                    if ( v128 == 1 )
                    {
                      *v65 = v129[0];
                      v104 = v128;
                      v65 = *v64;
                    }
                    else
                    {
                      v120 = v64;
                      memcpy(v65, v127, v128);
                      v64 = v120;
                      v104 = v128;
                      v65 = *v120;
                    }
                  }
                  v64[1] = (void *)v104;
                  v65[v104] = 0;
                  v65 = v127;
                }
                else
                {
                  if ( v65 == (_BYTE *)&v61[v63 + 2] )
                  {
                    *v64 = v127;
                    v64[1] = (void *)v128;
                    v64[2] = (void *)v129[0];
                  }
                  else
                  {
                    v66 = v61[4 * (int)v62 + 14];
                    *v64 = v127;
                    v64[1] = (void *)v128;
                    v64[2] = (void *)v129[0];
                    if ( v65 )
                    {
                      v127 = v65;
                      v129[0] = v66;
                      goto LABEL_81;
                    }
                  }
                  v65 = v129;
                  v127 = v129;
                }
LABEL_81:
                v128 = 0;
                *v65 = 0;
                if ( v127 != v129 )
                  operator delete(v127);
                if ( v124 != &v126 )
                  operator delete(v124);
                if ( (_BYTE)v137 )
                {
                  sub_FC7790(v134, (__int64 *)v133, SHIBYTE(v137));
                  v134 = 0;
                  v137 = 0;
                }
                if ( v135 != &v136 )
                  operator delete(v135);
                v67 = (void **)v133[0];
                if ( v133[0] )
                {
                  v68 = v133[1];
                  if ( v133[1] )
                  {
                    if ( v133[0] < v133[1] || v133[0] > (char *)v133[1] + 14848 )
                    {
                      v69 = *((void ***)v133[0] + 66);
                      v70 = &v69[8 * (unsigned __int64)*((unsigned int *)v133[0] + 134)];
                      if ( v69 != v70 )
                      {
                        do
                        {
                          while ( 1 )
                          {
                            v70 -= 8;
                            v71 = (void **)v70[3];
                            if ( v71 == v70 + 5 )
                              break;
                            v120 = v69;
                            operator delete(v71);
                            v69 = v120;
                            if ( v120 == v70 )
                              goto LABEL_95;
                          }
                        }
                        while ( v69 != v70 );
LABEL_95:
                        v70 = (void **)v67[66];
                      }
                      if ( v70 != v67 + 68 )
                        free(v70);
                      v72 = (void **)v67[52];
                      if ( v72 != v67 + 54 )
                        free(v72);
                      v73 = v67 + 48;
                      v120 = v67 + 8;
                      do
                      {
                        while ( *v73 != v73 + 2 )
                        {
                          operator delete(*v73);
                          v73 -= 4;
                          if ( v73 == v120 )
                            goto LABEL_103;
                        }
                        v73 -= 4;
                      }
                      while ( v73 != v120 );
LABEL_103:
                      operator delete(v67, 0x3A0u);
                    }
                    else
                    {
                      v105 = *((unsigned int *)v133[1] + 3744);
                      *((_DWORD *)v133[1] + 3744) = v105 + 1;
                      v68[v105 + 1856] = v67;
                    }
                  }
                }
                goto LABEL_5;
              }
LABEL_226:
              v120 = (void **)v59;
              memcpy(v60, v58, v59);
              v60 = v127;
              v59 = (signed __int64)v120;
              goto LABEL_77;
            }
            src = v58;
            if ( v59 >= 0 )
            {
              v120 = (void **)v59;
              v60 = (_QWORD *)operator new(v59 + 1);
              v59 = (signed __int64)v120;
              v58 = src;
              v127 = v60;
              v129[0] = v120;
              goto LABEL_226;
            }
LABEL_268:
            std::__throw_length_error("basic_string::_M_create");
          }
LABEL_267:
          std::__throw_logic_error("basic_string::_M_construct null not valid");
        }
      }
      v120 = (void **)v48;
      memcpy(v50, v47, v48);
      v50 = v130;
      v48 = (__int64)v120;
      goto LABEL_65;
    }
  }
LABEL_5:
  v10 = *(unsigned int *)(a3 + 8);
  if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    sub_2237220(a3, a3 + 16, v10 + 1, 8);
    v10 = *(unsigned int *)(a3 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v10) = "-fno-use-init-array";
  ++*(_DWORD *)(a3 + 8);
  if ( *(_DWORD *)(a1 + 48) == 38 && *(_DWORD *)(a1 + 56) == 3 )
  {
    if ( *(_DWORD *)(a1 + 60) != 25 )
      goto LABEL_271;
    if ( !sub_10DE660(a2, 0x797u, 0x795u) )
      sub_10DC5D0(a3, (__int64)"-fvisibility=hidden");
    if ( *(_DWORD *)(a1 + 48) == 38 && *(_DWORD *)(a1 + 56) == 3 )
    {
LABEL_271:
      if ( *(_DWORD *)(a1 + 60) == 25 && !sub_10DE660(a2, 0x792u, 0x791u) )
        sub_10DC5D0(a3, (__int64)"-fvisibility-global-new-delete=source");
    }
  }
  v133[0] = (void *)0x5C300000790LL;
  v11 = sub_21B6DA0(a2, v133, 2);
  v12 = *(_QWORD *)(a2 + 8);
  v134 = 0x5C300000790LL;
  v13 = (void ***)(v12 + 8LL * (unsigned int)v11);
  v14 = (void ***)(v12 + 8 * HIDWORD(v11));
  v120 = (void **)v14;
  *(__m128 *)v133 = _mm_loadh_ps((const double *)&v120);
  if ( v13 != v14 )
  {
    while ( 1 )
    {
      v15 = *v13;
      if ( *v13 )
      {
        v16 = *v13;
        v120 = (void **)v13;
        v17 = sub_21B9810(v16, 1936);
        v13 = (void ***)v120;
        if ( v17 )
          break;
        v18 = sub_21B9810(v15, 1475);
        v13 = (void ***)v120;
        if ( v18 )
          break;
      }
      v133[0] = ++v13;
      if ( v14 == v13 )
        goto LABEL_13;
    }
    v120 = (void **)v14;
    v134 = 0x5C300000790LL;
    *(__m128 *)v133 = _mm_loadh_ps((const double *)&v120);
    if ( v14 != v13 )
    {
      do
      {
        v74 = *v13;
        v75 = v13 + 1;
        v76 = (void **)(*v13)[2];
        src = *v13;
        if ( !v76 )
          v76 = v74;
        *((_BYTE *)v76 + 44) |= 1u;
        v133[0] = v13 + 1;
        if ( v75 == v14 )
          break;
        while ( 1 )
        {
          if ( *v75 )
          {
            v120 = *v75;
            if ( (unsigned __int8)sub_21B9810(v120, 1936) || (unsigned __int8)sub_21B9810(v120, 1475) )
              break;
          }
          v133[0] = ++v75;
          if ( v14 == v75 )
            goto LABEL_114;
        }
        v13 = (void ***)v133[0];
      }
      while ( v14 != v133[0] );
LABEL_114:
      result = sub_21B9810(src, 1936);
      if ( !(_BYTE)result )
      {
        if ( *(_DWORD *)(a1 + 48) != 38 )
          return result;
        goto LABEL_116;
      }
    }
  }
LABEL_13:
  v19 = *(unsigned int *)(a3 + 8);
  if ( v19 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    sub_2237220(a3, a3 + 16, v19 + 1, 8);
    v19 = *(unsigned int *)(a3 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v19) = "-fvisibility-from-dllstorageclass";
  ++*(_DWORD *)(a3 + 8);
  LODWORD(v133[0]) = 1933;
  v20 = sub_21B6DA0(a2, v133, 1);
  v21 = *(_QWORD *)(a2 + 8);
  v22 = (_QWORD *)(v21 + 8LL * (unsigned int)v20);
  v23 = (_QWORD *)(v21 + 8 * HIDWORD(v20));
  if ( v22 == v23 )
    goto LABEL_19;
  while ( !*v22 || !(unsigned __int8)sub_21B9810(*v22, 1933) )
  {
    if ( v23 == ++v22 )
      goto LABEL_19;
  }
  if ( v23 == v22 )
  {
LABEL_19:
    v24 = *(unsigned int *)(a3 + 8);
    if ( v24 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, v24 + 1, 8);
      v24 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v24) = "-fvisibility-dllexport=protected";
    ++*(_DWORD *)(a3 + 8);
  }
  else
  {
    do
    {
      v79 = *v22;
      if ( *(_QWORD *)(*v22 + 16LL) )
        v79 = *(_QWORD *)(*v22 + 16LL);
      ++v22;
      *(_BYTE *)(v79 + 44) |= 1u;
      if ( v22 == v23 )
        break;
      while ( !*v22 || !(unsigned __int8)sub_21B9810(*v22, 1933) )
      {
        if ( v23 == ++v22 )
          goto LABEL_132;
      }
    }
    while ( v23 != v22 );
LABEL_132:
    LODWORD(v133[0]) = 1933;
    v80 = sub_21B6DA0(a2, v133, 1);
    v81 = *(_QWORD *)(a2 + 8);
    v82 = (void ***)(v81 + 8LL * (unsigned int)v80);
    v83 = (void ***)(v81 + 8 * HIDWORD(v80));
    if ( v82 != v83 )
    {
      while ( !*v82 || !(unsigned __int8)sub_21B9810(*v82, 1933) )
      {
        if ( v83 == ++v82 )
          goto LABEL_22;
      }
      if ( v83 != v82 )
      {
        do
        {
          v99 = *v82;
          v100 = (void **)(*v82)[2];
          if ( !v100 )
            v100 = *v82;
          ++v82;
          *((_BYTE *)v100 + 44) |= 1u;
          if ( v82 == v83 )
            break;
          while ( 1 )
          {
            v101 = *v82;
            if ( *v82 )
            {
              v120 = v99;
              v102 = sub_21B9810(v101, 1933);
              v99 = v120;
              if ( v102 )
                break;
            }
            if ( v83 == ++v82 )
              goto LABEL_202;
          }
        }
        while ( v82 != v83 );
LABEL_202:
        sub_21B5A40(v99, a2, a3);
      }
    }
  }
LABEL_22:
  LODWORD(v133[0]) = 1942;
  v25 = sub_21B6DA0(a2, v133, 1);
  v26 = *(_QWORD *)(a2 + 8);
  v27 = (_QWORD *)(v26 + 8LL * (unsigned int)v25);
  v28 = (_QWORD *)(v26 + 8 * HIDWORD(v25));
  if ( v27 == v28 )
    goto LABEL_26;
  while ( !*v27 || !(unsigned __int8)sub_21B9810(*v27, 1942) )
  {
    if ( v28 == ++v27 )
      goto LABEL_26;
  }
  if ( v27 == v28 )
  {
LABEL_26:
    if ( *(_DWORD *)(a1 + 48) == 38 && *(_DWORD *)(a1 + 56) == 3 && *(_DWORD *)(a1 + 60) == 24 )
    {
      sub_10DC5D0(a3, (__int64)"-fvisibility-nodllstorageclass=hidden");
    }
    else
    {
      v29 = *(unsigned int *)(a3 + 8);
      if ( v29 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        sub_2237220(a3, a3 + 16, v29 + 1, 8);
        v29 = *(unsigned int *)(a3 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a3 + 8 * v29) = "-fvisibility-nodllstorageclass=keep";
      ++*(_DWORD *)(a3 + 8);
    }
  }
  else
  {
    do
    {
      v84 = *v27;
      if ( *(_QWORD *)(*v27 + 16LL) )
        v84 = *(_QWORD *)(*v27 + 16LL);
      ++v27;
      *(_BYTE *)(v84 + 44) |= 1u;
      if ( v27 == v28 )
        break;
      while ( !*v27 || !(unsigned __int8)sub_21B9810(*v27, 1942) )
      {
        if ( v28 == ++v27 )
          goto LABEL_146;
      }
    }
    while ( v28 != v27 );
LABEL_146:
    v85 = sub_10DCD30(a2, 0x796u);
    if ( v85 )
      sub_21B5A40(v85, a2, a3);
  }
  LODWORD(v133[0]) = 1934;
  v30 = sub_21B6DA0(a2, v133, 1);
  v31 = *(_QWORD *)(a2 + 8);
  v32 = (_QWORD *)(v31 + 8LL * (unsigned int)v30);
  v33 = (_QWORD *)(v31 + 8 * HIDWORD(v30));
  if ( v32 == v33 )
    goto LABEL_34;
  while ( !*v32 || !(unsigned __int8)sub_21B9810(*v32, 1934) )
  {
    if ( v33 == ++v32 )
      goto LABEL_34;
  }
  if ( v33 == v32 )
  {
LABEL_34:
    v34 = *(unsigned int *)(a3 + 8);
    if ( v34 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, v34 + 1, 8);
      v34 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v34) = "-fvisibility-externs-dllimport=default";
    ++*(_DWORD *)(a3 + 8);
  }
  else
  {
    do
    {
      v86 = *v32;
      if ( *(_QWORD *)(*v32 + 16LL) )
        v86 = *(_QWORD *)(*v32 + 16LL);
      ++v32;
      *(_BYTE *)(v86 + 44) |= 1u;
      if ( v32 == v33 )
        break;
      while ( !*v32 || !(unsigned __int8)sub_21B9810(*v32, 1934) )
      {
        if ( v33 == ++v32 )
          goto LABEL_157;
      }
    }
    while ( v33 != v32 );
LABEL_157:
    LODWORD(v133[0]) = 1934;
    v87 = sub_21B6DA0(a2, v133, 1);
    v88 = *(_QWORD *)(a2 + 8);
    v89 = (void ***)(v88 + 8LL * (unsigned int)v87);
    v90 = (void ***)(v88 + 8 * HIDWORD(v87));
    if ( v89 != v90 )
    {
      while ( !*v89 || !(unsigned __int8)sub_21B9810(*v89, 1934) )
      {
        if ( v90 == ++v89 )
          goto LABEL_37;
      }
      if ( v90 != v89 )
      {
        do
        {
          v95 = *v89;
          v96 = (void **)(*v89)[2];
          if ( !v96 )
            v96 = *v89;
          ++v89;
          *((_BYTE *)v96 + 44) |= 1u;
          if ( v89 == v90 )
            break;
          while ( 1 )
          {
            v97 = *v89;
            if ( *v89 )
            {
              v120 = v95;
              v98 = sub_21B9810(v97, 1934);
              v95 = v120;
              if ( v98 )
                break;
            }
            if ( v90 == ++v89 )
              goto LABEL_192;
          }
        }
        while ( v89 != v90 );
LABEL_192:
        sub_21B5A40(v95, a2, a3);
      }
    }
  }
LABEL_37:
  LODWORD(v133[0]) = 1935;
  v35 = sub_21B6DA0(a2, v133, 1);
  v36 = *(_QWORD *)(a2 + 8);
  v37 = (_QWORD *)(v36 + 8LL * (unsigned int)v35);
  v38 = (_QWORD *)(v36 + 8 * HIDWORD(v35));
  if ( v37 == v38 )
    goto LABEL_41;
  while ( !*v37 || !(unsigned __int8)sub_21B9810(*v37, 1935) )
  {
    if ( v38 == ++v37 )
      goto LABEL_41;
  }
  if ( v37 == v38 )
  {
LABEL_41:
    if ( *(_DWORD *)(a1 + 48) == 38 && *(_DWORD *)(a1 + 56) == 3 && *(_DWORD *)(a1 + 60) == 24 )
    {
      result = sub_10DC5D0(a3, (__int64)"-fvisibility-externs-nodllstorageclass=default");
    }
    else
    {
      result = *(unsigned int *)(a3 + 8);
      if ( result + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        sub_2237220(a3, a3 + 16, result + 1, 8);
        result = *(unsigned int *)(a3 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a3 + 8 * result) = "-fvisibility-externs-nodllstorageclass=keep";
      ++*(_DWORD *)(a3 + 8);
    }
  }
  else
  {
    do
    {
      v91 = *v37;
      if ( *(_QWORD *)(*v37 + 16LL) )
        v91 = *(_QWORD *)(*v37 + 16LL);
      ++v37;
      *(_BYTE *)(v91 + 44) |= 1u;
      if ( v37 == v38 )
        break;
      while ( !*v37 || !(unsigned __int8)sub_21B9810(*v37, 1935) )
      {
        if ( v38 == ++v37 )
          goto LABEL_171;
      }
    }
    while ( v38 != v37 );
LABEL_171:
    result = sub_10DCD30(a2, 0x78Fu);
    if ( result )
      result = sub_21B5A40(result, a2, a3);
  }
  if ( *(_DWORD *)(a1 + 48) == 38 )
  {
LABEL_116:
    if ( *(_DWORD *)(a1 + 56) == 3 && *(_DWORD *)(a1 + 60) == 25 )
    {
      v77 = *(unsigned int *)(a3 + 8);
      if ( v77 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        sub_2237220(a3, a3 + 16, v77 + 1, 8);
        v77 = *(unsigned int *)(a3 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a3 + 8 * v77) = "-mllvm";
      v78 = *(unsigned int *)(a3 + 12);
      result = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
      *(_DWORD *)(a3 + 8) = result;
      if ( result + 1 > v78 )
      {
        sub_2237220(a3, a3 + 16, result + 1, 8);
        result = *(unsigned int *)(a3 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a3 + 8 * result) = "-emit-jump-table-sizes-section";
      ++*(_DWORD *)(a3 + 8);
    }
  }
  return result;
}
