__int64 __fastcall sub_D28FD0(__int64 a1, __int64 a2, __int64 a3)
{
  char **exception; // r14
  char v4; // al
  unsigned int v8; // ebp
  __int64 v9; // rsi
  int v10; // eax
  __int64 result; // rax
  unsigned int v12; // eax
  unsigned int v13; // edx
  __int64 v14; // rax
  __int64 v15; // r13
  int v16; // edx
  __int64 v17; // rsi
  __int64 v18; // r14
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rsi
  __int64 v25; // rdi
  bool v26; // zf
  __int64 v27; // rbp
  __int64 v28; // rax
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // rax
  unsigned __int64 v32; // r14
  __int64 *v33; // r13
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rdi
  __int64 v40; // rcx
  __int64 v41; // rbp
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rsi
  __int64 v45; // rcx
  __int64 v46; // r13
  __int64 v47; // rcx
  __int64 v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rsi
  __int64 v51; // rdi
  __int64 v52; // r14
  int v53; // eax
  _QWORD *v54; // rdx
  unsigned int v55; // eax
  __int64 v56; // rcx
  int v57; // eax
  __int64 *v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rbp
  __int64 v62; // rsi
  __int64 v63; // rdi
  int v64; // ecx
  __int64 v65; // rdi
  int v66; // edx
  __int64 v67; // rsi
  __int64 v68; // rcx
  __int64 v69; // rsi
  __int64 v70; // rax
  int v71; // ecx
  __int64 v72; // rax
  __int64 v73; // rax
  unsigned __int64 v74; // r14
  __int64 *v75; // r13
  __int64 v76; // rsi
  __int64 v77; // rdi
  __int64 v78; // r13
  __int64 v79; // rax
  __int64 v80; // rsi
  __int64 v81; // rdi
  __int64 v82; // r13
  int v83; // eax
  __int64 v84; // rsi
  __int64 v85; // rdi
  int v86; // ecx
  __int64 v87; // rsi
  __int64 v88; // rdi
  __int64 v89; // rsi
  __int64 v90; // rdi
  unsigned int v91; // r8d
  size_t v92; // rsi
  unsigned int *v93; // rax
  __int64 v94; // rcx
  __int64 v95; // rax
  __int64 v96; // r13
  __int64 v97; // rax
  __int64 v98; // r13
  __int64 v99; // rax
  __int64 v100; // rsi
  __int64 v101; // rdi
  __int64 v102; // rax
  unsigned __int64 v103; // r14
  __int64 *v104; // r13
  __int64 v105; // rsi
  __int64 v106; // rdi
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  unsigned int v110; // r13d
  unsigned __int64 v111; // r14
  __int64 *v112; // r12
  __int64 v113; // rsi
  __int64 v114; // rdi
  __int64 v115; // rax
  __int64 v116; // rsi
  __int64 v117; // rdi
  __int64 v118; // rsi
  int v119; // ecx
  __int64 v120; // rdi
  _QWORD *v121; // rax
  int v122; // [rsp+0h] [rbp-98h]
  unsigned int v123; // [rsp+8h] [rbp-90h]
  unsigned int v124; // [rsp+8h] [rbp-90h]
  int v125[2]; // [rsp+8h] [rbp-90h]
  unsigned int v126; // [rsp+8h] [rbp-90h]
  unsigned int v127; // [rsp+8h] [rbp-90h]
  int v128[2]; // [rsp+10h] [rbp-88h]
  unsigned int v129; // [rsp+10h] [rbp-88h]
  int v130[2]; // [rsp+18h] [rbp-80h]
  int v131; // [rsp+20h] [rbp-78h]
  __int64 v132; // [rsp+28h] [rbp-70h] BYREF
  __int64 v133; // [rsp+30h] [rbp-68h] BYREF
  __int64 v134; // [rsp+38h] [rbp-60h] BYREF
  __int64 v135; // [rsp+40h] [rbp-58h] BYREF
  void *v136; // [rsp+48h] [rbp-50h]

  v4 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  if ( v4 == 2 )
  {
    v36 = 515;
LABEL_25:
    sub_1872CE0("");
    sub_1873130(107, v36);
  }
  if ( v4 == 3 )
  {
    v36 = 520;
    goto LABEL_25;
  }
  if ( v4 )
  {
    v37 = *(_QWORD *)(a1 + 8);
    v38 = *(_QWORD *)(a1 + 88);
    v39 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)v125 = v37;
    if ( v38 )
    {
      v40 = (unsigned int)(*(_DWORD *)(v38 - 4) - 1);
      v41 = *(_QWORD *)(v38 + 8 * v40);
      v42 = *(_DWORD *)(v38 - 4) - 1;
      if ( !v41 )
      {
        *(_DWORD *)(v38 - 4) = v40;
        goto LABEL_31;
      }
      ++*(_DWORD *)(v41 + 8);
      v43 = (unsigned int)(*(_DWORD *)(v38 - 4) - 1);
      v44 = *(_QWORD *)(v38 + 8 * v43);
      v42 = *(_DWORD *)(v38 - 4) - 1;
      *(_DWORD *)(v38 - 4) = v43;
      if ( !v44 )
        goto LABEL_31;
    }
    else
    {
      v41 = MEMORY[0x7FFFFFFF8];
      if ( !MEMORY[0x7FFFFFFF8] )
      {
        v42 = --MEMORY[0xFFFFFFFFFFFFFFFC];
        goto LABEL_31;
      }
      ++*(_DWORD *)(MEMORY[0x7FFFFFFF8] + 8LL);
      v44 = MEMORY[0x7FFFFFFF8];
      --MEMORY[0xFFFFFFFFFFFFFFFC];
    }
    v26 = (*(_DWORD *)(v44 + 8))-- == 1;
    if ( v26 )
    {
      sub_15D7BC0(v39, v44);
      v38 = *(_QWORD *)(a1 + 88);
      if ( !v38 )
      {
        v46 = MEMORY[0x7FFFFFFF8];
        if ( MEMORY[0x7FFFFFFF8] )
        {
          ++*(_DWORD *)(MEMORY[0x7FFFFFFF8] + 8LL);
          v48 = MEMORY[0x7FFFFFFF8];
          v39 = *(_QWORD *)(a1 + 80);
          --MEMORY[0xFFFFFFFFFFFFFFFC];
LABEL_33:
          v26 = (*(_DWORD *)(v48 + 8))-- == 1;
          if ( v26 )
            sub_15D7BC0(v39, v48);
          goto LABEL_35;
        }
        --MEMORY[0xFFFFFFFFFFFFFFFC];
LABEL_35:
        v49 = sub_15E2470(*(_QWORD *)(a1 + 8), v46, v41);
        v50 = *(_QWORD *)(a1 + 496);
        v51 = *(_QWORD *)(a1 + 504);
        v52 = v49;
        if ( v49 )
        {
          v53 = *(_DWORD *)(v49 + 8) + 1;
          *(_DWORD *)(v52 + 8) = v53;
          if ( v50 )
          {
            v26 = (*(_DWORD *)(v50 + 8))-- == 1;
            if ( v26 )
              sub_15D7BC0(v51, v50);
            *(_QWORD *)(a1 + 496) = v52;
            v53 = *(_DWORD *)(v52 + 8);
          }
          else
          {
            *(_QWORD *)(a1 + 496) = v52;
          }
          *(_DWORD *)(v52 + 8) = v53 + 1;
        }
        else
        {
          if ( v50 )
          {
            v26 = (*(_DWORD *)(v50 + 8))-- == 1;
            if ( v26 )
              sub_15D7BC0(v51, v50);
          }
          *(_QWORD *)(a1 + 496) = 0;
        }
        v54 = *(_QWORD **)(a1 + 88);
        if ( v54 )
        {
          v55 = *((_DWORD *)v54 - 1);
          if ( v55 == *((_DWORD *)v54 - 2) )
          {
            v91 = (3 * v55 + 1) >> 1;
            v92 = 8 * v91 + 8;
            if ( 8 * v55 + 8 >= (unsigned int)v92 || v55 >= v91 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_D240F0(&v135, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v135);
              sub_233E40((__int64)&v135);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v129 = (3 * v55 + 1) >> 1;
            v93 = (unsigned int *)sub_186B300(v54 - 1, v92);
            v94 = v93[1];
            v54 = v93 + 2;
            *(_QWORD *)(a1 + 88) = v93 + 2;
            *v93 = v129;
            LODWORD(v93) = v94;
            v58 = &v54[v94];
            v57 = (_DWORD)v93 + 1;
          }
          else
          {
            v56 = v55;
            v57 = v55 + 1;
            v58 = &v54[v56];
          }
        }
        else
        {
          v121 = (_QWORD *)sub_186B270(0x18u);
          v54 = v121 + 1;
          *v121 = 2;
          v57 = 1;
          *(_QWORD *)(a1 + 88) = v54;
          v58 = v54;
        }
        *v58 = v52;
        *((_DWORD *)v54 - 1) = v57;
        if ( v46 )
        {
          v26 = (*(_DWORD *)(v46 + 8))-- == 1;
          if ( v26 )
            sub_15D7BC0(*(_QWORD *)v125, v46);
        }
        if ( v41 )
        {
          v26 = (*(_DWORD *)(v41 + 8))-- == 1;
          if ( v26 )
            sub_15D7BC0(*(_QWORD *)v125, v41);
        }
        v59 = 0x7FFFFFFF8LL;
        v60 = *(_QWORD *)(a1 + 56);
        if ( v60 )
          v59 = 8LL * (unsigned int)(*(_DWORD *)(v60 - 4) - 1);
        v61 = *(_QWORD *)(v60 + v59);
        if ( v61 )
          ++*(_DWORD *)(v61 + 8);
        v62 = *(_QWORD *)(a1 + 480);
        if ( v62 )
        {
          v63 = *(_QWORD *)(a1 + 488);
          v26 = (*(_DWORD *)(v62 + 8))-- == 1;
          if ( v26 )
          {
            sub_15D7BC0(v63, v62);
            v60 = *(_QWORD *)(a1 + 56);
          }
        }
        v64 = *(_DWORD *)(v60 - 4);
        v65 = *(_QWORD *)(a1 + 48);
        *(_QWORD *)(a1 + 480) = v61;
        v66 = v64 - 1;
        v67 = *(_QWORD *)(v60 + 8LL * (unsigned int)(v64 - 1));
        *(_DWORD *)(v60 - 4) = v64 - 1;
        if ( v67 )
        {
          v26 = (*(_DWORD *)(v67 + 8))-- == 1;
          if ( v26 )
          {
            sub_15D7BC0(v65, v67);
            v60 = *(_QWORD *)(a1 + 56);
            v65 = *(_QWORD *)(a1 + 48);
          }
          v66 = *(_DWORD *)(v60 - 4);
        }
        v68 = (unsigned int)(v66 - 1);
        v69 = *(_QWORD *)(v60 + 8 * v68);
        *(_DWORD *)(v60 - 4) = v68;
        if ( v69 )
        {
          v26 = (*(_DWORD *)(v69 + 8))-- == 1;
          if ( v26 )
            sub_15D7BC0(v65, v69);
        }
        v70 = *(_QWORD *)(a1 + 480);
        v135 = v70;
        if ( v70 )
          ++*(_DWORD *)(v70 + 8);
        sub_D270D0((_QWORD *)(a1 + 56), &v135);
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
          sub_15843A0(a1, a2, *(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 496));
        result = *(_QWORD *)(a1 + 40);
        v71 = *(_DWORD *)(result - 4);
        *(_DWORD *)(result - 4) = v71 - 1;
        if ( v71 != 1 )
          *(_BYTE *)(result + 16LL * (unsigned int)(v71 - 2) + 8) |= 2u;
        return result;
      }
      v42 = *(_DWORD *)(v38 - 4);
      v39 = *(_QWORD *)(a1 + 80);
    }
    else
    {
      v42 = *(_DWORD *)(v38 - 4);
    }
LABEL_31:
    v45 = (unsigned int)(v42 - 1);
    v46 = *(_QWORD *)(v38 + 8 * v45);
    if ( v46 )
    {
      ++*(_DWORD *)(v46 + 8);
      v47 = (unsigned int)(*(_DWORD *)(v38 - 4) - 1);
      v48 = *(_QWORD *)(v38 + 8 * v47);
      *(_DWORD *)(v38 - 4) = v47;
      if ( v48 )
        goto LABEL_33;
    }
    else
    {
      *(_DWORD *)(v38 - 4) = v45;
    }
    goto LABEL_35;
  }
  v8 = *(_DWORD *)(a2 + 24);
  while ( 1 )
  {
    v12 = *(_DWORD *)(a3 + 8);
    v13 = v12 >> 6;
    if ( v12 >> 6 >= v8 )
      break;
    v9 = *(_QWORD *)(a2 + 8LL * v13 + 32);
    v10 = ((v13 + 1) << 6) | v12 & 0x3F;
    *(_DWORD *)(a3 + 8) = v10;
    result = sub_D28980(a1, v9, ((unsigned __int8)v10 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v14 = *(_QWORD *)(a1 + 56);
  v15 = *(_QWORD *)(a2 + 16);
  if ( v14 )
    v16 = *(_DWORD *)(v14 - 4);
  else
    v16 = 0;
  v17 = *(unsigned int *)(a3 + 12);
  v123 = v16 - v17;
  v18 = v14 + 8LL * (unsigned int)v17;
  *(_QWORD *)v128 = *(_QWORD *)(a1 + 8);
  sub_1584610(a1, v17);
  v21 = *(_QWORD *)(a1 + 88);
  if ( v21 )
    v22 = *(_DWORD *)(v21 - 4);
  else
    v22 = 0;
  v23 = v22 - *(_DWORD *)(a3 + 12);
  if ( v23 )
  {
    v99 = sub_15DC610(
            *(_QWORD *)(a1 + 8),
            v15,
            v123,
            v18,
            v19,
            v20,
            v122,
            v123,
            v128[0],
            v23,
            v131,
            v132,
            v133,
            v134,
            v135,
            v136);
    v27 = v99;
    if ( v99 )
      ++*(_DWORD *)(v99 + 8);
    v28 = sub_15E2980(*(_QWORD *)(a1 + 8));
    if ( v28 )
      ++*(_DWORD *)(v28 + 8);
    v100 = *(_QWORD *)(a1 + 496);
    if ( v100 )
    {
      v101 = *(_QWORD *)(a1 + 504);
      v26 = (*(_DWORD *)(v100 + 8))-- == 1;
      if ( v26 )
      {
        *(_QWORD *)v130 = v28;
        sub_15D7BC0(v101, v100);
        v28 = *(_QWORD *)v130;
      }
    }
  }
  else
  {
    v24 = *(_QWORD *)(a1 + 496);
    ++*(_DWORD *)(a2 + 8);
    if ( v24 )
    {
      v25 = *(_QWORD *)(a1 + 504);
      v26 = (*(_DWORD *)(v24 + 8))-- == 1;
      if ( v26 )
        sub_15D7BC0(v25, v24);
    }
    v27 = a2;
    v28 = 0;
  }
  *(_QWORD *)(a1 + 496) = v28;
  if ( (unsigned int)sub_D24CB0(*(_QWORD **)(a1 + 144), v15, v123, v18, (__int64 *)(a1 + 480), (_QWORD *)(a1 + 512)) == 5 )
  {
    if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
    {
      v95 = sub_15DC610(
              *(_QWORD *)(a1 + 8),
              v15,
              v123,
              v18,
              v29,
              v30,
              v122,
              v123,
              v128[0],
              v130[0],
              v131,
              v132,
              v133,
              v134,
              v135,
              v136);
      v96 = v95;
      if ( v95 )
        ++*(_DWORD *)(v95 + 8);
      sub_D240D0(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
      *(_QWORD *)(a1 + 480) = v96;
      v97 = sub_15DE370(*(_QWORD *)(a1 + 8));
      v98 = v97;
      if ( v97 )
        ++*(_DWORD *)(v97 + 8);
      sub_D240B0(*(_QWORD *)(a1 + 496), *(_QWORD *)(a1 + 504));
      *(_QWORD *)(a1 + 496) = v98;
    }
    else
    {
      ++*(_DWORD *)(a2 + 8);
      sub_D240D0(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
      *(_QWORD *)(a1 + 480) = a2;
    }
    v102 = *(_QWORD *)(a1 + 56);
    if ( v102 )
    {
      v103 = v102 + 8LL * *(unsigned int *)(v102 - 4);
      v127 = *(_DWORD *)(a3 + 12);
      v104 = (__int64 *)(v102 + 8LL * v127);
      if ( (unsigned __int64)v104 >= v103 )
        goto LABEL_147;
      do
      {
        v105 = *v104;
        if ( *v104 )
        {
          v106 = *(_QWORD *)(a1 + 48);
          v26 = (*(_DWORD *)(v105 + 8))-- == 1;
          if ( v26 )
            sub_15D7BC0(v106, v105);
        }
        ++v104;
      }
      while ( (unsigned __int64)v104 < v103 );
      v102 = *(_QWORD *)(a1 + 56);
      if ( v102 )
LABEL_147:
        *(_DWORD *)(v102 - 4) = v127;
    }
    v108 = *(_QWORD *)(a1 + 480);
    v134 = v108;
    if ( v108 )
      ++*(_DWORD *)(v108 + 8);
    sub_D270D0((_QWORD *)(a1 + 56), &v134);
    if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
      sub_15843A0(a1, a2, *(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 496));
    v109 = *(_QWORD *)(a1 + 88);
    if ( v109 )
    {
      v110 = *(_DWORD *)(a3 + 12);
      v111 = v109 + 8LL * *(unsigned int *)(v109 - 4);
      v112 = (__int64 *)(v109 + 8LL * v110);
      if ( (unsigned __int64)v112 >= v111 )
        goto LABEL_160;
      do
      {
        v113 = *v112;
        if ( *v112 )
        {
          v114 = *(_QWORD *)(a1 + 80);
          v26 = (*(_DWORD *)(v113 + 8))-- == 1;
          if ( v26 )
            sub_15D7BC0(v114, v113);
        }
        ++v112;
      }
      while ( (unsigned __int64)v112 < v111 );
      v109 = *(_QWORD *)(a1 + 88);
      if ( v109 )
LABEL_160:
        *(_DWORD *)(v109 - 4) = v110;
    }
    v115 = *(_QWORD *)(a1 + 496);
    v135 = v115;
    if ( v115 )
      ++*(_DWORD *)(v115 + 8);
    sub_D263C0((_QWORD *)(a1 + 88), &v135);
    v116 = *(_QWORD *)(a1 + 496);
    if ( v116 )
    {
      v117 = *(_QWORD *)(a1 + 504);
      v26 = (*(_DWORD *)(v116 + 8))-- == 1;
      if ( v26 )
        sub_15D7BC0(v117, v116);
    }
    result = *(_QWORD *)(a1 + 40);
    v118 = *(_QWORD *)(a1 + 480);
    *(_QWORD *)(a1 + 496) = 0;
    v119 = *(_DWORD *)(result - 4);
    *(_DWORD *)(result - 4) = v119 - 1;
    if ( a2 != v118 && v119 != 1 )
    {
      *(_BYTE *)(result + 16LL * (unsigned int)(v119 - 2) + 8) |= 2u;
      v118 = *(_QWORD *)(a1 + 480);
    }
    if ( v118 )
    {
      v120 = *(_QWORD *)(a1 + 488);
      v26 = (*(_DWORD *)(v118 + 8))-- == 1;
      if ( v26 )
        result = sub_15D7BC0(v120, v118);
    }
    *(_QWORD *)(a1 + 480) = 0;
  }
  else
  {
    v31 = *(_QWORD *)(a1 + 56);
    if ( v31 )
    {
      v32 = v31 + 8LL * *(unsigned int *)(v31 - 4);
      v124 = *(_DWORD *)(a3 + 12);
      v33 = (__int64 *)(v31 + 8LL * v124);
      if ( (unsigned __int64)v33 >= v32 )
        goto LABEL_73;
      do
      {
        v34 = *v33;
        if ( *v33 )
        {
          v35 = *(_QWORD *)(a1 + 48);
          v26 = (*(_DWORD *)(v34 + 8))-- == 1;
          if ( v26 )
            sub_15D7BC0(v35, v34);
        }
        ++v33;
      }
      while ( (unsigned __int64)v33 < v32 );
      v31 = *(_QWORD *)(a1 + 56);
      if ( v31 )
LABEL_73:
        *(_DWORD *)(v31 - 4) = v124;
    }
    v72 = *(_QWORD *)(a1 + 480);
    v132 = v72;
    if ( v72 )
      ++*(_DWORD *)(v72 + 8);
    sub_D270D0((_QWORD *)(a1 + 56), &v132);
    v73 = *(_QWORD *)(a1 + 88);
    if ( v73 )
    {
      v74 = v73 + 8LL * *(unsigned int *)(v73 - 4);
      v126 = *(_DWORD *)(a3 + 12);
      v75 = (__int64 *)(v73 + 8LL * v126);
      if ( (unsigned __int64)v75 >= v74 )
        goto LABEL_84;
      do
      {
        v76 = *v75;
        if ( *v75 )
        {
          v77 = *(_QWORD *)(a1 + 80);
          v26 = (*(_DWORD *)(v76 + 8))-- == 1;
          if ( v26 )
            sub_15D7BC0(v77, v76);
        }
        ++v75;
      }
      while ( (unsigned __int64)v75 < v74 );
      v73 = *(_QWORD *)(a1 + 88);
      if ( v73 )
LABEL_84:
        *(_DWORD *)(v73 - 4) = v126;
    }
    v78 = *(_QWORD *)(a1 + 512);
    if ( !v78 )
    {
      v107 = sub_15DE370(*(_QWORD *)(a1 + 8));
      v78 = v107;
      if ( v107 )
        ++*(_DWORD *)(v107 + 8);
      sub_D240B0(*(_QWORD *)(a1 + 512), *(_QWORD *)(a1 + 520));
      *(_QWORD *)(a1 + 512) = v78;
    }
    v79 = sub_15E2470(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 496), v78);
    v80 = *(_QWORD *)(a1 + 496);
    v81 = *(_QWORD *)(a1 + 504);
    v82 = v79;
    if ( v79 )
    {
      v83 = *(_DWORD *)(v79 + 8) + 1;
      *(_DWORD *)(v82 + 8) = v83;
      if ( v80 )
      {
        v26 = (*(_DWORD *)(v80 + 8))-- == 1;
        if ( v26 )
          sub_15D7BC0(v81, v80);
        *(_QWORD *)(a1 + 496) = v82;
        v83 = *(_DWORD *)(v82 + 8);
        v133 = v82;
      }
      else
      {
        *(_QWORD *)(a1 + 496) = v82;
        v133 = v82;
      }
      *(_DWORD *)(v82 + 8) = v83 + 1;
    }
    else
    {
      if ( v80 )
      {
        v26 = (*(_DWORD *)(v80 + 8))-- == 1;
        if ( v26 )
          sub_15D7BC0(v81, v80);
      }
      *(_QWORD *)(a1 + 496) = 0;
      v133 = 0;
    }
    sub_D263C0((_QWORD *)(a1 + 88), &v133);
    v84 = *(_QWORD *)(a1 + 512);
    if ( v84 )
    {
      v85 = *(_QWORD *)(a1 + 520);
      v26 = (*(_DWORD *)(v84 + 8))-- == 1;
      if ( v26 )
        sub_15D7BC0(v85, v84);
    }
    *(_QWORD *)(a1 + 512) = 0;
    if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
      sub_15843A0(a1, a2, *(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 496));
    result = *(_QWORD *)(a1 + 40);
    v86 = *(_DWORD *)(result - 4);
    *(_DWORD *)(result - 4) = v86 - 1;
    if ( v86 != 1 )
      *(_BYTE *)(result + 16LL * (unsigned int)(v86 - 2) + 8) |= 2u;
    v87 = *(_QWORD *)(a1 + 480);
    if ( v87 )
    {
      v88 = *(_QWORD *)(a1 + 488);
      v26 = (*(_DWORD *)(v87 + 8))-- == 1;
      if ( v26 )
        result = sub_15D7BC0(v88, v87);
    }
    v89 = *(_QWORD *)(a1 + 496);
    *(_QWORD *)(a1 + 480) = 0;
    if ( v89 )
    {
      v90 = *(_QWORD *)(a1 + 504);
      v26 = (*(_DWORD *)(v89 + 8))-- == 1;
      if ( v26 )
        result = sub_15D7BC0(v90, v89);
    }
    *(_QWORD *)(a1 + 496) = 0;
  }
  if ( v27 )
  {
    v26 = (*(_DWORD *)(v27 + 8))-- == 1;
    if ( v26 )
      return sub_15D7BC0(*(_QWORD *)v128, v27);
  }
  return result;
}

