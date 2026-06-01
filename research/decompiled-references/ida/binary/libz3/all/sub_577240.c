__int64 __fastcall sub_577240(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 result; // rax
  _DWORD *i; // r12
  _QWORD *v5; // rax
  unsigned int v6; // ebx
  size_t v7; // rsi
  unsigned int *v8; // rax
  unsigned int v9; // eax
  __int64 v10; // rbp
  _QWORD *v11; // rbx
  char v12; // r10
  __int64 v13; // r9
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // rdi
  unsigned int *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdi
  size_t v20; // rdx
  int v21; // ebx
  __int64 v22; // r15
  int v23; // r8d
  __int64 v24; // rax
  __int64 v25; // rbp
  unsigned int v26; // edx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r10
  __int64 v30; // rbx
  __int64 v31; // rbp
  __int64 v32; // r12
  __int64 v33; // r13
  __int64 v34; // r14
  int v35; // r15d
  int v36; // eax
  __int64 v37; // r15
  _QWORD *v38; // rdx
  unsigned int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  _QWORD *v42; // rcx
  unsigned int v43; // ebp
  size_t v44; // rsi
  unsigned int *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r14
  __int64 v48; // rbx
  __int64 v49; // r12
  int v50; // r13d
  int v51; // eax
  int v52; // r8d
  int v53; // eax
  unsigned int v54; // r10d
  char *v55; // r8
  __int64 v56; // rdi
  __int64 v57; // rcx
  char *v58; // rsi
  char *v59; // rbp
  char *v60; // rax
  int v61; // edx
  _QWORD *v62; // rax
  int v63; // edx
  int v64; // edx
  unsigned int v65; // ebx
  char *v66; // rbx
  int v67; // ecx
  __int64 v68; // rax
  int v69; // ecx
  _QWORD *v70; // rdx
  const __m128i *v71; // rbx
  __m128i *v72; // rbp
  __int64 v73; // rdx
  __int64 v74; // rsi
  __m128i *v75; // rdx
  __m128i v76; // xmm0
  __int64 v77; // rax
  __int64 v78; // rsi
  __int64 v79; // rsi
  int v80; // eax
  __int64 v81; // rax
  char *v82; // rax
  char *v83; // rdx
  char *v84; // rdx
  __int64 v85; // rax
  char *v86; // r10
  char *v87; // rbx
  char *v88; // rax
  int v89; // esi
  __int64 v90; // rax
  char *v91; // rdx
  char *v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rdx
  char *v95; // rbx
  char *v96; // rbx
  __int64 v97; // r12
  char *v98; // r13
  char *v99; // rbp
  __int64 v100; // rax
  __int64 v101; // rdx
  char **v102; // rbp
  char **exception; // rbp
  __int64 v104; // [rsp+8h] [rbp-C0h]
  unsigned int v106; // [rsp+1Ch] [rbp-ACh]
  __int64 v107; // [rsp+20h] [rbp-A8h]
  __int64 v108; // [rsp+20h] [rbp-A8h]
  size_t v109; // [rsp+20h] [rbp-A8h]
  __int64 v110; // [rsp+20h] [rbp-A8h]
  size_t v111; // [rsp+20h] [rbp-A8h]
  char *v112; // [rsp+20h] [rbp-A8h]
  char *v113; // [rsp+20h] [rbp-A8h]
  __int64 v114; // [rsp+28h] [rbp-A0h]
  _DWORD *v115; // [rsp+30h] [rbp-98h]
  _DWORD *v116; // [rsp+30h] [rbp-98h]
  int v117; // [rsp+30h] [rbp-98h]
  char *v118; // [rsp+30h] [rbp-98h]
  char *v119; // [rsp+30h] [rbp-98h]
  __int64 v120; // [rsp+30h] [rbp-98h]
  __int64 v121; // [rsp+38h] [rbp-90h]
  int v122; // [rsp+38h] [rbp-90h]
  __int64 v123; // [rsp+40h] [rbp-88h]
  int v124; // [rsp+40h] [rbp-88h]
  char *v125; // [rsp+48h] [rbp-80h]
  _DWORD *v126; // [rsp+48h] [rbp-80h]
  __int64 v127; // [rsp+50h] [rbp-78h]
  __int64 v128; // [rsp+50h] [rbp-78h]
  char *v129; // [rsp+58h] [rbp-70h]
  __int64 v130[11]; // [rsp+70h] [rbp-58h] BYREF

  v2 = a1;
  v104 = *(_QWORD *)(a1 + 128);
  v114 = *(_QWORD *)(a2 + 152);
  result = 0xFFFFFFFFLL;
  if ( v114 == 0xFFFFFFFFLL )
  {
    result = *(_QWORD *)(a2 + 80);
    v114 = result;
  }
  if ( v104 == v114 )
    return result;
  i = *(_DWORD **)(a1 + 8);
  if ( i )
  {
    v106 = *(i - 1);
    if ( v106 )
    {
      v5 = (_QWORD *)sub_186B270(0x18u);
      *v5 = 2;
      for ( i = v5 + 1; ; i = v8 + 2 )
      {
        v9 = *(i - 2);
        if ( v9 >= v106 )
          break;
        v6 = (3 * v9 + 1) >> 1;
        v7 = 8 * v6 + 8;
        if ( 8 * v9 + 8 >= (unsigned int)v7 || v9 >= v6 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v130, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v130);
          sub_233E40((__int64)v130);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v8 = (unsigned int *)sub_186B300(i - 2, v7);
        *v8 = v6;
      }
      v10 = v106;
      v11 = nullptr;
      *(i - 1) = v106;
      memset(i, 0, 8LL * v106);
      v12 = 1;
      goto LABEL_12;
    }
    i = nullptr;
  }
  else
  {
    v106 = 0;
  }
LABEL_17:
  v19 = *(_QWORD *)(v2 + 120);
  if ( v19 == 0xFFFFFFFFLL )
  {
    v77 = *(_QWORD *)(v2 + 48);
    v78 = *(unsigned int *)(v2 + 40);
    *(_QWORD *)(v2 + 120) = v77;
    sub_5716E0(v2 + 40, v77 + v78);
    v19 = *(_QWORD *)(v2 + 120);
    v20 = *(unsigned int *)(v2 + 40);
    if ( v19 != 0xFFFFFFFFLL )
      goto LABEL_19;
    v79 = *(_QWORD *)(v2 + 48);
    *(_QWORD *)(v2 + 120) = v79;
    sub_5716E0(v2 + 40, v20 + v79);
    v19 = *(_QWORD *)(v2 + 120);
  }
  v20 = *(unsigned int *)(v2 + 40);
LABEL_19:
  memcpy((void *)(*(_QWORD *)(v2 + 56) + v19), i, v20);
  v21 = *(_DWORD *)(v2 + 104);
  v22 = *(_QWORD *)(v2 + 120);
  if ( 3 * v21 < (unsigned int)(4 * (*(_DWORD *)(v2 + 108) + *(_DWORD *)(v2 + 112))) )
  {
    v109 = 16LL * (unsigned int)(2 * v21);
    v68 = sub_186B270(v109);
    v69 = 2 * v21;
    if ( 2 * v21 )
    {
      v70 = (_QWORD *)v68;
      do
      {
        *v70 = 0;
        v70 += 4;
        *(v70 - 2) = 0;
      }
      while ( (_QWORD *)(32LL * (v21 & 0x7FFFFFFF) + v68) != v70 );
    }
    v71 = *(const __m128i **)(v2 + 96);
    v72 = (__m128i *)&v71[*(unsigned int *)(v2 + 104)];
    if ( v71 != v72 )
    {
      do
      {
        while ( v71->m128i_i32[1] != 2 )
        {
          if ( v72 == ++v71 )
            goto LABEL_93;
        }
        v73 = 16LL * (v71->m128i_i32[0] & (unsigned int)(v69 - 1));
        v74 = v68 + v73;
        if ( v109 == v73 )
        {
LABEL_104:
          if ( v68 == v74 )
          {
LABEL_121:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v75 = (__m128i *)v68;
          while ( v75->m128i_i32[1] )
          {
            if ( (__m128i *)v74 == ++v75 )
              goto LABEL_121;
          }
        }
        else
        {
          v75 = (__m128i *)(v68 + v73);
          while ( v75->m128i_i32[1] )
          {
            if ( (__m128i *)(v68 + v109) == ++v75 )
              goto LABEL_104;
          }
        }
        v76 = _mm_loadu_si128(v71++);
        *v75 = v76;
      }
      while ( v72 != v71 );
LABEL_93:
      v72 = *(__m128i **)(v2 + 96);
    }
    if ( v72 )
    {
      v117 = v69;
      v110 = v68;
      sub_186B220(v72);
      v69 = v117;
      v68 = v110;
    }
    *(_QWORD *)(v2 + 96) = v68;
    *(_DWORD *)(v2 + 104) = v69;
    *(_DWORD *)(v2 + 112) = 0;
  }
  v23 = sub_17E8B20(v22 + **(_QWORD **)(v2 + 64), *(unsigned int *)(v2 + 72), 0);
  v24 = *(unsigned int *)(v2 + 104);
  v25 = *(_QWORD *)(v2 + 96);
  v26 = v24 - 1;
  v27 = 16 * v24;
  v28 = 16LL * (v23 & v26);
  v29 = v25 + v28;
  if ( v28 == v27 )
  {
    v47 = 0;
    goto LABEL_39;
  }
  v123 = *(_QWORD *)(v2 + 96);
  v30 = v25 + v28;
  v31 = v25 + v27;
  v115 = i;
  v32 = v2;
  v33 = 0;
  v34 = v22;
  v121 = v29;
  v35 = v23;
  while ( 1 )
  {
    v36 = *(_DWORD *)(v30 + 4);
    if ( v36 == 2 )
    {
      if ( v35 == *(_DWORD *)v30 )
      {
        v107 = *(_QWORD *)(v30 + 8);
        if ( !memcmp(
                (const void *)(v107 + **(_QWORD **)(v32 + 80)),
                (const void *)(**(_QWORD **)(v32 + 80) + v34),
                *(unsigned int *)(v32 + 88)) )
        {
          v2 = v32;
          v37 = v107;
          i = v115;
          goto LABEL_51;
        }
      }
      goto LABEL_24;
    }
    if ( !v36 )
      break;
    v33 = v30;
LABEL_24:
    v30 += 16;
    if ( v31 == v30 )
    {
      v23 = v35;
      v29 = v121;
      v22 = v34;
      v25 = v123;
      v47 = v33;
      v2 = v32;
      i = v115;
LABEL_39:
      if ( v25 == v29 )
      {
LABEL_99:
        sub_1872CE0("");
        sub_1873130(114, 461);
      }
      v116 = i;
      v48 = v29;
      v49 = v2;
      v50 = v23;
      v108 = v22;
      while ( 1 )
      {
        v51 = *(_DWORD *)(v25 + 4);
        if ( v51 == 2 )
        {
          if ( v50 == *(_DWORD *)v25 )
          {
            v37 = *(_QWORD *)(v25 + 8);
            if ( !memcmp(
                    (const void *)(v37 + **(_QWORD **)(v49 + 80)),
                    (const void *)(**(_QWORD **)(v49 + 80) + v108),
                    *(unsigned int *)(v49 + 88)) )
            {
              v2 = v49;
              i = v116;
              goto LABEL_51;
            }
          }
        }
        else
        {
          if ( !v51 )
          {
            v52 = v50;
            v37 = v108;
            v2 = v49;
            i = v116;
            if ( !v47 )
            {
              v47 = v25;
              goto LABEL_50;
            }
LABEL_49:
            --*(_DWORD *)(v2 + 112);
            goto LABEL_50;
          }
          v47 = v25;
        }
        v25 += 16;
        if ( v48 == v25 )
          goto LABEL_99;
      }
    }
  }
  v52 = v35;
  v37 = v34;
  v47 = v33;
  v2 = v32;
  i = v115;
  if ( v47 )
    goto LABEL_49;
  v47 = v30;
LABEL_50:
  *(_DWORD *)v47 = v52;
  v53 = *(_DWORD *)(v2 + 108);
  *(_QWORD *)(v47 + 8) = v37;
  *(_DWORD *)(v47 + 4) = 2;
  *(_DWORD *)(v2 + 108) = v53 + 1;
LABEL_51:
  if ( *(_QWORD *)(v2 + 120) == v37 )
    *(_QWORD *)(v2 + 120) = 0xFFFFFFFFLL;
  v54 = *(_DWORD *)(v2 + 24);
  v55 = *(char **)(v2 + 16);
  v56 = 24LL * ((unsigned int)v37 & (v54 - 1));
  v57 = 24LL * v54;
  v58 = &v55[v56];
  v59 = &v55[v57];
  if ( v56 != v57 )
  {
    v60 = &v55[v56];
    do
    {
      v61 = *((_DWORD *)v60 + 1);
      if ( v61 == 2 )
      {
        if ( (_DWORD)v37 == *(_DWORD *)v60 && *((_QWORD *)v60 + 1) == v37 )
        {
LABEL_60:
          v38 = *((_QWORD **)v60 + 2);
          goto LABEL_61;
        }
      }
      else if ( !v61 )
      {
        goto LABEL_71;
      }
      v60 += 24;
    }
    while ( v59 != v60 );
  }
  if ( v55 != v58 )
  {
    v60 = *(char **)(v2 + 16);
    while ( 1 )
    {
      v63 = *((_DWORD *)v60 + 1);
      if ( v63 != 2 )
        break;
      if ( (_DWORD)v37 == *(_DWORD *)v60 )
      {
        if ( *((_QWORD *)v60 + 1) == v37 )
          goto LABEL_60;
        v60 += 24;
        if ( v58 == v60 )
          goto LABEL_71;
      }
      else
      {
LABEL_66:
        v60 += 24;
        if ( v58 == v60 )
          goto LABEL_71;
      }
    }
    if ( !v63 )
      goto LABEL_71;
    goto LABEL_66;
  }
LABEL_71:
  v64 = *(_DWORD *)(v2 + 32);
  v65 = 2 * v54;
  v122 = 2 * v54;
  if ( 3 * v54 >= 4 * (v64 + *(_DWORD *)(v2 + 28)) )
    goto LABEL_72;
  v111 = 24LL * v65;
  v82 = (char *)sub_186B270(v111);
  v57 = v111;
  v55 = v82;
  if ( v65 )
  {
    v83 = &v82[24 * v65];
    do
    {
      *(_QWORD *)v82 = 0;
      v82 += 24;
      *((_QWORD *)v82 - 1) = 0;
    }
    while ( v82 != v83 );
  }
  v84 = *(char **)(v2 + 16);
  v85 = *(unsigned int *)(v2 + 24);
  v124 = v122 - 1;
  v86 = &v84[24 * v85];
  v87 = v84 + 16;
  v59 = &v55[v111];
  if ( v84 != v86 )
  {
    while ( 1 )
    {
      if ( *((_DWORD *)v87 - 3) != 2 )
      {
LABEL_133:
        v88 = v87 + 24;
        if ( v86 == v87 + 8 )
          goto LABEL_144;
        goto LABEL_134;
      }
      v89 = *((_DWORD *)v87 - 4);
      v90 = 24LL * (v89 & (unsigned int)v124);
      v91 = &v55[v90];
      if ( v111 == v90 )
      {
LABEL_158:
        if ( v55 == v91 )
        {
LABEL_171:
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        v92 = v55;
        while ( *((_DWORD *)v92 + 1) )
        {
          v92 += 24;
          if ( v91 == v92 )
            goto LABEL_171;
        }
        v101 = *((_QWORD *)v87 - 1);
        *(_DWORD *)v92 = v89;
        *((_DWORD *)v92 + 1) = 2;
        *((_QWORD *)v92 + 1) = v101;
        if ( v87 == v92 + 16 )
          goto LABEL_133;
        v94 = *((_QWORD *)v92 + 2);
        if ( v94 )
          goto LABEL_142;
      }
      else
      {
        v92 = &v55[v90];
        while ( *((_DWORD *)v92 + 1) )
        {
          v92 += 24;
          if ( v59 == v92 )
            goto LABEL_158;
        }
        v93 = *((_QWORD *)v87 - 1);
        *(_DWORD *)v92 = v89;
        *((_DWORD *)v92 + 1) = 2;
        *((_QWORD *)v92 + 1) = v93;
        if ( v87 == v92 + 16 )
          goto LABEL_133;
        v94 = *((_QWORD *)v92 + 2);
        if ( v94 )
        {
LABEL_142:
          v129 = v86;
          v127 = v57;
          v125 = v92;
          v118 = v55;
          sub_186B220((void *)(v94 - 8));
          v86 = v129;
          v57 = v127;
          v92 = v125;
          v55 = v118;
        }
      }
      *((_QWORD *)v92 + 2) = 0;
      *((_QWORD *)v92 + 2) = *(_QWORD *)v87;
      v88 = v87 + 24;
      v95 = v87 + 8;
      *((_QWORD *)v95 - 1) = 0;
      if ( v86 == v95 )
      {
LABEL_144:
        v85 = *(unsigned int *)(v2 + 24);
        v86 = *(char **)(v2 + 16);
        break;
      }
LABEL_134:
      v87 = v88;
    }
  }
  if ( v86 )
  {
    if ( (_DWORD)v85 )
    {
      v126 = i;
      v96 = v86;
      v97 = v57;
      v128 = v2;
      v98 = v59;
      v99 = v55;
      v112 = &v86[24 * v85];
      do
      {
        while ( 1 )
        {
          v100 = *((_QWORD *)v96 + 2);
          if ( !v100 )
            break;
          v119 = v86;
          v96 += 24;
          sub_186B220((void *)(v100 - 8));
          v86 = v119;
          if ( v112 == v96 )
            goto LABEL_150;
        }
        v96 += 24;
      }
      while ( v96 != v112 );
LABEL_150:
      v55 = v99;
      v57 = v97;
      v59 = v98;
      i = v126;
      v2 = v128;
    }
    v120 = v57;
    v113 = v55;
    sub_186B220(v86);
    v55 = v113;
    v57 = v120;
  }
  *(_QWORD *)(v2 + 16) = v55;
  v64 = 0;
  *(_DWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 24) = v122;
  v56 = 24LL * ((unsigned int)v37 & v124);
  v58 = &v55[v56];
LABEL_72:
  if ( v56 != v57 )
  {
    v60 = v58;
    v66 = nullptr;
    while ( 1 )
    {
      v67 = *((_DWORD *)v60 + 1);
      if ( v67 == 2 )
      {
        if ( (_DWORD)v37 == *(_DWORD *)v60 && *((_QWORD *)v60 + 1) == v37 )
          goto LABEL_60;
      }
      else
      {
        if ( !v67 )
        {
          if ( v66 )
            *(_DWORD *)(v2 + 32) = v64 - 1;
          else
            v66 = v60;
          v81 = *((_QWORD *)v66 + 2);
          *((_QWORD *)v66 + 1) = v37;
          if ( v81 )
LABEL_126:
            sub_186B220((void *)(v81 - 8));
LABEL_127:
          *((_QWORD *)v66 + 2) = 0;
          v11 = v66 + 16;
          *((_DWORD *)v11 - 3) = 2;
          *((_DWORD *)v11 - 4) = v37;
          ++*(_DWORD *)(v2 + 28);
LABEL_62:
          v62 = (_QWORD *)sub_186B270(0x18u);
          v38 = v62 + 1;
          *v62 = 2;
          v41 = 1;
          *v11 = v38;
          v42 = v38;
          goto LABEL_32;
        }
        v66 = v60;
      }
      v60 += 24;
      if ( v60 == v59 )
        goto LABEL_114;
    }
  }
  v66 = nullptr;
  while ( 1 )
  {
LABEL_114:
    if ( v55 == v58 )
    {
      sub_1872CE0("");
      sub_1873130(114, 461);
    }
    v80 = *((_DWORD *)v55 + 1);
    if ( v80 == 2 )
      break;
    if ( !v80 )
    {
      if ( v66 )
        *(_DWORD *)(v2 + 32) = v64 - 1;
      else
        v66 = v55;
      v81 = *((_QWORD *)v66 + 2);
      *((_QWORD *)v66 + 1) = v37;
      if ( v81 )
        goto LABEL_126;
      goto LABEL_127;
    }
    v66 = v55;
LABEL_113:
    v55 += 24;
  }
  if ( (_DWORD)v37 != *(_DWORD *)v55 || *((_QWORD *)v55 + 1) != v37 )
    goto LABEL_113;
  v38 = *((_QWORD **)v55 + 2);
  v60 = v55;
LABEL_61:
  v11 = v60 + 16;
  if ( !v38 )
    goto LABEL_62;
  while ( 1 )
  {
    v39 = *((_DWORD *)v38 - 1);
    if ( v39 == *((_DWORD *)v38 - 2) )
    {
      v43 = (3 * v39 + 1) >> 1;
      v44 = 8 * v43 + 8;
      if ( 8 * v39 + 8 >= (unsigned int)v44 || v39 >= v43 )
      {
        v102 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v130, "Overflow encountered when expanding vector");
        *v102 = (char *)off_1C63128;
        sub_2333C0(v102 + 1, v130);
        sub_233E40((__int64)v130);
        __cxa_throw(v102, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v45 = (unsigned int *)sub_186B300(v38 - 1, v44);
      v46 = v45[1];
      v38 = v45 + 2;
      *v11 = v45 + 2;
      *v45 = v43;
      LODWORD(v45) = v46;
      v42 = &v38[v46];
      v41 = (_DWORD)v45 + 1;
    }
    else
    {
      v40 = v39;
      v41 = v39 + 1;
      v42 = &v38[v40];
    }
LABEL_32:
    *v42 = v104;
    *((_DWORD *)v38 - 1) = v41;
    v104 += *(unsigned int *)(a2 + 64);
    if ( v104 == v114 )
      break;
    v10 = v106;
    v12 = 0;
    if ( v106 )
    {
LABEL_12:
      v13 = *(_QWORD *)(v2 + 8);
      v14 = 0;
      v15 = *(_QWORD *)(a2 + 40);
      v16 = *(_QWORD *)(a2 + 88) + v104;
      do
      {
        v17 = (unsigned int *)(v15 + 32LL * *(unsigned int *)(v13 + 4 * v14));
        v18 = *((_QWORD *)v17 + 1) & (*(_QWORD *)(v16 + *v17) >> v17[1]);
        if ( *(_QWORD *)&i[2 * v14] != v18 )
        {
          *(_QWORD *)&i[2 * v14] = v18;
          v12 = 1;
        }
        ++v14;
      }
      while ( v14 != v10 );
      if ( v12 )
        goto LABEL_17;
    }
    v38 = (_QWORD *)*v11;
    if ( !*v11 )
      goto LABEL_62;
  }
  result = *(_QWORD *)(a2 + 152);
  if ( result == 0xFFFFFFFFLL )
  {
    result = *(_QWORD *)(a2 + 80);
    *(_QWORD *)(v2 + 128) = result;
    if ( i )
      return sub_186B220(i - 2);
  }
  else
  {
    *(_QWORD *)(v2 + 128) = result;
    if ( i )
      return sub_186B220(i - 2);
  }
  return result;
}

