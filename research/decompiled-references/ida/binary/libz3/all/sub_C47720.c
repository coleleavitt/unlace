__int64 __fastcall sub_C47720(_QWORD *a1, __int64 a2, __int64 a3)
{
  char v3; // al
  unsigned int v7; // r12d
  __int64 v8; // rsi
  int v9; // eax
  __int64 result; // rax
  unsigned int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rax
  __int64 v14; // r14
  int v15; // edx
  __int64 v16; // rsi
  _QWORD *v17; // r15
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 *v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdi
  bool v29; // zf
  int v30; // r8d
  int v31; // r9d
  __int64 v32; // rax
  unsigned __int64 v33; // r15
  __int64 *v34; // r14
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rdi
  __int64 v41; // rcx
  __int64 v42; // r12
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rsi
  __int64 v46; // rcx
  __int64 v47; // r14
  __int64 v48; // rcx
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rsi
  __int64 v52; // rdi
  __int64 v53; // r15
  int v54; // eax
  _QWORD *v55; // rdx
  unsigned int v56; // eax
  __int64 v57; // rcx
  int v58; // eax
  __int64 *v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // r12
  __int64 v63; // rsi
  __int64 v64; // rdi
  int v65; // ecx
  __int64 v66; // rdi
  int v67; // edx
  __int64 v68; // rsi
  __int64 v69; // rcx
  __int64 v70; // rsi
  __int64 v71; // rax
  int v72; // ecx
  __int64 v73; // rax
  __int64 v74; // rax
  unsigned __int64 v75; // r15
  __int64 *v76; // r14
  __int64 v77; // rsi
  __int64 v78; // rdi
  __int64 v79; // r14
  __int64 v80; // rax
  __int64 v81; // rdi
  __int64 v82; // rsi
  __int64 v83; // r14
  __int64 v84; // rax
  int v85; // ecx
  __int64 v86; // rsi
  __int64 v87; // rdi
  unsigned int v88; // ecx
  size_t v89; // rsi
  unsigned int *v90; // rax
  __int64 v91; // rax
  __int64 v92; // r14
  __int64 v93; // rax
  __int64 v94; // r14
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  unsigned __int64 v98; // r15
  __int64 *v99; // r14
  __int64 v100; // rsi
  __int64 v101; // rdi
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  unsigned int v105; // r15d
  unsigned __int64 v106; // r14
  __int64 *v107; // rbx
  __int64 v108; // rsi
  __int64 v109; // rdi
  __int64 v110; // rax
  __int64 v111; // rsi
  __int64 v112; // rdi
  __int64 v113; // rax
  __int64 v114; // rdi
  int v115; // ecx
  _QWORD *v116; // rax
  char **exception; // rbp
  int v118; // [rsp+0h] [rbp-98h]
  unsigned int v119; // [rsp+0h] [rbp-98h]
  int v120[2]; // [rsp+0h] [rbp-98h]
  unsigned int v121; // [rsp+0h] [rbp-98h]
  unsigned int v122; // [rsp+0h] [rbp-98h]
  int v123[2]; // [rsp+8h] [rbp-90h]
  unsigned int v124; // [rsp+8h] [rbp-90h]
  int v125[2]; // [rsp+10h] [rbp-88h]
  int v126; // [rsp+18h] [rbp-80h]
  int v127; // [rsp+20h] [rbp-78h]
  __int64 v128; // [rsp+28h] [rbp-70h] BYREF
  __int64 v129; // [rsp+30h] [rbp-68h] BYREF
  __int64 v130; // [rsp+38h] [rbp-60h] BYREF
  __int64 v131; // [rsp+40h] [rbp-58h] BYREF
  void *v132; // [rsp+48h] [rbp-50h]

  v3 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  if ( v3 == 2 )
  {
    v37 = 515;
LABEL_25:
    sub_1872CE0("");
    sub_1873130(107, v37);
  }
  if ( v3 == 3 )
  {
    v37 = 520;
    goto LABEL_25;
  }
  if ( v3 )
  {
    v38 = a1[1];
    v39 = a1[11];
    v40 = a1[10];
    *(_QWORD *)v120 = v38;
    if ( v39 )
    {
      v41 = (unsigned int)(*(_DWORD *)(v39 - 4) - 1);
      v42 = *(_QWORD *)(v39 + 8 * v41);
      v43 = *(_DWORD *)(v39 - 4) - 1;
      if ( !v42 )
      {
        *(_DWORD *)(v39 - 4) = v41;
        goto LABEL_31;
      }
      ++*(_DWORD *)(v42 + 8);
      v44 = (unsigned int)(*(_DWORD *)(v39 - 4) - 1);
      v45 = *(_QWORD *)(v39 + 8 * v44);
      v43 = *(_DWORD *)(v39 - 4) - 1;
      *(_DWORD *)(v39 - 4) = v44;
      if ( !v45 )
        goto LABEL_31;
    }
    else
    {
      v42 = MEMORY[0x7FFFFFFF8];
      if ( !MEMORY[0x7FFFFFFF8] )
      {
        v43 = --MEMORY[0xFFFFFFFFFFFFFFFC];
        goto LABEL_31;
      }
      ++*(_DWORD *)(MEMORY[0x7FFFFFFF8] + 8LL);
      v45 = MEMORY[0x7FFFFFFF8];
      --MEMORY[0xFFFFFFFFFFFFFFFC];
    }
    v29 = (*(_DWORD *)(v45 + 8))-- == 1;
    if ( v29 )
    {
      sub_15D7BC0(v40, v45);
      v39 = a1[11];
      if ( !v39 )
      {
        v47 = MEMORY[0x7FFFFFFF8];
        if ( MEMORY[0x7FFFFFFF8] )
        {
          ++*(_DWORD *)(MEMORY[0x7FFFFFFF8] + 8LL);
          v49 = MEMORY[0x7FFFFFFF8];
          v40 = a1[10];
          --MEMORY[0xFFFFFFFFFFFFFFFC];
LABEL_33:
          v29 = (*(_DWORD *)(v49 + 8))-- == 1;
          if ( v29 )
            sub_15D7BC0(v40, v49);
          goto LABEL_35;
        }
        --MEMORY[0xFFFFFFFFFFFFFFFC];
LABEL_35:
        v50 = sub_15E2470(a1[1], v47, v42);
        v51 = a1[62];
        v52 = a1[63];
        v53 = v50;
        if ( v50 )
        {
          v54 = *(_DWORD *)(v50 + 8) + 1;
          *(_DWORD *)(v53 + 8) = v54;
          if ( v51 )
          {
            v29 = (*(_DWORD *)(v51 + 8))-- == 1;
            if ( v29 )
              sub_15D7BC0(v52, v51);
            a1[62] = v53;
            v54 = *(_DWORD *)(v53 + 8);
          }
          else
          {
            a1[62] = v53;
          }
          *(_DWORD *)(v53 + 8) = v54 + 1;
        }
        else
        {
          if ( v51 )
          {
            v29 = (*(_DWORD *)(v51 + 8))-- == 1;
            if ( v29 )
              sub_15D7BC0(v52, v51);
          }
          a1[62] = 0;
        }
        v55 = (_QWORD *)a1[11];
        if ( v55 )
        {
          v56 = *((_DWORD *)v55 - 1);
          if ( v56 == *((_DWORD *)v55 - 2) )
          {
            v88 = (3 * v56 + 1) >> 1;
            v89 = 8 * v88 + 8;
            if ( 8 * v56 + 8 >= (unsigned int)v89 || v56 >= v88 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_C418A0(&v131, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v131);
              sub_233E40((__int64)&v131);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v124 = (3 * v56 + 1) >> 1;
            v90 = (unsigned int *)sub_186B300(v55 - 1, v89);
            v55 = v90 + 2;
            a1[11] = v90 + 2;
            *v90 = v124;
            LODWORD(v90) = v90[1];
            v59 = &v55[(unsigned int)v90];
            v58 = (_DWORD)v90 + 1;
          }
          else
          {
            v57 = v56;
            v58 = v56 + 1;
            v59 = &v55[v57];
          }
        }
        else
        {
          v116 = (_QWORD *)sub_186B270(0x18u);
          v55 = v116 + 1;
          *v116 = 2;
          v58 = 1;
          a1[11] = v55;
          v59 = v55;
        }
        *v59 = v53;
        *((_DWORD *)v55 - 1) = v58;
        if ( v47 )
        {
          v29 = (*(_DWORD *)(v47 + 8))-- == 1;
          if ( v29 )
            sub_15D7BC0(*(_QWORD *)v120, v47);
        }
        if ( v42 )
        {
          v29 = (*(_DWORD *)(v42 + 8))-- == 1;
          if ( v29 )
            sub_15D7BC0(*(_QWORD *)v120, v42);
        }
        v60 = 0x7FFFFFFF8LL;
        v61 = a1[7];
        if ( v61 )
          v60 = 8LL * (unsigned int)(*(_DWORD *)(v61 - 4) - 1);
        v62 = *(_QWORD *)(v61 + v60);
        if ( v62 )
          ++*(_DWORD *)(v62 + 8);
        v63 = a1[60];
        if ( v63 )
        {
          v64 = a1[61];
          v29 = (*(_DWORD *)(v63 + 8))-- == 1;
          if ( v29 )
          {
            sub_15D7BC0(v64, v63);
            v61 = a1[7];
          }
        }
        v65 = *(_DWORD *)(v61 - 4);
        v66 = a1[6];
        a1[60] = v62;
        v67 = v65 - 1;
        v68 = *(_QWORD *)(v61 + 8LL * (unsigned int)(v65 - 1));
        *(_DWORD *)(v61 - 4) = v65 - 1;
        if ( v68 )
        {
          v29 = (*(_DWORD *)(v68 + 8))-- == 1;
          if ( v29 )
          {
            sub_15D7BC0(v66, v68);
            v61 = a1[7];
            v66 = a1[6];
          }
          v67 = *(_DWORD *)(v61 - 4);
        }
        v69 = (unsigned int)(v67 - 1);
        v70 = *(_QWORD *)(v61 + 8 * v69);
        *(_DWORD *)(v61 - 4) = v69;
        if ( v70 )
        {
          v29 = (*(_DWORD *)(v70 + 8))-- == 1;
          if ( v29 )
            sub_15D7BC0(v66, v70);
        }
        v71 = a1[60];
        v131 = v71;
        if ( v71 )
          ++*(_DWORD *)(v71 + 8);
        sub_C41DD0(a1 + 7, &v131);
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
          sub_15843A0(a1, a2, a1[60], a1[62]);
        result = a1[5];
        v72 = *(_DWORD *)(result - 4);
        *(_DWORD *)(result - 4) = v72 - 1;
        if ( v72 != 1 )
          *(_BYTE *)(result + 16LL * (unsigned int)(v72 - 2) + 8) |= 2u;
        return result;
      }
      v43 = *(_DWORD *)(v39 - 4);
      v40 = a1[10];
    }
    else
    {
      v43 = *(_DWORD *)(v39 - 4);
    }
LABEL_31:
    v46 = (unsigned int)(v43 - 1);
    v47 = *(_QWORD *)(v39 + 8 * v46);
    if ( v47 )
    {
      ++*(_DWORD *)(v47 + 8);
      v48 = (unsigned int)(*(_DWORD *)(v39 - 4) - 1);
      v49 = *(_QWORD *)(v39 + 8 * v48);
      *(_DWORD *)(v39 - 4) = v48;
      if ( v49 )
        goto LABEL_33;
    }
    else
    {
      *(_DWORD *)(v39 - 4) = v46;
    }
    goto LABEL_35;
  }
  v7 = *(_DWORD *)(a2 + 24);
  while ( 1 )
  {
    v11 = *(_DWORD *)(a3 + 8);
    v12 = v11 >> 6;
    if ( v11 >> 6 >= v7 )
      break;
    v8 = *(_QWORD *)(a2 + 8LL * v12 + 32);
    v9 = ((v12 + 1) << 6) | v11 & 0x3F;
    *(_DWORD *)(a3 + 8) = v9;
    result = sub_C47070(a1, v8, ((unsigned __int8)v9 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v13 = a1[7];
  v14 = *(_QWORD *)(a2 + 16);
  if ( v13 )
    v15 = *(_DWORD *)(v13 - 4);
  else
    v15 = 0;
  v16 = *(unsigned int *)(a3 + 12);
  v118 = v15 - v16;
  v17 = (_QWORD *)(v13 + 8LL * (unsigned int)v16);
  *(_QWORD *)v123 = a1[1];
  sub_1584610(a1, v16);
  v20 = a1[11];
  if ( v20 )
    v21 = *(_DWORD *)(v20 - 4);
  else
    v21 = 0;
  v22 = v21 - *(_DWORD *)(a3 + 12);
  if ( v22 )
  {
    v95 = sub_15DC610(
            a1[1],
            v14,
            v118,
            (int)v17,
            v18,
            v19,
            v118,
            v123[0],
            v22,
            v126,
            v127,
            v128,
            v129,
            v130,
            v131,
            v132);
    v23 = v95;
    if ( v95 )
      ++*(_DWORD *)(v95 + 8);
    v96 = sub_15E2980(a1[1]);
    if ( v96 )
      ++*(_DWORD *)(v96 + 8);
    *(_QWORD *)v125 = v96;
    sub_C41860(a1[62], a1[63]);
    v24 = *(_QWORD *)v125;
  }
  else
  {
    ++*(_DWORD *)(a2 + 8);
    sub_C41860(a1[62], a1[63]);
    v23 = a2;
    v24 = 0;
  }
  v25 = a1[64];
  a1[62] = v24;
  v26 = a1 + 60;
  v27 = a1[18];
  if ( v25 )
  {
    v28 = a1[65];
    v29 = (*(_DWORD *)(v25 + 8))-- == 1;
    if ( v29 )
    {
      v126 = (_DWORD)a1 + 480;
      *(_QWORD *)v125 = v27;
      sub_15D7BC0(v28, v25);
      v26 = a1 + 60;
      v27 = *(_QWORD *)v125;
    }
  }
  a1[64] = 0;
  if ( (unsigned int)sub_C426E0(v27, v14, v17, v26) == 5 )
  {
    if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
    {
      v91 = sub_15DC610(
              a1[1],
              v14,
              v118,
              (int)v17,
              v30,
              v31,
              v118,
              v123[0],
              v125[0],
              v126,
              v127,
              v128,
              v129,
              v130,
              v131,
              v132);
      v92 = v91;
      if ( v91 )
        ++*(_DWORD *)(v91 + 8);
      sub_C41880(a1[60], a1[61]);
      a1[60] = v92;
      v93 = sub_15DE370(a1[1]);
      v94 = v93;
      if ( v93 )
        ++*(_DWORD *)(v93 + 8);
      sub_C41860(a1[62], a1[63]);
      a1[62] = v94;
    }
    else
    {
      ++*(_DWORD *)(a2 + 8);
      sub_C41880(a1[60], a1[61]);
      a1[60] = a2;
    }
    v97 = a1[7];
    if ( v97 )
    {
      v98 = v97 + 8LL * *(unsigned int *)(v97 - 4);
      v122 = *(_DWORD *)(a3 + 12);
      v99 = (__int64 *)(v97 + 8LL * v122);
      if ( (unsigned __int64)v99 >= v98 )
        goto LABEL_129;
      do
      {
        v100 = *v99;
        if ( *v99 )
        {
          v101 = a1[6];
          v29 = (*(_DWORD *)(v100 + 8))-- == 1;
          if ( v29 )
            sub_15D7BC0(v101, v100);
        }
        ++v99;
      }
      while ( (unsigned __int64)v99 < v98 );
      v97 = a1[7];
      if ( v97 )
LABEL_129:
        *(_DWORD *)(v97 - 4) = v122;
    }
    v103 = a1[60];
    v130 = v103;
    if ( v103 )
      ++*(_DWORD *)(v103 + 8);
    sub_C41DD0(a1 + 7, &v130);
    if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
      sub_15843A0(a1, a2, a1[60], a1[62]);
    v104 = a1[11];
    if ( v104 )
    {
      v105 = *(_DWORD *)(a3 + 12);
      v106 = v104 + 8LL * *(unsigned int *)(v104 - 4);
      v107 = (__int64 *)(v104 + 8LL * v105);
      if ( (unsigned __int64)v107 >= v106 )
        goto LABEL_142;
      do
      {
        v108 = *v107;
        if ( *v107 )
        {
          v109 = a1[10];
          v29 = (*(_DWORD *)(v108 + 8))-- == 1;
          if ( v29 )
            sub_15D7BC0(v109, v108);
        }
        ++v107;
      }
      while ( (unsigned __int64)v107 < v106 );
      v104 = a1[11];
      if ( v104 )
LABEL_142:
        *(_DWORD *)(v104 - 4) = v105;
    }
    v110 = a1[62];
    v131 = v110;
    if ( v110 )
      ++*(_DWORD *)(v110 + 8);
    sub_C41D10(a1 + 11, &v131);
    v111 = a1[62];
    if ( v111 )
    {
      v112 = a1[63];
      v29 = (*(_DWORD *)(v111 + 8))-- == 1;
      if ( v29 )
        sub_15D7BC0(v112, v111);
    }
    v113 = a1[5];
    v114 = a1[60];
    a1[62] = 0;
    v115 = *(_DWORD *)(v113 - 4);
    *(_DWORD *)(v113 - 4) = v115 - 1;
    if ( a2 != v114 && v115 != 1 )
    {
      *(_BYTE *)(v113 + 16LL * (unsigned int)(v115 - 2) + 8) |= 2u;
      v114 = a1[60];
    }
    result = sub_C41880(v114, a1[61]);
    a1[60] = 0;
  }
  else
  {
    v32 = a1[7];
    if ( v32 )
    {
      v33 = v32 + 8LL * *(unsigned int *)(v32 - 4);
      v119 = *(_DWORD *)(a3 + 12);
      v34 = (__int64 *)(v32 + 8LL * v119);
      if ( (unsigned __int64)v34 >= v33 )
        goto LABEL_73;
      do
      {
        v35 = *v34;
        if ( *v34 )
        {
          v36 = a1[6];
          v29 = (*(_DWORD *)(v35 + 8))-- == 1;
          if ( v29 )
            sub_15D7BC0(v36, v35);
        }
        ++v34;
      }
      while ( (unsigned __int64)v34 < v33 );
      v32 = a1[7];
      if ( v32 )
LABEL_73:
        *(_DWORD *)(v32 - 4) = v119;
    }
    v73 = a1[60];
    v128 = v73;
    if ( v73 )
      ++*(_DWORD *)(v73 + 8);
    sub_C41DD0(a1 + 7, &v128);
    v74 = a1[11];
    if ( v74 )
    {
      v75 = v74 + 8LL * *(unsigned int *)(v74 - 4);
      v121 = *(_DWORD *)(a3 + 12);
      v76 = (__int64 *)(v74 + 8LL * v121);
      if ( (unsigned __int64)v76 >= v75 )
        goto LABEL_84;
      do
      {
        v77 = *v76;
        if ( *v76 )
        {
          v78 = a1[10];
          v29 = (*(_DWORD *)(v77 + 8))-- == 1;
          if ( v29 )
            sub_15D7BC0(v78, v77);
        }
        ++v76;
      }
      while ( (unsigned __int64)v76 < v75 );
      v74 = a1[11];
      if ( v74 )
LABEL_84:
        *(_DWORD *)(v74 - 4) = v121;
    }
    v79 = a1[64];
    if ( !v79 )
    {
      v102 = sub_15DE370(a1[1]);
      v79 = v102;
      if ( v102 )
        ++*(_DWORD *)(v102 + 8);
      sub_C41860(a1[64], a1[65]);
      a1[64] = v79;
    }
    v80 = sub_15E2470(a1[1], a1[62], v79);
    v81 = a1[62];
    v82 = a1[63];
    v83 = v80;
    if ( v80 )
    {
      ++*(_DWORD *)(v80 + 8);
      sub_C41860(v81, v82);
      a1[62] = v83;
      ++*(_DWORD *)(v83 + 8);
      v129 = v83;
    }
    else
    {
      sub_C41860(v81, v82);
      a1[62] = 0;
      v129 = 0;
    }
    sub_C41D10(a1 + 11, &v129);
    sub_C41860(a1[64], a1[65]);
    a1[64] = 0;
    if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
      sub_15843A0(a1, a2, a1[60], a1[62]);
    v84 = a1[5];
    v85 = *(_DWORD *)(v84 - 4);
    *(_DWORD *)(v84 - 4) = v85 - 1;
    if ( v85 != 1 )
      *(_BYTE *)(v84 + 16LL * (unsigned int)(v85 - 2) + 8) |= 2u;
    sub_C41880(a1[60], a1[61]);
    v86 = a1[63];
    v87 = a1[62];
    a1[60] = 0;
    result = sub_C41860(v87, v86);
    a1[62] = 0;
  }
  if ( v23 )
  {
    v29 = (*(_DWORD *)(v23 + 8))-- == 1;
    if ( v29 )
      return sub_15D7BC0(*(_QWORD *)v123, v23);
  }
  return result;
}

