__int64 __fastcall sub_4D3530(_QWORD *a1, unsigned int a2, __int64 *a3)
{
  char **v3; // r12
  __int64 v4; // rdx
  char **exception; // r12
  __int64 v6; // rdx
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  __int64 (__fastcall *v10)(__int64); // rax
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rbp
  char *v15; // rax
  char *v16; // r14
  __int64 *v17; // rbp
  unsigned int v18; // r8d
  __int64 v19; // rax
  __int64 *i; // r13
  __int64 v21; // rdx
  char *v22; // rsi
  __int64 *v23; // rdx
  int v24; // eax
  __int64 *v25; // r13
  __int64 v26; // r12
  __int64 v27; // r14
  _QWORD *v28; // rdx
  unsigned int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  _QWORD *v32; // rcx
  __int64 v33; // rcx
  unsigned int v34; // r10d
  _QWORD *v35; // rbx
  unsigned int v36; // r9d
  __int64 v37; // rcx
  _QWORD *v38; // rbp
  __int64 v39; // r9
  _QWORD *v40; // rdi
  _QWORD *v41; // rax
  _QWORD *v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rax
  unsigned int v45; // ebx
  size_t v46; // rsi
  unsigned int *v47; // rax
  __int64 v48; // rcx
  __int64 v50; // rbp
  _QWORD *v51; // rax
  int v52; // r10d
  char *v53; // rax
  char *v54; // r11
  __int64 v55; // rdx
  _QWORD *v56; // rsi
  _QWORD *v57; // rdx
  __int64 v58; // rsi
  _QWORD *v59; // rax
  __int64 v60; // rbx
  __int64 *v61; // rbp
  _QWORD *v62; // rbx
  int v63; // r12d
  int v64; // r13d
  unsigned int *v65; // rax
  __int64 v66; // rsi
  __int64 (__fastcall *v67)(__int64, __int64); // rdx
  __int64 (__fastcall *v68)(__int64); // rax
  __int64 v69; // rdi
  __int64 v70; // rax
  __int64 v71; // r14
  __int64 v72; // rdx
  unsigned int v73; // r14d
  unsigned int v74; // ecx
  unsigned int v75; // eax
  unsigned int *v76; // rax
  __int64 v77; // r14
  _QWORD *v78; // rdi
  _QWORD *v79; // rdx
  unsigned int v80; // ecx
  _QWORD *v81; // rax
  unsigned int v82; // ebp
  __int64 v83; // r12
  void *v84; // rcx
  __int64 v85; // rdi
  __int64 v86; // rbp
  __int64 v87; // rsi
  __int64 v88; // rdi
  bool v89; // zf
  __int64 v90; // rsi
  __int64 v91; // rdi
  __int64 *v92; // rbp
  unsigned __int64 v93; // r12
  __int64 v94; // rsi
  _QWORD *v95; // rax
  __int64 v96; // rax
  __int64 v97; // rbp
  __int64 v98; // rsi
  __int64 v99; // rdi
  unsigned int v100; // ecx
  __int64 v101; // [rsp+0h] [rbp-1E8h]
  size_t v103; // [rsp+10h] [rbp-1D8h]
  unsigned int v104; // [rsp+10h] [rbp-1D8h]
  __int64 *v105; // [rsp+10h] [rbp-1D8h]
  unsigned int v106; // [rsp+18h] [rbp-1D0h]
  int v107; // [rsp+18h] [rbp-1D0h]
  __int64 v108; // [rsp+18h] [rbp-1D0h]
  int v109; // [rsp+20h] [rbp-1C8h]
  __int64 v110; // [rsp+20h] [rbp-1C8h]
  __int64 v111; // [rsp+20h] [rbp-1C8h]
  __int64 v112; // [rsp+30h] [rbp-1B8h]
  __int64 v114; // [rsp+60h] [rbp-188h] BYREF
  __int64 v115; // [rsp+68h] [rbp-180h]
  __int64 v116[4]; // [rsp+70h] [rbp-178h] BYREF
  __int64 v117; // [rsp+90h] [rbp-158h] BYREF
  _BYTE v118[248]; // [rsp+98h] [rbp-150h] BYREF
  void *v119; // [rsp+190h] [rbp-58h] BYREF
  unsigned int v120; // [rsp+198h] [rbp-50h]
  int v121; // [rsp+19Ch] [rbp-4Ch]
  int v122; // [rsp+1A0h] [rbp-48h]
  char v123; // [rsp+1A8h] [rbp-40h]

  v8 = (unsigned __int64)"doc";
  sub_180C5A0(&v117, "doc");
  v9 = sub_64B010(a1[6]);
  if ( v117 == v9 )
  {
    v8 = 0;
    sub_64B1D0(a1[6], 0);
  }
  v10 = *(__int64 (__fastcall **)(__int64))(*a1 + 192LL);
  if ( v10 == sub_4D0080 )
    v11 = (__int64)(a1 + 8);
  else
    v11 = v10((__int64)a1);
  if ( !*(_DWORD *)(v11 + 156) )
    goto LABEL_6;
  v78 = *(_QWORD **)(v11 + 144);
  v8 = 0;
  v79 = &v78[*(unsigned int *)(v11 + 152)];
  v80 = *(_DWORD *)(v11 + 152);
  v81 = v78;
  if ( v78 != v79 )
  {
    do
    {
      while ( *v81 )
      {
        *v81++ = 0;
        if ( v79 == v81 )
          goto LABEL_112;
      }
      ++v81;
      v8 = (unsigned int)(v8 + 1);
    }
    while ( v79 != v81 );
LABEL_112:
    if ( v80 > 0x10 )
    {
      v8 = (unsigned int)(4 * v8);
      if ( 3 * v80 < (unsigned int)v8 )
      {
        if ( v78 )
        {
          sub_186B220(v78);
          v82 = *(_DWORD *)(v11 + 152);
          *(_QWORD *)(v11 + 144) = 0;
          v82 >>= 1;
          *(_DWORD *)(v11 + 152) = v82;
          v83 = v82;
          v84 = (void *)sub_186B270(8LL * v82);
          if ( !v82 )
          {
LABEL_117:
            *(_QWORD *)(v11 + 144) = v84;
            goto LABEL_118;
          }
        }
        else
        {
          *(_QWORD *)(v11 + 144) = 0;
          v100 = v80 >> 1;
          v83 = v100;
          *(_DWORD *)(v11 + 152) = v100;
          v84 = (void *)sub_186B270(8LL * v100);
        }
        v8 = 0;
        v84 = memset(v84, 0, 8 * v83);
        goto LABEL_117;
      }
    }
  }
LABEL_118:
  *(_QWORD *)(v11 + 156) = 0;
LABEL_6:
  v117 = a1[6];
  v12 = v117;
  sub_654110(v117, v8);
  v13 = v12 + 2360;
  sub_643420(v118, v12 + 2360);
  v120 = *(_DWORD *)(v12 + 2296);
  v14 = v120;
  v15 = (char *)sub_186B270(8LL * v120);
  v16 = v15;
  if ( (_DWORD)v14 )
  {
    v13 = 0;
    memset(v15, 0, 8 * v14);
  }
  v17 = *(__int64 **)(v12 + 2288);
  v119 = v16;
  v18 = v120 - 1;
  v19 = 8LL * v120;
  for ( i = &v17[(unsigned __int64)v19 / 8]; i != v17; *v23 = v13 )
  {
    while ( (unsigned __int64)*v17 <= 1 )
    {
      if ( i == ++v17 )
        goto LABEL_17;
    }
    v21 = 8LL * (*(_DWORD *)(*v17 + 12) & v18);
    v22 = &v16[v21];
    if ( v19 == v21 )
    {
LABEL_36:
      if ( v16 == v22 )
      {
LABEL_88:
        sub_1872CE0("");
        sub_1873130(114, 181);
      }
      v23 = (__int64 *)v16;
      while ( *v23 )
      {
        if ( v22 == (char *)++v23 )
          goto LABEL_88;
      }
    }
    else
    {
      v23 = (__int64 *)&v16[v21];
      while ( *v23 )
      {
        if ( &v16[v19] == (char *)++v23 )
          goto LABEL_36;
      }
    }
    v13 = *v17++;
  }
LABEL_17:
  v24 = *(_DWORD *)(v12 + 2300);
  v122 = 0;
  v121 = v24;
  v123 = *(_BYTE *)(v12 + 2984);
  if ( v123 )
    sub_64C350(v12);
  if ( !a2 )
    goto LABEL_53;
  v25 = a3;
  do
  {
    v26 = *v25;
    v27 = a1[6];
    if ( *v25 )
      ++*(_DWORD *)(v26 + 8);
    v28 = *(_QWORD **)(v27 + 2592);
    if ( v28 )
    {
      v29 = *((_DWORD *)v28 - 1);
      if ( v29 == *((_DWORD *)v28 - 2) )
      {
        v45 = (3 * v29 + 1) >> 1;
        v46 = 8 * v45 + 8;
        if ( 8 * v29 + 8 >= (unsigned int)v46 || v29 >= v45 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_E08B0(v116, "Overflow encountered when expanding vector", v6);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v116);
          sub_233E40((__int64)v116);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v47 = (unsigned int *)sub_186B300(v28 - 1, v46);
        v48 = v47[1];
        v28 = v47 + 2;
        *(_QWORD *)(v27 + 2592) = v47 + 2;
        *v47 = v45;
        LODWORD(v47) = v48;
        v32 = &v28[v48];
        v31 = (_DWORD)v47 + 1;
      }
      else
      {
        v30 = v29;
        v31 = v29 + 1;
        v32 = &v28[v30];
      }
    }
    else
    {
      v59 = (_QWORD *)sub_186B270(0x18u);
      v28 = v59 + 1;
      *v59 = 2;
      v31 = 1;
      *(_QWORD *)(v27 + 2592) = v28;
      v32 = v28;
    }
    *v32 = v26;
    *((_DWORD *)v28 - 1) = v31;
    v33 = *(unsigned int *)(v27 + 2520);
    v34 = 2 * v33;
    if ( 3 * (int)v33 < (unsigned int)(4 * (*(_DWORD *)(v27 + 2524) + *(_DWORD *)(v27 + 2528))) )
    {
      v50 = v34;
      v107 = 2 * v33;
      v103 = 8LL * v34;
      v51 = (_QWORD *)sub_186B270(v103);
      v52 = v107;
      v37 = v103;
      v35 = v51;
      if ( v107 )
      {
        memset(v51, 0, 8 * v50);
        v37 = v103;
        v52 = v107;
      }
      v53 = *(char **)(v27 + 2512);
      v36 = v52 - 1;
      v38 = (_QWORD *)((char *)v35 + v37);
      v54 = &v53[8 * *(unsigned int *)(v27 + 2520)];
      if ( v53 != v54 )
      {
        do
        {
          while ( *(_QWORD *)v53 <= 1u )
          {
            v53 += 8;
            if ( v54 == v53 )
              goto LABEL_70;
          }
          v55 = 8LL * (*(_DWORD *)(*(_QWORD *)v53 + 12LL) & v36);
          v56 = &v35[(unsigned __int64)v55 / 8];
          if ( v37 == v55 )
          {
LABEL_74:
            if ( v35 == v56 )
            {
LABEL_82:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v57 = v35;
            while ( *v57 )
            {
              if ( v56 == ++v57 )
                goto LABEL_82;
            }
          }
          else
          {
            v57 = &v35[(unsigned __int64)v55 / 8];
            while ( *v57 )
            {
              if ( v38 == ++v57 )
                goto LABEL_74;
            }
          }
          v58 = *(_QWORD *)v53;
          v53 += 8;
          *v57 = v58;
        }
        while ( v54 != v53 );
LABEL_70:
        v54 = *(char **)(v27 + 2512);
      }
      if ( v54 )
      {
        v109 = v52;
        v108 = v37;
        v104 = v52 - 1;
        sub_186B220(v54);
        v52 = v109;
        v37 = v108;
        v36 = v104;
      }
      *(_QWORD *)(v27 + 2512) = v35;
      *(_DWORD *)(v27 + 2520) = v52;
      *(_DWORD *)(v27 + 2528) = 0;
    }
    else
    {
      v35 = *(_QWORD **)(v27 + 2512);
      v36 = v33 - 1;
      v37 = 8 * v33;
      v38 = (_QWORD *)((char *)v35 + v37);
    }
    v13 = *(unsigned int *)(v26 + 12);
    v39 = 8LL * ((unsigned int)v13 & v36);
    v40 = &v35[(unsigned __int64)v39 / 8];
    if ( v39 != v37 )
    {
      v41 = &v35[(unsigned __int64)v39 / 8];
      v42 = nullptr;
      while ( 1 )
      {
        v43 = *v41;
        if ( *v41 > 1u )
        {
          if ( *(_DWORD *)(v43 + 12) == (_DWORD)v13 && v26 == v43 )
          {
            *v41 = v26;
            goto LABEL_52;
          }
        }
        else
        {
          if ( !v43 )
          {
            if ( v42 )
              goto LABEL_80;
            v42 = v41;
            goto LABEL_81;
          }
          v42 = v41;
        }
        if ( ++v41 == v38 )
          goto LABEL_44;
      }
    }
    v42 = nullptr;
    while ( 1 )
    {
LABEL_44:
      if ( v40 == v35 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v44 = *v35;
      if ( *v35 <= 1u )
        break;
      if ( *(_DWORD *)(v44 + 12) == (_DWORD)v13 && v26 == v44 )
      {
        *v35 = v26;
        goto LABEL_52;
      }
LABEL_43:
      ++v35;
    }
    if ( v44 )
    {
      v42 = v35;
      goto LABEL_43;
    }
    if ( v42 )
LABEL_80:
      --*(_DWORD *)(v27 + 2528);
    else
      v42 = v35;
LABEL_81:
    *v42 = v26;
    ++*(_DWORD *)(v27 + 2524);
LABEL_52:
    ++v25;
  }
  while ( &a3[a2] != v25 );
LABEL_53:
  sub_64DCE0(a1[6]);
  sub_4D0AE0(a1, v13);
  v106 = sub_4D2940((__int64)a1, &v117);
  if ( v106 != 1 )
    goto LABEL_54;
  v60 = a1[6];
  sub_654110(v60, &v117);
  v114 = 0;
  v101 = v60 + 2360;
  v112 = a1[7];
  v115 = v112;
  if ( !a2 )
  {
    v85 = v112;
    LOBYTE(v63) = 0;
    v62 = nullptr;
    goto LABEL_139;
  }
  v61 = a3;
  v62 = nullptr;
  v63 = 0;
  v64 = 0;
  v105 = &a3[a2];
  do
  {
    v66 = sub_63B4F0(v101, *v61);
    v67 = *(__int64 (__fastcall **)(__int64, __int64))(*a1 + 208LL);
    if ( v67 == sub_4D0440 )
    {
      v68 = *(__int64 (__fastcall **)(__int64))(*a1 + 192LL);
      if ( v68 == sub_4D0080 )
        v69 = (__int64)(a1 + 8);
      else
        v69 = v68((__int64)a1);
      v70 = sub_4C7190(v69, v66);
    }
    else
    {
      v70 = v67((__int64)a1, v66);
    }
    v71 = v70;
    v64 |= (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v70 + 24LL))(v70) ^ 1;
    v63 |= (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v71 + 152LL))(v71) ^ 1;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v71 + 144LL))(v71, &v114);
    v72 = v114;
    if ( v114 )
      ++*(_DWORD *)(v114 + 8);
    if ( v62 )
    {
      v73 = *((_DWORD *)v62 - 1);
      if ( v73 == *((_DWORD *)v62 - 2) )
      {
        v74 = (3 * v73 + 1) >> 1;
        v75 = 8 * v74 + 8;
        if ( 8 * v73 + 8 >= v75 || v73 >= v74 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_E08B0(v116, "Overflow encountered when expanding vector", v4);
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, v116);
          sub_233E40((__int64)v116);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v110 = v72;
        v76 = (unsigned int *)sub_186B300(v62 - 1, v75);
        v62 = v76 + 2;
        v72 = v110;
        *v76 = (3 * v73 + 1) >> 1;
        v77 = v76[1];
        v65 = &v76[2 * v77 + 2];
        a2 = v77 + 1;
      }
      else
      {
        a2 = v73 + 1;
        v65 = (unsigned int *)&v62[v73];
      }
    }
    else
    {
      v111 = v72;
      v95 = (_QWORD *)sub_186B270(0x18u);
      *v95 = 2;
      v72 = v111;
      v62 = v95 + 1;
      a2 = 1;
      v65 = (unsigned int *)(v95 + 1);
    }
    *(_QWORD *)v65 = v72;
    ++v61;
    *((_DWORD *)v62 - 1) = a2;
  }
  while ( v61 != v105 );
  v85 = a1[7];
  if ( (_BYTE)v64 )
  {
LABEL_139:
    v96 = sub_15EC1C0(v85, a2);
    v97 = v96;
    if ( v96 )
      ++*(_DWORD *)(v96 + 8);
    v98 = a1[33];
    if ( v98 )
    {
      v99 = a1[34];
      v89 = (*(_DWORD *)(v98 + 8))-- == 1;
      if ( v89 )
        sub_15D7BC0(v99, v98);
    }
    a1[33] = v97;
    if ( (_BYTE)v63 )
    {
      v106 = 0;
      *(_DWORD *)(a1[6] + 2988LL) = 4;
    }
    v90 = v114;
    if ( v114 )
    {
      v91 = v115;
      v89 = (*(_DWORD *)(v114 + 8))-- == 1;
      if ( v89 )
        goto LABEL_151;
    }
    goto LABEL_148;
  }
  v86 = *(_QWORD *)(v85 + 864);
  if ( v86 )
    ++*(_DWORD *)(v86 + 8);
  v87 = a1[33];
  if ( v87 )
  {
    v88 = a1[34];
    v89 = (*(_DWORD *)(v87 + 8))-- == 1;
    if ( v89 )
      sub_15D7BC0(v88, v87);
  }
  v90 = v114;
  a1[33] = v86;
  if ( !v90 || (v91 = v115, v89 = *(_DWORD *)(v90 + 8) == 1, --*(_DWORD *)(v90 + 8), !v89) )
  {
    v106 = -1;
    goto LABEL_128;
  }
  v106 = -1;
LABEL_151:
  sub_15D7BC0(v91, v90);
LABEL_148:
  if ( v62 )
  {
LABEL_128:
    v92 = v62;
    v93 = (unsigned __int64)&v62[*((unsigned int *)v62 - 1)];
    if ( (unsigned __int64)v62 < v93 )
    {
      do
      {
        while ( 1 )
        {
          v94 = *v92;
          if ( *v92 )
          {
            v89 = (*(_DWORD *)(v94 + 8))-- == 1;
            if ( v89 )
              break;
          }
          if ( (unsigned __int64)++v92 >= v93 )
            goto LABEL_134;
        }
        ++v92;
        sub_15D7BC0(v112, v94);
      }
      while ( (unsigned __int64)v92 < v93 );
    }
LABEL_134:
    sub_186B220(v62 - 1);
  }
LABEL_54:
  sub_64C320(v117);
  sub_64B510(v117, &v119);
  sub_64C430(v117, v118);
  if ( v123 )
    sub_64DCE0(v117);
  if ( v119 )
    sub_186B220(v119);
  sub_63D960(v118);
  return v106;
}

