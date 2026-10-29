__int64 __fastcall sub_4CE1D0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r12
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int v8; // ebp
  unsigned int v9; // r14d
  void *v10; // rbx
  __int64 (__fastcall *v11)(__int64, __int64); // rdx
  char v12; // al
  _QWORD *v13; // rbp
  __int64 (__fastcall *v14)(__int64, __int64); // rax
  unsigned __int64 v15; // rsi
  __int64 (__fastcall *v16)(__int64, __int64); // rdx
  void *v17; // rbx
  __int64 (__fastcall *v18)(__int64, __int64); // rdx
  char v19; // al
  _QWORD *v20; // rbx
  __int64 v21; // r15
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r14
  __int64 (__fastcall *v26)(_QWORD *, unsigned int); // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 (__fastcall *v29)(_QWORD *, unsigned int); // rdx
  unsigned int v30; // r14d
  __int64 v31; // rax
  _QWORD *v32; // rdx
  __int64 i; // r15
  __int64 v34; // rsi
  int v35; // eax
  __int64 *v36; // rsi
  __int64 (__fastcall *v37)(_QWORD *, unsigned int); // rax
  __int64 v38; // rax
  __int64 v39; // r14
  unsigned int v40; // eax
  unsigned int v41; // r8d
  size_t v42; // rsi
  unsigned int *v43; // rax
  __int64 v44; // rsi
  __int64 v45; // rax
  _QWORD *v46; // rax
  __int64 j; // r14
  __int64 v48; // rsi
  int v49; // eax
  __int64 *v50; // rsi
  __int64 (__fastcall *v51)(_QWORD *, unsigned int); // rax
  __int64 v52; // rax
  __int64 v53; // r15
  unsigned int v54; // eax
  unsigned int v55; // r9d
  size_t v56; // rsi
  unsigned int *v57; // rax
  __int64 v58; // rsi
  __int64 v59; // rax
  _QWORD *v60; // rax
  unsigned int v61; // r15d
  __int64 v62; // r14
  __int64 v63; // rsi
  int v64; // eax
  __int64 *v65; // rsi
  __int64 (__fastcall *v66)(_QWORD *, unsigned int); // rax
  __int64 v67; // rax
  __int64 v68; // r8
  unsigned int v69; // eax
  unsigned int v70; // r9d
  size_t v71; // rsi
  unsigned int *v72; // rax
  __int64 v73; // rsi
  __int64 v74; // rax
  _QWORD *v75; // rax
  __int64 v76; // r14
  unsigned int v77; // r15d
  __int64 v78; // rsi
  int v79; // eax
  __int64 *v80; // rsi
  __int64 (__fastcall *v81)(_QWORD *, unsigned int); // rax
  __int64 v82; // rax
  __int64 v83; // r9
  unsigned int v84; // eax
  unsigned int v85; // r10d
  size_t v86; // rsi
  unsigned int *v87; // rax
  __int64 v88; // rsi
  __int64 v89; // rax
  _QWORD *v90; // rax
  void (__fastcall ***v91)(_QWORD); // rbx
  char **v94; // rbp
  __int64 v95; // rdx
  char **exception; // rbp
  __int64 v97; // rdx
  char **v98; // rbp
  __int64 v99; // rdx
  char **v100; // rbp
  __int64 v101; // rdx
  unsigned int v102; // [rsp+0h] [rbp-E8h]
  unsigned int v103; // [rsp+0h] [rbp-E8h]
  unsigned int v104; // [rsp+0h] [rbp-E8h]
  __int64 v105; // [rsp+0h] [rbp-E8h]
  __int64 v106; // [rsp+0h] [rbp-E8h]
  __int64 v107; // [rsp+0h] [rbp-E8h]
  __int64 v108; // [rsp+0h] [rbp-E8h]
  _QWORD *v109; // [rsp+8h] [rbp-E0h]
  unsigned int v110; // [rsp+10h] [rbp-D8h]
  unsigned int v111; // [rsp+14h] [rbp-D4h]
  __int64 v112; // [rsp+18h] [rbp-D0h]
  unsigned int v113; // [rsp+28h] [rbp-C0h]
  unsigned int v114; // [rsp+28h] [rbp-C0h]
  unsigned int v115; // [rsp+38h] [rbp-B0h]
  unsigned int v116; // [rsp+3Ch] [rbp-ACh]
  __int64 v117; // [rsp+40h] [rbp-A8h]
  __int64 v118; // [rsp+50h] [rbp-98h]
  void *v120; // [rsp+68h] [rbp-80h] BYREF
  void *v121; // [rsp+70h] [rbp-78h] BYREF
  void *v122; // [rsp+78h] [rbp-70h] BYREF
  _DWORD *v123; // [rsp+80h] [rbp-68h] BYREF
  void *ptr; // [rsp+88h] [rbp-60h] BYREF
  __int64 v125[11]; // [rsp+90h] [rbp-58h] BYREF

  v4 = a1 + 8;
  v5 = *(_QWORD *)(a2 + 8);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 24LL))(v5, a1 + 8) )
  {
    v5 = a3[1];
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 24LL))(v5, v4) )
      v5 = sub_4C50F0(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 24LL), v4);
  }
  v117 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 40LL))(v5, v4);
  v6 = *(_QWORD *)(a2 + 16);
  if ( !v6 )
  {
    v111 = 0;
    v7 = a3[2];
    if ( v7 )
      goto LABEL_6;
LABEL_114:
    v110 = 0;
    v8 = 0;
    goto LABEL_7;
  }
  v111 = *(_DWORD *)(v6 - 4);
  v7 = a3[2];
  if ( !v7 )
    goto LABEL_114;
LABEL_6:
  v110 = *(_DWORD *)(v7 - 4);
  v8 = v110;
LABEL_7:
  v9 = v111 - *(_DWORD *)(a2 + 24);
  v116 = v9;
  v115 = v8 - *((_DWORD *)a3 + 6);
  (*(void (__fastcall **)(void **, __int64))(*(_QWORD *)a2 + 200LL))(&v120, a2);
  (*(void (__fastcall **)(void **, __int64))(*(_QWORD *)a2 + 208LL))(&v121, a2);
  (*(void (__fastcall **)(void **, _QWORD *))(*a3 + 208LL))(&v122, a3);
  v123 = nullptr;
  v112 = v9;
  v118 = 8LL * v9;
  while ( 1 )
  {
    v10 = v121;
    v11 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v120 + 40LL);
    if ( v11 == sub_4C9890 )
    {
      if ( !(*(unsigned __int8 (**)(void))(*(_QWORD *)v120 + 16LL))() )
        goto LABEL_12;
      v12 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v10 + 16LL))(v10);
    }
    else
    {
      v12 = v11((__int64)v120, (__int64)v121);
    }
    if ( v12 )
      break;
LABEL_12:
    v13 = (_QWORD *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v120 + 24LL))(v120);
    v14 = *(__int64 (__fastcall **)(__int64, __int64))(*a3 + 200LL);
    if ( v14 != sub_4CBA50 )
    {
      v15 = (unsigned __int64)a3;
LABEL_107:
      v14((__int64)&ptr, v15);
      goto LABEL_17;
    }
    v15 = a3[6];
    v16 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 200LL);
    if ( v16 != v14 )
      goto LABEL_108;
    v15 = *(_QWORD *)(v15 + 48);
    v14 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 200LL);
    if ( v14 != v16 )
      goto LABEL_107;
    v15 = *(_QWORD *)(v15 + 48);
    v16 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 200LL);
    if ( v16 != v14 )
    {
LABEL_108:
      ((void (__fastcall *)(void **))v16)(&ptr);
      goto LABEL_17;
    }
    v15 = *(_QWORD *)(v15 + 48);
    (*(void (__fastcall **)(void **))(*(_QWORD *)v15 + 200LL))(&ptr);
LABEL_17:
    v109 = v13 + 2;
    while ( 1 )
    {
      v17 = v122;
      v18 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)ptr + 40LL);
      if ( v18 != sub_4C9890 )
        break;
      if ( (*(unsigned __int8 (**)(void))(*(_QWORD *)ptr + 16LL))() )
      {
        v19 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v17 + 16LL))(v17);
        goto LABEL_21;
      }
LABEL_22:
      v20 = (_QWORD *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)ptr + 24LL))(ptr);
      v21 = 0;
      if ( *(_DWORD *)(a1 + 40) )
      {
        while ( 1 )
        {
          v23 = *v13;
          v24 = 4 * v21;
          v29 = *(__int64 (__fastcall **)(_QWORD *, unsigned int))(*v13 + 16LL);
          v30 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4 * v21);
          if ( v29 == sub_4C98C0 )
          {
            v22 = v13[2];
            if ( !v22 || !*(_DWORD *)(v22 - 4) )
            {
              v15 = (unsigned __int64)(v13 + 2);
              (*(void (__fastcall **)(_QWORD *, _QWORD *))(v23 + 24))(v13, v109);
              v22 = v13[2];
              v24 = 4 * v21;
            }
            v25 = *(_QWORD *)(v22 + 8LL * v30);
          }
          else
          {
            v15 = v30;
            v31 = v29(v13, v30);
            v24 = 4 * v21;
            v25 = v31;
          }
          v26 = *(__int64 (__fastcall **)(_QWORD *, unsigned int))(*v20 + 16LL);
          v27 = *(unsigned int *)(*(_QWORD *)(a1 + 32) + v24);
          if ( v26 == sub_4C98C0 )
            break;
          v15 = (unsigned int)v27;
          if ( v25 != ((__int64 (__fastcall *)(_QWORD *, _QWORD, __int64 (__fastcall *)(_QWORD *, unsigned int), __int64, __int64))v26)(
                        v20,
                        (unsigned int)v27,
                        v26,
                        v23,
                        v24) )
            goto LABEL_37;
LABEL_33:
          if ( (unsigned int)++v21 >= *(_DWORD *)(a1 + 40) )
            goto LABEL_38;
        }
        v28 = v20[2];
        if ( !v28 || !*(_DWORD *)(v28 - 4) )
        {
          v102 = *(_DWORD *)(*(_QWORD *)(a1 + 32) + v24);
          v15 = (unsigned __int64)(v20 + 2);
          (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v20 + 24LL))(v20, v20 + 2);
          v28 = v20[2];
          v27 = v102;
        }
        if ( v25 == *(_QWORD *)(v28 + 8 * v27) )
          goto LABEL_33;
LABEL_37:
        (*(void (__fastcall **)(void *, unsigned __int64, __int64, __int64, __int64))(*(_QWORD *)ptr + 32LL))(
          ptr,
          v15,
          v28,
          v23,
          v24);
      }
      else
      {
LABEL_38:
        v32 = v123;
        if ( v123 )
          *(v123 - 1) = 0;
        if ( v116 )
        {
          for ( i = 0; i != v112; ++i )
          {
            v37 = *(__int64 (__fastcall **)(_QWORD *, unsigned int))(*v13 + 16LL);
            if ( v37 == sub_4C98C0 )
            {
              v38 = v13[2];
              if ( !v38 || !*(_DWORD *)(v38 - 4) )
              {
                (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v13 + 24LL))(v13, v109);
                v38 = v13[2];
                v32 = v123;
              }
              v39 = *(_QWORD *)(v38 + 8 * i);
              if ( v32 )
              {
LABEL_49:
                v40 = *((_DWORD *)v32 - 1);
                if ( v40 == *((_DWORD *)v32 - 2) )
                {
                  v41 = (3 * v40 + 1) >> 1;
                  v42 = 8 * v41 + 8;
                  if ( 8 * v40 + 8 >= (unsigned int)v42 || v40 >= v41 )
                  {
                    exception = (char **)__cxa_allocate_exception(0x28u);
                    sub_DFB18(v125, "Overflow encountered when expanding vector", v97);
                    *exception = (char *)off_1C63128;
                    sub_2333C0(exception + 1, v125);
                    sub_233E40((__int64)v125);
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v103 = (3 * v40 + 1) >> 1;
                  v43 = (unsigned int *)sub_186B300(v32 - 1, v42);
                  v44 = v43[1];
                  v32 = v43 + 2;
                  v123 = v43 + 2;
                  *v43 = v103;
                  LODWORD(v43) = v44;
                  v36 = &v32[v44];
                  v35 = (_DWORD)v43 + 1;
                }
                else
                {
                  v34 = v40;
                  v35 = v40 + 1;
                  v36 = &v32[v34];
                }
                goto LABEL_43;
              }
            }
            else
            {
              v45 = v37(v13, i);
              v32 = v123;
              v39 = v45;
              if ( v123 )
                goto LABEL_49;
            }
            v46 = (_QWORD *)sub_186B270(0x18u);
            v32 = v46 + 1;
            *v46 = 2;
            v35 = 1;
            v123 = v32;
            v36 = v32;
LABEL_43:
            *v36 = v39;
            *((_DWORD *)v32 - 1) = v35;
          }
        }
        if ( v115 )
        {
          for ( j = 0; v115 != j; ++j )
          {
            v51 = *(__int64 (__fastcall **)(_QWORD *, unsigned int))(*v20 + 16LL);
            if ( v51 == sub_4C98C0 )
            {
              v52 = v20[2];
              if ( !v52 || !*(_DWORD *)(v52 - 4) )
              {
                (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v20 + 24LL))(v20, v20 + 2);
                v52 = v20[2];
                v32 = v123;
              }
              v53 = *(_QWORD *)(v52 + 8 * j);
              if ( v32 )
              {
LABEL_64:
                v54 = *((_DWORD *)v32 - 1);
                if ( v54 == *((_DWORD *)v32 - 2) )
                {
                  v55 = (3 * v54 + 1) >> 1;
                  v56 = 8 * v55 + 8;
                  if ( 8 * v54 + 8 >= (unsigned int)v56 || v54 >= v55 )
                  {
                    v94 = (char **)__cxa_allocate_exception(0x28u);
                    sub_DFB18(v125, "Overflow encountered when expanding vector", v95);
                    *v94 = (char *)off_1C63128;
                    sub_2333C0(v94 + 1, v125);
                    sub_233E40((__int64)v125);
                    __cxa_throw(v94, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v104 = (3 * v54 + 1) >> 1;
                  v57 = (unsigned int *)sub_186B300(v32 - 1, v56);
                  v58 = v57[1];
                  v32 = v57 + 2;
                  v123 = v57 + 2;
                  *v57 = v104;
                  LODWORD(v57) = v58;
                  v50 = &v32[v58];
                  v49 = (_DWORD)v57 + 1;
                }
                else
                {
                  v48 = v54;
                  v49 = v54 + 1;
                  v50 = &v32[v48];
                }
                goto LABEL_58;
              }
            }
            else
            {
              v59 = v51(v20, j);
              v32 = v123;
              v53 = v59;
              if ( v123 )
                goto LABEL_64;
            }
            v60 = (_QWORD *)sub_186B270(0x18u);
            v32 = v60 + 1;
            v123 = v60 + 1;
            v50 = v60 + 1;
            *v60 = 2;
            v49 = 1;
LABEL_58:
            *v50 = v53;
            *((_DWORD *)v32 - 1) = v49;
          }
        }
        v61 = v116;
        if ( v116 < v111 )
        {
          v62 = v118;
          do
          {
            v66 = *(__int64 (__fastcall **)(_QWORD *, unsigned int))(*v13 + 16LL);
            if ( v66 == sub_4C98C0 )
            {
              v67 = v13[2];
              if ( !v67 || !*(_DWORD *)(v67 - 4) )
              {
                (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v13 + 24LL))(v13, v109);
                v67 = v13[2];
                v32 = v123;
              }
              v68 = *(_QWORD *)(v67 + v62);
              if ( v32 )
              {
LABEL_79:
                v69 = *((_DWORD *)v32 - 1);
                if ( v69 == *((_DWORD *)v32 - 2) )
                {
                  v70 = (3 * v69 + 1) >> 1;
                  v71 = 8 * v70 + 8;
                  if ( 8 * v69 + 8 >= (unsigned int)v71 || v69 >= v70 )
                  {
                    v98 = (char **)__cxa_allocate_exception(0x28u);
                    sub_DFB18(v125, "Overflow encountered when expanding vector", v99);
                    *v98 = (char *)off_1C63128;
                    sub_2333C0(v98 + 1, v125);
                    sub_233E40((__int64)v125);
                    __cxa_throw(v98, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v113 = (3 * v69 + 1) >> 1;
                  v105 = v68;
                  v72 = (unsigned int *)sub_186B300(v32 - 1, v71);
                  v73 = v72[1];
                  v32 = v72 + 2;
                  v123 = v72 + 2;
                  v68 = v105;
                  *v72 = v113;
                  LODWORD(v72) = v73;
                  v65 = &v32[v73];
                  v64 = (_DWORD)v72 + 1;
                }
                else
                {
                  v63 = v69;
                  v64 = v69 + 1;
                  v65 = &v32[v63];
                }
                goto LABEL_73;
              }
            }
            else
            {
              v74 = v66(v13, v61);
              v32 = v123;
              v68 = v74;
              if ( v123 )
                goto LABEL_79;
            }
            v106 = v68;
            v75 = (_QWORD *)sub_186B270(0x18u);
            v32 = v75 + 1;
            v68 = v106;
            v123 = v75 + 1;
            v65 = v75 + 1;
            *v75 = 2;
            v64 = 1;
LABEL_73:
            *v65 = v68;
            ++v61;
            v62 += 8;
            *((_DWORD *)v32 - 1) = v64;
          }
          while ( v61 != v111 );
        }
        v76 = 8LL * v115;
        v77 = v115;
        if ( v115 < v110 )
        {
          do
          {
            v81 = *(__int64 (__fastcall **)(_QWORD *, unsigned int))(*v20 + 16LL);
            if ( v81 == sub_4C98C0 )
            {
              v82 = v20[2];
              if ( !v82 || !*(_DWORD *)(v82 - 4) )
              {
                (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v20 + 24LL))(v20, v20 + 2);
                v82 = v20[2];
                v32 = v123;
              }
              v83 = *(_QWORD *)(v82 + v76);
              if ( v32 )
              {
LABEL_94:
                v84 = *((_DWORD *)v32 - 1);
                if ( v84 == *((_DWORD *)v32 - 2) )
                {
                  v85 = (3 * v84 + 1) >> 1;
                  v86 = 8 * v85 + 8;
                  if ( 8 * v84 + 8 >= (unsigned int)v86 || v84 >= v85 )
                  {
                    v100 = (char **)__cxa_allocate_exception(0x28u);
                    sub_DFB18(v125, "Overflow encountered when expanding vector", v101);
                    *v100 = (char *)off_1C63128;
                    sub_2333C0(v100 + 1, v125);
                    sub_233E40((__int64)v125);
                    __cxa_throw(
                      v100,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v114 = (3 * v84 + 1) >> 1;
                  v107 = v83;
                  v87 = (unsigned int *)sub_186B300(v32 - 1, v86);
                  v88 = v87[1];
                  v32 = v87 + 2;
                  v123 = v87 + 2;
                  v83 = v107;
                  *v87 = v114;
                  LODWORD(v87) = v88;
                  v80 = &v32[v88];
                  v79 = (_DWORD)v87 + 1;
                }
                else
                {
                  v78 = v84;
                  v79 = v84 + 1;
                  v80 = &v32[v78];
                }
                goto LABEL_88;
              }
            }
            else
            {
              v89 = v81(v20, v77);
              v32 = v123;
              v83 = v89;
              if ( v123 )
                goto LABEL_94;
            }
            v108 = v83;
            v90 = (_QWORD *)sub_186B270(0x18u);
            v32 = v90 + 1;
            v83 = v108;
            v123 = v90 + 1;
            v80 = v90 + 1;
            *v90 = 2;
            v79 = 1;
LABEL_88:
            *v80 = v83;
            ++v77;
            v76 += 8;
            *((_DWORD *)v32 - 1) = v79;
          }
          while ( v77 != v110 );
        }
        v15 = (unsigned __int64)&v123;
        (*(void (__fastcall **)(__int64, _DWORD **))(*(_QWORD *)v117 + 40LL))(v117, &v123);
        (*(void (__fastcall **)(void *))(*(_QWORD *)ptr + 32LL))(ptr);
      }
    }
    v15 = (unsigned __int64)v122;
    v19 = v18((__int64)ptr, (__int64)v122);
LABEL_21:
    if ( !v19 )
      goto LABEL_22;
    v91 = (void (__fastcall ***)(_QWORD))ptr;
    if ( ptr )
    {
      if ( (*((_DWORD *)ptr + 2))-- == 1 )
      {
        (**v91)(v91);
        sub_186B220(v91);
      }
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)v120 + 32LL))(v120);
  }
  if ( v123 )
    sub_186B220(v123 - 2);
  sub_4C2420((void (__fastcall ***)(_QWORD))v122);
  sub_4C2420((void (__fastcall ***)(_QWORD))v121);
  sub_4C2420((void (__fastcall ***)(_QWORD))v120);
  return v117;
}

