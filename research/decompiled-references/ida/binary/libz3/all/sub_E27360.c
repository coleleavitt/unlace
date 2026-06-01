__int64 __fastcall sub_E27360(__int64 a1, unsigned int a2, __int64 a3)
{
  bool v6; // r14
  _QWORD *v7; // rbp
  __int64 (__fastcall *v8)(); // rax
  __int64 v9; // rdx
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned int v18; // ebx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // ebx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v26; // rdx
  unsigned int v27; // ebx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  unsigned int v31; // ebx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rax
  unsigned int v38; // r15d
  size_t v39; // rsi
  unsigned int *v40; // rax
  _QWORD *v41; // rcx
  __int64 v42; // rax
  unsigned int *v43; // rax
  __int64 v44; // rdx
  unsigned int v45; // ebx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  unsigned int v49; // ebx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdx
  unsigned int v53; // ebx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdi
  __int64 v57; // rax
  __int64 v58; // rdi
  __int64 v59; // rax
  __int64 v60; // rdi
  __int64 v61; // rax
  __int64 v62; // rdi
  __int64 v63; // rax
  unsigned int v64; // edx
  size_t v65; // rsi
  unsigned int *v66; // rax
  _QWORD *v67; // rcx
  unsigned int *v68; // rax
  unsigned int v69; // edx
  size_t v70; // rsi
  unsigned int *v71; // rax
  _QWORD *v72; // rcx
  unsigned int *v73; // rax
  unsigned int v74; // edx
  size_t v75; // rsi
  unsigned int *v76; // rax
  _QWORD *v77; // rcx
  unsigned int *v78; // rax
  __int64 v79; // rdi
  __int64 v80; // rax
  unsigned int v81; // edx
  size_t v82; // rsi
  unsigned int *v83; // rax
  _QWORD *v84; // rcx
  unsigned int *v85; // rax
  __int64 v86; // rdi
  __int64 v87; // rax
  unsigned int v88; // edx
  size_t v89; // rsi
  unsigned int *v90; // rax
  _QWORD *v91; // rcx
  unsigned int *v92; // rax
  __int64 v93; // rdi
  __int64 v94; // rax
  unsigned int v95; // edx
  size_t v96; // rsi
  unsigned int *v97; // rax
  _QWORD *v98; // rcx
  unsigned int *v99; // rax
  _QWORD *v100; // rax
  unsigned int v101; // edx
  size_t v102; // rsi
  unsigned int *v103; // rax
  _QWORD *v104; // rcx
  unsigned int *v105; // rax
  _QWORD *v106; // rax
  unsigned int v107; // r14d
  size_t v108; // rsi
  unsigned int *v109; // rax
  _QWORD *v110; // rcx
  unsigned int *v111; // rax
  _QWORD *v112; // rax
  _QWORD *v113; // rax
  _QWORD *v114; // rax
  _QWORD *v115; // rax
  _QWORD *v116; // rax
  _QWORD *v117; // rax
  _QWORD *v118; // rax
  char **exception; // rbp
  unsigned int v120; // [rsp+Ch] [rbp-6Ch]
  unsigned int v121; // [rsp+Ch] [rbp-6Ch]
  unsigned int v122; // [rsp+Ch] [rbp-6Ch]
  unsigned int v123; // [rsp+Ch] [rbp-6Ch]
  unsigned int v124; // [rsp+Ch] [rbp-6Ch]
  unsigned int v125; // [rsp+Ch] [rbp-6Ch]
  unsigned int v126; // [rsp+Ch] [rbp-6Ch]
  __int64 v127[11]; // [rsp+20h] [rbp-58h] BYREF

  v6 = a2 != 0;
  if ( *(_BYTE *)(a1 + 208) != 1 || a2 )
  {
    v26 = *(_QWORD *)(a1 + 112);
    v27 = 0;
    if ( v26 )
    {
LABEL_53:
      if ( v27 >= *(_DWORD *)(v26 - 4) )
        goto LABEL_56;
      do
      {
        v28 = v26 + 40LL * v27;
        if ( !*(_BYTE *)(v28 + 32) )
        {
          v34 = *(_QWORD *)(a1 + 272);
          *(_BYTE *)(v28 + 32) = 1;
          if ( v34 )
          {
            v35 = *(unsigned int *)(v34 - 4);
            if ( (_DWORD)v35 != *(_DWORD *)(v34 - 8) )
            {
              *(_DWORD *)(v34 + 4 * v35) = v27++;
              ++*(_DWORD *)(v34 - 4);
              goto LABEL_53;
            }
            v38 = (unsigned int)(3 * v35 + 1) >> 1;
            v39 = 4 * v38 + 8;
            if ( 4 * (int)v35 + 8 >= (unsigned int)v39 || (unsigned int)v35 >= v38 )
            {
LABEL_164:
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v127, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v127);
              sub_233E40((__int64)v127);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v40 = (unsigned int *)sub_186B300((void *)(v34 - 8), v39);
            v26 = *(_QWORD *)(a1 + 112);
            v41 = v40 + 2;
            *v40 = v38;
            v42 = v40[1];
            *(_QWORD *)(a1 + 272) = v41;
            v43 = (unsigned int *)v41 + v42;
          }
          else
          {
            v100 = (_QWORD *)sub_186B270(0x10u);
            v26 = *(_QWORD *)(a1 + 112);
            v41 = v100 + 1;
            *v100 = 2;
            *(_QWORD *)(a1 + 272) = v100 + 1;
            v43 = (unsigned int *)(v100 + 1);
          }
          *v43 = v27;
          ++*((_DWORD *)v41 - 1);
          if ( !v26 )
            break;
        }
        ++v27;
      }
      while ( v27 < *(_DWORD *)(v26 - 4) );
    }
LABEL_56:
    sub_E24F50((_QWORD *)a1);
    v29 = *(_QWORD *)(a1 + 272);
    if ( v29 )
      *(_DWORD *)(v29 - 4) = 0;
  }
  v7 = *(_QWORD **)(a1 + 104);
  v8 = *(__int64 (__fastcall **)())(*v7 + 368LL);
  if ( v8 != sub_E27360 )
    return ((__int64 (__fastcall *)(_QWORD *, _QWORD, __int64))v8)(v7, a2, a3);
  if ( *((_BYTE *)v7 + 208) != 1 || v6 )
  {
    v30 = v7[14];
    v31 = 0;
    if ( v30 )
    {
LABEL_59:
      if ( v31 >= *(_DWORD *)(v30 - 4) )
        goto LABEL_62;
      do
      {
        v32 = v30 + 40LL * v31;
        if ( !*(_BYTE *)(v32 + 32) )
        {
          v36 = v7[34];
          *(_BYTE *)(v32 + 32) = 1;
          if ( v36 )
          {
            v37 = *(unsigned int *)(v36 - 4);
            if ( (_DWORD)v37 != *(_DWORD *)(v36 - 8) )
            {
              *(_DWORD *)(v36 + 4 * v37) = v31++;
              ++*(_DWORD *)(v36 - 4);
              goto LABEL_59;
            }
            v64 = (unsigned int)(3 * v37 + 1) >> 1;
            v65 = 4 * v64 + 8;
            if ( 4 * (int)v37 + 8 >= (unsigned int)v65 || (unsigned int)v37 >= v64 )
              goto LABEL_164;
            v120 = (unsigned int)(3 * v37 + 1) >> 1;
            v66 = (unsigned int *)sub_186B300((void *)(v36 - 8), v65);
            v67 = v66 + 2;
            v7[34] = v66 + 2;
            *v66 = v120;
            v30 = v7[14];
            v68 = &v66[v66[1] + 2];
          }
          else
          {
            v106 = (_QWORD *)sub_186B270(0x10u);
            v30 = v7[14];
            v67 = v106 + 1;
            *v106 = 2;
            v7[34] = v106 + 1;
            v68 = (unsigned int *)(v106 + 1);
          }
          *v68 = v31;
          ++*((_DWORD *)v67 - 1);
          if ( !v30 )
            break;
        }
        ++v31;
      }
      while ( v31 < *(_DWORD *)(v30 - 4) );
    }
LABEL_62:
    sub_E24F50(v7);
    v33 = v7[34];
    if ( v33 )
      *(_DWORD *)(v33 - 4) = 0;
  }
  v7 = (_QWORD *)v7[13];
  v8 = *(__int64 (__fastcall **)())(*v7 + 368LL);
  if ( v8 != sub_E27360 )
    return ((__int64 (__fastcall *)(_QWORD *, _QWORD, __int64))v8)(v7, a2, a3);
  if ( *((_BYTE *)v7 + 208) != 1 || v6 )
  {
    v9 = v7[14];
    v10 = 0;
    if ( v9 )
    {
LABEL_10:
      if ( v10 >= *(_DWORD *)(v9 - 4) )
        goto LABEL_13;
      do
      {
        v11 = v9 + 40LL * v10;
        if ( !*(_BYTE *)(v11 + 32) )
        {
          v56 = v7[34];
          *(_BYTE *)(v11 + 32) = 1;
          if ( v56 )
          {
            v57 = *(unsigned int *)(v56 - 4);
            if ( (_DWORD)v57 != *(_DWORD *)(v56 - 8) )
            {
              *(_DWORD *)(v56 + 4 * v57) = v10++;
              ++*(_DWORD *)(v56 - 4);
              goto LABEL_10;
            }
            v81 = (unsigned int)(3 * v57 + 1) >> 1;
            v82 = 4 * v81 + 8;
            if ( 4 * (int)v57 + 8 >= (unsigned int)v82 || (unsigned int)v57 >= v81 )
              goto LABEL_164;
            v123 = (unsigned int)(3 * v57 + 1) >> 1;
            v83 = (unsigned int *)sub_186B300((void *)(v56 - 8), v82);
            v84 = v83 + 2;
            v7[34] = v83 + 2;
            *v83 = v123;
            v9 = v7[14];
            v85 = &v83[v83[1] + 2];
          }
          else
          {
            v112 = (_QWORD *)sub_186B270(0x10u);
            v9 = v7[14];
            v84 = v112 + 1;
            *v112 = 2;
            v7[34] = v112 + 1;
            v85 = (unsigned int *)(v112 + 1);
          }
          *v85 = v10;
          ++*((_DWORD *)v84 - 1);
          if ( !v9 )
            break;
        }
        ++v10;
      }
      while ( v10 < *(_DWORD *)(v9 - 4) );
    }
LABEL_13:
    sub_E24F50(v7);
    v12 = v7[34];
    if ( v12 )
      *(_DWORD *)(v12 - 4) = 0;
  }
  v7 = (_QWORD *)v7[13];
  v8 = *(__int64 (__fastcall **)())(*v7 + 368LL);
  if ( v8 != sub_E27360 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v8)(v7, a2, a3);
  if ( *((_BYTE *)v7 + 208) != 1 || v6 )
  {
    v44 = v7[14];
    v45 = 0;
    if ( v44 )
    {
LABEL_77:
      if ( v45 >= *(_DWORD *)(v44 - 4) )
        goto LABEL_80;
      do
      {
        v46 = v44 + 40LL * v45;
        if ( !*(_BYTE *)(v46 + 32) )
        {
          v58 = v7[34];
          *(_BYTE *)(v46 + 32) = 1;
          if ( v58 )
          {
            v59 = *(unsigned int *)(v58 - 4);
            if ( (_DWORD)v59 != *(_DWORD *)(v58 - 8) )
            {
              *(_DWORD *)(v58 + 4 * v59) = v45++;
              ++*(_DWORD *)(v58 - 4);
              goto LABEL_77;
            }
            v88 = (unsigned int)(3 * v59 + 1) >> 1;
            v89 = 4 * v88 + 8;
            if ( 4 * (int)v59 + 8 >= (unsigned int)v89 || (unsigned int)v59 >= v88 )
              goto LABEL_164;
            v124 = (unsigned int)(3 * v59 + 1) >> 1;
            v90 = (unsigned int *)sub_186B300((void *)(v58 - 8), v89);
            v91 = v90 + 2;
            v7[34] = v90 + 2;
            *v90 = v124;
            v44 = v7[14];
            v92 = &v90[v90[1] + 2];
          }
          else
          {
            v113 = (_QWORD *)sub_186B270(0x10u);
            v44 = v7[14];
            v91 = v113 + 1;
            *v113 = 2;
            v7[34] = v113 + 1;
            v92 = (unsigned int *)(v113 + 1);
          }
          *v92 = v45;
          ++*((_DWORD *)v91 - 1);
          if ( !v44 )
            break;
        }
        ++v45;
      }
      while ( v45 < *(_DWORD *)(v44 - 4) );
    }
LABEL_80:
    sub_E24F50(v7);
    v47 = v7[34];
    if ( v47 )
      *(_DWORD *)(v47 - 4) = 0;
  }
  v7 = (_QWORD *)v7[13];
  v8 = *(__int64 (__fastcall **)())(*v7 + 368LL);
  if ( v8 != sub_E27360 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v8)(v7, a2, a3);
  if ( *((_BYTE *)v7 + 208) != 1 || v6 )
  {
    v48 = v7[14];
    v49 = 0;
    if ( v48 )
    {
LABEL_83:
      if ( v49 >= *(_DWORD *)(v48 - 4) )
        goto LABEL_86;
      do
      {
        v50 = v48 + 40LL * v49;
        if ( !*(_BYTE *)(v50 + 32) )
        {
          v60 = v7[34];
          *(_BYTE *)(v50 + 32) = 1;
          if ( v60 )
          {
            v61 = *(unsigned int *)(v60 - 4);
            if ( (_DWORD)v61 != *(_DWORD *)(v60 - 8) )
            {
              *(_DWORD *)(v60 + 4 * v61) = v49++;
              ++*(_DWORD *)(v60 - 4);
              goto LABEL_83;
            }
            v69 = (unsigned int)(3 * v61 + 1) >> 1;
            v70 = 4 * v69 + 8;
            if ( 4 * (int)v61 + 8 >= (unsigned int)v70 || (unsigned int)v61 >= v69 )
              goto LABEL_164;
            v121 = (unsigned int)(3 * v61 + 1) >> 1;
            v71 = (unsigned int *)sub_186B300((void *)(v60 - 8), v70);
            v72 = v71 + 2;
            v7[34] = v71 + 2;
            *v71 = v121;
            v48 = v7[14];
            v73 = &v71[v71[1] + 2];
          }
          else
          {
            v114 = (_QWORD *)sub_186B270(0x10u);
            v48 = v7[14];
            v72 = v114 + 1;
            *v114 = 2;
            v7[34] = v114 + 1;
            v73 = (unsigned int *)(v114 + 1);
          }
          *v73 = v49;
          ++*((_DWORD *)v72 - 1);
          if ( !v48 )
            break;
        }
        ++v49;
      }
      while ( v49 < *(_DWORD *)(v48 - 4) );
    }
LABEL_86:
    sub_E24F50(v7);
    v51 = v7[34];
    if ( v51 )
      *(_DWORD *)(v51 - 4) = 0;
  }
  v7 = (_QWORD *)v7[13];
  v8 = *(__int64 (__fastcall **)())(*v7 + 368LL);
  if ( v8 != sub_E27360 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v8)(v7, a2, a3);
  if ( *((_BYTE *)v7 + 208) != 1 || v6 )
  {
    v52 = v7[14];
    v53 = 0;
    if ( v52 )
    {
LABEL_89:
      if ( v53 >= *(_DWORD *)(v52 - 4) )
        goto LABEL_92;
      do
      {
        v54 = v52 + 40LL * v53;
        if ( !*(_BYTE *)(v54 + 32) )
        {
          v62 = v7[34];
          *(_BYTE *)(v54 + 32) = 1;
          if ( v62 )
          {
            v63 = *(unsigned int *)(v62 - 4);
            if ( (_DWORD)v63 != *(_DWORD *)(v62 - 8) )
            {
              *(_DWORD *)(v62 + 4 * v63) = v53++;
              ++*(_DWORD *)(v62 - 4);
              goto LABEL_89;
            }
            v74 = (unsigned int)(3 * v63 + 1) >> 1;
            v75 = 4 * v74 + 8;
            if ( 4 * (int)v63 + 8 >= (unsigned int)v75 || (unsigned int)v63 >= v74 )
              goto LABEL_164;
            v122 = (unsigned int)(3 * v63 + 1) >> 1;
            v76 = (unsigned int *)sub_186B300((void *)(v62 - 8), v75);
            v77 = v76 + 2;
            v7[34] = v76 + 2;
            *v76 = v122;
            v52 = v7[14];
            v78 = &v76[v76[1] + 2];
          }
          else
          {
            v115 = (_QWORD *)sub_186B270(0x10u);
            v52 = v7[14];
            v77 = v115 + 1;
            *v115 = 2;
            v7[34] = v115 + 1;
            v78 = (unsigned int *)(v115 + 1);
          }
          *v78 = v53;
          ++*((_DWORD *)v77 - 1);
          if ( !v52 )
            break;
        }
        ++v53;
      }
      while ( v53 < *(_DWORD *)(v52 - 4) );
    }
LABEL_92:
    sub_E24F50(v7);
    v55 = v7[34];
    if ( v55 )
      *(_DWORD *)(v55 - 4) = 0;
  }
  v7 = (_QWORD *)v7[13];
  v8 = *(__int64 (__fastcall **)())(*v7 + 368LL);
  if ( v8 != sub_E27360 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v8)(v7, a2, a3);
  if ( *((_BYTE *)v7 + 208) != 1 || v6 )
  {
    v13 = v7[14];
    v14 = 0;
    if ( v13 )
    {
LABEL_28:
      if ( v14 >= *(_DWORD *)(v13 - 4) )
        goto LABEL_31;
      do
      {
        v15 = v13 + 40LL * v14;
        if ( !*(_BYTE *)(v15 + 32) )
        {
          v79 = v7[34];
          *(_BYTE *)(v15 + 32) = 1;
          if ( v79 )
          {
            v80 = *(unsigned int *)(v79 - 4);
            if ( (_DWORD)v80 != *(_DWORD *)(v79 - 8) )
            {
              *(_DWORD *)(v79 + 4 * v80) = v14++;
              ++*(_DWORD *)(v79 - 4);
              goto LABEL_28;
            }
            v95 = (unsigned int)(3 * v80 + 1) >> 1;
            v96 = 4 * v95 + 8;
            if ( 4 * (int)v80 + 8 >= (unsigned int)v96 || (unsigned int)v80 >= v95 )
              goto LABEL_164;
            v125 = (unsigned int)(3 * v80 + 1) >> 1;
            v97 = (unsigned int *)sub_186B300((void *)(v79 - 8), v96);
            v98 = v97 + 2;
            v7[34] = v97 + 2;
            *v97 = v125;
            v13 = v7[14];
            v99 = &v97[v97[1] + 2];
          }
          else
          {
            v116 = (_QWORD *)sub_186B270(0x10u);
            v13 = v7[14];
            v98 = v116 + 1;
            *v116 = 2;
            v7[34] = v116 + 1;
            v99 = (unsigned int *)(v116 + 1);
          }
          *v99 = v14;
          ++*((_DWORD *)v98 - 1);
          if ( !v13 )
            break;
        }
        ++v14;
      }
      while ( v14 < *(_DWORD *)(v13 - 4) );
    }
LABEL_31:
    sub_E24F50(v7);
    v16 = v7[34];
    if ( v16 )
      *(_DWORD *)(v16 - 4) = 0;
  }
  v7 = (_QWORD *)v7[13];
  v8 = *(__int64 (__fastcall **)())(*v7 + 368LL);
  if ( v8 != sub_E27360 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v8)(v7, a2, a3);
  if ( *((_BYTE *)v7 + 208) != 1 || v6 )
  {
    v17 = v7[14];
    v18 = 0;
    if ( v17 )
    {
LABEL_37:
      if ( v18 >= *(_DWORD *)(v17 - 4) )
        goto LABEL_40;
      do
      {
        v19 = v17 + 40LL * v18;
        if ( !*(_BYTE *)(v19 + 32) )
        {
          v86 = v7[34];
          *(_BYTE *)(v19 + 32) = 1;
          if ( v86 )
          {
            v87 = *(unsigned int *)(v86 - 4);
            if ( (_DWORD)v87 != *(_DWORD *)(v86 - 8) )
            {
              *(_DWORD *)(v86 + 4 * v87) = v18++;
              ++*(_DWORD *)(v86 - 4);
              goto LABEL_37;
            }
            v101 = (unsigned int)(3 * v87 + 1) >> 1;
            v102 = 4 * v101 + 8;
            if ( 4 * (int)v87 + 8 >= (unsigned int)v102 || (unsigned int)v87 >= v101 )
              goto LABEL_164;
            v126 = (unsigned int)(3 * v87 + 1) >> 1;
            v103 = (unsigned int *)sub_186B300((void *)(v86 - 8), v102);
            v104 = v103 + 2;
            v7[34] = v103 + 2;
            *v103 = v126;
            v17 = v7[14];
            v105 = &v103[v103[1] + 2];
          }
          else
          {
            v117 = (_QWORD *)sub_186B270(0x10u);
            v17 = v7[14];
            v104 = v117 + 1;
            *v117 = 2;
            v7[34] = v117 + 1;
            v105 = (unsigned int *)(v117 + 1);
          }
          *v105 = v18;
          ++*((_DWORD *)v104 - 1);
          if ( !v17 )
            break;
        }
        ++v18;
      }
      while ( v18 < *(_DWORD *)(v17 - 4) );
    }
LABEL_40:
    sub_E24F50(v7);
    v20 = v7[34];
    if ( v20 )
      *(_DWORD *)(v20 - 4) = 0;
  }
  v7 = (_QWORD *)v7[13];
  v8 = *(__int64 (__fastcall **)())(*v7 + 368LL);
  if ( v8 != sub_E27360 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v8)(v7, a2, a3);
  if ( *((_BYTE *)v7 + 208) != 1 || v6 )
  {
    v21 = v7[14];
    v22 = 0;
    if ( v21 )
    {
LABEL_46:
      if ( v22 >= *(_DWORD *)(v21 - 4) )
        goto LABEL_49;
      do
      {
        v23 = v21 + 40LL * v22;
        if ( !*(_BYTE *)(v23 + 32) )
        {
          v93 = v7[34];
          *(_BYTE *)(v23 + 32) = 1;
          if ( v93 )
          {
            v94 = *(unsigned int *)(v93 - 4);
            if ( (_DWORD)v94 != *(_DWORD *)(v93 - 8) )
            {
              *(_DWORD *)(v93 + 4 * v94) = v22++;
              ++*(_DWORD *)(v93 - 4);
              goto LABEL_46;
            }
            v107 = (unsigned int)(3 * v94 + 1) >> 1;
            v108 = 4 * v107 + 8;
            if ( 4 * (int)v94 + 8 >= (unsigned int)v108 || (unsigned int)v94 >= v107 )
              goto LABEL_164;
            v109 = (unsigned int *)sub_186B300((void *)(v93 - 8), v108);
            v21 = v7[14];
            v110 = v109 + 2;
            v7[34] = v109 + 2;
            *v109 = v107;
            v111 = &v109[v109[1] + 2];
          }
          else
          {
            v118 = (_QWORD *)sub_186B270(0x10u);
            v21 = v7[14];
            *v118 = 2;
            v110 = v118 + 1;
            v7[34] = v118 + 1;
            v111 = (unsigned int *)(v118 + 1);
          }
          *v111 = v22;
          ++*((_DWORD *)v110 - 1);
          if ( !v21 )
            break;
        }
        ++v22;
      }
      while ( v22 < *(_DWORD *)(v21 - 4) );
    }
LABEL_49:
    sub_E24F50(v7);
    v24 = v7[34];
    if ( v24 )
      *(_DWORD *)(v24 - 4) = 0;
  }
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)v7[13] + 368LL))(v7[13], a2, a3);
}

