unsigned int *__fastcall sub_E24F50(_QWORD *a1)
{
  unsigned int *result; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned int v5; // r13d
  __int64 v6; // rax
  _QWORD *v7; // rdi
  unsigned int v8; // r12d
  __int64 (*v9)(void); // rax
  _QWORD *v10; // rdi
  _QWORD *v11; // rdi
  _QWORD *v12; // rdi
  _QWORD *v13; // rdi
  _QWORD *v14; // rdi
  _QWORD *v15; // rdi
  _QWORD *v16; // rdi
  _QWORD **v17; // rdi
  unsigned int *v18; // r14
  __int64 v19; // r12
  _QWORD *v20; // rdi
  unsigned int v21; // r14d
  __int64 (__fastcall *v22)(__int64); // rax
  _QWORD *v23; // rdi
  _QWORD *v24; // rdi
  _QWORD **v25; // rdi
  unsigned int v26; // eax
  _QWORD *v27; // r15
  __int64 (__fastcall *v28)(); // rax
  __int64 v29; // rax
  _QWORD *v30; // rdx
  unsigned int v31; // r14d
  __int64 v32; // rax
  unsigned int *v33; // rax
  __int64 v34; // rax
  unsigned int *v35; // rdx
  unsigned int v36; // r14d
  __int64 v37; // rax
  unsigned int *v38; // rax
  __int64 v39; // rax
  unsigned int *v40; // rdx
  unsigned int v41; // r14d
  __int64 v42; // rax
  unsigned int *v43; // rax
  _QWORD *v44; // r12
  void (__fastcall *v45)(_QWORD *, _QWORD); // r14
  __int64 (__fastcall *v46)(__int64); // rax
  _QWORD *v47; // rdi
  int v48; // esi
  unsigned int *v49; // r12
  _QWORD *v50; // rdi
  unsigned int v51; // r14d
  __int64 v52; // r15
  __int64 (*v53)(void); // rax
  _QWORD *v54; // rdi
  _QWORD *v55; // rdi
  _QWORD **v56; // rdi
  int v57; // eax
  __int64 v58; // rdi
  __int64 v59; // rsi
  unsigned int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rsi
  unsigned int v63; // r9d
  size_t v64; // rsi
  unsigned int *v65; // rax
  unsigned int v66; // r9d
  size_t v67; // rsi
  unsigned int *v68; // rax
  unsigned int v69; // r9d
  size_t v70; // rsi
  unsigned int *v71; // rax
  _QWORD *v72; // rax
  _QWORD *v73; // rax
  _QWORD *v74; // rax
  unsigned int v75; // r14d
  unsigned int *v76; // r12
  unsigned int v77; // r15d
  _QWORD *v78; // rdi
  unsigned int (*v79)(void); // rax
  _QWORD *v80; // rdi
  _QWORD **v81; // rdi
  _QWORD *v82; // r15
  __int64 (__fastcall *v83)(); // rax
  __int64 v84; // rax
  _QWORD *v85; // rcx
  unsigned int v86; // r8d
  __int64 v87; // rax
  unsigned int *v88; // rax
  __int64 v89; // rax
  _QWORD *v90; // rcx
  unsigned int v91; // r8d
  __int64 v92; // rax
  unsigned int *v93; // rax
  __int64 v94; // rax
  _QWORD *v95; // rcx
  unsigned int v96; // r8d
  __int64 v97; // rax
  unsigned int *v98; // rax
  _QWORD *v99; // rdi
  unsigned int v100; // r9d
  size_t v101; // rsi
  unsigned int *v102; // rax
  unsigned int v103; // r9d
  size_t v104; // rsi
  unsigned int *v105; // rax
  unsigned int v106; // r9d
  size_t v107; // rsi
  unsigned int *v108; // rax
  _QWORD *v109; // rax
  _QWORD *v110; // rax
  _QWORD *v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rdi
  __int64 v114; // rsi
  char **exception; // rbp
  char **v116; // rbp
  char **v117; // rbp
  char **v118; // rbp
  char **v119; // rbp
  char **v120; // rbp
  unsigned int *v121; // [rsp+0h] [rbp-80h]
  unsigned int v122; // [rsp+0h] [rbp-80h]
  unsigned int v123; // [rsp+0h] [rbp-80h]
  unsigned int v124; // [rsp+0h] [rbp-80h]
  unsigned int v125; // [rsp+0h] [rbp-80h]
  unsigned int v126; // [rsp+0h] [rbp-80h]
  unsigned int v127; // [rsp+0h] [rbp-80h]
  unsigned int v128; // [rsp+0h] [rbp-80h]
  unsigned int v129; // [rsp+0h] [rbp-80h]
  unsigned int v130; // [rsp+0h] [rbp-80h]
  unsigned int *v131; // [rsp+8h] [rbp-78h]
  unsigned int v132; // [rsp+8h] [rbp-78h]
  unsigned int v133; // [rsp+8h] [rbp-78h]
  unsigned int v134; // [rsp+8h] [rbp-78h]
  __int64 v135; // [rsp+10h] [rbp-70h]
  unsigned int *v136; // [rsp+10h] [rbp-70h]
  __int64 v137[11]; // [rsp+28h] [rbp-58h] BYREF

  result = (unsigned int *)a1[34];
  if ( !result || !*(result - 1) )
    return result;
  v3 = *result;
  v4 = 5 * v3;
  v5 = v3;
  v6 = a1[14];
  v7 = (_QWORD *)a1[13];
  v135 = v6 + 8 * v4;
  v8 = *(_DWORD *)(v135 + 36);
  v9 = *(__int64 (**)(void))(*v7 + 208LL);
  if ( (char *)v9 == (char *)sub_E23640
    && (v10 = (_QWORD *)v7[13], v9 = *(__int64 (**)(void))(*v10 + 208LL), (char *)v9 == (char *)sub_E23640)
    && (v11 = (_QWORD *)v10[13], v9 = *(__int64 (**)(void))(*v11 + 208LL), (char *)v9 == (char *)sub_E23640)
    && (v12 = (_QWORD *)v11[13], v9 = *(__int64 (**)(void))(*v12 + 208LL), (char *)v9 == (char *)sub_E23640)
    && (v13 = (_QWORD *)v12[13], v9 = *(__int64 (**)(void))(*v13 + 208LL), (char *)v9 == (char *)sub_E23640)
    && (v14 = (_QWORD *)v13[13], v9 = *(__int64 (**)(void))(*v14 + 208LL), (char *)v9 == (char *)sub_E23640)
    && (v15 = (_QWORD *)v14[13], v9 = *(__int64 (**)(void))(*v15 + 208LL), (char *)v9 == (char *)sub_E23640)
    && (v16 = (_QWORD *)v15[13], v9 = *(__int64 (**)(void))(*v16 + 208LL), (char *)v9 == (char *)sub_E23640)
    && (v17 = (_QWORD **)v16[13], v9 = (__int64 (*)(void))(*v17)[26], (char *)v9 == (char *)sub_E23640) )
  {
    result = (unsigned int *)(*(__int64 (__fastcall **)(_QWORD *))(*v17[13] + 208LL))(v17[13]);
  }
  else
  {
    result = (unsigned int *)v9();
  }
  if ( v8 < (unsigned int)result )
  {
    v44 = (_QWORD *)a1[13];
    v45 = *(void (__fastcall **)(_QWORD *, _QWORD))(*v44 + 200LL);
    v46 = *(__int64 (__fastcall **)(__int64))(*v44 + 208LL);
    if ( v46 == sub_E23640 )
    {
      v47 = (_QWORD *)v44[13];
      v46 = *(__int64 (__fastcall **)(__int64))(*v47 + 208LL);
      if ( v46 == sub_E23640 )
      {
        v47 = (_QWORD *)v47[13];
        v46 = *(__int64 (__fastcall **)(__int64))(*v47 + 208LL);
        if ( v46 == sub_E23640 )
        {
          v47 = (_QWORD *)v47[13];
          v46 = *(__int64 (__fastcall **)(__int64))(*v47 + 208LL);
          if ( v46 == sub_E23640 )
          {
            v47 = (_QWORD *)v47[13];
            v46 = *(__int64 (__fastcall **)(__int64))(*v47 + 208LL);
            if ( v46 == sub_E23640 )
            {
              v47 = (_QWORD *)v47[13];
              v46 = *(__int64 (__fastcall **)(__int64))(*v47 + 208LL);
              if ( v46 == sub_E23640 )
              {
                v47 = (_QWORD *)v47[13];
                v46 = *(__int64 (__fastcall **)(__int64))(*v47 + 208LL);
                if ( v46 == sub_E23640 )
                {
                  v47 = (_QWORD *)v47[13];
                  v46 = *(__int64 (__fastcall **)(__int64))(*v47 + 208LL);
                  if ( v46 == sub_E23640 )
                  {
                    v47 = (_QWORD *)v47[13];
                    v46 = *(__int64 (__fastcall **)(__int64))(*v47 + 208LL);
                    if ( v46 == sub_E23640 )
                    {
                      v48 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v47[13] + 208LL))(v47[13]);
LABEL_51:
                      v45(v44, (unsigned int)(v48 - *(_DWORD *)(v135 + 36)));
                      v49 = (unsigned int *)a1[34];
                      if ( v49 && (v121 = &v49[*(v49 - 1)], v49 != v121) )
                      {
                        while ( 1 )
                        {
                          v50 = (_QWORD *)a1[13];
                          v51 = v5;
                          v5 = *v49;
                          v52 = a1[14] + 40LL * *v49;
                          v53 = *(__int64 (**)(void))(*v50 + 208LL);
                          if ( (char *)v53 == (char *)sub_E23640
                            && (v54 = (_QWORD *)v50[13],
                                v53 = *(__int64 (**)(void))(*v54 + 208LL),
                                (char *)v53 == (char *)sub_E23640)
                            && (v55 = (_QWORD *)v54[13],
                                v53 = *(__int64 (**)(void))(*v55 + 208LL),
                                (char *)v53 == (char *)sub_E23640)
                            && (v56 = (_QWORD **)v55[13],
                                v53 = (__int64 (*)(void))(*v56)[26],
                                (char *)v53 == (char *)sub_E23640) )
                          {
                            v57 = (*(__int64 (__fastcall **)(_QWORD *))(*v56[13] + 208LL))(v56[13]);
                          }
                          else
                          {
                            v57 = v53();
                          }
                          if ( *(_DWORD *)(v52 + 36) != v57 )
                            break;
                          v58 = a1[13];
                          v59 = *(_QWORD *)v52;
                          if ( *(_QWORD *)(v52 + 16) )
                            sub_E5EC60(v58, v59, *(_QWORD *)(v52 + 16));
                          else
                            sub_E5EBF0(v58, v59);
                          if ( v121 == ++v49 )
                            goto LABEL_87;
                        }
                      }
                      else
                      {
LABEL_87:
                        v51 = v5;
                      }
                      result = (unsigned int *)a1[14];
                      v75 = v51 + 1;
                      if ( !result )
                        return result;
LABEL_89:
                      if ( v75 >= *(result - 1) )
                        return result;
                      v76 = &result[10 * v75];
                      v77 = v76[9];
                      if ( *(_DWORD *)(v135 + 36) == v77 )
                        goto LABEL_115;
                      while ( 1 )
                      {
                        v99 = (_QWORD *)a1[13];
                        v79 = *(unsigned int (**)(void))(*v99 + 208LL);
                        if ( (char *)v79 == (char *)sub_E23640
                          && (v78 = (_QWORD *)v99[13],
                              v79 = *(unsigned int (**)(void))(*v78 + 208LL),
                              (char *)v79 == (char *)sub_E23640)
                          && (v80 = (_QWORD *)v78[13],
                              v79 = *(unsigned int (**)(void))(*v80 + 208LL),
                              (char *)v79 == (char *)sub_E23640)
                          && (v81 = (_QWORD **)v80[13],
                              v79 = (unsigned int (*)(void))(*v81)[26],
                              (char *)v79 == (char *)sub_E23640) )
                        {
                          if ( (*(unsigned int (__fastcall **)(_QWORD *))(*v81[13] + 208LL))(v81[13]) >= v77 )
                            goto LABEL_113;
                        }
                        else if ( v79() >= v77 )
                        {
LABEL_113:
                          if ( !*((_BYTE *)v76 + 32) )
                            goto LABEL_114;
                          v112 = *((_QWORD *)v76 + 2);
                          v113 = a1[13];
                          v114 = *(_QWORD *)v76;
                          if ( v112 )
                          {
                            sub_E5EC60(v113, v114, v112);
                            result = (unsigned int *)a1[14];
                          }
                          else
                          {
                            sub_E5EBF0(v113, v114);
LABEL_114:
                            result = (unsigned int *)a1[14];
                          }
LABEL_115:
                          ++v75;
                          if ( !result )
                            return result;
                          goto LABEL_89;
                        }
                        v82 = (_QWORD *)a1[13];
                        v83 = *(__int64 (__fastcall **)())(*v82 + 192LL);
                        if ( v83 == sub_E263C0 )
                          break;
                        ((void (__fastcall *)(_QWORD))v83)(a1[13]);
LABEL_110:
                        v77 = v76[9];
                      }
                      v84 = v82[14];
                      if ( v84 )
                      {
                        v85 = (_QWORD *)v82[15];
                        v86 = *(_DWORD *)(v84 - 4);
                        if ( v85 )
                          goto LABEL_99;
                      }
                      else
                      {
                        v85 = (_QWORD *)v82[15];
                        v86 = 0;
                        if ( v85 )
                        {
LABEL_99:
                          v87 = *((unsigned int *)v85 - 1);
                          if ( (_DWORD)v87 == *((_DWORD *)v85 - 2) )
                          {
                            v106 = (unsigned int)(3 * v87 + 1) >> 1;
                            v107 = 4 * v106 + 8;
                            if ( 4 * (int)v87 + 8 >= (unsigned int)v107 || (unsigned int)v87 >= v106 )
                            {
                              exception = (char **)__cxa_allocate_exception(0x28u);
                              sub_24ABB0(v137, "Overflow encountered when expanding vector");
                              *exception = (char *)off_1C63128;
                              sub_2333C0(exception + 1, v137);
                              sub_233E40((__int64)v137);
                              __cxa_throw(
                                exception,
                                (struct type_info *)&`typeinfo for'default_exception,
                                (void (*)(void *))sub_230E50);
                            }
                            v134 = (unsigned int)(3 * v87 + 1) >> 1;
                            v127 = v86;
                            v108 = (unsigned int *)sub_186B300(v85 - 1, v107);
                            v86 = v127;
                            v85 = v108 + 2;
                            v82[15] = v108 + 2;
                            *v108 = v134;
                            v88 = &v108[v108[1] + 2];
                          }
                          else
                          {
                            v88 = (unsigned int *)v85 + v87;
                          }
LABEL_101:
                          *v88 = v86;
                          v89 = v82[19];
                          ++*((_DWORD *)v85 - 1);
                          if ( v89 )
                          {
                            v90 = (_QWORD *)v82[20];
                            v91 = *(_DWORD *)(v89 - 4);
                            if ( v90 )
                              goto LABEL_103;
                          }
                          else
                          {
                            v90 = (_QWORD *)v82[20];
                            v91 = 0;
                            if ( v90 )
                            {
LABEL_103:
                              v92 = *((unsigned int *)v90 - 1);
                              if ( (_DWORD)v92 == *((_DWORD *)v90 - 2) )
                              {
                                v103 = (unsigned int)(3 * v92 + 1) >> 1;
                                v104 = 4 * v103 + 8;
                                if ( 4 * (int)v92 + 8 >= (unsigned int)v104 || (unsigned int)v92 >= v103 )
                                {
                                  v116 = (char **)__cxa_allocate_exception(0x28u);
                                  sub_24ABB0(v137, "Overflow encountered when expanding vector");
                                  *v116 = (char *)off_1C63128;
                                  sub_2333C0(v116 + 1, v137);
                                  sub_233E40((__int64)v137);
                                  __cxa_throw(
                                    v116,
                                    (struct type_info *)&`typeinfo for'default_exception,
                                    (void (*)(void *))sub_230E50);
                                }
                                v133 = (unsigned int)(3 * v92 + 1) >> 1;
                                v126 = v91;
                                v105 = (unsigned int *)sub_186B300(v90 - 1, v104);
                                v91 = v126;
                                v90 = v105 + 2;
                                v82[20] = v105 + 2;
                                *v105 = v133;
                                v93 = &v105[v105[1] + 2];
                              }
                              else
                              {
                                v93 = (unsigned int *)v90 + v92;
                              }
LABEL_105:
                              *v93 = v91;
                              v94 = v82[24];
                              ++*((_DWORD *)v90 - 1);
                              if ( v94 )
                              {
                                v95 = (_QWORD *)v82[25];
                                v96 = *(_DWORD *)(v94 - 4);
                                if ( v95 )
                                  goto LABEL_107;
                              }
                              else
                              {
                                v95 = (_QWORD *)v82[25];
                                v96 = 0;
                                if ( v95 )
                                {
LABEL_107:
                                  v97 = *((unsigned int *)v95 - 1);
                                  if ( (_DWORD)v97 == *((_DWORD *)v95 - 2) )
                                  {
                                    v100 = (unsigned int)(3 * v97 + 1) >> 1;
                                    v101 = 4 * v100 + 8;
                                    if ( 4 * (int)v97 + 8 >= (unsigned int)v101 || (unsigned int)v97 >= v100 )
                                    {
                                      v117 = (char **)__cxa_allocate_exception(0x28u);
                                      sub_24ABB0(v137, "Overflow encountered when expanding vector");
                                      *v117 = (char *)off_1C63128;
                                      sub_2333C0(v117 + 1, v137);
                                      sub_233E40((__int64)v137);
                                      __cxa_throw(
                                        v117,
                                        (struct type_info *)&`typeinfo for'default_exception,
                                        (void (*)(void *))sub_230E50);
                                    }
                                    v132 = (unsigned int)(3 * v97 + 1) >> 1;
                                    v125 = v96;
                                    v102 = (unsigned int *)sub_186B300(v95 - 1, v101);
                                    v96 = v125;
                                    v95 = v102 + 2;
                                    v82[25] = v102 + 2;
                                    *v102 = v132;
                                    v98 = &v102[v102[1] + 2];
                                  }
                                  else
                                  {
                                    v98 = (unsigned int *)v95 + v97;
                                  }
                                  goto LABEL_109;
                                }
                              }
                              v130 = v96;
                              v111 = (_QWORD *)sub_186B270(0x10u);
                              v96 = v130;
                              *v111 = 2;
                              v95 = v111 + 1;
                              v82[25] = v111 + 1;
                              v98 = (unsigned int *)(v111 + 1);
LABEL_109:
                              *v98 = v96;
                              ++*((_DWORD *)v95 - 1);
                              goto LABEL_110;
                            }
                          }
                          v129 = v91;
                          v110 = (_QWORD *)sub_186B270(0x10u);
                          v91 = v129;
                          *v110 = 2;
                          v90 = v110 + 1;
                          v82[20] = v110 + 1;
                          v93 = (unsigned int *)(v110 + 1);
                          goto LABEL_105;
                        }
                      }
                      v128 = v86;
                      v109 = (_QWORD *)sub_186B270(0x10u);
                      v86 = v128;
                      v85 = v109 + 1;
                      *v109 = 2;
                      v82[15] = v109 + 1;
                      v88 = (unsigned int *)(v109 + 1);
                      goto LABEL_101;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      v47 = (_QWORD *)a1[13];
    }
    v48 = v46((__int64)v47);
    goto LABEL_51;
  }
  v18 = (unsigned int *)a1[34];
  if ( !v18 )
    return result;
  result = &v18[*(v18 - 1)];
  v136 = result;
  if ( v18 == result )
    return result;
  v131 = (unsigned int *)a1[34];
  do
  {
    v19 = a1[14] + 40LL * *v131;
    while ( 1 )
    {
      v20 = (_QWORD *)a1[13];
      v21 = *(_DWORD *)(v19 + 36);
      v22 = *(__int64 (__fastcall **)(__int64))(*v20 + 208LL);
      if ( v22 == sub_E23640 )
      {
        v23 = (_QWORD *)v20[13];
        v22 = *(__int64 (__fastcall **)(__int64))(*v23 + 208LL);
        if ( v22 == sub_E23640 )
        {
          v24 = (_QWORD *)v23[13];
          v22 = *(__int64 (__fastcall **)(__int64))(*v24 + 208LL);
          if ( v22 == sub_E23640 )
          {
            v25 = (_QWORD **)v24[13];
            v22 = (__int64 (__fastcall *)(__int64))(*v25)[26];
            if ( v22 == sub_E23640 )
            {
              v26 = (*(__int64 (__fastcall **)(_QWORD *))(*v25[13] + 208LL))(v25[13]);
              v27 = (_QWORD *)a1[13];
              if ( v26 >= v21 )
                break;
              goto LABEL_25;
            }
          }
        }
      }
      v60 = ((__int64 (*)(void))v22)();
      v27 = (_QWORD *)a1[13];
      if ( v60 >= v21 )
        break;
LABEL_25:
      v28 = *(__int64 (__fastcall **)())(*v27 + 192LL);
      if ( v28 == sub_E263C0 )
      {
        v29 = v27[14];
        if ( v29 )
        {
          v30 = (_QWORD *)v27[15];
          v31 = *(_DWORD *)(v29 - 4);
          if ( !v30 )
            goto LABEL_82;
        }
        else
        {
          v30 = (_QWORD *)v27[15];
          v31 = 0;
          if ( !v30 )
          {
LABEL_82:
            v73 = (_QWORD *)sub_186B270(0x10u);
            v30 = v73 + 1;
            *v73 = 2;
            v27[15] = v73 + 1;
            v33 = (unsigned int *)(v73 + 1);
            goto LABEL_30;
          }
        }
        v32 = *((unsigned int *)v30 - 1);
        if ( (_DWORD)v32 == *((_DWORD *)v30 - 2) )
        {
          v63 = (unsigned int)(3 * v32 + 1) >> 1;
          v64 = 4 * v63 + 8;
          if ( 4 * (int)v32 + 8 >= (unsigned int)v64 || (unsigned int)v32 >= v63 )
          {
            v120 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v137, "Overflow encountered when expanding vector");
            *v120 = (char *)off_1C63128;
            sub_2333C0(v120 + 1, v137);
            sub_233E40((__int64)v137);
            __cxa_throw(v120, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v122 = (unsigned int)(3 * v32 + 1) >> 1;
          v65 = (unsigned int *)sub_186B300(v30 - 1, v64);
          v30 = v65 + 2;
          v27[15] = v65 + 2;
          *v65 = v122;
          v33 = &v65[v65[1] + 2];
        }
        else
        {
          v33 = (unsigned int *)v30 + v32;
        }
LABEL_30:
        *v33 = v31;
        v34 = v27[19];
        ++*((_DWORD *)v30 - 1);
        if ( v34 )
        {
          v35 = (unsigned int *)v27[20];
          v36 = *(_DWORD *)(v34 - 4);
          if ( !v35 )
            goto LABEL_80;
        }
        else
        {
          v35 = (unsigned int *)v27[20];
          v36 = 0;
          if ( !v35 )
          {
LABEL_80:
            v72 = (_QWORD *)sub_186B270(0x10u);
            v35 = (unsigned int *)(v72 + 1);
            *v72 = 2;
            v38 = v35;
            v27[20] = v35;
            goto LABEL_34;
          }
        }
        v37 = *(v35 - 1);
        if ( (_DWORD)v37 == *(v35 - 2) )
        {
          v69 = (unsigned int)(3 * v37 + 1) >> 1;
          v70 = 4 * v69 + 8;
          if ( 4 * (int)v37 + 8 >= (unsigned int)v70 || (unsigned int)v37 >= v69 )
          {
            v118 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v137, "Overflow encountered when expanding vector");
            *v118 = (char *)off_1C63128;
            sub_2333C0(v118 + 1, v137);
            sub_233E40((__int64)v137);
            __cxa_throw(v118, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v124 = (unsigned int)(3 * v37 + 1) >> 1;
          v71 = (unsigned int *)sub_186B300(v35 - 2, v70);
          v35 = v71 + 2;
          v27[20] = v71 + 2;
          *v71 = v124;
          v38 = &v71[v71[1] + 2];
        }
        else
        {
          v38 = &v35[v37];
        }
LABEL_34:
        *v38 = v36;
        v39 = v27[24];
        ++*(v35 - 1);
        if ( v39 )
        {
          v40 = (unsigned int *)v27[25];
          v41 = *(_DWORD *)(v39 - 4);
          if ( !v40 )
            goto LABEL_84;
        }
        else
        {
          v40 = (unsigned int *)v27[25];
          v41 = 0;
          if ( !v40 )
          {
LABEL_84:
            v74 = (_QWORD *)sub_186B270(0x10u);
            v40 = (unsigned int *)(v74 + 1);
            *v74 = 2;
            v43 = v40;
            v27[25] = v40;
            goto LABEL_38;
          }
        }
        v42 = *(v40 - 1);
        if ( (_DWORD)v42 == *(v40 - 2) )
        {
          v66 = (unsigned int)(3 * v42 + 1) >> 1;
          v67 = 4 * v66 + 8;
          if ( 4 * (int)v42 + 8 >= (unsigned int)v67 || (unsigned int)v42 >= v66 )
          {
            v119 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v137, "Overflow encountered when expanding vector");
            *v119 = (char *)off_1C63128;
            sub_2333C0(v119 + 1, v137);
            sub_233E40((__int64)v137);
            __cxa_throw(v119, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v123 = (unsigned int)(3 * v42 + 1) >> 1;
          v68 = (unsigned int *)sub_186B300(v40 - 2, v67);
          v40 = v68 + 2;
          v27[25] = v68 + 2;
          *v68 = v123;
          v43 = &v68[v68[1] + 2];
        }
        else
        {
          v43 = &v40[v42];
        }
LABEL_38:
        *v43 = v41;
        ++*(v40 - 1);
      }
      else
      {
        ((void (__fastcall *)(_QWORD *))v28)(v27);
      }
    }
    v61 = *(_QWORD *)(v19 + 16);
    v62 = *(_QWORD *)v19;
    if ( v61 )
      sub_E5EC60(v27, v62, v61);
    else
      sub_E5EBF0(v27, v62);
    result = ++v131;
  }
  while ( v136 != v131 );
  return result;
}

