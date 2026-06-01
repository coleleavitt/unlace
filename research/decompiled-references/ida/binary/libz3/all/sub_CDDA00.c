__int64 __fastcall sub_CDDA00(_QWORD *a1, __int64 a2, __int64 a3)
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
  int v23; // r9d
  __int64 v24; // r12
  _QWORD *v25; // rax
  __int64 v26; // rsi
  int v27; // r8d
  _QWORD *v28; // r10
  __int64 v29; // rdi
  bool v30; // zf
  int v31; // r8d
  int v32; // r9d
  __int64 v33; // rax
  unsigned __int64 v34; // r15
  __int64 *v35; // r14
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rdi
  __int64 v42; // rcx
  __int64 v43; // r12
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // rsi
  __int64 v47; // rcx
  __int64 v48; // r14
  __int64 v49; // rcx
  __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rsi
  __int64 v53; // rdi
  __int64 v54; // r15
  int v55; // eax
  _QWORD *v56; // rdx
  unsigned int v57; // eax
  __int64 v58; // rcx
  int v59; // eax
  __int64 *v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // r12
  __int64 v64; // rsi
  __int64 v65; // rdi
  int v66; // ecx
  __int64 v67; // rdi
  int v68; // edx
  __int64 v69; // rsi
  __int64 v70; // rcx
  __int64 v71; // rsi
  __int64 v72; // rax
  int v73; // ecx
  __int64 v74; // rax
  __int64 v75; // rax
  unsigned __int64 v76; // r15
  __int64 *v77; // r14
  __int64 v78; // rsi
  __int64 v79; // rdi
  __int64 v80; // r14
  __int64 v81; // rax
  __int64 v82; // rdi
  __int64 v83; // rsi
  __int64 v84; // r14
  __int64 v85; // rax
  int v86; // ecx
  __int64 v87; // rsi
  __int64 v88; // rdi
  unsigned int v89; // ecx
  size_t v90; // rsi
  unsigned int *v91; // rax
  __int64 v92; // rax
  __int64 v93; // r14
  __int64 v94; // rax
  __int64 v95; // r14
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  unsigned __int64 v99; // r15
  __int64 *v100; // r14
  __int64 v101; // rsi
  __int64 v102; // rdi
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  unsigned int v106; // r15d
  unsigned __int64 v107; // r14
  __int64 *v108; // rbx
  __int64 v109; // rsi
  __int64 v110; // rdi
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rdi
  int v114; // ecx
  _QWORD *v115; // rax
  char **exception; // rbp
  unsigned int v117; // [rsp+0h] [rbp-98h]
  unsigned int v118; // [rsp+0h] [rbp-98h]
  int v119[2]; // [rsp+0h] [rbp-98h]
  unsigned int v120; // [rsp+0h] [rbp-98h]
  unsigned int v121; // [rsp+0h] [rbp-98h]
  int v122[2]; // [rsp+8h] [rbp-90h]
  unsigned int v123; // [rsp+8h] [rbp-90h]
  int v124[2]; // [rsp+10h] [rbp-88h]
  int v125; // [rsp+18h] [rbp-80h]
  int v126; // [rsp+20h] [rbp-78h]
  __int64 v127; // [rsp+28h] [rbp-70h] BYREF
  __int64 v128; // [rsp+30h] [rbp-68h] BYREF
  __int64 v129; // [rsp+38h] [rbp-60h] BYREF
  __int64 v130; // [rsp+40h] [rbp-58h] BYREF
  void *v131; // [rsp+48h] [rbp-50h]

  v3 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  if ( v3 == 2 )
  {
    v38 = 515;
LABEL_25:
    sub_1872CE0("");
    sub_1873130(107, v38);
  }
  if ( v3 == 3 )
  {
    v38 = 520;
    goto LABEL_25;
  }
  if ( v3 )
  {
    v39 = a1[1];
    v40 = a1[11];
    v41 = a1[10];
    *(_QWORD *)v119 = v39;
    if ( v40 )
    {
      v42 = (unsigned int)(*(_DWORD *)(v40 - 4) - 1);
      v43 = *(_QWORD *)(v40 + 8 * v42);
      v44 = *(_DWORD *)(v40 - 4) - 1;
      if ( !v43 )
      {
        *(_DWORD *)(v40 - 4) = v42;
        goto LABEL_31;
      }
      ++*(_DWORD *)(v43 + 8);
      v45 = (unsigned int)(*(_DWORD *)(v40 - 4) - 1);
      v46 = *(_QWORD *)(v40 + 8 * v45);
      v44 = *(_DWORD *)(v40 - 4) - 1;
      *(_DWORD *)(v40 - 4) = v45;
      if ( !v46 )
        goto LABEL_31;
    }
    else
    {
      v43 = MEMORY[0x7FFFFFFF8];
      if ( !MEMORY[0x7FFFFFFF8] )
      {
        v44 = --MEMORY[0xFFFFFFFFFFFFFFFC];
        goto LABEL_31;
      }
      ++*(_DWORD *)(MEMORY[0x7FFFFFFF8] + 8LL);
      v46 = MEMORY[0x7FFFFFFF8];
      --MEMORY[0xFFFFFFFFFFFFFFFC];
    }
    v30 = (*(_DWORD *)(v46 + 8))-- == 1;
    if ( v30 )
    {
      sub_15D7BC0(v41, v46);
      v40 = a1[11];
      if ( !v40 )
      {
        v48 = MEMORY[0x7FFFFFFF8];
        if ( MEMORY[0x7FFFFFFF8] )
        {
          ++*(_DWORD *)(MEMORY[0x7FFFFFFF8] + 8LL);
          v50 = MEMORY[0x7FFFFFFF8];
          v41 = a1[10];
          --MEMORY[0xFFFFFFFFFFFFFFFC];
LABEL_33:
          v30 = (*(_DWORD *)(v50 + 8))-- == 1;
          if ( v30 )
            sub_15D7BC0(v41, v50);
          goto LABEL_35;
        }
        --MEMORY[0xFFFFFFFFFFFFFFFC];
LABEL_35:
        v51 = sub_15E2470(a1[1], v48, v43);
        v52 = a1[62];
        v53 = a1[63];
        v54 = v51;
        if ( v51 )
        {
          v55 = *(_DWORD *)(v51 + 8) + 1;
          *(_DWORD *)(v54 + 8) = v55;
          if ( v52 )
          {
            v30 = (*(_DWORD *)(v52 + 8))-- == 1;
            if ( v30 )
              sub_15D7BC0(v53, v52);
            a1[62] = v54;
            v55 = *(_DWORD *)(v54 + 8);
          }
          else
          {
            a1[62] = v54;
          }
          *(_DWORD *)(v54 + 8) = v55 + 1;
        }
        else
        {
          if ( v52 )
          {
            v30 = (*(_DWORD *)(v52 + 8))-- == 1;
            if ( v30 )
              sub_15D7BC0(v53, v52);
          }
          a1[62] = 0;
        }
        v56 = (_QWORD *)a1[11];
        if ( v56 )
        {
          v57 = *((_DWORD *)v56 - 1);
          if ( v57 == *((_DWORD *)v56 - 2) )
          {
            v89 = (3 * v57 + 1) >> 1;
            v90 = 8 * v89 + 8;
            if ( 8 * v57 + 8 >= (unsigned int)v90 || v57 >= v89 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_CD6E90(&v130, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v130);
              sub_233E40((__int64)&v130);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v123 = (3 * v57 + 1) >> 1;
            v91 = (unsigned int *)sub_186B300(v56 - 1, v90);
            v56 = v91 + 2;
            a1[11] = v91 + 2;
            *v91 = v123;
            LODWORD(v91) = v91[1];
            v60 = &v56[(unsigned int)v91];
            v59 = (_DWORD)v91 + 1;
          }
          else
          {
            v58 = v57;
            v59 = v57 + 1;
            v60 = &v56[v58];
          }
        }
        else
        {
          v115 = (_QWORD *)sub_186B270(0x18u);
          v56 = v115 + 1;
          *v115 = 2;
          v59 = 1;
          a1[11] = v56;
          v60 = v56;
        }
        *v60 = v54;
        *((_DWORD *)v56 - 1) = v59;
        if ( v48 )
        {
          v30 = (*(_DWORD *)(v48 + 8))-- == 1;
          if ( v30 )
            sub_15D7BC0(*(_QWORD *)v119, v48);
        }
        if ( v43 )
        {
          v30 = (*(_DWORD *)(v43 + 8))-- == 1;
          if ( v30 )
            sub_15D7BC0(*(_QWORD *)v119, v43);
        }
        v61 = 0x7FFFFFFF8LL;
        v62 = a1[7];
        if ( v62 )
          v61 = 8LL * (unsigned int)(*(_DWORD *)(v62 - 4) - 1);
        v63 = *(_QWORD *)(v62 + v61);
        if ( v63 )
          ++*(_DWORD *)(v63 + 8);
        v64 = a1[60];
        if ( v64 )
        {
          v65 = a1[61];
          v30 = (*(_DWORD *)(v64 + 8))-- == 1;
          if ( v30 )
          {
            sub_15D7BC0(v65, v64);
            v62 = a1[7];
          }
        }
        v66 = *(_DWORD *)(v62 - 4);
        v67 = a1[6];
        a1[60] = v63;
        v68 = v66 - 1;
        v69 = *(_QWORD *)(v62 + 8LL * (unsigned int)(v66 - 1));
        *(_DWORD *)(v62 - 4) = v66 - 1;
        if ( v69 )
        {
          v30 = (*(_DWORD *)(v69 + 8))-- == 1;
          if ( v30 )
          {
            sub_15D7BC0(v67, v69);
            v62 = a1[7];
            v67 = a1[6];
          }
          v68 = *(_DWORD *)(v62 - 4);
        }
        v70 = (unsigned int)(v68 - 1);
        v71 = *(_QWORD *)(v62 + 8 * v70);
        *(_DWORD *)(v62 - 4) = v70;
        if ( v71 )
        {
          v30 = (*(_DWORD *)(v71 + 8))-- == 1;
          if ( v30 )
            sub_15D7BC0(v67, v71);
        }
        v72 = a1[60];
        v130 = v72;
        if ( v72 )
          ++*(_DWORD *)(v72 + 8);
        sub_CD7660(a1 + 7, &v130);
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
          sub_15843A0(a1, a2, a1[60], a1[62]);
        result = a1[5];
        v73 = *(_DWORD *)(result - 4);
        *(_DWORD *)(result - 4) = v73 - 1;
        if ( v73 != 1 )
          *(_BYTE *)(result + 16LL * (unsigned int)(v73 - 2) + 8) |= 2u;
        return result;
      }
      v44 = *(_DWORD *)(v40 - 4);
      v41 = a1[10];
    }
    else
    {
      v44 = *(_DWORD *)(v40 - 4);
    }
LABEL_31:
    v47 = (unsigned int)(v44 - 1);
    v48 = *(_QWORD *)(v40 + 8 * v47);
    if ( v48 )
    {
      ++*(_DWORD *)(v48 + 8);
      v49 = (unsigned int)(*(_DWORD *)(v40 - 4) - 1);
      v50 = *(_QWORD *)(v40 + 8 * v49);
      *(_DWORD *)(v40 - 4) = v49;
      if ( v50 )
        goto LABEL_33;
    }
    else
    {
      *(_DWORD *)(v40 - 4) = v47;
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
    result = sub_CDD460(a1, v8, ((unsigned __int8)v9 >> 4) & 3);
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
  v117 = v15 - v16;
  v17 = (_QWORD *)(v13 + 8LL * (unsigned int)v16);
  *(_QWORD *)v122 = a1[1];
  sub_1584610(a1, v16);
  v20 = a1[11];
  if ( v20 )
    v21 = *(_DWORD *)(v20 - 4);
  else
    v21 = 0;
  v22 = v21 - *(_DWORD *)(a3 + 12);
  if ( v22 )
  {
    v96 = sub_15DC610(
            a1[1],
            v14,
            v117,
            (int)v17,
            v18,
            v19,
            v117,
            v122[0],
            v22,
            v125,
            v126,
            v127,
            v128,
            v129,
            v130,
            v131);
    v24 = v96;
    if ( v96 )
      ++*(_DWORD *)(v96 + 8);
    v97 = sub_15E2980(a1[1]);
    if ( v97 )
      ++*(_DWORD *)(v97 + 8);
    *(_QWORD *)v124 = v97;
    sub_CD6E50(a1[62], a1[63]);
    v25 = *(_QWORD **)v124;
  }
  else
  {
    ++*(_DWORD *)(a2 + 8);
    sub_CD6E50(a1[62], a1[63]);
    v24 = a2;
    v25 = nullptr;
  }
  v26 = a1[64];
  a1[62] = v25;
  v27 = (_DWORD)a1 + 480;
  v28 = (_QWORD *)a1[18];
  if ( v26 )
  {
    v29 = a1[65];
    v30 = (*(_DWORD *)(v26 + 8))-- == 1;
    if ( v30 )
    {
      v125 = (_DWORD)a1 + 480;
      *(_QWORD *)v124 = v28;
      sub_15D7BC0(v29, v26);
      v27 = (_DWORD)a1 + 480;
      v28 = *(_QWORD **)v124;
    }
  }
  a1[64] = 0;
  if ( (unsigned int)sub_CD87C0(v28, v14, v117, v17, v27, v23) == 5 )
  {
    if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
    {
      v92 = sub_15DC610(
              a1[1],
              v14,
              v117,
              (int)v17,
              v31,
              v32,
              v117,
              v122[0],
              v124[0],
              v125,
              v126,
              v127,
              v128,
              v129,
              v130,
              v131);
      v93 = v92;
      if ( v92 )
        ++*(_DWORD *)(v92 + 8);
      sub_CD6E70(a1[60], a1[61]);
      a1[60] = v93;
      v94 = sub_15DE370(a1[1]);
      v95 = v94;
      if ( v94 )
        ++*(_DWORD *)(v94 + 8);
      sub_CD6E50(a1[62], a1[63]);
      a1[62] = v95;
    }
    else
    {
      ++*(_DWORD *)(a2 + 8);
      sub_CD6E70(a1[60], a1[61]);
      a1[60] = a2;
    }
    v98 = a1[7];
    if ( v98 )
    {
      v99 = v98 + 8LL * *(unsigned int *)(v98 - 4);
      v121 = *(_DWORD *)(a3 + 12);
      v100 = (__int64 *)(v98 + 8LL * v121);
      if ( (unsigned __int64)v100 >= v99 )
        goto LABEL_129;
      do
      {
        v101 = *v100;
        if ( *v100 )
        {
          v102 = a1[6];
          v30 = (*(_DWORD *)(v101 + 8))-- == 1;
          if ( v30 )
            sub_15D7BC0(v102, v101);
        }
        ++v100;
      }
      while ( (unsigned __int64)v100 < v99 );
      v98 = a1[7];
      if ( v98 )
LABEL_129:
        *(_DWORD *)(v98 - 4) = v121;
    }
    v104 = a1[60];
    v129 = v104;
    if ( v104 )
      ++*(_DWORD *)(v104 + 8);
    sub_CD7660(a1 + 7, &v129);
    if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
      sub_15843A0(a1, a2, a1[60], a1[62]);
    v105 = a1[11];
    if ( v105 )
    {
      v106 = *(_DWORD *)(a3 + 12);
      v107 = v105 + 8LL * *(unsigned int *)(v105 - 4);
      v108 = (__int64 *)(v105 + 8LL * v106);
      if ( (unsigned __int64)v108 >= v107 )
        goto LABEL_142;
      do
      {
        v109 = *v108;
        if ( *v108 )
        {
          v110 = a1[10];
          v30 = (*(_DWORD *)(v109 + 8))-- == 1;
          if ( v30 )
            sub_15D7BC0(v110, v109);
        }
        ++v108;
      }
      while ( (unsigned __int64)v108 < v107 );
      v105 = a1[11];
      if ( v105 )
LABEL_142:
        *(_DWORD *)(v105 - 4) = v106;
    }
    v111 = a1[62];
    v130 = v111;
    if ( v111 )
      ++*(_DWORD *)(v111 + 8);
    sub_CD7720(a1 + 11, &v130);
    sub_CD6E50(a1[62], a1[63]);
    v112 = a1[5];
    v113 = a1[60];
    a1[62] = 0;
    v114 = *(_DWORD *)(v112 - 4);
    *(_DWORD *)(v112 - 4) = v114 - 1;
    if ( a2 != v113 && v114 != 1 )
    {
      *(_BYTE *)(v112 + 16LL * (unsigned int)(v114 - 2) + 8) |= 2u;
      v113 = a1[60];
    }
    result = sub_CD6E70(v113, a1[61]);
    a1[60] = 0;
  }
  else
  {
    v33 = a1[7];
    if ( v33 )
    {
      v34 = v33 + 8LL * *(unsigned int *)(v33 - 4);
      v118 = *(_DWORD *)(a3 + 12);
      v35 = (__int64 *)(v33 + 8LL * v118);
      if ( (unsigned __int64)v35 >= v34 )
        goto LABEL_73;
      do
      {
        v36 = *v35;
        if ( *v35 )
        {
          v37 = a1[6];
          v30 = (*(_DWORD *)(v36 + 8))-- == 1;
          if ( v30 )
            sub_15D7BC0(v37, v36);
        }
        ++v35;
      }
      while ( (unsigned __int64)v35 < v34 );
      v33 = a1[7];
      if ( v33 )
LABEL_73:
        *(_DWORD *)(v33 - 4) = v118;
    }
    v74 = a1[60];
    v127 = v74;
    if ( v74 )
      ++*(_DWORD *)(v74 + 8);
    sub_CD7660(a1 + 7, &v127);
    v75 = a1[11];
    if ( v75 )
    {
      v76 = v75 + 8LL * *(unsigned int *)(v75 - 4);
      v120 = *(_DWORD *)(a3 + 12);
      v77 = (__int64 *)(v75 + 8LL * v120);
      if ( (unsigned __int64)v77 >= v76 )
        goto LABEL_84;
      do
      {
        v78 = *v77;
        if ( *v77 )
        {
          v79 = a1[10];
          v30 = (*(_DWORD *)(v78 + 8))-- == 1;
          if ( v30 )
            sub_15D7BC0(v79, v78);
        }
        ++v77;
      }
      while ( (unsigned __int64)v77 < v76 );
      v75 = a1[11];
      if ( v75 )
LABEL_84:
        *(_DWORD *)(v75 - 4) = v120;
    }
    v80 = a1[64];
    if ( !v80 )
    {
      v103 = sub_15DE370(a1[1]);
      v80 = v103;
      if ( v103 )
        ++*(_DWORD *)(v103 + 8);
      sub_CD6E50(a1[64], a1[65]);
      a1[64] = v80;
    }
    v81 = sub_15E2470(a1[1], a1[62], v80);
    v82 = a1[62];
    v83 = a1[63];
    v84 = v81;
    if ( v81 )
    {
      ++*(_DWORD *)(v81 + 8);
      sub_CD6E50(v82, v83);
      a1[62] = v84;
      ++*(_DWORD *)(v84 + 8);
      v128 = v84;
    }
    else
    {
      sub_CD6E50(v82, v83);
      a1[62] = 0;
      v128 = 0;
    }
    sub_CD7720(a1 + 11, &v128);
    sub_CD6E50(a1[64], a1[65]);
    a1[64] = 0;
    if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
      sub_15843A0(a1, a2, a1[60], a1[62]);
    v85 = a1[5];
    v86 = *(_DWORD *)(v85 - 4);
    *(_DWORD *)(v85 - 4) = v86 - 1;
    if ( v86 != 1 )
      *(_BYTE *)(v85 + 16LL * (unsigned int)(v86 - 2) + 8) |= 2u;
    sub_CD6E70(a1[60], a1[61]);
    v87 = a1[63];
    v88 = a1[62];
    a1[60] = 0;
    result = sub_CD6E50(v88, v87);
    a1[62] = 0;
  }
  if ( v24 )
  {
    v30 = (*(_DWORD *)(v24 + 8))-- == 1;
    if ( v30 )
      return sub_15D7BC0(*(_QWORD *)v122, v24);
  }
  return result;
}

