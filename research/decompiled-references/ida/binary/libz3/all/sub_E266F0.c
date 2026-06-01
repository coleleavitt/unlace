__int64 __fastcall sub_E266F0(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // r15
  __int64 (__fastcall *v13)(); // rax
  __int64 v14; // rdx
  unsigned int v15; // ebx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned int v19; // ebx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned int v23; // ebx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned int v27; // ebx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  unsigned int v31; // ebx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned int v35; // ebx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  unsigned int v39; // ebx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  unsigned int v43; // ebx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rdi
  __int64 v54; // rax
  unsigned int v55; // edx
  size_t v56; // rsi
  unsigned int *v57; // rax
  _QWORD *v58; // rcx
  unsigned int *v59; // rax
  unsigned int v60; // edx
  size_t v61; // rsi
  unsigned int *v62; // rax
  _QWORD *v63; // rcx
  unsigned int *v64; // rax
  __int64 v65; // rdi
  __int64 v66; // rax
  unsigned int v67; // r15d
  size_t v68; // rsi
  unsigned int *v69; // rax
  _QWORD *v70; // rcx
  __int64 v71; // rax
  unsigned int *v72; // rax
  __int64 v73; // rdi
  __int64 v74; // rax
  __int64 v75; // rdi
  __int64 v76; // rax
  __int64 v77; // rdi
  __int64 v78; // rax
  unsigned int v79; // edx
  size_t v80; // rsi
  unsigned int *v81; // rax
  _QWORD *v82; // rcx
  unsigned int *v83; // rax
  unsigned int v84; // edx
  size_t v85; // rsi
  unsigned int *v86; // rax
  _QWORD *v87; // rcx
  unsigned int *v88; // rax
  __int64 v89; // rdi
  __int64 v90; // rax
  unsigned int v91; // edx
  size_t v92; // rsi
  unsigned int *v93; // rax
  _QWORD *v94; // rcx
  unsigned int *v95; // rax
  unsigned int v96; // edx
  size_t v97; // rsi
  unsigned int *v98; // rax
  _QWORD *v99; // rcx
  unsigned int *v100; // rax
  _QWORD *v101; // rax
  unsigned int v102; // edx
  size_t v103; // rsi
  unsigned int *v104; // rax
  _QWORD *v105; // rcx
  unsigned int *v106; // rax
  _QWORD *v107; // rax
  unsigned int v108; // r14d
  size_t v109; // rsi
  unsigned int *v110; // rax
  _QWORD *v111; // rcx
  unsigned int *v112; // rax
  _QWORD *v113; // rax
  _QWORD *v114; // rax
  _QWORD *v115; // rax
  _QWORD *v116; // rax
  _QWORD *v117; // rax
  _QWORD *v118; // rax
  _QWORD *v119; // rax
  char **exception; // rbp
  unsigned int v121; // [rsp+Ch] [rbp-6Ch]
  unsigned int v122; // [rsp+Ch] [rbp-6Ch]
  unsigned int v123; // [rsp+Ch] [rbp-6Ch]
  unsigned int v124; // [rsp+Ch] [rbp-6Ch]
  unsigned int v125; // [rsp+Ch] [rbp-6Ch]
  unsigned int v126; // [rsp+Ch] [rbp-6Ch]
  unsigned int v127; // [rsp+Ch] [rbp-6Ch]
  __int64 v128[11]; // [rsp+20h] [rbp-58h] BYREF

  v8 = 0;
  v9 = a2[14];
  if ( v9 )
  {
    while ( v8 < *(_DWORD *)(v9 - 4) )
    {
      v10 = v9 + 40LL * v8;
      if ( !*(_BYTE *)(v10 + 32) )
      {
        v47 = a2[34];
        *(_BYTE *)(v10 + 32) = 1;
        if ( v47 )
        {
          v48 = *(unsigned int *)(v47 - 4);
          if ( (_DWORD)v48 != *(_DWORD *)(v47 - 8) )
          {
            *(_DWORD *)(v47 + 4 * v48) = v8++;
            ++*(_DWORD *)(v47 - 4);
            continue;
          }
          v67 = (unsigned int)(3 * v48 + 1) >> 1;
          v68 = 4 * v67 + 8;
          if ( 4 * (int)v48 + 8 >= (unsigned int)v68 || (unsigned int)v48 >= v67 )
          {
LABEL_147:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v128, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v128);
            sub_233E40((__int64)v128);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v69 = (unsigned int *)sub_186B300((void *)(v47 - 8), v68);
          v9 = a2[14];
          v70 = v69 + 2;
          *v69 = v67;
          v71 = v69[1];
          a2[34] = v70;
          v72 = (unsigned int *)v70 + v71;
        }
        else
        {
          v101 = (_QWORD *)sub_186B270(0x10u);
          v9 = a2[14];
          v70 = v101 + 1;
          *v101 = 2;
          a2[34] = v101 + 1;
          v72 = (unsigned int *)(v101 + 1);
        }
        *v72 = v8;
        ++*((_DWORD *)v70 - 1);
        if ( !v9 )
          break;
      }
      ++v8;
    }
  }
  sub_E24F50(a2);
  v11 = a2[34];
  if ( v11 )
    *(_DWORD *)(v11 - 4) = 0;
  v12 = (_QWORD *)a2[13];
  v13 = *(__int64 (__fastcall **)())(*v12 + 288LL);
  if ( v13 != sub_E266F0 )
    goto LABEL_64;
  v14 = v12[14];
  v15 = 0;
  if ( v14 )
  {
LABEL_9:
    if ( v15 >= *(_DWORD *)(v14 - 4) )
      goto LABEL_12;
    do
    {
      v16 = v14 + 40LL * v15;
      if ( !*(_BYTE *)(v16 + 32) )
      {
        v49 = v12[34];
        *(_BYTE *)(v16 + 32) = 1;
        if ( v49 )
        {
          v50 = *(unsigned int *)(v49 - 4);
          if ( (_DWORD)v50 != *(_DWORD *)(v49 - 8) )
          {
            *(_DWORD *)(v49 + 4 * v50) = v15++;
            ++*(_DWORD *)(v49 - 4);
            goto LABEL_9;
          }
          v55 = (unsigned int)(3 * v50 + 1) >> 1;
          v56 = 4 * v55 + 8;
          if ( 4 * (int)v50 + 8 >= (unsigned int)v56 || (unsigned int)v50 >= v55 )
            goto LABEL_147;
          v121 = (unsigned int)(3 * v50 + 1) >> 1;
          v57 = (unsigned int *)sub_186B300((void *)(v49 - 8), v56);
          v58 = v57 + 2;
          v12[34] = v57 + 2;
          *v57 = v121;
          v14 = v12[14];
          v59 = &v57[v57[1] + 2];
        }
        else
        {
          v107 = (_QWORD *)sub_186B270(0x10u);
          v14 = v12[14];
          v58 = v107 + 1;
          *v107 = 2;
          v12[34] = v107 + 1;
          v59 = (unsigned int *)(v107 + 1);
        }
        *v59 = v15;
        ++*((_DWORD *)v58 - 1);
        if ( !v14 )
          break;
      }
    }
    while ( ++v15 < *(_DWORD *)(v14 - 4) );
  }
LABEL_12:
  sub_E24F50(v12);
  v17 = v12[34];
  if ( v17 )
    *(_DWORD *)(v17 - 4) = 0;
  v12 = (_QWORD *)v12[13];
  v13 = *(__int64 (__fastcall **)())(*v12 + 288LL);
  if ( v13 != sub_E266F0 )
    goto LABEL_64;
  v18 = v12[14];
  v19 = 0;
  if ( v18 )
  {
LABEL_16:
    if ( v19 >= *(_DWORD *)(v18 - 4) )
      goto LABEL_19;
    do
    {
      v20 = v18 + 40LL * v19;
      if ( !*(_BYTE *)(v20 + 32) )
      {
        v51 = v12[34];
        *(_BYTE *)(v20 + 32) = 1;
        if ( v51 )
        {
          v52 = *(unsigned int *)(v51 - 4);
          if ( (_DWORD)v52 != *(_DWORD *)(v51 - 8) )
          {
            *(_DWORD *)(v51 + 4 * v52) = v19++;
            ++*(_DWORD *)(v51 - 4);
            goto LABEL_16;
          }
          v60 = (unsigned int)(3 * v52 + 1) >> 1;
          v61 = 4 * v60 + 8;
          if ( 4 * (int)v52 + 8 >= (unsigned int)v61 || (unsigned int)v52 >= v60 )
            goto LABEL_147;
          v122 = (unsigned int)(3 * v52 + 1) >> 1;
          v62 = (unsigned int *)sub_186B300((void *)(v51 - 8), v61);
          v63 = v62 + 2;
          v12[34] = v62 + 2;
          *v62 = v122;
          v18 = v12[14];
          v64 = &v62[v62[1] + 2];
        }
        else
        {
          v113 = (_QWORD *)sub_186B270(0x10u);
          v18 = v12[14];
          v63 = v113 + 1;
          *v113 = 2;
          v12[34] = v113 + 1;
          v64 = (unsigned int *)(v113 + 1);
        }
        *v64 = v19;
        ++*((_DWORD *)v63 - 1);
        if ( !v18 )
          break;
      }
    }
    while ( ++v19 < *(_DWORD *)(v18 - 4) );
  }
LABEL_19:
  sub_E24F50(v12);
  v21 = v12[34];
  if ( v21 )
    *(_DWORD *)(v21 - 4) = 0;
  v12 = (_QWORD *)v12[13];
  v13 = *(__int64 (__fastcall **)())(*v12 + 288LL);
  if ( v13 != sub_E266F0 )
    goto LABEL_64;
  v22 = v12[14];
  v23 = 0;
  if ( v22 )
  {
LABEL_23:
    if ( v23 >= *(_DWORD *)(v22 - 4) )
      goto LABEL_26;
    do
    {
      v24 = v22 + 40LL * v23;
      if ( !*(_BYTE *)(v24 + 32) )
      {
        v53 = v12[34];
        *(_BYTE *)(v24 + 32) = 1;
        if ( v53 )
        {
          v54 = *(unsigned int *)(v53 - 4);
          if ( (_DWORD)v54 != *(_DWORD *)(v53 - 8) )
          {
            *(_DWORD *)(v53 + 4 * v54) = v23++;
            ++*(_DWORD *)(v53 - 4);
            goto LABEL_23;
          }
          v79 = (unsigned int)(3 * v54 + 1) >> 1;
          v80 = 4 * v79 + 8;
          if ( 4 * (int)v54 + 8 >= (unsigned int)v80 || (unsigned int)v54 >= v79 )
            goto LABEL_147;
          v123 = (unsigned int)(3 * v54 + 1) >> 1;
          v81 = (unsigned int *)sub_186B300((void *)(v53 - 8), v80);
          v82 = v81 + 2;
          v12[34] = v81 + 2;
          *v81 = v123;
          v22 = v12[14];
          v83 = &v81[v81[1] + 2];
        }
        else
        {
          v114 = (_QWORD *)sub_186B270(0x10u);
          v22 = v12[14];
          v82 = v114 + 1;
          *v114 = 2;
          v12[34] = v114 + 1;
          v83 = (unsigned int *)(v114 + 1);
        }
        *v83 = v23;
        ++*((_DWORD *)v82 - 1);
        if ( !v22 )
          break;
      }
    }
    while ( ++v23 < *(_DWORD *)(v22 - 4) );
  }
LABEL_26:
  sub_E24F50(v12);
  v25 = v12[34];
  if ( v25 )
    *(_DWORD *)(v25 - 4) = 0;
  v12 = (_QWORD *)v12[13];
  v13 = *(__int64 (__fastcall **)())(*v12 + 288LL);
  if ( v13 != sub_E266F0 )
    goto LABEL_64;
  v26 = v12[14];
  v27 = 0;
  if ( v26 )
  {
LABEL_30:
    if ( v27 >= *(_DWORD *)(v26 - 4) )
      goto LABEL_33;
    do
    {
      v28 = v26 + 40LL * v27;
      if ( !*(_BYTE *)(v28 + 32) )
      {
        v65 = v12[34];
        *(_BYTE *)(v28 + 32) = 1;
        if ( v65 )
        {
          v66 = *(unsigned int *)(v65 - 4);
          if ( (_DWORD)v66 != *(_DWORD *)(v65 - 8) )
          {
            *(_DWORD *)(v65 + 4 * v66) = v27++;
            ++*(_DWORD *)(v65 - 4);
            goto LABEL_30;
          }
          v91 = (unsigned int)(3 * v66 + 1) >> 1;
          v92 = 4 * v91 + 8;
          if ( 4 * (int)v66 + 8 >= (unsigned int)v92 || (unsigned int)v66 >= v91 )
            goto LABEL_147;
          v125 = (unsigned int)(3 * v66 + 1) >> 1;
          v93 = (unsigned int *)sub_186B300((void *)(v65 - 8), v92);
          v94 = v93 + 2;
          v12[34] = v93 + 2;
          *v93 = v125;
          v26 = v12[14];
          v95 = &v93[v93[1] + 2];
        }
        else
        {
          v116 = (_QWORD *)sub_186B270(0x10u);
          v26 = v12[14];
          v94 = v116 + 1;
          *v116 = 2;
          v12[34] = v116 + 1;
          v95 = (unsigned int *)(v116 + 1);
        }
        *v95 = v27;
        ++*((_DWORD *)v94 - 1);
        if ( !v26 )
          break;
      }
    }
    while ( ++v27 < *(_DWORD *)(v26 - 4) );
  }
LABEL_33:
  sub_E24F50(v12);
  v29 = v12[34];
  if ( v29 )
    *(_DWORD *)(v29 - 4) = 0;
  v12 = (_QWORD *)v12[13];
  v13 = *(__int64 (__fastcall **)())(*v12 + 288LL);
  if ( v13 != sub_E266F0 )
    goto LABEL_64;
  v30 = v12[14];
  v31 = 0;
  if ( v30 )
  {
LABEL_37:
    if ( v31 >= *(_DWORD *)(v30 - 4) )
      goto LABEL_40;
    do
    {
      v32 = v30 + 40LL * v31;
      if ( !*(_BYTE *)(v32 + 32) )
      {
        v73 = v12[34];
        *(_BYTE *)(v32 + 32) = 1;
        if ( v73 )
        {
          v74 = *(unsigned int *)(v73 - 4);
          if ( (_DWORD)v74 != *(_DWORD *)(v73 - 8) )
          {
            *(_DWORD *)(v73 + 4 * v74) = v31++;
            ++*(_DWORD *)(v73 - 4);
            goto LABEL_37;
          }
          v96 = (unsigned int)(3 * v74 + 1) >> 1;
          v97 = 4 * v96 + 8;
          if ( 4 * (int)v74 + 8 >= (unsigned int)v97 || (unsigned int)v74 >= v96 )
            goto LABEL_147;
          v126 = (unsigned int)(3 * v74 + 1) >> 1;
          v98 = (unsigned int *)sub_186B300((void *)(v73 - 8), v97);
          v99 = v98 + 2;
          v12[34] = v98 + 2;
          *v98 = v126;
          v30 = v12[14];
          v100 = &v98[v98[1] + 2];
        }
        else
        {
          v117 = (_QWORD *)sub_186B270(0x10u);
          v30 = v12[14];
          v99 = v117 + 1;
          *v117 = 2;
          v12[34] = v117 + 1;
          v100 = (unsigned int *)(v117 + 1);
        }
        *v100 = v31;
        ++*((_DWORD *)v99 - 1);
        if ( !v30 )
          break;
      }
    }
    while ( ++v31 < *(_DWORD *)(v30 - 4) );
  }
LABEL_40:
  sub_E24F50(v12);
  v33 = v12[34];
  if ( v33 )
    *(_DWORD *)(v33 - 4) = 0;
  v12 = (_QWORD *)v12[13];
  v13 = *(__int64 (__fastcall **)())(*v12 + 288LL);
  if ( v13 != sub_E266F0 )
    goto LABEL_64;
  v34 = v12[14];
  v35 = 0;
  if ( v34 )
  {
LABEL_44:
    if ( v35 >= *(_DWORD *)(v34 - 4) )
      goto LABEL_47;
    do
    {
      v36 = v34 + 40LL * v35;
      if ( !*(_BYTE *)(v36 + 32) )
      {
        v75 = v12[34];
        *(_BYTE *)(v36 + 32) = 1;
        if ( v75 )
        {
          v76 = *(unsigned int *)(v75 - 4);
          if ( (_DWORD)v76 != *(_DWORD *)(v75 - 8) )
          {
            *(_DWORD *)(v75 + 4 * v76) = v35++;
            ++*(_DWORD *)(v75 - 4);
            goto LABEL_44;
          }
          v84 = (unsigned int)(3 * v76 + 1) >> 1;
          v85 = 4 * v84 + 8;
          if ( 4 * (int)v76 + 8 >= (unsigned int)v85 || (unsigned int)v76 >= v84 )
            goto LABEL_147;
          v124 = (unsigned int)(3 * v76 + 1) >> 1;
          v86 = (unsigned int *)sub_186B300((void *)(v75 - 8), v85);
          v87 = v86 + 2;
          v12[34] = v86 + 2;
          *v86 = v124;
          v34 = v12[14];
          v88 = &v86[v86[1] + 2];
        }
        else
        {
          v118 = (_QWORD *)sub_186B270(0x10u);
          v34 = v12[14];
          v87 = v118 + 1;
          *v118 = 2;
          v12[34] = v118 + 1;
          v88 = (unsigned int *)(v118 + 1);
        }
        *v88 = v35;
        ++*((_DWORD *)v87 - 1);
        if ( !v34 )
          break;
      }
    }
    while ( ++v35 < *(_DWORD *)(v34 - 4) );
  }
LABEL_47:
  sub_E24F50(v12);
  v37 = v12[34];
  if ( v37 )
    *(_DWORD *)(v37 - 4) = 0;
  v12 = (_QWORD *)v12[13];
  v13 = *(__int64 (__fastcall **)())(*v12 + 288LL);
  if ( v13 != sub_E266F0 )
    goto LABEL_64;
  v38 = v12[14];
  v39 = 0;
  if ( v38 )
  {
LABEL_51:
    if ( v39 >= *(_DWORD *)(v38 - 4) )
      goto LABEL_54;
    do
    {
      v40 = v38 + 40LL * v39;
      if ( !*(_BYTE *)(v40 + 32) )
      {
        v77 = v12[34];
        *(_BYTE *)(v40 + 32) = 1;
        if ( v77 )
        {
          v78 = *(unsigned int *)(v77 - 4);
          if ( (_DWORD)v78 != *(_DWORD *)(v77 - 8) )
          {
            *(_DWORD *)(v77 + 4 * v78) = v39++;
            ++*(_DWORD *)(v77 - 4);
            goto LABEL_51;
          }
          v102 = (unsigned int)(3 * v78 + 1) >> 1;
          v103 = 4 * v102 + 8;
          if ( 4 * (int)v78 + 8 >= (unsigned int)v103 || (unsigned int)v78 >= v102 )
            goto LABEL_147;
          v127 = (unsigned int)(3 * v78 + 1) >> 1;
          v104 = (unsigned int *)sub_186B300((void *)(v77 - 8), v103);
          v105 = v104 + 2;
          v12[34] = v104 + 2;
          *v104 = v127;
          v38 = v12[14];
          v106 = &v104[v104[1] + 2];
        }
        else
        {
          v115 = (_QWORD *)sub_186B270(0x10u);
          v38 = v12[14];
          v105 = v115 + 1;
          *v115 = 2;
          v12[34] = v115 + 1;
          v106 = (unsigned int *)(v115 + 1);
        }
        *v106 = v39;
        ++*((_DWORD *)v105 - 1);
        if ( !v38 )
          break;
      }
      ++v39;
    }
    while ( v39 < *(_DWORD *)(v38 - 4) );
  }
LABEL_54:
  sub_E24F50(v12);
  v41 = v12[34];
  if ( v41 )
    *(_DWORD *)(v41 - 4) = 0;
  v12 = (_QWORD *)v12[13];
  v13 = *(__int64 (__fastcall **)())(*v12 + 288LL);
  if ( v13 == sub_E266F0 )
  {
    v42 = v12[14];
    v43 = 0;
    if ( v42 )
    {
LABEL_58:
      if ( v43 >= *(_DWORD *)(v42 - 4) )
        goto LABEL_61;
      do
      {
        v44 = v42 + 40LL * v43;
        if ( !*(_BYTE *)(v44 + 32) )
        {
          v89 = v12[34];
          *(_BYTE *)(v44 + 32) = 1;
          if ( v89 )
          {
            v90 = *(unsigned int *)(v89 - 4);
            if ( (_DWORD)v90 != *(_DWORD *)(v89 - 8) )
            {
              *(_DWORD *)(v89 + 4 * v90) = v43++;
              ++*(_DWORD *)(v89 - 4);
              goto LABEL_58;
            }
            v108 = (unsigned int)(3 * v90 + 1) >> 1;
            v109 = 4 * v108 + 8;
            if ( 4 * (int)v90 + 8 >= (unsigned int)v109 || (unsigned int)v90 >= v108 )
              goto LABEL_147;
            v110 = (unsigned int *)sub_186B300((void *)(v89 - 8), v109);
            v42 = v12[14];
            v111 = v110 + 2;
            v12[34] = v110 + 2;
            *v110 = v108;
            v112 = &v110[v110[1] + 2];
          }
          else
          {
            v119 = (_QWORD *)sub_186B270(0x10u);
            v42 = v12[14];
            *v119 = 2;
            v111 = v119 + 1;
            v12[34] = v119 + 1;
            v112 = (unsigned int *)(v119 + 1);
          }
          *v112 = v43;
          ++*((_DWORD *)v111 - 1);
          if ( !v42 )
            break;
        }
        ++v43;
      }
      while ( v43 < *(_DWORD *)(v42 - 4) );
    }
LABEL_61:
    sub_E24F50(v12);
    v45 = v12[34];
    if ( v45 )
      *(_DWORD *)(v45 - 4) = 0;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v12[13] + 288LL))(a1, v12[13], a3, a4);
  }
  else
  {
LABEL_64:
    ((void (__fastcall *)(__int64, _QWORD *, __int64, _QWORD))v13)(a1, v12, a3, a4);
  }
  return a1;
}

