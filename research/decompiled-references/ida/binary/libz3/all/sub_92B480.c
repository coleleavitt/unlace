__int64 __fastcall sub_92B480(_QWORD *a1, __int64 *a2)
{
  __int64 *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r12
  __int64 v7; // rax
  char *v8; // rdx
  __int64 v9; // rax
  int v10; // ecx
  char *v11; // rdx
  __int64 v12; // rax
  char *v13; // rdx
  char *v14; // r8
  size_t v15; // rcx
  _BYTE *v16; // rdi
  size_t v17; // r15
  size_t v18; // rax
  size_t v19; // rcx
  _BYTE *v20; // r8
  void *v21; // r15
  int v22; // eax
  char *v23; // r8
  size_t v24; // rcx
  _BYTE *v25; // rdi
  size_t v26; // rdx
  size_t v27; // rcx
  _BYTE *v28; // r8
  size_t v29; // rdx
  __int64 result; // rax
  __int64 *v31; // rbx
  __int64 *i; // r12
  __int64 v33; // rdx
  size_t v34; // r15
  unsigned __int64 v35; // rdi
  char *v36; // rax
  size_t v37; // rdx
  _QWORD *v38; // r11
  size_t v39; // r9
  char *v40; // r10
  char *v41; // rax
  char *v42; // rdi
  unsigned __int64 v43; // rdi
  char *v44; // rax
  size_t v45; // rdx
  _QWORD *v46; // r11
  size_t v47; // r9
  char *v48; // r10
  char *v49; // rax
  char *v50; // rdi
  size_t v51; // r15
  unsigned __int64 v52; // rdi
  _BYTE *v53; // rax
  _QWORD *v54; // r9
  __int64 v55; // rax
  _BYTE *v56; // rax
  int v57; // edi
  _DWORD *v58; // rsi
  _DWORD *v59; // rax
  __int64 v60; // rcx
  unsigned __int64 v61; // rdi
  char *v62; // rax
  void *v63; // rcx
  char *v64; // r8
  __int64 v65; // rax
  __int64 v66; // rcx
  void *v67; // rsi
  __int64 v68; // rax
  char *v69; // rax
  unsigned __int64 v70; // rdi
  char *v71; // rax
  void *v72; // rcx
  __int64 v73; // rax
  void *v74; // rsi
  char *v75; // rax
  __int64 v76; // [rsp+0h] [rbp-F8h]
  __int64 *v77; // [rsp+8h] [rbp-F0h]
  size_t v78; // [rsp+10h] [rbp-E8h]
  size_t v79; // [rsp+10h] [rbp-E8h]
  _QWORD *v80; // [rsp+10h] [rbp-E8h]
  size_t v81; // [rsp+10h] [rbp-E8h]
  size_t v82; // [rsp+10h] [rbp-E8h]
  __int64 v83; // [rsp+20h] [rbp-D8h]
  size_t v84; // [rsp+28h] [rbp-D0h]
  void *v85; // [rsp+28h] [rbp-D0h]
  char *v86; // [rsp+28h] [rbp-D0h]
  size_t v87; // [rsp+28h] [rbp-D0h]
  size_t v88; // [rsp+28h] [rbp-D0h]
  size_t v89; // [rsp+28h] [rbp-D0h]
  size_t v90; // [rsp+28h] [rbp-D0h]
  size_t v91; // [rsp+28h] [rbp-D0h]
  size_t v92; // [rsp+28h] [rbp-D0h]
  size_t v93; // [rsp+28h] [rbp-D0h]
  size_t v94; // [rsp+28h] [rbp-D0h]
  __int64 *v95; // [rsp+30h] [rbp-C8h]
  size_t v96; // [rsp+38h] [rbp-C0h]
  size_t v97; // [rsp+38h] [rbp-C0h]
  size_t v98; // [rsp+38h] [rbp-C0h]
  size_t v99; // [rsp+38h] [rbp-C0h]
  _QWORD *v100; // [rsp+38h] [rbp-C0h]
  size_t v101; // [rsp+38h] [rbp-C0h]
  size_t v102; // [rsp+38h] [rbp-C0h]
  size_t v103; // [rsp+38h] [rbp-C0h]
  size_t v104; // [rsp+38h] [rbp-C0h]
  size_t v105; // [rsp+38h] [rbp-C0h]
  _BYTE *v106; // [rsp+38h] [rbp-C0h]
  size_t v107; // [rsp+38h] [rbp-C0h]
  size_t v108; // [rsp+38h] [rbp-C0h]
  void *v109; // [rsp+40h] [rbp-B8h]
  char *v110; // [rsp+40h] [rbp-B8h]
  char *v111; // [rsp+40h] [rbp-B8h]
  void *v112; // [rsp+40h] [rbp-B8h]
  void *v113; // [rsp+40h] [rbp-B8h]
  char *v114; // [rsp+40h] [rbp-B8h]
  _BYTE *v115; // [rsp+40h] [rbp-B8h]
  void *v116; // [rsp+40h] [rbp-B8h]
  void *v117; // [rsp+40h] [rbp-B8h]
  size_t v118; // [rsp+48h] [rbp-B0h]
  size_t v119; // [rsp+48h] [rbp-B0h]
  size_t v120; // [rsp+48h] [rbp-B0h]
  size_t v121; // [rsp+48h] [rbp-B0h]
  size_t v122; // [rsp+50h] [rbp-A8h]
  char *v123; // [rsp+50h] [rbp-A8h]
  size_t v124; // [rsp+58h] [rbp-A0h]
  void *v125; // [rsp+60h] [rbp-98h] BYREF
  size_t v126; // [rsp+68h] [rbp-90h]
  _QWORD v127[2]; // [rsp+70h] [rbp-88h] BYREF
  int v128; // [rsp+80h] [rbp-78h] BYREF
  char v129; // [rsp+84h] [rbp-74h]
  __int64 v130; // [rsp+88h] [rbp-70h]
  int v131; // [rsp+90h] [rbp-68h] BYREF
  char v132; // [rsp+94h] [rbp-64h]
  __int64 v133; // [rsp+98h] [rbp-60h]
  void *src; // [rsp+A0h] [rbp-58h] BYREF
  size_t n; // [rsp+A8h] [rbp-50h]
  _QWORD v136[9]; // [rsp+B0h] [rbp-48h] BYREF

  sub_91CD00((__int64)a2, "Theory dense difference logic:\n");
  (*(void (__fastcall **)(_QWORD *, __int64 *))(*a1 + 280LL))(a1, a2);
  v4 = (__int64 *)a1[39];
  v77 = v4;
  if ( v4 )
  {
    v95 = &v4[*((unsigned int *)v4 - 1)];
    if ( v4 != v95 )
    {
      v83 = 0;
      while ( 1 )
      {
        v5 = *v77;
        if ( *v77 )
        {
          v76 = v5 + 80LL * *(unsigned int *)(v5 - 4);
          if ( v76 != v5 )
            break;
        }
LABEL_46:
        ++v77;
        v83 += 8;
        if ( v77 == v95 )
          goto LABEL_47;
      }
      v6 = 0;
      while ( (unsigned int)(*(_DWORD *)v5 + 1) <= 1 )
      {
LABEL_7:
        v5 += 80;
        v6 += 8;
        if ( v5 == v76 )
          goto LABEL_46;
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      v7 = *a2;
      *(__int64 *)((char *)a2 + *(_QWORD *)(*a2 - 24) + 16) = 5;
      v8 = (char *)a2 + *(_QWORD *)(v7 - 24);
      LODWORD(v7) = *((_DWORD *)v8 + 6);
      LOBYTE(v7) = v7 & 0x4F;
      *((_DWORD *)v8 + 6) = v7 | 0x20;
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v9 = *a2;
      v10 = *(_DWORD *)(v5 + 40);
      *(__int64 *)((char *)a2 + *(_QWORD *)(*a2 - 24) + 16) = 10;
      v11 = (char *)a2 + *(_QWORD *)(v9 - 24);
      LODWORD(v9) = *((_DWORD *)v11 + 6);
      LOBYTE(v9) = v9 & 0x4F;
      *((_DWORD *)v11 + 6) = v9 | 0x20;
      if ( !v10 )
      {
        sub_1850940(&src, qword_1C7F2C0, v5 + 8);
LABEL_11:
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( src != v136 )
          operator delete(src, v136[0] + 1LL);
        std::__ostream_insert<char,std::char_traits<char>>();
        v12 = *a2;
        *(__int64 *)((char *)a2 + *(_QWORD *)(*a2 - 24) + 16) = 5;
        v13 = (char *)a2 + *(_QWORD *)(v12 - 24);
        LODWORD(v12) = *((_DWORD *)v13 + 6);
        LOBYTE(v12) = v12 & 0x4F;
        *((_DWORD *)v13 + 6) = v12 | 0x20;
        std::ostream::operator<<();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        goto LABEL_7;
      }
      v126 = 1;
      v125 = v127;
      LOWORD(v127[0]) = 40;
      sub_1850940(&src, qword_1C7F2C0, v5 + 8);
      if ( 0x7FFFFFFFFFFFFFFFLL - v126 < n )
        std::__throw_length_error("basic_string::append");
      v14 = (char *)v125;
      v15 = n + v126;
      if ( v125 == v127 )
      {
        if ( v15 <= 0xF )
        {
LABEL_17:
          if ( n )
          {
            v16 = (char *)v125 + v126;
            if ( n == 1 )
            {
              *v16 = *(_BYTE *)src;
              v14 = (char *)v125;
            }
            else
            {
              v78 = n + v126;
              memcpy(v16, src, n);
              v14 = (char *)v125;
              v15 = v78;
            }
          }
          goto LABEL_20;
        }
        if ( (v15 & 0x8000000000000000LL) != 0LL )
LABEL_170:
          std::__throw_length_error("basic_string::_M_create");
        if ( v15 <= 0x1D )
        {
          v35 = 31;
          v34 = 30;
LABEL_61:
          v109 = (void *)(n + v126);
          v96 = v126;
          v86 = (char *)src;
          v79 = n;
          v36 = (char *)operator new(v35);
          v37 = v96;
          v38 = v125;
          v14 = v36;
          v39 = v79;
          v40 = v86;
          v15 = (size_t)v109;
          if ( v96 )
          {
            if ( v96 == 1 )
            {
              *v36 = *(_BYTE *)v125;
            }
            else
            {
              v118 = (size_t)v109;
              v110 = v86;
              v97 = v79;
              v87 = v37;
              v80 = v125;
              v41 = (char *)memcpy(v36, v125, v37);
              v15 = v118;
              v40 = v110;
              v39 = v97;
              v37 = v87;
              v14 = v41;
              v38 = v80;
            }
          }
          if ( v40 && v39 )
          {
            v42 = &v14[v37];
            if ( v39 == 1 )
            {
              *v42 = *v40;
            }
            else
            {
              v98 = (size_t)v38;
              v88 = (size_t)v14;
              v81 = v15;
              memcpy(v42, v40, v39);
              v38 = (_QWORD *)v98;
              v14 = (char *)v88;
              v15 = v81;
            }
          }
          if ( v38 != v127 )
          {
            v89 = (size_t)v14;
            v82 = v15;
            operator delete(v38, v127[0] + 1LL);
            v14 = (char *)v89;
            v15 = v82;
          }
          v125 = v14;
          v127[0] = v34;
LABEL_20:
          v126 = v15;
          v14[v15] = 0;
          if ( src != v136 )
            operator delete(src, v136[0] + 1LL);
          v17 = v126;
          v18 = 0x7FFFFFFFFFFFFFFFLL - v126;
          if ( *(int *)(v5 + 40) >= 0 )
          {
            if ( v18 <= 3 )
              std::__throw_length_error("basic_string::append");
            v19 = v126 + 4;
            if ( v125 == v127 )
            {
              if ( v19 <= 0xF )
                goto LABEL_26;
              v68 = operator new(0x1Fu);
              v67 = v125;
              v63 = (void *)(v17 + 4);
              v64 = (char *)v68;
              v94 = 30;
            }
            else
            {
              if ( v127[0] >= v19 )
              {
LABEL_26:
                *(_DWORD *)((char *)v125 + v126) = 711273248;
                v20 = v125;
                goto LABEL_27;
              }
              if ( (v19 & 0x8000000000000000LL) != 0LL )
                std::__throw_length_error("basic_string::_M_create");
              v94 = 2LL * v127[0];
              if ( v19 < 2LL * v127[0] )
              {
                if ( (v127[0] & 0x4000000000000000LL) != 0 )
LABEL_153:
                  std::__throw_bad_alloc();
                v61 = 2LL * v127[0] + 1;
              }
              else
              {
                v61 = v126 + 5;
                if ( (__int64)(v126 + 5) < 0 )
                  goto LABEL_153;
                v94 = v126 + 4;
              }
              v62 = (char *)operator new(v61);
              v63 = (void *)(v17 + 4);
              v64 = v62;
              if ( !v17 )
                goto LABEL_114;
              v67 = v125;
              if ( v17 == 1 )
              {
                *v62 = *(_BYTE *)v125;
LABEL_114:
                v117 = v63;
                *(_DWORD *)&v64[v17] = 711273248;
LABEL_115:
                v106 = v64;
                sub_233E40((__int64)&v125);
                v20 = v106;
                v19 = (size_t)v117;
                v125 = v106;
                v127[0] = v94;
LABEL_27:
                v126 = v19;
                v20[v17 + 4] = 0;
                v128 = 0;
                v21 = qword_1C7F2C0;
                v129 &= 0xFCu;
                v132 &= 0xFCu;
                v130 = 0;
                v131 = 1;
                v133 = 0;
                if ( (*(_BYTE *)(v5 + 44) & 1) != 0 )
                  sub_182C690(qword_1C7F2C0, &v128, v5 + 40);
                else
                  v128 = *(_DWORD *)(v5 + 40);
                if ( (*(_BYTE *)(v5 + 60) & 1) != 0 )
                {
                  sub_182C690(v21, &v131, v5 + 56);
                }
                else
                {
                  v22 = *(_DWORD *)(v5 + 56);
                  v132 &= ~1u;
                  v131 = v22;
                }
                sub_1831690(qword_1C7F2C0, &v128);
                sub_1850940(&src, qword_1C7F2C0, &v128);
                if ( 0x7FFFFFFFFFFFFFFFLL - v126 < n )
                  std::__throw_length_error("basic_string::append");
                v23 = (char *)v125;
                v24 = n + v126;
                if ( v125 == v127 )
                {
                  if ( v24 <= 0xF )
                  {
LABEL_34:
                    if ( n )
                    {
                      v25 = (char *)v125 + v126;
                      if ( n == 1 )
                      {
                        *v25 = *(_BYTE *)src;
                        v23 = (char *)v125;
                      }
                      else
                      {
                        v84 = n + v126;
                        memcpy(v25, src, n);
                        v23 = (char *)v125;
                        v24 = v84;
                      }
                    }
                    goto LABEL_37;
                  }
                  if ( (v24 & 0x8000000000000000LL) != 0LL )
LABEL_169:
                    std::__throw_length_error("basic_string::_M_create");
                  if ( v24 <= 0x1D )
                  {
                    v90 = 30;
                    v43 = 31;
LABEL_75:
                    v122 = n + v126;
                    v119 = v126;
                    v111 = (char *)src;
                    v99 = n;
                    v44 = (char *)operator new(v43);
                    v45 = v119;
                    v46 = v125;
                    v23 = v44;
                    v47 = v99;
                    v48 = v111;
                    v24 = v122;
                    if ( v119 )
                    {
                      if ( v119 == 1 )
                      {
                        *v44 = *(_BYTE *)v125;
                      }
                      else
                      {
                        v124 = v122;
                        v123 = v111;
                        v120 = v99;
                        v112 = (void *)v45;
                        v100 = v125;
                        v49 = (char *)memcpy(v44, v125, v45);
                        v24 = v124;
                        v48 = v123;
                        v47 = v120;
                        v45 = (size_t)v112;
                        v23 = v49;
                        v46 = v100;
                      }
                    }
                    if ( v48 && v47 )
                    {
                      v50 = &v23[v45];
                      if ( v47 == 1 )
                      {
                        *v50 = *v48;
                      }
                      else
                      {
                        v121 = (size_t)v23;
                        v113 = (void *)v24;
                        v101 = (size_t)v46;
                        memcpy(v50, v48, v47);
                        v23 = (char *)v121;
                        v24 = (size_t)v113;
                        v46 = (_QWORD *)v101;
                      }
                    }
                    if ( v46 != v127 )
                    {
                      v114 = v23;
                      v102 = v24;
                      operator delete(v46, v127[0] + 1LL);
                      v23 = v114;
                      v24 = v102;
                    }
                    v125 = v23;
                    v127[0] = v90;
LABEL_37:
                    v126 = v24;
                    v23[v24] = 0;
                    if ( src != v136 )
                      operator delete(src, v136[0] + 1LL);
                    v85 = qword_1C7F2C0;
                    sub_182CBA0(qword_1C7F2C0, &v128);
                    sub_182CBA0(v85, &v131);
                    v26 = v126;
                    if ( v126 == 0x7FFFFFFFFFFFFFFFLL )
                      std::__throw_length_error("basic_string::append");
                    v27 = v126 + 1;
                    if ( v125 == v127 )
                    {
                      if ( v126 != 15 )
                        goto LABEL_42;
                      v55 = operator new(0x1Fu);
                      v54 = v125;
                      v26 = 15;
                      v28 = (_BYTE *)v55;
                      v51 = 30;
                      v27 = 16;
                    }
                    else
                    {
                      if ( v127[0] >= v27 )
                      {
LABEL_42:
                        *((_BYTE *)v125 + v126) = 41;
                        v28 = v125;
                        goto LABEL_43;
                      }
                      if ( (v27 & 0x8000000000000000LL) != 0LL )
                        std::__throw_length_error("basic_string::_M_create");
                      v51 = 2LL * v127[0];
                      if ( v27 < 2LL * v127[0] )
                      {
                        if ( (v127[0] & 0x4000000000000000LL) != 0 )
LABEL_134:
                          std::__throw_bad_alloc();
                        v52 = v51 + 1;
                      }
                      else
                      {
                        v52 = v126 + 2;
                        if ( (__int64)(v126 + 2) < 0 )
                          goto LABEL_134;
                        v51 = v126 + 1;
                      }
                      v103 = v126 + 1;
                      v91 = v126;
                      v53 = (_BYTE *)operator new(v52);
                      v26 = v91;
                      v54 = v125;
                      v28 = v53;
                      v27 = v103;
                      if ( !v91 )
                      {
LABEL_90:
                        v28[v26] = 41;
                        if ( v54 != v127 )
                        {
                          v115 = v28;
                          v104 = v27;
                          v92 = v26;
                          operator delete(v54, v127[0] + 1LL);
                          v28 = v115;
                          v27 = v104;
                          v26 = v92;
                        }
                        v125 = v28;
                        v127[0] = v51;
LABEL_43:
                        v126 = v27;
                        v28[v26 + 1] = 0;
                        src = v136;
                        v29 = v126;
                        if ( v125 != v127 )
                        {
                          src = v125;
                          v136[0] = v127[0];
LABEL_45:
                          n = v29;
                          goto LABEL_11;
                        }
                        v57 = v126 + 1;
                        v58 = v136;
                        v59 = v127;
                        if ( (unsigned int)(v126 + 1) >= 8 )
                        {
                          LODWORD(v65) = 0;
                          do
                          {
                            v66 = (unsigned int)v65;
                            v65 = (unsigned int)(v65 + 8);
                            *(_QWORD *)((char *)v136 + v66) = *(_QWORD *)((char *)v127 + v66);
                          }
                          while ( (unsigned int)v65 < (v57 & 0xFFFFFFF8) );
                          v58 = (_DWORD *)((char *)v136 + v65);
                          v59 = (_DWORD *)((char *)v127 + v65);
                        }
                        v60 = 0;
                        if ( (v57 & 4) != 0 )
                        {
                          *v58 = *v59;
                          v60 = 4;
                          if ( (v57 & 2) == 0 )
                          {
LABEL_107:
                            if ( (v57 & 1) == 0 )
                              goto LABEL_45;
                            goto LABEL_122;
                          }
                        }
                        else if ( (v57 & 2) == 0 )
                        {
                          goto LABEL_107;
                        }
                        *(_WORD *)((char *)v58 + v60) = *(_WORD *)((char *)v59 + v60);
                        v60 += 2;
                        if ( (v57 & 1) == 0 )
                          goto LABEL_45;
LABEL_122:
                        *((_BYTE *)v58 + v60) = *((_BYTE *)v59 + v60);
                        goto LABEL_45;
                      }
                      if ( v91 == 1 )
                      {
                        *v53 = *(_BYTE *)v125;
                        goto LABEL_90;
                      }
                    }
                    v116 = (void *)v27;
                    v105 = v26;
                    v93 = (size_t)v54;
                    v56 = memcpy(v28, v54, v26);
                    v27 = (size_t)v116;
                    v26 = v105;
                    v54 = (_QWORD *)v93;
                    v28 = v56;
                    goto LABEL_90;
                  }
                }
                else
                {
                  if ( v127[0] >= v24 )
                    goto LABEL_34;
                  if ( (v24 & 0x8000000000000000LL) != 0LL )
                    goto LABEL_169;
                  v90 = 2LL * v127[0];
                  if ( v24 < 2LL * v127[0] )
                  {
                    if ( (v127[0] & 0x4000000000000000LL) != 0 )
LABEL_132:
                      std::__throw_bad_alloc();
                    v43 = 2LL * v127[0] + 1;
                    goto LABEL_75;
                  }
                }
                v43 = v24 + 1;
                if ( (__int64)(v24 + 1) < 0 )
                  goto LABEL_132;
                v90 = n + v126;
                goto LABEL_75;
              }
            }
            v107 = (size_t)v63;
            v69 = (char *)memcpy(v64, v67, v17);
            v63 = (void *)v107;
            v64 = v69;
            goto LABEL_114;
          }
          if ( v18 <= 3 )
            std::__throw_length_error("basic_string::append");
          v19 = v126 + 4;
          if ( v125 == v127 )
          {
            if ( v19 <= 0xF )
              goto LABEL_54;
            v73 = operator new(0x1Fu);
            v74 = v125;
            v72 = (void *)(v17 + 4);
            v64 = (char *)v73;
            v94 = 30;
          }
          else
          {
            if ( v127[0] >= v19 )
            {
LABEL_54:
              *(_DWORD *)((char *)v125 + v126) = 711273760;
              v20 = v125;
              goto LABEL_27;
            }
            if ( (v19 & 0x8000000000000000LL) != 0LL )
              std::__throw_length_error("basic_string::_M_create");
            v94 = 2LL * v127[0];
            if ( v19 < 2LL * v127[0] )
            {
              if ( (v127[0] & 0x4000000000000000LL) != 0 )
LABEL_155:
                std::__throw_bad_alloc();
              v70 = 2LL * v127[0] + 1;
            }
            else
            {
              v70 = v126 + 5;
              if ( (__int64)(v126 + 5) < 0 )
                goto LABEL_155;
              v94 = v126 + 4;
            }
            v71 = (char *)operator new(v70);
            v72 = (void *)(v17 + 4);
            v64 = v71;
            if ( !v17 )
            {
LABEL_145:
              v117 = v72;
              *(_DWORD *)&v64[v17] = 711273760;
              goto LABEL_115;
            }
            v74 = v125;
            if ( v17 == 1 )
            {
              *v71 = *(_BYTE *)v125;
              goto LABEL_145;
            }
          }
          v108 = (size_t)v72;
          v75 = (char *)memcpy(v64, v74, v17);
          v72 = (void *)v108;
          v64 = v75;
          goto LABEL_145;
        }
      }
      else
      {
        if ( v127[0] >= v15 )
          goto LABEL_17;
        if ( (v15 & 0x8000000000000000LL) != 0LL )
          goto LABEL_170;
        v34 = 2LL * v127[0];
        if ( v15 < 2LL * v127[0] )
        {
          if ( (v127[0] & 0x4000000000000000LL) != 0 )
LABEL_128:
            std::__throw_bad_alloc();
          v35 = v34 + 1;
          goto LABEL_61;
        }
      }
      v35 = v15 + 1;
      if ( (__int64)(v15 + 1) < 0 )
        goto LABEL_128;
      v34 = n + v126;
      goto LABEL_61;
    }
  }
LABEL_47:
  result = sub_91CD00((__int64)a2, "atoms:\n");
  v31 = (__int64 *)a1[36];
  if ( v31 )
  {
    result = *((unsigned int *)v31 - 1);
    for ( i = &v31[result];
          v31 != i;
          result = (*(__int64 (__fastcall **)(_QWORD *, __int64 *, __int64))(*a1 + 392LL))(a1, a2, v33) )
    {
      v33 = *v31++;
    }
  }
  return result;
}

