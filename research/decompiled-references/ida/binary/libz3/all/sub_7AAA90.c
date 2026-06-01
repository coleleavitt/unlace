__int64 __fastcall sub_7AAA90(__int64 a1, unsigned int a2, __int64 a3)
{
  char **v3; // r14
  char **v4; // r14
  char **v5; // r14
  char **v6; // r15
  char **exception; // rbp
  char **v8; // r15
  char **v9; // r15
  __int64 result; // rax
  unsigned int *v12; // r8
  unsigned int *v13; // r12
  _DWORD *v14; // rbx
  unsigned int **v15; // rbp
  unsigned int *v16; // r15
  unsigned int *v17; // rdx
  _QWORD *v18; // rax
  unsigned int i; // r14d
  unsigned int *v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // ecx
  size_t v23; // rsi
  unsigned int *v24; // rax
  _DWORD *v25; // r15
  __int64 *v26; // rbp
  __int64 v27; // rcx
  int v28; // eax
  __int64 *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r12
  __int64 v32; // rax
  unsigned int v33; // eax
  unsigned int v34; // ecx
  size_t v35; // rsi
  unsigned int *v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // r14
  __int64 v39; // r12
  __int64 v40; // rdx
  int v41; // eax
  __int64 *v42; // rdx
  __int64 v43; // r15
  __int64 v44; // rax
  __int64 v45; // r15
  unsigned int v46; // eax
  unsigned int v47; // edx
  size_t v48; // rsi
  unsigned int *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // r12
  __int64 v52; // rax
  unsigned int v53; // eax
  int v54; // ecx
  __int64 *v55; // rdx
  __int64 v56; // rdx
  _QWORD *v57; // r12
  __int64 v58; // rax
  _QWORD *v59; // r14
  int v60; // edx
  __int64 v61; // r12
  _QWORD *v62; // rax
  __int64 *v63; // rcx
  __int64 v64; // r15
  int v65; // eax
  __int64 *v66; // rdx
  unsigned int v67; // eax
  unsigned int v68; // edx
  __int64 v69; // r14
  __int64 v70; // r12
  _QWORD *v71; // rdx
  unsigned int v72; // eax
  __int64 v73; // rcx
  int v74; // eax
  __int64 *v75; // rcx
  __int64 *v76; // rbx
  __int64 *v77; // r12
  __int64 v78; // rsi
  bool v79; // zf
  _QWORD *v80; // rax
  unsigned int v81; // r15d
  unsigned int v82; // ecx
  unsigned int *v83; // rax
  __int64 v84; // rcx
  unsigned int v85; // edx
  __int64 v86; // rax
  __int64 *v87; // r15
  __int64 v88; // r14
  __int64 v89; // rdx
  __int64 *v90; // rax
  __int64 *v91; // rdi
  __int64 v92; // rsi
  __int64 v93; // rsi
  __int64 *v94; // r14
  __int64 *v95; // r8
  __int64 v96; // rsi
  __int64 v97; // rdi
  unsigned int v98; // r15d
  unsigned int v99; // edx
  unsigned int *v100; // rax
  __int64 v101; // rdx
  _QWORD *v102; // rdx
  unsigned int v103; // ecx
  size_t v104; // rsi
  unsigned int *v105; // rax
  __int64 *v106; // r15
  __int64 *v107; // r12
  __int64 v108; // r14
  _QWORD *v109; // r12
  _QWORD *v110; // rdx
  __int64 v111; // rsi
  __int64 v112; // rdi
  _QWORD *v113; // r12
  _QWORD *v114; // rdx
  unsigned int v115; // [rsp+8h] [rbp-A0h]
  _DWORD *v116; // [rsp+8h] [rbp-A0h]
  unsigned int v117; // [rsp+8h] [rbp-A0h]
  unsigned int v118; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v119; // [rsp+8h] [rbp-A0h]
  unsigned int v120; // [rsp+8h] [rbp-A0h]
  _QWORD *v121; // [rsp+8h] [rbp-A0h]
  unsigned int *v122; // [rsp+10h] [rbp-98h]
  unsigned int v123; // [rsp+10h] [rbp-98h]
  __int64 *v124; // [rsp+10h] [rbp-98h]
  __int64 v125; // [rsp+18h] [rbp-90h]
  _DWORD *v127; // [rsp+20h] [rbp-88h]
  __int64 v128; // [rsp+28h] [rbp-80h]
  unsigned int v129; // [rsp+28h] [rbp-80h]
  __int64 v130[11]; // [rsp+50h] [rbp-58h] BYREF

  result = *(_QWORD *)(a1 + 80);
  if ( !*(_BYTE *)(result + 1528) )
    return result;
  v125 = *(_QWORD *)(a1 + 72);
  v12 = *(unsigned int **)(*(_QWORD *)(a1 + 432) + 48LL * *(unsigned int *)(*(_QWORD *)(a3 + 8) + 8LL));
  v128 = *(_QWORD *)(a1 + 432) + 48LL * *(unsigned int *)(*(_QWORD *)(a3 + 8) + 8LL);
  if ( !v12 )
    goto LABEL_40;
  v122 = &v12[*(v12 - 1)];
  if ( v12 == v122 )
    goto LABEL_40;
  v13 = *(unsigned int **)(*(_QWORD *)(a1 + 432) + 48LL * *(unsigned int *)(*(_QWORD *)(a3 + 8) + 8LL));
  v14 = nullptr;
  do
  {
    v15 = (unsigned int **)(*(_QWORD *)(a1 + 448) + 8LL * *v13);
    v16 = *v15;
    v17 = *v15;
    if ( *v15 && *(v16 - 1) )
    {
      if ( !v14 )
      {
        v18 = (_QWORD *)sub_186B270(0x10u);
        v14 = v18 + 1;
        v17 = *v15;
        i = 0;
        v20 = (unsigned int *)(v18 + 1);
        *v18 = 2;
        goto LABEL_9;
      }
      for ( i = 0; ; v16 = &v17[i] )
      {
        v21 = (unsigned int)*(v14 - 1);
        v20 = &v14[v21];
        if ( (_DWORD)v21 == *(v14 - 2) )
        {
          v22 = (unsigned int)(3 * v21 + 1) >> 1;
          v23 = 4 * v22 + 8;
          if ( 4 * (int)v21 + 8 >= (unsigned int)v23 || (unsigned int)v21 >= v22 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v130, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v130);
            sub_233E40((__int64)v130);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v115 = (unsigned int)(3 * v21 + 1) >> 1;
          v24 = (unsigned int *)sub_186B300(v14 - 2, v23);
          v14 = v24 + 2;
          v17 = *v15;
          *v24 = v115;
          v20 = &v24[v24[1] + 2];
        }
LABEL_9:
        ++i;
        *v20 = *v16;
        ++*(v14 - 1);
        if ( !v17 || i >= *(v17 - 1) )
          break;
      }
    }
    ++v13;
  }
  while ( v122 != v13 );
  if ( v14 )
  {
    v116 = &v14[*(v14 - 1)];
    if ( v116 != v14 )
    {
      v25 = v14;
      v26 = nullptr;
      while ( 1 )
      {
        v30 = *(_QWORD *)(a1 + 80);
        v31 = *(_QWORD *)(v30 + 2328);
        v32 = *v25 >> 1;
        if ( !v31 )
          goto LABEL_27;
        if ( (unsigned int)v32 < *(_DWORD *)(v31 - 4) )
          break;
        v31 = 0;
        if ( v26 )
        {
LABEL_28:
          v33 = *((_DWORD *)v26 - 1);
          if ( v33 == *((_DWORD *)v26 - 2) )
          {
            v34 = (3 * v33 + 1) >> 1;
            v35 = 8 * v34 + 8;
            if ( 8 * v33 + 8 >= (unsigned int)v35 || v33 >= v34 )
            {
              v9 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v130, "Overflow encountered when expanding vector");
              *v9 = (char *)off_1C63128;
              sub_2333C0(v9 + 1, v130);
              sub_233E40((__int64)v130);
              __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v123 = (3 * v33 + 1) >> 1;
            v36 = (unsigned int *)sub_186B300(v26 - 1, v35);
            v26 = (__int64 *)(v36 + 2);
            *v36 = v123;
            LODWORD(v36) = v36[1];
            v29 = &v26[(unsigned int)v36];
            v28 = (_DWORD)v36 + 1;
          }
          else
          {
            v27 = v33;
            v28 = v33 + 1;
            v29 = &v26[v27];
          }
          goto LABEL_21;
        }
LABEL_33:
        v37 = (_QWORD *)sub_186B270(0x18u);
        v26 = v37 + 1;
        *v37 = 2;
        v28 = 1;
        v29 = v26;
LABEL_21:
        *v29 = v31;
        ++v25;
        *((_DWORD *)v26 - 1) = v28;
        if ( v116 == v25 )
          goto LABEL_41;
      }
      v31 = *(_QWORD *)(v31 + 8 * v32);
      if ( v31 )
      {
        if ( ((*v25 ^ 1) & 1) == 0 || (v31 = sub_15EC2C0(*(_QWORD *)(v30 + 144), v31)) != 0 )
          ++*(_DWORD *)(v31 + 8);
      }
LABEL_27:
      if ( v26 )
        goto LABEL_28;
      goto LABEL_33;
    }
    v26 = nullptr;
  }
  else
  {
LABEL_40:
    v14 = nullptr;
    v26 = nullptr;
  }
LABEL_41:
  v38 = *(_QWORD *)(v128 + 24);
  if ( v38 )
  {
    v39 = v38 + 16LL * *(unsigned int *)(v38 - 4);
    if ( v39 != v38 )
    {
      while ( 1 )
      {
        v43 = *(_QWORD *)(a1 + 72);
        sub_15E1B70(v43);
        v44 = sub_15E1A70(v43);
        v45 = v44;
        if ( v44 )
          ++*(_DWORD *)(v44 + 8);
        if ( !v26 )
          break;
        v46 = *((_DWORD *)v26 - 1);
        if ( v46 == *((_DWORD *)v26 - 2) )
        {
          v47 = (3 * v46 + 1) >> 1;
          v48 = 8 * v47 + 8;
          if ( 8 * v46 + 8 >= (unsigned int)v48 || v46 >= v47 )
          {
            v5 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v130, "Overflow encountered when expanding vector");
            *v5 = (char *)off_1C63128;
            sub_2333C0(v5 + 1, v130);
            sub_233E40((__int64)v130);
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v117 = (3 * v46 + 1) >> 1;
          v49 = (unsigned int *)sub_186B300(v26 - 1, v48);
          v26 = (__int64 *)(v49 + 2);
          v38 += 16;
          *v49 = v117;
          LODWORD(v49) = v49[1];
          v26[(unsigned int)v49] = v45;
          *((_DWORD *)v26 - 1) = (_DWORD)v49 + 1;
          if ( v39 == v38 )
            goto LABEL_53;
        }
        else
        {
          v40 = v46;
          v41 = v46 + 1;
          v42 = &v26[v40];
LABEL_45:
          v38 += 16;
          *v42 = v45;
          *((_DWORD *)v26 - 1) = v41;
          if ( v39 == v38 )
            goto LABEL_53;
        }
      }
      v80 = (_QWORD *)sub_186B270(0x18u);
      v26 = v80 + 1;
      *v80 = 2;
      v41 = 1;
      v42 = v26;
      goto LABEL_45;
    }
  }
LABEL_53:
  v50 = *(_QWORD *)(a1 + 80);
  v51 = *(_QWORD *)(v50 + 2328);
  v52 = a2 >> 1;
  if ( !v51 )
    goto LABEL_58;
  if ( (unsigned int)v52 < *(_DWORD *)(v51 - 4) )
  {
    v51 = *(_QWORD *)(v51 + 8 * v52);
    if ( v51 )
    {
      if ( (a2 & 1) == 0 || (v51 = sub_15EC2C0(*(_QWORD *)(v50 + 144), v51)) != 0 )
        ++*(_DWORD *)(v51 + 8);
    }
LABEL_58:
    if ( v26 )
      goto LABEL_59;
    goto LABEL_113;
  }
  v51 = 0;
  if ( v26 )
  {
LABEL_59:
    v53 = *((_DWORD *)v26 - 1);
    if ( v53 == *((_DWORD *)v26 - 2) )
    {
      v98 = (3 * v53 + 1) >> 1;
      v99 = 8 * v98 + 8;
      if ( 8 * v53 + 8 >= v99 || v53 >= v98 )
      {
        v8 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v130, "Overflow encountered when expanding vector");
        *v8 = (char *)off_1C63128;
        sub_2333C0(v8 + 1, v130);
        sub_233E40((__int64)v130);
        __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v100 = (unsigned int *)sub_186B300(v26 - 1, v99);
      v101 = v100[1];
      v26 = (__int64 *)(v100 + 2);
      *v100 = v98;
      v53 = v101;
      v55 = &v26[v101];
      v54 = v53 + 1;
    }
    else
    {
      v54 = v53 + 1;
      v55 = &v26[v53];
    }
    goto LABEL_61;
  }
LABEL_113:
  v102 = (_QWORD *)sub_186B270(0x18u);
  *v102 = 2;
  v54 = 1;
  v53 = 0;
  v55 = v102 + 1;
  v26 = v55;
LABEL_61:
  *v55 = v51;
  v56 = *(_QWORD *)(a1 + 72);
  *((_DWORD *)v26 - 1) = v54;
  if ( *(_QWORD *)(v56 + 864) == v51 )
  {
    *((_DWORD *)v26 - 1) = v53;
    if ( v51 )
    {
      v79 = (*(_DWORD *)(v51 + 8))-- == 1;
      if ( v79 )
        sub_15D7BC0(v125, v51);
    }
  }
  v57 = *(_QWORD **)(a1 + 496);
  if ( v57 )
  {
    v58 = *((unsigned int *)v57 - 1);
    v59 = &v57[2 * v58];
    if ( (_DWORD)v58 == *((_DWORD *)v57 - 2) )
    {
      v129 = (unsigned int)(3 * v58 + 1) >> 1;
      v85 = 16 * v129 + 8;
      if ( 16 * (int)v58 + 8 >= v85 || (unsigned int)v58 >= (unsigned int)(3 * v58 + 1) >> 1 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v130, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v130);
        sub_233E40((__int64)v130);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v86 = sub_186B270(v85);
      v87 = *(__int64 **)(a1 + 496);
      v127 = (_DWORD *)v86;
      v57 = (_QWORD *)(v86 + 8);
      if ( v87 )
      {
        v88 = *((unsigned int *)v87 - 1);
        v89 = v86 + 8;
        *(_DWORD *)(v86 + 4) = v88;
        v90 = v87;
        v91 = &v87[2 * v88];
        if ( v87 != v91 )
        {
          do
          {
            v92 = *v90;
            v90 += 2;
            v89 += 16;
            *(_QWORD *)(v89 - 16) = v92;
            v93 = *(v90 - 1);
            *(v90 - 1) = 0;
            *(_QWORD *)(v89 - 8) = v93;
          }
          while ( v90 != v91 );
        }
        v124 = &v87[2 * v88];
        if ( (_DWORD)v88 )
        {
          do
          {
            v94 = (__int64 *)v87[1];
            if ( v94 )
            {
              v95 = &v94[*((unsigned int *)v94 - 1)];
              if ( v94 >= v95 )
                goto LABEL_104;
              do
              {
                while ( 1 )
                {
                  v96 = *v94;
                  if ( *v94 )
                  {
                    v97 = *v87;
                    v79 = (*(_DWORD *)(v96 + 8))-- == 1;
                    if ( v79 )
                      break;
                  }
                  if ( ++v94 >= v95 )
                    goto LABEL_103;
                }
                v119 = (unsigned __int64)v95;
                ++v94;
                sub_15D7BC0(v97, v96);
                v95 = (__int64 *)v119;
              }
              while ( (unsigned __int64)v94 < v119 );
LABEL_103:
              v94 = (__int64 *)v87[1];
              if ( v94 )
LABEL_104:
                sub_186B220(v94 - 1);
            }
            v87 += 2;
          }
          while ( v87 != v124 );
          v87 = *(__int64 **)(a1 + 496);
        }
        sub_186B220(v87 - 1);
        v58 = (unsigned int)v127[1];
        v59 = &v57[2 * v58];
      }
      else
      {
        *(_DWORD *)(v86 + 4) = 0;
        v59 = (_QWORD *)(v86 + 8);
        v58 = 0;
      }
      *(_QWORD *)(a1 + 496) = v57;
      *v127 = v129;
    }
  }
  else
  {
    v113 = (_QWORD *)sub_186B270(0x28u);
    *v113 = 2;
    v58 = 0;
    v57 = v113 + 1;
    *(_QWORD *)(a1 + 496) = v57;
    v59 = v57;
  }
  v60 = *((_DWORD *)v26 - 1);
  v59[1] = 0;
  *v59 = v125;
  if ( v60 )
  {
    v61 = *v26;
    if ( *v26 )
      ++*(_DWORD *)(v61 + 8);
    v62 = (_QWORD *)sub_186B270(0x18u);
    v63 = v62 + 1;
    *v62 = 2;
    v64 = 0;
    v65 = 1;
    v59[1] = v63;
    v66 = v63;
    while ( 1 )
    {
      *v63 = v61;
      ++v64;
      *((_DWORD *)v66 - 1) = v65;
      if ( (unsigned int)v64 >= *((_DWORD *)v26 - 1) )
        break;
      while ( 1 )
      {
        v61 = v26[v64];
        if ( v61 )
          ++*(_DWORD *)(v61 + 8);
        v67 = *((_DWORD *)v66 - 1);
        if ( v67 == *((_DWORD *)v66 - 2) )
          break;
        ++v64;
        v66[v67] = v61;
        *((_DWORD *)v66 - 1) = v67 + 1;
        if ( (unsigned int)v64 >= *((_DWORD *)v26 - 1) )
          goto LABEL_73;
      }
      v103 = (3 * v67 + 1) >> 1;
      v104 = 8 * v103 + 8;
      if ( 8 * v67 + 8 >= (unsigned int)v104 || v67 >= v103 )
      {
        v6 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v130, "Overflow encountered when expanding vector");
        *v6 = (char *)off_1C63128;
        sub_2333C0(v6 + 1, v130);
        sub_233E40((__int64)v130);
        __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v120 = (3 * v67 + 1) >> 1;
      v105 = (unsigned int *)sub_186B300(v66 - 1, v104);
      v66 = (__int64 *)(v105 + 2);
      v59[1] = v105 + 2;
      *v105 = v120;
      LODWORD(v105) = v105[1];
      v63 = &v66[(unsigned int)v105];
      v65 = (_DWORD)v105 + 1;
    }
LABEL_73:
    v57 = *(_QWORD **)(a1 + 496);
    v58 = *((unsigned int *)v57 - 1);
  }
  *((_DWORD *)v57 - 1) = v58 + 1;
  v68 = *(_DWORD *)(a1 + 504);
  if ( v68 + 1 < (int)v58 + 1 )
  {
    v106 = &v57[2 * v58];
    v107 = &v57[2 * v68];
    v108 = v107[1];
    v107[1] = 0;
    if ( v107 == v106 || v107 + 1 == v106 + 1 )
    {
      v109 = (_QWORD *)v106[1];
      if ( v109 )
      {
        v110 = &v109[*((unsigned int *)v109 - 1)];
        if ( v109 >= v110 )
          goto LABEL_135;
        do
        {
          v111 = *v109;
          if ( *v109 )
          {
            v112 = *v106;
            v79 = (*(_DWORD *)(v111 + 8))-- == 1;
            if ( v79 )
            {
              v121 = v110;
              sub_15D7BC0(v112, v111);
              v110 = v121;
            }
          }
          ++v109;
        }
        while ( v109 < v110 );
        v109 = (_QWORD *)v106[1];
        if ( v109 )
        {
LABEL_135:
          *((_DWORD *)v109 - 1) = 0;
          sub_186B220(v109 - 1);
        }
        v68 = *(_DWORD *)(a1 + 504);
      }
    }
    else
    {
      v107[1] = 0;
      v107[1] = v106[1];
    }
    v106[1] = v108;
  }
  v69 = *(_QWORD *)(a1 + 80);
  v118 = v68;
  v70 = sub_180C100(v69 + 2144, 24);
  *(_QWORD *)v70 = &off_1C4C070;
  *(_DWORD *)(v70 + 16) = v118;
  v71 = *(_QWORD **)(v69 + 2128);
  *(_QWORD *)(v70 + 8) = a1 + 504;
  if ( v71 )
  {
    v72 = *((_DWORD *)v71 - 1);
    if ( v72 == *((_DWORD *)v71 - 2) )
    {
      v81 = (3 * v72 + 1) >> 1;
      v82 = 8 * v81 + 8;
      if ( 8 * v72 + 8 >= v82 || v72 >= v81 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v130, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v130);
        sub_233E40((__int64)v130);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v83 = (unsigned int *)sub_186B300(v71 - 1, v82);
      v84 = v83[1];
      v71 = v83 + 2;
      *(_QWORD *)(v69 + 2128) = v83 + 2;
      *v83 = v81;
      LODWORD(v83) = v84;
      v75 = &v71[v84];
      v74 = (_DWORD)v83 + 1;
    }
    else
    {
      v73 = v72;
      v74 = v72 + 1;
      v75 = &v71[v73];
    }
  }
  else
  {
    v114 = (_QWORD *)sub_186B270(0x18u);
    *v114 = 2;
    v74 = 1;
    v71 = v114 + 1;
    *(_QWORD *)(v69 + 2128) = v71;
    v75 = v71;
  }
  *v75 = v70;
  *((_DWORD *)v71 - 1) = v74;
  ++*(_DWORD *)(a1 + 504);
  if ( v14 )
    sub_186B220(v14 - 2);
  v76 = v26;
  v77 = &v26[*((unsigned int *)v26 - 1)];
  if ( v26 < v77 )
  {
    do
    {
      v78 = *v76;
      if ( *v76 )
      {
        v79 = (*(_DWORD *)(v78 + 8))-- == 1;
        if ( v79 )
          sub_15D7BC0(v125, v78);
      }
      ++v76;
    }
    while ( v76 < v77 );
  }
  return sub_186B220(v26 - 1);
}

