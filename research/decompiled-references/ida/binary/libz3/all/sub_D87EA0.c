__int64 __fastcall sub_D87EA0(__int64 a1, __int64 a2, int a3)
{
  __int16 v6; // ax
  int v7; // r13d
  __int64 v8; // rax
  __int64 v9; // r14
  _QWORD *v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 *v14; // rcx
  __int64 v15; // rax
  int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 *v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 *v23; // rcx
  __int16 v24; // ax
  unsigned int v25; // r14d
  unsigned __int8 v26; // dl
  __int64 v27; // rax
  int v28; // r12d
  int v29; // r14d
  _QWORD *v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  _QWORD *v34; // rdi
  unsigned int v35; // eax
  __int64 v36; // rdx
  int v37; // eax
  __int64 *v38; // rdx
  _QWORD *v39; // rdi
  unsigned int v40; // eax
  __int64 v41; // rdx
  int v42; // eax
  _QWORD *v43; // rdx
  unsigned int v44; // r12d
  size_t v45; // rsi
  unsigned int *v46; // rax
  __int64 v47; // rdx
  unsigned __int8 v48; // dl
  __int64 v49; // rax
  unsigned int v50; // r15d
  size_t v51; // rsi
  unsigned int *v52; // rax
  unsigned int v53; // ebx
  size_t v54; // rsi
  unsigned int *v55; // rax
  __int64 v56; // rdx
  _QWORD *v57; // rdx
  __int64 v58; // r12
  int v59; // eax
  _QWORD *v60; // rdx
  __int64 v61; // r13
  unsigned int v62; // eax
  __int64 v63; // rcx
  int v64; // eax
  _QWORD *v65; // rcx
  __int64 v66; // r13
  _QWORD *v67; // rdx
  unsigned int v68; // eax
  __int64 v69; // rcx
  int v70; // eax
  _QWORD *v71; // rcx
  __int64 v72; // rsi
  __int64 v73; // rdi
  bool v74; // zf
  __int64 v75; // rsi
  __int64 v76; // rdi
  __int64 v77; // rax
  int v78; // edx
  _QWORD *v79; // rax
  _QWORD *v80; // rax
  _QWORD *v81; // rax
  unsigned int v82; // r12d
  unsigned int v83; // ecx
  unsigned int *v84; // rax
  __int64 v85; // rcx
  unsigned int v86; // r12d
  unsigned int v87; // ecx
  unsigned int *v88; // rax
  __int64 v89; // rcx
  unsigned int v90; // r15d
  unsigned int v91; // ecx
  unsigned int *v92; // rax
  __int64 v93; // rcx
  __int64 v94; // rax
  __int64 v95; // r13
  _QWORD *v96; // rdx
  unsigned int v97; // r14d
  unsigned int v98; // ecx
  unsigned int *v99; // rax
  __int64 v100; // rcx
  unsigned int v101; // eax
  _QWORD *v102; // rdx
  unsigned int v103; // r15d
  unsigned int v104; // eax
  unsigned int *v105; // rax
  _QWORD *v106; // rdx
  _QWORD *v107; // rdx
  _QWORD *v108; // rdx
  unsigned int v109; // r13d
  unsigned int v110; // eax
  unsigned int *v111; // rax
  unsigned int v112; // r13d
  unsigned int v113; // ecx
  unsigned int *v114; // rax
  _QWORD *v115; // rax
  _QWORD *v116; // rax
  _QWORD *v117; // rdx
  char **v118; // rbx
  char **v119; // r13
  char **exception; // r13
  char **v121; // r13
  char **v122; // r13
  char **v123; // r13
  __int64 v124[11]; // [rsp+10h] [rbp-58h] BYREF

  if ( !a3 )
  {
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    v34 = *(_QWORD **)(a1 + 56);
    if ( v34 )
    {
      v35 = *((_DWORD *)v34 - 1);
      if ( v35 == *((_DWORD *)v34 - 2) )
      {
        v44 = (3 * v35 + 1) >> 1;
        v45 = 8 * v44 + 8;
        if ( 8 * v35 + 8 >= (unsigned int)v45 || v35 >= v44 )
          goto LABEL_129;
        v46 = (unsigned int *)sub_186B300(v34 - 1, v45);
        v47 = v46[1];
        v34 = v46 + 2;
        *v46 = v44;
        *(_QWORD *)(a1 + 56) = v46 + 2;
        LODWORD(v46) = v47;
        v38 = &v34[v47];
        v37 = (_DWORD)v46 + 1;
      }
      else
      {
        v36 = v35;
        v37 = v35 + 1;
        v38 = &v34[v36];
      }
    }
    else
    {
      v80 = (_QWORD *)sub_186B270(0x18u);
      v34 = v80 + 1;
      *v80 = 2;
      v37 = 1;
      *(_QWORD *)(a1 + 56) = v34;
      v38 = v34;
    }
    *v38 = a2;
    *((_DWORD *)v34 - 1) = v37;
    v39 = *(_QWORD **)(a1 + 88);
    if ( v39 )
    {
      v40 = *((_DWORD *)v39 - 1);
      if ( v40 == *((_DWORD *)v39 - 2) )
      {
        v53 = (3 * v40 + 1) >> 1;
        v54 = 8 * v53 + 8;
        if ( 8 * v40 + 8 >= (unsigned int)v54 || v40 >= v53 )
          goto LABEL_129;
        v55 = (unsigned int *)sub_186B300(v39 - 1, v54);
        v56 = v55[1];
        v39 = v55 + 2;
        *v55 = v53;
        *(_QWORD *)(a1 + 88) = v55 + 2;
        LODWORD(v55) = v56;
        v43 = &v39[v56];
        v42 = (_DWORD)v55 + 1;
      }
      else
      {
        v41 = v40;
        v42 = v40 + 1;
        v43 = &v39[v41];
      }
    }
    else
    {
      v79 = (_QWORD *)sub_186B270(0x18u);
      v39 = v79 + 1;
      *v79 = 2;
      v42 = 1;
      *(_QWORD *)(a1 + 88) = v39;
      v43 = v39;
    }
    *v43 = 0;
    *((_DWORD *)v39 - 1) = v42;
    return 1;
  }
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == *(_QWORD *)(a1 + 120) )
    goto LABEL_21;
  v6 = *(_WORD *)(a2 + 4);
  if ( v6 )
  {
    if ( v6 == 2 )
      goto LABEL_6;
LABEL_21:
    v7 = 0;
LABEL_22:
    sub_D83200(*(__int64 **)(a1 + 144), a2);
    v24 = *(_WORD *)(a2 + 4);
    if ( v24 == 1 )
    {
      sub_D875F0(a1, a2);
      return 1;
    }
    if ( v24 == 2 )
    {
      v48 = 3;
      if ( a3 != 3 )
        v48 = (a3 - 1) & 3;
      v49 = *(_QWORD *)(a1 + 56);
      v28 = v48;
      if ( v49 )
        v29 = *(_DWORD *)(v49 - 4);
      else
        v29 = 0;
      v30 = *(_QWORD **)(a1 + 40);
      if ( v30 )
      {
        v31 = *((unsigned int *)v30 - 1);
        if ( (_DWORD)v31 != *((_DWORD *)v30 - 2) )
          goto LABEL_32;
        v50 = (unsigned int)(3 * v31 + 1) >> 1;
        v51 = 16 * v50 + 8;
        if ( 16 * (int)v31 + 8 >= (unsigned int)v51 || (unsigned int)v31 >= v50 )
          goto LABEL_129;
        goto LABEL_57;
      }
    }
    else
    {
      if ( v24 )
      {
        sub_1872CE0("");
        sub_1873130(114, 226);
      }
      v25 = *(_DWORD *)(a2 + 24);
      if ( !v25 )
      {
        v58 = *(_QWORD *)(a1 + 8);
        ++*(_DWORD *)(a2 + 8);
        v59 = sub_D82390(*(_QWORD *)(a1 + 144), *(_QWORD *)(a2 + 16), 0, 0, a1 + 480, a1 + 496);
        v60 = *(_QWORD **)(a1 + 56);
        if ( v59 == 5 )
        {
          ++*(_DWORD *)(a2 + 8);
          if ( v60 )
          {
            v101 = *((_DWORD *)v60 - 1);
            if ( v101 == *((_DWORD *)v60 - 2) )
            {
              v112 = (3 * v101 + 1) >> 1;
              v113 = 8 * v112 + 8;
              if ( 8 * v101 + 8 >= v113 || v101 >= v112 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v124, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v124);
                sub_233E40((__int64)v124);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v114 = (unsigned int *)sub_186B300(v60 - 1, v113);
              v60 = v114 + 2;
              *v114 = v112;
              v101 = v114[1];
              *(_QWORD *)(a1 + 56) = v60;
            }
          }
          else
          {
            v117 = (_QWORD *)sub_186B270(0x18u);
            *v117 = 2;
            v101 = 0;
            v60 = v117 + 1;
            *(_QWORD *)(a1 + 56) = v60;
          }
          v60[v101] = a2;
          *((_DWORD *)v60 - 1) = v101 + 1;
          v102 = *(_QWORD **)(a1 + 88);
          if ( v102 )
          {
            v25 = *((_DWORD *)v102 - 1);
            if ( v25 == *((_DWORD *)v102 - 2) )
            {
              v109 = (3 * v25 + 1) >> 1;
              v110 = 8 * v109 + 8;
              if ( 8 * v25 + 8 >= v110 || v25 >= v109 )
              {
                v121 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v124, "Overflow encountered when expanding vector");
                *v121 = (char *)off_1C63128;
                sub_2333C0(v121 + 1, v124);
                sub_233E40((__int64)v124);
                __cxa_throw(v121, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v111 = (unsigned int *)sub_186B300(v102 - 1, v110);
              v102 = v111 + 2;
              *v111 = v109;
              v25 = v111[1];
              *(_QWORD *)(a1 + 88) = v111 + 2;
            }
          }
          else
          {
            v116 = (_QWORD *)sub_186B270(0x18u);
            *v116 = 2;
            v102 = v116 + 1;
            *(_QWORD *)(a1 + 88) = v116 + 1;
          }
          v102[v25] = 0;
          *((_DWORD *)v102 - 1) = v25 + 1;
        }
        else
        {
          v61 = *(_QWORD *)(a1 + 480);
          if ( v61 )
            ++*(_DWORD *)(v61 + 8);
          if ( v60 )
          {
            v62 = *((_DWORD *)v60 - 1);
            if ( v62 == *((_DWORD *)v60 - 2) )
            {
              v90 = (3 * v62 + 1) >> 1;
              v91 = 8 * v90 + 8;
              if ( 8 * v62 + 8 >= v91 || v62 >= v90 )
              {
                v123 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v124, "Overflow encountered when expanding vector");
                *v123 = (char *)off_1C63128;
                sub_2333C0(v123 + 1, v124);
                sub_233E40((__int64)v124);
                __cxa_throw(v123, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v92 = (unsigned int *)sub_186B300(v60 - 1, v91);
              v93 = v92[1];
              v60 = v92 + 2;
              *v92 = v90;
              *(_QWORD *)(a1 + 56) = v92 + 2;
              LODWORD(v92) = v93;
              v65 = &v60[v93];
              v64 = (_DWORD)v92 + 1;
            }
            else
            {
              v63 = v62;
              v64 = v62 + 1;
              v65 = &v60[v63];
            }
          }
          else
          {
            v107 = (_QWORD *)sub_186B270(0x18u);
            *v107 = 2;
            v64 = 1;
            v60 = v107 + 1;
            *(_QWORD *)(a1 + 56) = v60;
            v65 = v60;
          }
          *v65 = v61;
          v66 = *(_QWORD *)(a1 + 496);
          *((_DWORD *)v60 - 1) = v64;
          if ( v66 )
          {
            v67 = *(_QWORD **)(a1 + 88);
            ++*(_DWORD *)(v66 + 8);
            if ( v67 )
            {
              v68 = *((_DWORD *)v67 - 1);
              if ( v68 == *((_DWORD *)v67 - 2) )
              {
                v97 = (3 * v68 + 1) >> 1;
                v98 = 8 * v97 + 8;
                if ( 8 * v68 + 8 >= v98 || v68 >= v97 )
                {
                  v119 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v124, "Overflow encountered when expanding vector");
                  *v119 = (char *)off_1C63128;
                  sub_2333C0(v119 + 1, v124);
                  sub_233E40((__int64)v124);
                  __cxa_throw(v119, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v99 = (unsigned int *)sub_186B300(v67 - 1, v98);
                v100 = v99[1];
                v67 = v99 + 2;
                *v99 = v97;
                *(_QWORD *)(a1 + 88) = v99 + 2;
                LODWORD(v99) = v100;
                v71 = &v67[v100];
                v70 = (_DWORD)v99 + 1;
              }
              else
              {
                v69 = v68;
                v70 = v68 + 1;
                v71 = &v67[v69];
              }
            }
            else
            {
              v108 = (_QWORD *)sub_186B270(0x18u);
              *v108 = 2;
              v70 = 1;
              v67 = v108 + 1;
              *(_QWORD *)(a1 + 88) = v67;
              v71 = v67;
            }
            *v71 = v66;
            *((_DWORD *)v67 - 1) = v70;
          }
          else
          {
            v94 = sub_15DE370(*(_QWORD *)(a1 + 8));
            v95 = v94;
            if ( v94 )
              ++*(_DWORD *)(v94 + 8);
            v96 = *(_QWORD **)(a1 + 88);
            if ( v96 )
            {
              v25 = *((_DWORD *)v96 - 1);
              if ( v25 == *((_DWORD *)v96 - 2) )
              {
                v103 = (3 * v25 + 1) >> 1;
                v104 = 8 * v103 + 8;
                if ( 8 * v25 + 8 >= v104 || v25 >= v103 )
                {
                  v122 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v124, "Overflow encountered when expanding vector");
                  *v122 = (char *)off_1C63128;
                  sub_2333C0(v122 + 1, v124);
                  sub_233E40((__int64)v124);
                  __cxa_throw(v122, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v105 = (unsigned int *)sub_186B300(v96 - 1, v104);
                v96 = v105 + 2;
                *v105 = v103;
                v25 = v105[1];
                *(_QWORD *)(a1 + 88) = v105 + 2;
              }
            }
            else
            {
              v115 = (_QWORD *)sub_186B270(0x18u);
              *v115 = 2;
              v96 = v115 + 1;
              *(_QWORD *)(a1 + 88) = v115 + 1;
            }
            v96[v25] = v95;
            *((_DWORD *)v96 - 1) = v25 + 1;
          }
          v72 = *(_QWORD *)(a1 + 496);
          if ( v72 )
          {
            v73 = *(_QWORD *)(a1 + 504);
            v74 = (*(_DWORD *)(v72 + 8))-- == 1;
            if ( v74 )
              sub_15D7BC0(v73, v72);
          }
          v75 = *(_QWORD *)(a1 + 480);
          *(_QWORD *)(a1 + 496) = 0;
          if ( v75 )
          {
            v76 = *(_QWORD *)(a1 + 488);
            v74 = (*(_DWORD *)(v75 + 8))-- == 1;
            if ( v74 )
              sub_15D7BC0(v76, v75);
          }
          *(_QWORD *)(a1 + 480) = 0;
          v77 = *(_QWORD *)(a1 + 40);
          if ( v77 )
          {
            v78 = *(_DWORD *)(v77 - 4);
            if ( v78 )
              *(_BYTE *)(v77 + 16LL * (unsigned int)(v78 - 1) + 8) |= 2u;
          }
        }
        v74 = (*(_DWORD *)(a2 + 8))-- == 1;
        if ( v74 )
          sub_15D7BC0(v58, a2);
        return 1;
      }
      v26 = 3;
      if ( a3 != 3 )
        v26 = (a3 - 1) & 3;
      v27 = *(_QWORD *)(a1 + 56);
      v28 = v26;
      if ( v27 )
        v29 = *(_DWORD *)(v27 - 4);
      else
        v29 = 0;
      v30 = *(_QWORD **)(a1 + 40);
      if ( v30 )
      {
        v31 = *((unsigned int *)v30 - 1);
        if ( (_DWORD)v31 != *((_DWORD *)v30 - 2) )
        {
LABEL_32:
          v32 = (__int64)&v30[2 * v31];
LABEL_33:
          *(_QWORD *)v32 = a2;
          *(_DWORD *)(v32 + 12) = v29;
          *(_DWORD *)(v32 + 8) = v7 | (16 * v28);
          ++*((_DWORD *)v30 - 1);
          return 0;
        }
        v50 = (unsigned int)(3 * v31 + 1) >> 1;
        v51 = 16 * v50 + 8;
        if ( 16 * (int)v31 + 8 >= (unsigned int)v51 || (unsigned int)v31 >= v50 )
          goto LABEL_129;
LABEL_57:
        v52 = (unsigned int *)sub_186B300(v30 - 1, v51);
        v30 = v52 + 2;
        *(_QWORD *)(a1 + 40) = v52 + 2;
        *v52 = v50;
        v32 = (__int64)&v52[4 * v52[1] + 2];
        goto LABEL_33;
      }
    }
    v81 = (_QWORD *)sub_186B270(0x28u);
    v30 = v81 + 1;
    *v81 = 2;
    *(_QWORD *)(a1 + 40) = v81 + 1;
    v32 = (__int64)(v81 + 1);
    goto LABEL_33;
  }
  if ( !*(_DWORD *)(a2 + 24) )
    goto LABEL_21;
LABEL_6:
  v7 = 1;
  v8 = sub_1680FB0(*(_QWORD *)(a1 + 32), a2, 0);
  v9 = v8;
  if ( !v8 )
    goto LABEL_22;
  v10 = *(_QWORD **)(a1 + 56);
  ++*(_DWORD *)(v8 + 8);
  if ( v10 )
  {
    v11 = *((_DWORD *)v10 - 1);
    if ( v11 == *((_DWORD *)v10 - 2) )
    {
      v82 = (3 * v11 + 1) >> 1;
      v83 = 8 * v82 + 8;
      if ( 8 * v11 + 8 >= v83 || v11 >= v82 )
        goto LABEL_129;
      v84 = (unsigned int *)sub_186B300(v10 - 1, v83);
      v85 = v84[1];
      v10 = v84 + 2;
      *v84 = v82;
      *(_QWORD *)(a1 + 56) = v84 + 2;
      LODWORD(v84) = v85;
      v14 = &v10[v85];
      v13 = (_DWORD)v84 + 1;
    }
    else
    {
      v12 = v11;
      v13 = v11 + 1;
      v14 = &v10[v12];
    }
  }
  else
  {
    v57 = (_QWORD *)sub_186B270(0x18u);
    *v57 = 2;
    v13 = 1;
    v10 = v57 + 1;
    *(_QWORD *)(a1 + 56) = v10;
    v14 = v10;
  }
  *v14 = v9;
  *((_DWORD *)v10 - 1) = v13;
  if ( a2 != v9 )
  {
    v15 = *(_QWORD *)(a1 + 40);
    if ( v15 )
    {
      v16 = *(_DWORD *)(v15 - 4);
      if ( v16 )
        *(_BYTE *)(v15 + 16LL * (unsigned int)(v16 - 1) + 8) |= 2u;
    }
  }
  v17 = sub_1680FB0(*(_QWORD *)(a1 + 72), a2, 0);
  v18 = v17;
  if ( v17 )
    ++*(_DWORD *)(v17 + 8);
  v19 = *(__int64 **)(a1 + 88);
  if ( !v19 )
  {
    v106 = (_QWORD *)sub_186B270(0x18u);
    *v106 = 2;
    v22 = 1;
    v19 = v106 + 1;
    *(_QWORD *)(a1 + 88) = v19;
    v23 = v19;
    goto LABEL_19;
  }
  v20 = *((_DWORD *)v19 - 1);
  if ( v20 == *((_DWORD *)v19 - 2) )
  {
    v86 = (3 * v20 + 1) >> 1;
    v87 = 8 * v86 + 8;
    if ( 8 * v20 + 8 < v87 && v20 < v86 )
    {
      v88 = (unsigned int *)sub_186B300(v19 - 1, v87);
      v89 = v88[1];
      v19 = (__int64 *)(v88 + 2);
      *v88 = v86;
      *(_QWORD *)(a1 + 88) = v88 + 2;
      LODWORD(v88) = v89;
      v23 = &v19[v89];
      v22 = (_DWORD)v88 + 1;
      goto LABEL_19;
    }
LABEL_129:
    v118 = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v124, "Overflow encountered when expanding vector");
    *v118 = (char *)off_1C63128;
    sub_2333C0(v118 + 1, v124);
    sub_233E40((__int64)v124);
    __cxa_throw(v118, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v21 = v20;
  v22 = v20 + 1;
  v23 = &v19[v21];
LABEL_19:
  *v23 = v18;
  *((_DWORD *)v19 - 1) = v22;
  return 1;
}

