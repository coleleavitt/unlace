__int64 __fastcall sub_78F200(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // r12d
  __int64 v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rbp
  unsigned int v18; // eax
  int *v19; // rsi
  int v20; // edi
  unsigned int v21; // r12d
  __int64 v22; // r14
  __int64 v23; // rax
  char *v24; // rdi
  int v25; // esi
  char *v26; // r11
  char *i; // rax
  unsigned int *v28; // rax
  __int64 v29; // rdx
  int *v30; // rax
  unsigned __int8 v31; // r12
  unsigned __int8 v32; // r14
  int v33; // edx
  _DWORD *v34; // rdi
  int v35; // r15d
  __int64 v36; // rax
  _DWORD *v37; // rax
  __int64 v38; // rax
  int v39; // eax
  _QWORD *v40; // rdx
  __int64 v41; // rax
  __int64 *v42; // rax
  unsigned int v43; // edx
  size_t v44; // rsi
  unsigned int v45; // r14d
  unsigned int *v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  const void *v50; // rdi
  __int64 *v51; // rax
  __int64 v52; // r8
  char v53; // r15
  int v54; // eax
  int v55; // r14d
  _DWORD *v56; // rax
  __int64 v57; // rcx
  _DWORD *v58; // rcx
  __int64 v59; // rsi
  int v60; // r10d
  unsigned int v61; // edi
  __int64 v62; // rdi
  __int64 v63; // r11
  __int64 v64; // rdi
  __int64 v65; // rsi
  _QWORD *v66; // rax
  unsigned int v67; // ebp
  unsigned int v68; // edx
  char **v69; // r12
  int v70; // ebp
  _QWORD *v71; // rdx
  __int64 v72; // rax
  int *v73; // rax
  __int64 v74; // rsi
  unsigned int *v75; // rax
  const void *v76; // rdi
  void *v77; // rdi
  _QWORD *v78; // r15
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rax
  unsigned int v83; // ebp
  unsigned int v84; // ecx
  unsigned int *v85; // rax
  __int64 v86; // rax
  unsigned int v87; // r15d
  size_t v88; // rsi
  unsigned int *v89; // rcx
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rsi
  __int64 v93; // rax
  int v94; // edx
  int v95; // r13d
  unsigned int v96; // r15d
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rax
  unsigned int v101; // r13d
  unsigned int v102; // r12d
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // r8
  __int64 v106; // r9
  unsigned int v107; // r12d
  unsigned int v108; // r13d
  __int64 v109; // rax
  __int64 v110; // r8
  __int64 v111; // r9
  _QWORD *v112; // rax
  unsigned int v113; // r12d
  unsigned int v114; // ecx
  unsigned int *v115; // rax
  __int64 v116; // rax
  _QWORD *v117; // rax
  _QWORD *v118; // rax
  int v119; // r13d
  int v120; // eax
  unsigned int v121; // r12d
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // r8
  __int64 v125; // r9
  __int64 v126; // rax
  __int64 v127; // r8
  __int64 v128; // r9
  unsigned int v129; // r13d
  __int64 v130; // rax
  __int64 v131; // r8
  __int64 v132; // r9
  _QWORD *v133; // rax
  char **v134; // r12
  char **v135; // r12
  char **v136; // r12
  char **v137; // r12
  char **v138; // r12
  char **v139; // r12
  char **v140; // r12
  char **exception; // r12
  const char *v142; // rax
  unsigned __int8 v143; // [rsp+8h] [rbp-240h]
  int v144; // [rsp+8h] [rbp-240h]
  char v145; // [rsp+Fh] [rbp-239h]
  unsigned int v146; // [rsp+10h] [rbp-238h]
  int v147; // [rsp+14h] [rbp-234h]
  __int64 *v148; // [rsp+18h] [rbp-230h]
  int v149; // [rsp+2Ch] [rbp-21Ch] BYREF
  int v150; // [rsp+30h] [rbp-218h] BYREF
  unsigned int v151; // [rsp+34h] [rbp-214h] BYREF
  unsigned int v152; // [rsp+38h] [rbp-210h] BYREF
  int v153; // [rsp+3Ch] [rbp-20Ch] BYREF
  _DWORD v154[2]; // [rsp+40h] [rbp-208h] BYREF
  _DWORD v155[2]; // [rsp+48h] [rbp-200h] BYREF
  _DWORD v156[2]; // [rsp+50h] [rbp-1F8h] BYREF
  _DWORD v157[2]; // [rsp+58h] [rbp-1F0h] BYREF
  _BYTE *v158[2]; // [rsp+60h] [rbp-1E8h] BYREF
  char v159[32]; // [rsp+70h] [rbp-1D8h] BYREF
  __int64 v160; // [rsp+90h] [rbp-1B8h] BYREF
  int v161[108]; // [rsp+98h] [rbp-1B0h] BYREF

  v7 = *(_QWORD *)(a1 + 88);
  if ( v7 )
  {
    v147 = *(_DWORD *)(v7 - 4);
    v8 = *(_QWORD *)(a1 + 80);
    if ( v8 )
    {
LABEL_3:
      v146 = *(_DWORD *)(v8 - 4);
      goto LABEL_4;
    }
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 80);
    v147 = 0;
    if ( v8 )
      goto LABEL_3;
  }
  v146 = 0;
LABEL_4:
  result = sub_78EBF0(a1, a2, a3, 0, a5, a6);
  v10 = *(_QWORD *)(a1 + 80);
  if ( (_BYTE)result )
  {
    if ( v10 )
    {
      result = v146;
      if ( v146 < *(_DWORD *)(v10 - 4) )
      {
        *(_DWORD *)(v10 - 4) = v146;
        result = *(_QWORD *)(a1 + 88);
        if ( result )
          *(_DWORD *)(result - 4) = v147;
      }
    }
  }
  else
  {
    while ( v10 )
    {
      while ( 2 )
      {
        result = v146;
        if ( v146 >= *(_DWORD *)(v10 - 4) )
          return result;
LABEL_7:
        v11 = *(_QWORD *)(a1 + 8);
        if ( !(unsigned __int8)sub_18290A0(v11) )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          v142 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
          sub_24ABB0(&v160, v142);
          *exception = (char *)off_1C63670;
          sub_2333C0(exception + 1, &v160);
          sub_233E40((__int64)&v160);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
        }
        if ( *(_QWORD *)(a1 + 232) < (unsigned __int64)Z3_get_estimated_alloc_size_0(v11, a2) )
        {
          v137 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v160, off_1C7E178);
          *v137 = (char *)off_1C63670;
          sub_2333C0(v137 + 1, &v160);
          sub_233E40((__int64)&v160);
          __cxa_throw(v137, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
        }
        v10 = *(_QWORD *)(a1 + 80);
        if ( v10 )
        {
          v14 = *(_DWORD *)(v10 - 4);
          v15 = 16LL * (unsigned int)(v14 - 1);
        }
        else
        {
          v15 = 0xFFFFFFFF0LL;
          v14 = 0;
        }
        v16 = v10 + v15;
        v17 = *(_QWORD *)(v10 + v15);
        v145 = *(_BYTE *)(v10 + v15 + 8);
        v143 = v145 & 2;
        v18 = *(_DWORD *)(v10 + v15 + 12);
        if ( !v18 )
        {
          v59 = *(unsigned int *)(a1 + 104);
          v60 = *(_DWORD *)(v17 + 12);
          v12 = *(_QWORD *)(a1 + 96);
          v61 = v59 - 1;
          v59 *= 16;
          v13 = v12 + v59;
          v62 = 16LL * (v60 & v61);
          v63 = v12 + v62;
          if ( v62 != v59 )
          {
            a2 = v12 + v62;
            while ( 1 )
            {
              while ( 1 )
              {
                v64 = *(_QWORD *)a2;
                if ( *(_QWORD *)a2 > 1u )
                  break;
                if ( !v64 )
                  goto LABEL_12;
                a2 += 16;
                if ( v13 == a2 )
                  goto LABEL_81;
              }
              if ( *(_DWORD *)(v64 + 12) == v60 && v17 == v64 )
                break;
              a2 += 16;
              if ( v13 == a2 )
                goto LABEL_81;
            }
LABEL_99:
            v70 = *(_DWORD *)(a2 + 8);
            if ( v143 )
              v70 = *(_DWORD *)(a2 + 8) ^ 1;
            if ( (v145 & 1) != 0 )
            {
              a2 = 1;
              v149 = v70;
              sub_7872D0(a1, 1u, (__int64)&v149, v10, v12, v13);
              goto LABEL_110;
            }
            v71 = *(_QWORD **)(a1 + 88);
            if ( v71 )
            {
              v72 = *((unsigned int *)v71 - 1);
              if ( (_DWORD)v72 == *((_DWORD *)v71 - 2) )
              {
                v113 = (unsigned int)(3 * v72 + 1) >> 1;
                v114 = 4 * v113 + 8;
                if ( 4 * (int)v72 + 8 >= v114 || (unsigned int)v72 >= v113 )
                {
                  v138 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(&v160, "Overflow encountered when expanding vector");
                  *v138 = (char *)off_1C63128;
                  sub_2333C0(v138 + 1, &v160);
                  sub_233E40((__int64)&v160);
                  __cxa_throw(v138, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                a2 = v114;
                v115 = (unsigned int *)sub_186B300(v71 - 1, v114);
                v71 = v115 + 2;
                *v115 = v113;
                v116 = v115[1];
                *(_QWORD *)(a1 + 88) = v71;
                v10 = *(_QWORD *)(a1 + 80);
                v73 = (int *)v71 + v116;
              }
              else
              {
                v73 = (int *)v71 + v72;
              }
            }
            else
            {
              v133 = (_QWORD *)sub_186B270(0x10u);
              *v133 = 2;
              v10 = *(_QWORD *)(a1 + 80);
              v71 = v133 + 1;
              *(_QWORD *)(a1 + 88) = v133 + 1;
              v73 = (int *)(v133 + 1);
            }
            *v73 = v70;
            ++*((_DWORD *)v71 - 1);
            goto LABEL_111;
          }
LABEL_81:
          while ( v63 != v12 )
          {
            v65 = *(_QWORD *)v12;
            if ( *(_QWORD *)v12 > 1u )
            {
              if ( *(_DWORD *)(v65 + 12) == v60 && v17 == v65 )
              {
                a2 = v12;
                goto LABEL_99;
              }
            }
            else if ( !v65 )
            {
              break;
            }
            v12 += 16;
          }
        }
LABEL_12:
        if ( *(_WORD *)(v17 + 4) )
          goto LABEL_15;
        v19 = *(int **)(*(_QWORD *)(v17 + 16) + 24LL);
        if ( !v19 )
          goto LABEL_15;
        v20 = *v19;
        if ( *v19 || v19[1] != 8 )
          goto LABEL_15;
        a2 = *(_QWORD *)(v17 + 32);
        if ( (v145 & 1) == 0 )
        {
          if ( *(_WORD *)(a2 + 4)
            || (v12 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 24LL)) == 0
            || (v13 = *(unsigned int *)v12, *(_QWORD *)v12 != 0x800000000LL) )
          {
            v12 = v146 + 1;
            if ( (_DWORD)v12 != v14 )
              goto LABEL_142;
          }
LABEL_15:
          v21 = *(_DWORD *)(v17 + 24);
          if ( v18 < v21 )
          {
LABEL_16:
            v22 = *(_QWORD *)(v17 + 8LL * v18 + 32);
            *(_DWORD *)(v16 + 12) = v18 + 1;
            if ( *(_WORD *)(v22 + 4) )
              goto LABEL_28;
            v23 = *(unsigned int *)(a1 + 104);
            v12 = *(unsigned int *)(v22 + 12);
            v24 = *(char **)(a1 + 96);
            v25 = v23 - 1;
            v23 *= 16;
            v26 = &v24[v23];
            a2 = 16LL * ((unsigned int)v12 & v25);
            v13 = (__int64)&v24[a2];
            if ( a2 != v23 )
            {
              for ( i = &v24[a2]; v26 != i; i += 16 )
              {
                a2 = *(_QWORD *)i;
                if ( *(_QWORD *)i > 1u )
                {
                  if ( *(_DWORD *)(a2 + 12) == (_DWORD)v12 && v22 == a2 )
                  {
LABEL_35:
                    v34 = *(_DWORD **)(a1 + 88);
                    v35 = *((_DWORD *)i + 2);
                    if ( v34 )
                    {
                      v36 = (unsigned int)*(v34 - 1);
                      if ( (_DWORD)v36 == *(v34 - 2) )
                      {
                        v43 = (unsigned int)(3 * v36 + 1) >> 1;
                        v44 = 4 * v43 + 8;
                        v45 = v43;
                        if ( 4 * (int)v36 + 8 >= (unsigned int)v44 || (unsigned int)v36 >= v43 )
                        {
                          v139 = (char **)__cxa_allocate_exception(0x28u);
                          sub_24ABB0(&v160, "Overflow encountered when expanding vector");
                          *v139 = (char *)off_1C63128;
                          sub_2333C0(v139 + 1, &v160);
                          sub_233E40((__int64)&v160);
                          __cxa_throw(
                            v139,
                            (struct type_info *)&`typeinfo for'default_exception,
                            (void (*)(void *))sub_230E50);
                        }
                        v46 = (unsigned int *)sub_186B300(v34 - 2, v44);
                        v34 = v46 + 2;
                        *v46 = v45;
                        v10 = *(_QWORD *)(a1 + 80);
                        v47 = v46[1];
                        *(_QWORD *)(a1 + 88) = v34;
                        v16 = v10 + v15;
                        v37 = &v34[v47];
                      }
                      else
                      {
                        v37 = &v34[v36];
                      }
                    }
                    else
                    {
                      v66 = (_QWORD *)sub_186B270(0x10u);
                      v10 = *(_QWORD *)(a1 + 80);
                      v34 = v66 + 1;
                      *v66 = 2;
                      v16 = v10 + v15;
                      v37 = v34;
                      *(_QWORD *)(a1 + 88) = v34;
                    }
                    *v37 = v35;
                    ++*(v34 - 1);
                    goto LABEL_30;
                  }
                }
                else if ( !a2 )
                {
                  goto LABEL_24;
                }
              }
            }
            if ( v24 == (char *)v13 )
            {
LABEL_24:
              v28 = *(unsigned int **)(*(_QWORD *)(v22 + 16) + 24LL);
              if ( !v28 )
                goto LABEL_47;
              goto LABEL_25;
            }
            while ( 1 )
            {
              v38 = *(_QWORD *)v24;
              if ( *(_QWORD *)v24 > 1u )
              {
                if ( *(_DWORD *)(v38 + 12) == (_DWORD)v12 && v22 == v38 )
                {
                  i = v24;
                  goto LABEL_35;
                }
              }
              else if ( !v38 )
              {
                v28 = *(unsigned int **)(*(_QWORD *)(v22 + 16) + 24LL);
                if ( !v28 )
                {
LABEL_47:
                  if ( *(_BYTE *)(a1 + 273) )
                    goto LABEL_28;
                  LODWORD(v29) = -1;
LABEL_27:
                  if ( *(_DWORD *)(a1 + 24) != (_DWORD)v29 )
                  {
LABEL_28:
                    sub_78E1B0(a1, v22, 0, 0);
                    goto LABEL_29;
                  }
                  if ( !v10 )
                    goto LABEL_168;
                  v48 = *(unsigned int *)(v10 - 4);
                  if ( (_DWORD)v48 == *(_DWORD *)(v10 - 8) )
                  {
                    v67 = (unsigned int)(3 * v48 + 1) >> 1;
                    v68 = 16 * v67 + 8;
                    if ( 16 * (int)v48 + 8 >= v68 || (unsigned int)v48 >= v67 )
                    {
                      v69 = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0(&v160, "Overflow encountered when expanding vector");
                      *v69 = (char *)off_1C63128;
                      sub_2333C0(v69 + 1, &v160);
                      sub_233E40((__int64)&v160);
                      __cxa_throw(
                        v69,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    goto LABEL_115;
                  }
LABEL_63:
                  v49 = v10 + 16 * v48;
LABEL_64:
                  *(_BYTE *)(v49 + 8) &= 0xFCu;
                  *(_QWORD *)v49 = v22;
                  *(_DWORD *)(v49 + 12) = 0;
                  ++*(_DWORD *)(v10 - 4);
                  goto LABEL_7;
                }
LABEL_25:
                v29 = *v28;
                if ( (_DWORD)v29 )
                {
                  if ( !*(_BYTE *)(a1 + 273) )
                    goto LABEL_27;
                  goto LABEL_28;
                }
                v39 = v28[1];
                if ( v39 == 3 )
                {
                  if ( !*(_BYTE *)(a1 + 273) )
                  {
                    std::ostringstream::basic_ostringstream(&v160);
                    sub_1606360(v158, v22, *(_QWORD *)(a1 + 8), 0, 0, 0);
                    sub_160E8B0(&v160, v158);
                    sub_18572D0(v159);
                    std::stringbuf::str(v158, v161);
                    sub_787480(v158[0], (size_t)v158[1]);
                  }
                  v50 = (const void *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, __int64, __int64))(**(_QWORD **)(a1 + 192) + 88LL))(
                                        *(_QWORD *)(a1 + 192),
                                        a2,
                                        v29,
                                        v10,
                                        v12,
                                        v13);
                  if ( v50 )
                  {
                    v51 = (__int64 *)__dynamic_cast(
                                       v50,
                                       (const struct __class_type_info *)&`typeinfo for'sat::extension,
                                       (const struct __class_type_info *)&`typeinfo for'euf::solver,
                                       0);
                    if ( !v51 )
                    {
                      v136 = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0(&v160, "cannot convert to euf");
                      *v136 = (char *)off_1C63128;
                      sub_2333C0(v136 + 1, &v160);
                      sub_233E40((__int64)&v160);
                      __cxa_throw(
                        v136,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                  }
                  else
                  {
                    v91 = sub_186B270(0x20E0u);
                    v92 = *(_QWORD *)(a1 + 8);
                    v148 = (__int64 *)v91;
                    v160 = 0;
                    sub_7D2250(v91, v92, a1, &v160);
                    sub_18572D0(&v160);
                    (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 192) + 96LL))(
                      *(_QWORD *)(a1 + 192),
                      v148);
                    v51 = v148;
                  }
                  v52 = *v51;
                  v53 = *(_BYTE *)(a1 + 274);
                  *(_BYTE *)(a1 + 274) = 0;
                  v54 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))(v52 + 472))(v51, v22, 0, 0);
                  *(_BYTE *)(a1 + 274) = v53;
                  v55 = v54;
                  if ( v54 != -2 )
                  {
                    v56 = *(_DWORD **)(a1 + 88);
                    if ( v56 )
                    {
                      v57 = (unsigned int)*(v56 - 1);
                      if ( (_DWORD)v57 == *(v56 - 2) )
                      {
                        v87 = (unsigned int)(3 * v57 + 1) >> 1;
                        v88 = 4 * v87 + 8;
                        if ( 4 * (int)v57 + 8 >= (unsigned int)v88 || (unsigned int)v57 >= v87 )
                        {
                          v135 = (char **)__cxa_allocate_exception(0x28u);
                          sub_24ABB0(&v160, "Overflow encountered when expanding vector");
                          *v135 = (char *)off_1C63128;
                          sub_2333C0(v135 + 1, &v160);
                          sub_233E40((__int64)&v160);
                          __cxa_throw(
                            v135,
                            (struct type_info *)&`typeinfo for'default_exception,
                            (void (*)(void *))sub_230E50);
                        }
                        v89 = (unsigned int *)sub_186B300(v56 - 2, v88);
                        v56 = v89 + 2;
                        *v89 = v87;
                        v90 = v89[1];
                        *(_QWORD *)(a1 + 88) = v56;
                        v58 = &v56[v90];
                      }
                      else
                      {
                        v58 = &v56[v57];
                      }
                    }
                    else
                    {
                      v117 = (_QWORD *)sub_186B270(0x10u);
                      *v117 = 2;
                      v56 = v117 + 1;
                      *(_QWORD *)(a1 + 88) = v56;
                      v58 = v56;
                    }
                    *v58 = v55;
                    ++*(v56 - 1);
                  }
LABEL_29:
                  v10 = *(_QWORD *)(a1 + 80);
                  v16 = v10 + v15;
LABEL_30:
                  v18 = *(_DWORD *)(v16 + 12);
                  if ( v18 >= v21 )
                    break;
                  goto LABEL_16;
                }
                if ( v39 > 3 )
                {
                  if ( (unsigned int)(v39 - 4) > 5 )
                    goto LABEL_28;
                  if ( v10 )
                  {
                    v48 = *(unsigned int *)(v10 - 4);
                    if ( (_DWORD)v48 != *(_DWORD *)(v10 - 8) )
                      goto LABEL_63;
                    v67 = (unsigned int)(3 * v48 + 1) >> 1;
                    v68 = 16 * v67 + 8;
                    if ( 16 * (int)v48 + 8 >= v68 || (unsigned int)v48 >= v67 )
                    {
                      v140 = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0(&v160, "Overflow encountered when expanding vector");
                      *v140 = (char *)off_1C63128;
                      sub_2333C0(v140 + 1, &v160);
                      sub_233E40((__int64)&v160);
                      __cxa_throw(
                        v140,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
LABEL_115:
                    a2 = v68;
                    v75 = (unsigned int *)sub_186B300((void *)(v10 - 8), v68);
                    v10 = (__int64)(v75 + 2);
                    *(_QWORD *)(a1 + 80) = v75 + 2;
                    *v75 = v67;
                    v49 = (__int64)&v75[4 * v75[1] + 2];
                    goto LABEL_64;
                  }
LABEL_168:
                  v112 = (_QWORD *)sub_186B270(0x28u);
                  *v112 = 2;
                  v10 = (__int64)(v112 + 1);
                  *(_QWORD *)(a1 + 80) = v112 + 1;
                  v49 = (__int64)(v112 + 1);
                  goto LABEL_64;
                }
                if ( v39 != 2 )
                  goto LABEL_28;
                a2 = *(_QWORD *)(v22 + 40);
                if ( !(unsigned __int8)sub_15D2CB0(*(_QWORD *)(a1 + 8), a2) )
                  goto LABEL_28;
                v40 = *(_QWORD **)(a1 + 80);
                if ( v40 )
                {
                  v41 = *((unsigned int *)v40 - 1);
                  if ( (_DWORD)v41 == *((_DWORD *)v40 - 2) )
                  {
                    v83 = (unsigned int)(3 * v41 + 1) >> 1;
                    v84 = 16 * v83 + 8;
                    if ( 16 * (int)v41 + 8 >= v84 || (unsigned int)v41 >= v83 )
                    {
                      v134 = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0(&v160, "Overflow encountered when expanding vector");
                      *v134 = (char *)off_1C63128;
                      sub_2333C0(v134 + 1, &v160);
                      sub_233E40((__int64)&v160);
                      __cxa_throw(
                        v134,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    a2 = v84;
                    v85 = (unsigned int *)sub_186B300(v40 - 1, v84);
                    v40 = v85 + 2;
                    *v85 = v83;
                    v86 = v85[1];
                    *(_QWORD *)(a1 + 80) = v40;
                    v42 = &v40[2 * v86];
                  }
                  else
                  {
                    v42 = &v40[2 * v41];
                  }
                }
                else
                {
                  v118 = (_QWORD *)sub_186B270(0x28u);
                  *v118 = 2;
                  v40 = v118 + 1;
                  *(_QWORD *)(a1 + 80) = v118 + 1;
                  v42 = v118 + 1;
                }
                *((_BYTE *)v42 + 8) &= 0xFCu;
                *v42 = v22;
                *((_DWORD *)v42 + 3) = 0;
                ++*((_DWORD *)v40 - 1);
                goto LABEL_7;
              }
              v24 += 16;
              if ( (char *)v13 == v24 )
                goto LABEL_24;
            }
          }
          v30 = *(int **)(*(_QWORD *)(v17 + 16) + 24LL);
          v31 = v143 >> 1;
          v32 = v145 & 1;
          if ( v30 )
          {
            v33 = *v30;
            if ( !*v30 )
            {
              switch ( v30[1] )
              {
                case 2:
                case 7:
                  a2 = v17;
                  sub_78BF80(a1, v17, v32, v31, v12, v13);
                  goto LABEL_110;
                case 4:
                  a2 = v17;
                  sub_78B800(a1, v17, v32, v31, v12, v13);
                  goto LABEL_110;
                case 5:
                  a2 = v17;
                  sub_78C7C0(a1, v17, v32, v31, (_BYTE *)v12, v13);
                  goto LABEL_110;
                case 6:
                  a2 = v17;
                  sub_78D490(a1, v17, v32, v31, (_BYTE *)v12, v13);
                  goto LABEL_110;
                case 8:
                  v100 = *(_QWORD *)(a1 + 88);
                  if ( v100 )
                  {
                    v10 = (unsigned int)(*(_DWORD *)(v100 - 4) - 1);
                    v101 = *(_DWORD *)(v100 + 4LL * (unsigned int)v10);
                    *(_DWORD *)(v100 - 4) = v10;
                  }
                  else
                  {
                    v101 = MEMORY[0x3FFFFFFFC];
                  }
                  if ( v32 )
                  {
                    a2 = 1;
                    if ( !v143 )
                      v101 ^= 1u;
                    v152 = v101;
                    sub_7872D0(a1, 1u, (__int64)&v152, v10, v12, v13);
                    goto LABEL_110;
                  }
                  a2 = v17;
                  if ( (unsigned __int8)sub_78AE60(a1, v17, 0, v31) )
                    goto LABEL_110;
                  v102 = 2 * sub_78B030(a1, 0, v17);
                  v103 = *(_QWORD *)a1;
                  LODWORD(v160) = v102;
                  (*(void (__fastcall **)(__int64, __int64, _QWORD))(v103 + 64))(a1, v17, v102);
                  v104 = sub_78A8E0(a1, v101, v160);
                  v158[0] = (_BYTE *)__PAIR64__(v102, v101);
                  sub_78AC30(a1, 2u, (__int64)v158, v104, v105, v106);
                  v107 = v102 ^ 1;
                  v108 = v101 ^ 1;
                  v109 = sub_78A8E0(a1, v108, v107);
                  v157[0] = v108;
                  v157[1] = v107;
                  sub_78AC30(a1, 2u, (__int64)v157, v109, v110, v111);
                  if ( v143 )
                    LODWORD(v160) = v107;
                  break;
                case 9:
                  v93 = *(_QWORD *)(a1 + 88);
                  if ( v93 )
                  {
                    v94 = *(_DWORD *)(v93 - 4);
                    v95 = *(_DWORD *)(v93 + 4LL * (unsigned int)(v94 - 1));
                    v10 = (unsigned int)(v94 - 2);
                    v96 = *(_DWORD *)(v93 + 4 * v10);
                    *(_DWORD *)(v93 - 4) = v10;
                  }
                  else
                  {
                    v95 = MEMORY[0x3FFFFFFFC];
                    v96 = MEMORY[0x3FFFFFFF8];
                  }
                  if ( v32 )
                  {
                    if ( v143 )
                    {
                      v151 = v96;
                      sub_7872D0(a1, 1u, (__int64)&v151, v10, v12, v13);
                      a2 = 1;
                      v150 = v95 ^ 1;
                      sub_7872D0(a1, 1u, (__int64)&v150, v97, v98, v99);
                    }
                    else
                    {
                      a2 = 2;
                      v154[0] = v96 ^ 1;
                      v154[1] = v95;
                      sub_7872D0(a1, 2u, (__int64)v154, v10, v12, v13);
                    }
                  }
                  else
                  {
                    a2 = v17;
                    if ( !(unsigned __int8)sub_78AE60(a1, v17, 0, v31) )
                    {
                      v121 = 2 * sub_78B030(a1, 0, v17);
                      v122 = *(_QWORD *)a1;
                      LODWORD(v158[0]) = v121;
                      (*(void (__fastcall **)(__int64, __int64, _QWORD))(v122 + 64))(a1, v17, v121);
                      v123 = sub_78AA80(a1, v121 ^ 1, v96 ^ 1, v95);
                      LODWORD(v160) = v121 ^ 1;
                      HIDWORD(v160) = v96 ^ 1;
                      v161[0] = v95;
                      sub_78AC30(a1, 3u, (__int64)&v160, v123, v124, v125);
                      v126 = sub_78A8E0(a1, v96, (unsigned int)v158[0]);
                      v156[0] = v96;
                      v156[1] = v121;
                      sub_78AC30(a1, 2u, (__int64)v156, v126, v127, v128);
                      v129 = v95 ^ 1;
                      v130 = sub_78A8E0(a1, v129, (unsigned int)v158[0]);
                      v155[0] = v129;
                      v155[1] = v121;
                      sub_78AC30(a1, 2u, (__int64)v155, v130, v131, v132);
                      if ( v143 )
                        LODWORD(v158[0]) = v121 ^ 1;
                      a2 = (__int64)v158;
                      sub_787180((_QWORD *)(a1 + 88), (unsigned int *)v158);
                    }
                  }
                  goto LABEL_110;
                default:
                  v74 = 751;
                  sub_1872CE0("");
                  goto LABEL_109;
              }
LABEL_165:
              a2 = (__int64)&v160;
              sub_787180((_QWORD *)(a1 + 88), (unsigned int *)&v160);
              goto LABEL_110;
            }
            if ( *(_BYTE *)(a1 + 273) || *(_WORD *)(v17 + 4) )
              goto LABEL_108;
          }
          else
          {
            if ( *(_BYTE *)(a1 + 273) || *(_WORD *)(v17 + 4) )
            {
LABEL_108:
              v74 = 759;
              sub_1872CE0("");
LABEL_109:
              sub_1873130(114, v74);
            }
            v33 = -1;
          }
          if ( *(_DWORD *)(a1 + 24) != v33 )
            goto LABEL_108;
          v76 = (const void *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 192) + 88LL))(*(_QWORD *)(a1 + 192));
          if ( v76
            && (v77 = __dynamic_cast(
                        v76,
                        (const struct __class_type_info *)&`typeinfo for'sat::extension,
                        (const struct __class_type_info *)&`typeinfo for'pb::solver,
                        0)) != nullptr )
          {
            v78 = __dynamic_cast(
                    v77,
                    (const struct __class_type_info *)&`typeinfo for'sat::extension,
                    (const struct __class_type_info *)&`typeinfo for'euf::th_solver,
                    0);
          }
          else
          {
            v78 = (_QWORD *)sub_186B270(0x420u);
            sub_7AFB90(v78, *(_QWORD *)(a1 + 8), a1, *(unsigned int *)(a1 + 24));
            (*(void (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(a1 + 192) + 96LL))(*(_QWORD *)(a1 + 192), v78);
            v119 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 192) + 80LL))(*(_QWORD *)(a1 + 192));
            if ( v119 )
            {
              v120 = 0;
              do
              {
                v144 = v120;
                (*(void (__fastcall **)(_QWORD *))(*v78 + 144LL))(v78);
                v120 = v144 + 1;
              }
              while ( v119 != v144 + 1 );
            }
          }
          a2 = v17;
          LODWORD(v160) = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, _QWORD))(v78[6] + 40LL))(
                            v78 + 6,
                            v17,
                            v31,
                            v32);
          v82 = *(_QWORD *)(a1 + 88);
          if ( v82 )
            *(_DWORD *)(v82 - 4) -= *(_DWORD *)(v17 + 24);
          if ( (_DWORD)v160 != -2 )
          {
            if ( !v32 )
              goto LABEL_165;
            a2 = 1;
            v153 = v160;
            sub_7872D0(a1, 1u, (__int64)&v153, v79, v80, v81);
          }
LABEL_110:
          v10 = *(_QWORD *)(a1 + 80);
LABEL_111:
          --*(_DWORD *)(v10 - 4);
          continue;
        }
        break;
      }
      LOBYTE(v20) = 1;
LABEL_142:
      --*(_DWORD *)(v10 - 4);
      result = sub_78EBF0(a1, a2, v20, (v145 & 2) == 0, v12, v13);
      v10 = *(_QWORD *)(a1 + 80);
    }
  }
  return result;
}

