__int64 __fastcall sub_41AB70(__int64 a1)
{
  char **exception; // rbp
  char **v2; // rbp
  size_t v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  size_t v7; // rsi
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  unsigned int v12; // r14d
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // r12
  int v16; // ebx
  int v17; // r12d
  __int64 *v18; // rdi
  int v19; // r8d
  int v20; // r9d
  _QWORD *v21; // rbp
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  char v25; // al
  int v26; // eax
  char v27; // al
  unsigned int v28; // eax
  __int64 v29; // r12
  _QWORD *v30; // rcx
  __int64 v31; // rbp
  _QWORD *v32; // r14
  __int64 v33; // r14
  __int64 v34; // rax
  _QWORD *v35; // rax
  _DWORD *v36; // rbp
  _QWORD *v37; // rcx
  unsigned int v38; // eax
  __int64 v39; // rdx
  int v40; // eax
  _QWORD *v41; // rdx
  _QWORD *v42; // r12
  _DWORD *v43; // rbx
  bool v44; // zf
  _DWORD *v45; // rbx
  _QWORD *v46; // rax
  _QWORD *v47; // rdx
  int v48; // eax
  unsigned int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rbp
  __int64 *v52; // rsi
  __int64 v53; // rsi
  _BYTE *v54; // rdi
  char *v55; // rsi
  __int64 v56; // rbp
  __int64 v57; // r14
  _QWORD *v58; // r15
  __int64 v59; // rdx
  int v60; // ecx
  int v61; // r8d
  int v62; // r9d
  _BYTE *v63; // rdi
  char *v64; // rsi
  __int64 v65; // rdx
  unsigned int v66; // r14d
  __int64 v67; // rsi
  char v68; // al
  unsigned int v69; // eax
  __int64 v70; // rbp
  __int64 *v71; // rsi
  __int64 v72; // rax
  int v73; // edx
  __int64 *v74; // rax
  unsigned int v75; // r12d
  unsigned int *v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rax
  int v79; // edx
  __int64 *v80; // rax
  _DWORD *v81; // rax
  char *v82; // rbx
  char *v83; // r12
  _DWORD *v84; // rbp
  void **v85; // rbx
  unsigned int v86; // eax
  unsigned int v87; // edx
  __int64 v88; // rdx
  void *v89; // rbx
  __int64 result; // rax
  unsigned int v91; // r12d
  unsigned int *v92; // rax
  __int64 v93; // rdx
  _QWORD *v94; // rax
  void **v95; // rbp
  __int64 v96; // rbp
  _DWORD *v97; // rax
  __int64 v98; // [rsp+0h] [rbp-178h]
  int v99; // [rsp+0h] [rbp-178h]
  size_t v100; // [rsp+8h] [rbp-170h]
  int v101; // [rsp+10h] [rbp-168h]
  __int64 v102; // [rsp+18h] [rbp-160h]
  __int64 v103; // [rsp+20h] [rbp-158h]
  _QWORD *v104; // [rsp+28h] [rbp-150h]
  __int64 v105; // [rsp+30h] [rbp-148h]
  unsigned int v106; // [rsp+38h] [rbp-140h]
  unsigned int v107; // [rsp+3Ch] [rbp-13Ch]
  unsigned int v108; // [rsp+50h] [rbp-128h]
  int v109; // [rsp+54h] [rbp-124h]
  __int64 *v110; // [rsp+60h] [rbp-118h]
  _QWORD *v111; // [rsp+70h] [rbp-108h] BYREF
  void *v112; // [rsp+78h] [rbp-100h] BYREF
  __int64 v113[2]; // [rsp+80h] [rbp-F8h] BYREF
  _BYTE v114[32]; // [rsp+90h] [rbp-E8h] BYREF
  void *v115; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v116; // [rsp+B8h] [rbp-C0h]
  _BYTE v117[184]; // [rsp+C0h] [rbp-B8h] BYREF

  if ( !*(_BYTE *)(a1 + 36) )
    sub_41A7B0(a1);
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  v115 = nullptr;
  v100 = v4;
  v5 = sub_731290(v4, (unsigned int)&v115);
  v110 = (__int64 *)v5;
  if ( v5 )
    ++*(_DWORD *)(v5 + 8);
  sub_18572D0(&v115);
  v6 = *(_QWORD *)(a1 + 16);
  if ( v6 )
    v106 = *(_DWORD *)(v6 - 4);
  else
    v106 = 0;
  v7 = v4;
  v98 = sub_186B270(0x80u);
  sub_ED2A30(v98, v4, 0, 0, 0);
  v104 = nullptr;
  v108 = 0;
  ++*(_DWORD *)(v98 + 32);
  v112 = (void *)v98;
  v107 = 0;
  v109 = 0;
  do
  {
    while ( 1 )
    {
      sub_ED3560();
      v12 = v108;
      if ( v108 >= *(_DWORD *)(a1 + 32) )
        v12 = -1;
      v115 = v117;
      v116 = 0x1000000000LL;
      if ( v107 >= v106 )
      {
        v82 = v117;
      }
      else
      {
        LODWORD(v98) = v107;
        v105 = 8LL * v107;
        v13 = v105;
        do
        {
          v14 = *(_QWORD *)(a1 + 16);
          v15 = *(_QWORD *)(v14 + v13);
          if ( v12 < *(_DWORD *)(v15 + 96) )
            break;
          if ( v12 == *(_DWORD *)(v15 + 96) )
          {
            v16 = (int)v112;
            sub_407990(*(_QWORD **)(v14 + v13), v7, v8, v9, v10, v11);
            v7 = *(_QWORD *)(v15 + 16);
            sub_EDBA20(v16, v7, 0, (_Unwind_Exception *)v98, v100, v101, v102, v103);
          }
          LODWORD(v98) = v98 + 1;
          v13 += 8;
        }
        while ( v106 != (_DWORD)v98 );
        v17 = v98 - v107;
        if ( (_DWORD)v98 != v107 )
        {
          if ( v17 != 1 )
          {
            v18 = v110;
            v7 = (size_t)&v112;
            (*(void (__fastcall **)(__int64 *, void **, void **))(*v110 + 128))(v110, &v112, &v115);
            v21 = v115;
            v22 = *(_QWORD *)v115;
            v23 = *(_QWORD *)(*(_QWORD *)v115 + 72LL);
            if ( !v23 )
            {
              v109 += v17;
LABEL_47:
              v42 = &v21[(unsigned int)v116];
              if ( v21 < v42 )
              {
                do
                {
                  while ( 1 )
                  {
                    v43 = (_DWORD *)*v21;
                    if ( *v21 )
                    {
                      v44 = v43[8]-- == 1;
                      if ( v44 )
                        break;
                    }
                    if ( ++v21 >= v42 )
                      goto LABEL_53;
                  }
                  ++v21;
                  sub_ED44E0(v43);
                  sub_186B220(v43);
                }
                while ( v21 < v42 );
LABEL_53:
                v21 = v115;
              }
              if ( v21 != (_QWORD *)v117 && v21 )
                sub_186B220(v21);
              v107 = v98;
              goto LABEL_58;
            }
            v24 = *(_QWORD *)(*(_QWORD *)v115 + 72LL);
            v25 = *(_BYTE *)(v23 + 3) >> 6;
            if ( v25 )
            {
              if ( v25 != 1 )
                goto LABEL_21;
            }
            else
            {
              do
              {
                v24 = *(_QWORD *)(v24 + 16);
                v25 = *(_BYTE *)(v24 + 3) >> 6;
              }
              while ( !v25 );
              if ( v25 != 1 )
              {
LABEL_21:
                if ( v25 == 2 )
                  v26 = *(_DWORD *)(v24 + 4) - 1;
                else
                  v26 = *(_DWORD *)(v24 + 4);
                if ( v17 != v26 )
                {
LABEL_24:
                  HIDWORD(v103) = 0;
                  v109 = v109 + v17 - v26;
                  v102 = 8 * (v107 + (unsigned __int64)((unsigned int)v98 - v107 - 1) + 1);
                  while ( 1 )
                  {
                    v27 = *(_BYTE *)(v23 + 3) >> 6;
                    if ( v27 )
                    {
                      if ( v27 == 1 )
                        goto LABEL_62;
                    }
                    else
                    {
                      do
                      {
                        v23 = *(_QWORD *)(v23 + 16);
                        v27 = *(_BYTE *)(v23 + 3) >> 6;
                      }
                      while ( !v27 );
                      if ( v27 == 1 )
                      {
LABEL_62:
                        v28 = *(_DWORD *)(v23 + 4) + 1;
                        goto LABEL_29;
                      }
                    }
                    if ( v27 == 2 )
                      v28 = *(_DWORD *)(v23 + 4) - 1;
                    else
                      v28 = *(_DWORD *)(v23 + 4);
LABEL_29:
                    if ( HIDWORD(v103) >= v28 )
                      goto LABEL_46;
                    v29 = 8LL * v107;
                    LODWORD(v30) = v98;
                    v31 = 8LL * HIDWORD(v103);
                    if ( v107 >= (unsigned int)v98 )
                    {
LABEL_80:
                      v51 = sub_180B150(v18, v7);
                      std::__ostream_insert<char,std::char_traits<char>>();
                      v52 = *(__int64 **)v22;
                      if ( (*(_BYTE *)(v22 + 123) & 0x20) != 0 )
                      {
                        v53 = v52[108];
                        goto LABEL_82;
                      }
                      v78 = *(_QWORD *)(v22 + 72);
                      v79 = 17;
                      while ( 1 )
                      {
                        if ( *(char *)(v78 + 3) >= 0 )
                        {
                          if ( HIDWORD(v103) == *(_DWORD *)(v78 + 4) )
                          {
                            v80 = (__int64 *)(v78 + 8);
LABEL_116:
                            v53 = *v80;
LABEL_82:
                            sub_1606360(v113, v53, v100, 0, 0, 0);
                            sub_160E8B0(v51, v113);
                            std::__ostream_insert<char,std::char_traits<char>>();
                            sub_18572D0(v114);
                            v54 = (_BYTE *)sub_180B150(v114, "\n");
                            v55 = "Available lemmas are: ";
                            std::__ostream_insert<char,std::char_traits<char>>();
                            v56 = v107;
                            if ( v107 < (unsigned int)v98 )
                            {
                              do
                              {
                                sub_180B150(v54, v55);
                                v57 = std::ostream::_M_insert<unsigned long>();
                                std::__ostream_insert<char,std::char_traits<char>>();
                                v58 = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 8 * v56);
                                sub_407990(v58, (__int64)": ", v59, v60, v61, v62);
                                sub_1606360(v113, v58[2], v100, 0, 0, 0);
                                sub_160E8B0(v57, v113);
                                v55 = "\n";
                                std::__ostream_insert<char,std::char_traits<char>>();
                                v54 = v114;
                                ++v56;
                                sub_18572D0(v114);
                              }
                              while ( (unsigned int)v56 < (unsigned int)v98 );
                            }
                            v63 = (_BYTE *)sub_180B150(v54, v55);
                            v64 = "Simplified goal is:\n";
                            std::__ostream_insert<char,std::char_traits<char>>();
                            v65 = *(_QWORD *)(v22 + 72);
                            v66 = 0;
                            if ( !v65 )
                            {
LABEL_102:
                              sub_1872CE0("");
                              sub_1873130(114, 2212);
                            }
LABEL_88:
                            v68 = *(_BYTE *)(v65 + 3) >> 6;
                            if ( v68 )
                            {
                              if ( v68 != 1 )
                              {
LABEL_90:
                                if ( v68 == 2 )
                                  v69 = *(_DWORD *)(v65 + 4) - 1;
                                else
                                  v69 = *(_DWORD *)(v65 + 4);
                                if ( v66 >= v69 )
                                  goto LABEL_102;
                                goto LABEL_93;
                              }
                            }
                            else
                            {
                              do
                              {
                                v65 = *(_QWORD *)(v65 + 16);
                                v68 = *(_BYTE *)(v65 + 3) >> 6;
                              }
                              while ( !v68 );
                              if ( v68 != 1 )
                                goto LABEL_90;
                            }
                            if ( v66 >= *(_DWORD *)(v65 + 4) + 1 )
                              goto LABEL_102;
LABEL_93:
                            sub_180B150(v63, v64);
                            v70 = std::ostream::_M_insert<unsigned long>();
                            std::__ostream_insert<char,std::char_traits<char>>();
                            v71 = *(__int64 **)v22;
                            if ( (*(_BYTE *)(v22 + 123) & 0x20) != 0 )
                            {
                              v67 = v71[108];
                              goto LABEL_87;
                            }
                            v72 = *(_QWORD *)(v22 + 72);
                            v73 = 17;
                            while ( 1 )
                            {
                              if ( *(char *)(v72 + 3) >= 0 )
                              {
                                if ( v66 == *(_DWORD *)(v72 + 4) )
                                {
                                  v74 = (__int64 *)(v72 + 8);
LABEL_98:
                                  v67 = *v74;
LABEL_87:
                                  sub_1606360(v113, v67, v100, 0, 0, 0);
                                  sub_160E8B0(v70, v113);
                                  v64 = "\n";
                                  std::__ostream_insert<char,std::char_traits<char>>();
                                  v63 = v114;
                                  ++v66;
                                  sub_18572D0(v114);
                                  v65 = *(_QWORD *)(v22 + 72);
                                  if ( !v65 )
                                    goto LABEL_102;
                                  goto LABEL_88;
                                }
                              }
                              else if ( *(_BYTE *)(v72 + 3) >> 6 != 2 )
                              {
                                v74 = (__int64 *)(*(_QWORD *)(v72 + 16) + 8LL * v66);
                                goto LABEL_98;
                              }
                              v72 = *(_QWORD *)(v72 + 16);
                              if ( !--v73 )
                              {
                                sub_233F80(v71 + 77, (_DWORD *)(v22 + 72));
                                v74 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v22 + 72) + 16LL) + 8LL * v66);
                                goto LABEL_98;
                              }
                            }
                          }
                        }
                        else if ( *(_BYTE *)(v78 + 3) >> 6 != 2 )
                        {
                          v80 = (__int64 *)(*(_QWORD *)(v78 + 16) + 8LL * HIDWORD(v103));
                          goto LABEL_116;
                        }
                        v78 = *(_QWORD *)(v78 + 16);
                        if ( !--v79 )
                        {
                          sub_233F80(v52 + 77, (_DWORD *)(v22 + 72));
                          v80 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v22 + 72) + 16LL) + 8LL * HIDWORD(v103));
                          goto LABEL_116;
                        }
                      }
                    }
                    while ( 1 )
                    {
                      v32 = *(_QWORD **)(*(_QWORD *)(a1 + 16) + v29);
                      sub_407990(v32, v7, v23, (int)v30, v19, v20);
                      v33 = v32[2];
                      v18 = *(__int64 **)v22;
                      if ( (*(_BYTE *)(v22 + 123) & 0x20) != 0 )
                      {
                        if ( v33 == v18[108] )
                          break;
                        goto LABEL_33;
                      }
                      v34 = *(_QWORD *)(v22 + 72);
                      v23 = 17;
                      while ( 1 )
                      {
                        v7 = *(unsigned __int8 *)(v34 + 3);
                        LOBYTE(v7) = (unsigned __int8)v7 >> 6;
                        if ( *(char *)(v34 + 3) < 0 )
                        {
                          if ( (_BYTE)v7 != 2 )
                          {
                            v30 = (_QWORD *)(v31 + *(_QWORD *)(v34 + 16));
                            v35 = v30;
                            goto LABEL_39;
                          }
                          goto LABEL_77;
                        }
                        LODWORD(v30) = HIDWORD(v103);
                        if ( HIDWORD(v103) == *(_DWORD *)(v34 + 4) )
                          break;
LABEL_77:
                        v34 = *(_QWORD *)(v34 + 16);
                        v23 = (unsigned int)(v23 - 1);
                        if ( !(_DWORD)v23 )
                        {
                          v7 = v22 + 72;
                          v18 += 77;
                          sub_233F80(v18, (_DWORD *)(v22 + 72));
                          v30 = (_QWORD *)(v31 + *(_QWORD *)(*(_QWORD *)(v22 + 72) + 16LL));
                          v35 = v30;
                          goto LABEL_39;
                        }
                      }
                      v35 = (_QWORD *)(v34 + 8);
LABEL_39:
                      if ( v33 == *v35 )
                        break;
LABEL_33:
                      v29 += 8;
                      if ( v102 == v29 )
                        goto LABEL_80;
                    }
                    v36 = *(_DWORD **)(*(_QWORD *)(a1 + 16) + v29);
                    if ( v36 )
                      ++*v36;
                    v37 = v104;
                    if ( v104 )
                    {
                      v38 = *((_DWORD *)v104 - 1);
                      if ( v38 == *((_DWORD *)v104 - 2) )
                      {
                        v75 = (3 * v38 + 1) >> 1;
                        v7 = 8 * v75 + 8;
                        if ( 8 * v38 + 8 >= (unsigned int)v7 || v38 >= v75 )
                        {
                          exception = (char **)__cxa_allocate_exception(0x28u);
                          sub_3FCFD0(v113, "Overflow encountered when expanding vector");
                          *exception = (char *)off_1C63128;
                          sub_2333C0(exception + 1, v113);
                          sub_233E40((__int64)v113);
                          __cxa_throw(
                            exception,
                            (struct type_info *)&`typeinfo for'default_exception,
                            (void (*)(void *))sub_230E50);
                        }
                        v18 = v104 - 1;
                        v76 = (unsigned int *)sub_186B300(v104 - 1, v7);
                        v77 = v76[1];
                        v37 = v76 + 2;
                        *v76 = v75;
                        v104 = v37;
                        LODWORD(v76) = v77;
                        v41 = &v37[v77];
                        v40 = (_DWORD)v76 + 1;
                      }
                      else
                      {
                        v39 = v38;
                        v40 = v38 + 1;
                        v41 = &v104[v39];
                      }
                    }
                    else
                    {
                      v18 = &qword_18;
                      v94 = (_QWORD *)sub_186B270(0x18u);
                      *v94 = 2;
                      v104 = v94 + 1;
                      v41 = v94 + 1;
                      v37 = v94 + 1;
                      v40 = 1;
                    }
                    *v41 = v36;
                    v23 = *(_QWORD *)(v22 + 72);
                    ++HIDWORD(v103);
                    *((_DWORD *)v37 - 1) = v40;
                    if ( !v23 )
                    {
LABEL_46:
                      v21 = v115;
                      goto LABEL_47;
                    }
                  }
                }
                goto LABEL_66;
              }
            }
            v26 = *(_DWORD *)(v24 + 4) + 1;
            if ( v17 != v26 )
              goto LABEL_24;
LABEL_66:
            if ( v107 < (unsigned int)v98 )
            {
              v45 = *(_DWORD **)(*(_QWORD *)(a1 + 16) + 8LL * v107);
              if ( v45 )
                ++*v45;
              if ( v104 )
                goto LABEL_74;
              v46 = (_QWORD *)sub_186B270(0x18u);
              *v46 = 2;
              v104 = v46 + 1;
              v47 = v46 + 1;
              v48 = 1;
              while ( 1 )
              {
                *v47 = v45;
                v105 += 8;
                *((_DWORD *)v104 - 1) = v48;
                if ( v105 == 8 * (v107 + (unsigned __int64)((unsigned int)v98 - v107 - 1) + 1) )
                  goto LABEL_46;
                v45 = *(_DWORD **)(*(_QWORD *)(a1 + 16) + v105);
                if ( v45 )
                  ++*v45;
LABEL_74:
                v49 = *((_DWORD *)v104 - 1);
                if ( v49 == *((_DWORD *)v104 - 2) )
                {
                  v91 = (3 * v49 + 1) >> 1;
                  v7 = 8 * v91 + 8;
                  if ( 8 * v49 + 8 >= (unsigned int)v7 || v49 >= v91 )
                  {
                    v2 = (char **)__cxa_allocate_exception(0x28u);
                    sub_3FCFD0(v113, "Overflow encountered when expanding vector");
                    *v2 = (char *)off_1C63128;
                    sub_2333C0(v2 + 1, v113);
                    sub_233E40((__int64)v113);
                    __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v92 = (unsigned int *)sub_186B300(v104 - 1, v7);
                  v93 = v92[1];
                  *v92 = v91;
                  v104 = v92 + 2;
                  LODWORD(v92) = v93;
                  v47 = &v104[v93];
                  v48 = (_DWORD)v92 + 1;
                }
                else
                {
                  v50 = v49;
                  v48 = v49 + 1;
                  v47 = &v104[v50];
                }
              }
            }
            goto LABEL_47;
          }
          v81 = *(_DWORD **)(*(_QWORD *)(a1 + 16) + 8LL * v107);
          v113[0] = (__int64)v81;
          if ( v81 )
            ++*v81;
          v7 = (size_t)v113;
          v111 = v104;
          sub_4029E0(&v111, v113);
          v104 = v111;
        }
        v82 = (char *)v115;
        v83 = (char *)v115 + 8 * (unsigned int)v116;
        if ( v115 < v83 )
        {
          do
          {
            while ( 1 )
            {
              v84 = *(_DWORD **)v82;
              if ( *(_QWORD *)v82 )
              {
                v44 = v84[8]-- == 1;
                if ( v44 )
                  break;
              }
              v82 += 8;
              if ( v82 >= v83 )
                goto LABEL_129;
            }
            v82 += 8;
            sub_ED44E0(v84);
            sub_186B220(v84);
          }
          while ( v82 < v83 );
LABEL_129:
          v82 = (char *)v115;
          v107 = v98;
        }
        else
        {
          v107 = v98;
        }
      }
      if ( v82 != v117 && v82 )
        break;
LABEL_58:
      if ( *(_DWORD *)(a1 + 32) < ++v108 )
        goto LABEL_133;
    }
    sub_186B220(v82);
    ++v108;
  }
  while ( *(_DWORD *)(a1 + 32) >= v108 );
LABEL_133:
  v85 = *(void ***)(a1 + 16);
  if ( !v104 )
  {
    if ( v85 )
    {
      if ( v109 == *((_DWORD *)v85 - 1) )
      {
        if ( !v109 )
          goto LABEL_137;
        v95 = &v85[v109];
        if ( v85 >= v95 )
        {
          *((_DWORD *)v85 - 1) = 0;
LABEL_158:
          *(_BYTE *)(a1 + 36) = 0;
          sub_41A7B0(a1);
          goto LABEL_137;
        }
        goto LABEL_152;
      }
    }
    else if ( !v109 )
    {
      goto LABEL_137;
    }
    sub_1872CE0("");
    sub_1873130(114, 2219);
  }
  v86 = *((_DWORD *)v104 - 1);
  v87 = v86 + v109;
  if ( !v85 )
  {
    if ( !v87 )
      goto LABEL_137;
LABEL_150:
    sub_1872CE0("");
    sub_1873130(114, 2219);
  }
  if ( v87 != *((_DWORD *)v85 - 1) )
    goto LABEL_150;
  v88 = *((unsigned int *)v85 - 1);
  if ( v86 < (unsigned int)v88 )
  {
    v95 = &v85[v88];
    if ( v85 >= v95 )
    {
LABEL_156:
      *((_DWORD *)v85 - 1) = 0;
LABEL_157:
      if ( v104 && *((_DWORD *)v104 - 1) )
      {
        v96 = 0;
        do
        {
          v97 = (_DWORD *)v104[v96];
          v115 = v97;
          if ( v97 )
            ++*v97;
          sub_4029E0((_QWORD *)(a1 + 16), &v115);
          ++v96;
        }
        while ( (unsigned int)v96 < *((_DWORD *)v104 - 1) );
      }
      goto LABEL_158;
    }
    do
    {
LABEL_152:
      if ( *v85 )
        sub_41CE10(*v85);
      ++v85;
    }
    while ( v85 < v95 );
    v85 = *(void ***)(a1 + 16);
    if ( !v85 )
      goto LABEL_157;
    goto LABEL_156;
  }
LABEL_137:
  v89 = v112;
  if ( v112 )
  {
    v44 = (*((_DWORD *)v112 + 8))-- == 1;
    if ( v44 )
    {
      sub_ED44E0(v89);
      sub_186B220(v89);
    }
  }
  v111 = v104;
  result = sub_41D320(&v111);
  if ( v110 )
  {
    v99 = *((_DWORD *)v110 + 2);
    result = (unsigned int)(v99 - 1);
    *((_DWORD *)v110 + 2) = result;
    if ( v99 == 1 )
    {
      (*(void (__fastcall **)(__int64 *))*v110)(v110);
      return sub_186B220(v110);
    }
  }
  return result;
}

