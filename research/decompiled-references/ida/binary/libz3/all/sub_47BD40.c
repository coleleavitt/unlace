__int64 __fastcall sub_47BD40(__int64 a1, _QWORD *a2, __int64 a3, __int64 *a4)
{
  char **v4; // rbp
  char **exception; // rbx
  __int64 *v6; // rbp
  __int64 *v7; // r15
  __int64 v8; // rdx
  int v9; // eax
  _QWORD *v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // r14
  bool v13; // zf
  __int64 v14; // rbx
  unsigned int v15; // eax
  unsigned int v16; // r14d
  unsigned int v17; // edx
  unsigned int *v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // ebx
  __int64 *v21; // rbp
  __int64 v22; // r15
  _QWORD *v23; // rdx
  __int64 v24; // r12
  unsigned int v25; // r14d
  size_t v26; // rsi
  unsigned int *v27; // rax
  unsigned int v28; // ecx
  _QWORD *v29; // rcx
  _QWORD *v30; // rdx
  _QWORD *v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rsi
  unsigned int v34; // ebp
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // rdx
  __int64 *v38; // rbx
  unsigned __int64 v39; // r12
  __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 *v42; // rbx
  __int64 v43; // rax
  __int64 *v44; // r12
  __int64 v45; // rax
  __int64 *v46; // rbx
  unsigned __int64 v47; // r12
  __int64 v48; // rsi
  __int64 v49; // rdi
  __int64 *v50; // rbx
  __int64 v51; // rax
  __int64 *v52; // r12
  __int64 v53; // rax
  __int64 *v54; // rbx
  unsigned __int64 v55; // r12
  __int64 v56; // rsi
  __int64 v57; // rdi
  __int64 *v58; // rbx
  __int64 v59; // rax
  __int64 *v60; // r12
  __int64 v61; // rax
  __int64 *v62; // rbx
  unsigned __int64 v63; // r12
  __int64 v64; // rsi
  __int64 v65; // rdi
  __int64 *v66; // rbx
  __int64 v67; // rax
  __int64 *v68; // r12
  __int64 v69; // rax
  __int64 *v70; // rbx
  unsigned __int64 v71; // r12
  __int64 v72; // rsi
  __int64 v73; // rdi
  __int64 *v74; // rbx
  unsigned __int64 v75; // r12
  __int64 v76; // rsi
  __int64 v77; // rdi
  __int64 v78; // rsi
  __int64 v79; // rdi
  __int64 *v80; // rbx
  unsigned __int64 v81; // r12
  __int64 v82; // rsi
  _QWORD *v84; // rax
  int v85; // [rsp+0h] [rbp-278h]
  __int64 *v86; // [rsp+8h] [rbp-270h]
  int v87; // [rsp+10h] [rbp-268h]
  __int64 v88; // [rsp+10h] [rbp-268h]
  int v89; // [rsp+18h] [rbp-260h]
  __int64 *v90; // [rsp+18h] [rbp-260h]
  int v91; // [rsp+20h] [rbp-258h]
  __int64 v92; // [rsp+20h] [rbp-258h]
  int v93; // [rsp+28h] [rbp-250h]
  __int64 *v94; // [rsp+28h] [rbp-250h]
  unsigned __int64 v95; // [rsp+30h] [rbp-248h]
  char *v96; // [rsp+38h] [rbp-240h]
  __int64 *v98; // [rsp+58h] [rbp-220h]
  __int64 v99; // [rsp+60h] [rbp-218h]
  char v101; // [rsp+7Eh] [rbp-1FAh] BYREF
  __int64 v102; // [rsp+80h] [rbp-1F8h]
  __int64 v103; // [rsp+90h] [rbp-1E8h] BYREF
  __int64 v104; // [rsp+98h] [rbp-1E0h]
  __int64 v105[4]; // [rsp+A0h] [rbp-1D8h] BYREF
  __int64 v106[4]; // [rsp+C0h] [rbp-1B8h] BYREF
  __int64 *v107; // [rsp+E0h] [rbp-198h]
  __int64 v108; // [rsp+F0h] [rbp-188h]
  char v109[8]; // [rsp+100h] [rbp-178h] BYREF
  __int64 v110; // [rsp+108h] [rbp-170h]
  __int64 *v111; // [rsp+110h] [rbp-168h]
  __int64 v112; // [rsp+118h] [rbp-160h]
  void *ptr; // [rsp+120h] [rbp-158h]
  __int64 v114; // [rsp+138h] [rbp-140h]
  char v115[8]; // [rsp+140h] [rbp-138h] BYREF
  _QWORD *v116; // [rsp+148h] [rbp-130h]
  int v117; // [rsp+150h] [rbp-128h]
  unsigned int v118; // [rsp+154h] [rbp-124h]
  int v119; // [rsp+158h] [rbp-120h]
  __int64 v120; // [rsp+160h] [rbp-118h]
  __int64 v121; // [rsp+168h] [rbp-110h]
  __int64 *v122; // [rsp+170h] [rbp-108h]
  __int64 v123; // [rsp+178h] [rbp-100h]
  __int64 v124; // [rsp+180h] [rbp-F8h]
  __int64 *v125; // [rsp+188h] [rbp-F0h]
  __int64 v126; // [rsp+198h] [rbp-E0h]
  __int64 *v127; // [rsp+1A0h] [rbp-D8h]
  __int64 *v128; // [rsp+1A8h] [rbp-D0h]
  char v129[8]; // [rsp+1C0h] [rbp-B8h] BYREF
  __int64 v130; // [rsp+1C8h] [rbp-B0h]
  __int64 v131; // [rsp+1E0h] [rbp-98h]
  __int64 v132; // [rsp+1E8h] [rbp-90h]
  __int64 *v133; // [rsp+1F0h] [rbp-88h]
  __int64 v134; // [rsp+1F8h] [rbp-80h]
  __int64 v135; // [rsp+200h] [rbp-78h]
  __int64 *v136; // [rsp+208h] [rbp-70h]
  __int64 v137; // [rsp+218h] [rbp-60h]
  __int64 *v138; // [rsp+220h] [rbp-58h]
  __int64 *v139; // [rsp+228h] [rbp-50h]

  v99 = *(_QWORD *)(a1 + 32);
  v102 = v99;
  v103 = 0;
  v104 = v99;
  v96 = v109;
  sub_4B26F0(v109, v99);
  sub_FA3A80(v115, *(_QWORD *)(a1 + 32));
  sub_FA3A80(v129, *(_QWORD *)(a1 + 32));
  v6 = *(__int64 **)(a3 + 8);
  if ( v6 )
  {
    v95 = 0;
    v7 = &v6[*((unsigned int *)v6 - 1)];
    v86 = &v103;
    if ( v6 != v7 )
    {
      do
      {
        v11 = *v6;
        sub_4B1E40(v96);
        sub_FA3BF0(v115);
        sub_FA3BF0(v129);
        v12 = *(_QWORD *)(a1 + 32);
        if ( v11 )
          ++*(_DWORD *)(v11 + 8);
        sub_4B2D50(
          (_DWORD)v96,
          *a2,
          v11,
          (_DWORD)v86,
          (unsigned int)v115,
          (unsigned int)v129,
          v85,
          (_DWORD)v86,
          v87,
          v89,
          v91,
          v93,
          v95,
          (__int64)v96);
        if ( v11 )
        {
          v13 = (*(_DWORD *)(v11 + 8))-- == 1;
          if ( v13 )
            sub_15D7BC0(v12, v11);
        }
        v14 = v103;
        if ( v103 )
          ++*(_DWORD *)(v103 + 8);
        if ( v95 )
        {
          v15 = *(_DWORD *)(v95 - 4);
          if ( v15 == *(_DWORD *)(v95 - 8) )
          {
            v16 = (3 * v15 + 1) >> 1;
            v17 = 8 * v16 + 8;
            if ( 8 * v15 + 8 >= v17 || v15 >= v16 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v106, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v106);
              sub_233E40((__int64)v106);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v18 = (unsigned int *)sub_186B300((void *)(v95 - 8), v17);
            v19 = v18[1];
            *v18 = v16;
            v95 = (unsigned __int64)(v18 + 2);
            LODWORD(v18) = v19;
            v10 = (_QWORD *)(v95 + 8 * v19);
            v9 = (_DWORD)v18 + 1;
          }
          else
          {
            v8 = v15;
            v9 = v15 + 1;
            v10 = (_QWORD *)(v95 + 8 * v8);
          }
        }
        else
        {
          v84 = (_QWORD *)sub_186B270(0x18u);
          *v84 = 2;
          v95 = (unsigned __int64)(v84 + 1);
          v10 = v84 + 1;
          v9 = 1;
        }
        *v10 = v14;
        ++v6;
        *(_DWORD *)(v95 - 4) = v9;
      }
      while ( v7 != v6 );
      v101 = 1;
      sub_4B0740(v106, *(_QWORD *)(a1 + 32));
      v98 = (__int64 *)(v95 + 8LL * *(unsigned int *)(v95 - 4));
      if ( v98 == (__int64 *)v95 )
        goto LABEL_59;
      v94 = (__int64 *)v95;
LABEL_20:
      v88 = *v94;
      v20 = sub_3D4AD0(*v94);
      v21 = *(__int64 **)(a3 + 8);
      if ( !v21 || (v90 = &v21[*((unsigned int *)v21 - 1)], v90 == v21) )
      {
LABEL_43:
        v32 = *(_QWORD *)(a1 + 32);
        if ( v88 )
          ++*(_DWORD *)(v88 + 8);
        v33 = *a4;
        *a4 = v88;
        if ( v33 )
        {
          v13 = (*(_DWORD *)(v33 + 8))-- == 1;
          if ( v13 )
            sub_15D7BC0(v32, v33);
        }
        v34 = 1;
        goto LABEL_60;
      }
      v92 = 3LL * v20;
      while ( 1 )
      {
        v22 = *v21;
        sub_4B0770(v106);
        sub_FA3BF0(v115);
        if ( v117 )
          break;
        v23 = v116;
        if ( v116 )
          goto LABEL_26;
        if ( v20 )
          goto LABEL_51;
LABEL_38:
        v118 = v20;
        v117 = 1;
LABEL_39:
        if ( ++v119 == -1 )
        {
          v36 = v116;
          if ( v116 )
          {
            v37 = &v116[3 * *((unsigned int *)v116 - 1)];
            if ( v116 != v37 )
            {
              if ( ((24 * (unsigned __int8)*((_DWORD *)v116 - 1)) & 8) == 0
                || (*((_DWORD *)v116 + 4) = 0, v36 += 3, v37 != v36) )
              {
                do
                {
                  *((_DWORD *)v36 + 4) = 0;
                  v36 += 6;
                  *((_DWORD *)v36 - 2) = 0;
                }
                while ( v37 != v36 );
              }
            }
          }
          v119 = 1;
        }
        if ( !(unsigned __int8)sub_4B0A40(v106, v88, v22, v115, &v101) || !v101 )
        {
          if ( v98 == ++v94 )
            goto LABEL_59;
          goto LABEL_20;
        }
        if ( v90 == ++v21 )
          goto LABEL_43;
      }
      if ( v118 >= v20 )
        goto LABEL_39;
      v23 = v116;
      if ( !v116 )
      {
LABEL_51:
        v35 = (_QWORD *)sub_186B270(0x38u);
        v23 = v35 + 1;
        v24 = 0;
        v116 = v35 + 1;
        *v35 = 2;
LABEL_31:
        while ( 1 )
        {
          v28 = *((_DWORD *)v23 - 2);
          if ( v28 >= v20 )
            break;
          v25 = (3 * v28 + 1) >> 1;
          v26 = 8 * (v25 + ((3 * v28 + 1) & 0xFFFFFFFE)) + 8;
          if ( 24 * v28 + 8 >= (unsigned int)v26 || v28 >= v25 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v105, "Overflow encountered when expanding vector");
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, v105);
            sub_233E40((__int64)v105);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v27 = (unsigned int *)sub_186B300(v23 - 1, v26);
          v23 = v27 + 2;
          *v27 = v25;
          v116 = v27 + 2;
        }
        *((_DWORD *)v23 - 1) = v20;
        v29 = &v23[3 * v24];
        v30 = &v23[v92];
        if ( 3 * v24 != v92 )
        {
          v31 = v29;
          do
          {
            *v31 = 0;
            v31 += 3;
            *((_DWORD *)v31 - 2) = 0;
          }
          while ( v30 != v31 );
          if ( (((_BYTE)v30 - (_BYTE)v29) & 8) == 0 || (*((_DWORD *)v29 + 2) = 0, v29 += 3, v30 != v29) )
          {
            do
            {
              *((_DWORD *)v29 + 2) = 0;
              v29 += 6;
              *((_DWORD *)v29 - 4) = 0;
            }
            while ( v30 != v29 );
          }
        }
        goto LABEL_38;
      }
LABEL_26:
      v24 = *((unsigned int *)v23 - 1);
      if ( (unsigned int)v24 < v20 )
        goto LABEL_31;
      *((_DWORD *)v23 - 1) = v20;
      goto LABEL_38;
    }
  }
  v101 = 1;
  sub_4B0740(v106, *(_QWORD *)(a1 + 32));
  v95 = 0;
LABEL_59:
  v34 = 0;
LABEL_60:
  if ( v108 )
    sub_186B220((void *)(v108 - 8));
  v38 = v107;
  if ( v107 )
  {
    v39 = (unsigned __int64)&v107[*((unsigned int *)v107 - 1)];
    if ( (unsigned __int64)v107 >= v39 )
      goto LABEL_70;
    do
    {
      while ( 1 )
      {
        v40 = *v38;
        if ( *v38 )
        {
          v41 = v106[3];
          v13 = (*(_DWORD *)(v40 + 8))-- == 1;
          if ( v13 )
            break;
        }
        if ( (unsigned __int64)++v38 >= v39 )
          goto LABEL_69;
      }
      sub_15D7BC0(v41, v40);
      ++v38;
    }
    while ( (unsigned __int64)v38 < v39 );
LABEL_69:
    v38 = v107;
    if ( v107 )
LABEL_70:
      sub_186B220(v38 - 1);
  }
  v42 = v139;
  if ( v139 )
  {
    v43 = *((unsigned int *)v139 - 1);
    if ( (_DWORD)v43 )
    {
      v44 = &v139[v43];
      do
      {
        while ( 1 )
        {
          v45 = *v42;
          if ( !*v42 )
            break;
          ++v42;
          sub_186B220((void *)(v45 - 8));
          if ( v44 == v42 )
          {
            v42 = v139;
            goto LABEL_77;
          }
        }
        ++v42;
      }
      while ( v42 != v44 );
      v42 = v139;
    }
LABEL_77:
    sub_186B220(v42 - 1);
  }
  v46 = v138;
  if ( v138 )
  {
    v47 = (unsigned __int64)&v138[*((unsigned int *)v138 - 1)];
    if ( (unsigned __int64)v138 >= v47 )
      goto LABEL_86;
    do
    {
      while ( 1 )
      {
        v48 = *v46;
        if ( *v46 )
        {
          v49 = v137;
          v13 = (*(_DWORD *)(v48 + 8))-- == 1;
          if ( v13 )
            break;
        }
        if ( (unsigned __int64)++v46 >= v47 )
          goto LABEL_85;
      }
      sub_15D7BC0(v49, v48);
      ++v46;
    }
    while ( (unsigned __int64)v46 < v47 );
LABEL_85:
    v46 = v138;
    if ( v138 )
LABEL_86:
      sub_186B220(v46 - 1);
  }
  v50 = v136;
  if ( v136 )
  {
    v51 = *((unsigned int *)v136 - 1);
    if ( (_DWORD)v51 )
    {
      v52 = &v136[v51];
      do
      {
        while ( 1 )
        {
          v53 = *v50;
          if ( !*v50 )
            break;
          ++v50;
          sub_186B220((void *)(v53 - 8));
          if ( v50 == v52 )
          {
            v50 = v136;
            goto LABEL_93;
          }
        }
        ++v50;
      }
      while ( v50 != v52 );
      v50 = v136;
    }
LABEL_93:
    sub_186B220(v50 - 1);
  }
  if ( v135 )
    sub_186B220((void *)(v135 - 8));
  if ( v134 )
    sub_186B220((void *)(v134 - 8));
  v54 = v133;
  if ( v133 )
  {
    v55 = (unsigned __int64)&v133[*((unsigned int *)v133 - 1)];
    if ( (unsigned __int64)v133 >= v55 )
      goto LABEL_106;
    do
    {
      while ( 1 )
      {
        v56 = *v54;
        if ( *v54 )
        {
          v57 = v132;
          v13 = (*(_DWORD *)(v56 + 8))-- == 1;
          if ( v13 )
            break;
        }
        if ( (unsigned __int64)++v54 >= v55 )
          goto LABEL_105;
      }
      sub_15D7BC0(v57, v56);
      ++v54;
    }
    while ( (unsigned __int64)v54 < v55 );
LABEL_105:
    v54 = v133;
    if ( v133 )
LABEL_106:
      sub_186B220(v54 - 1);
  }
  if ( v131 )
    sub_186B220((void *)(v131 - 8));
  if ( v130 )
    sub_186B220((void *)(v130 - 8));
  v58 = v128;
  if ( v128 )
  {
    v59 = *((unsigned int *)v128 - 1);
    if ( (_DWORD)v59 )
    {
      v60 = &v128[v59];
      do
      {
        while ( 1 )
        {
          v61 = *v58;
          if ( !*v58 )
            break;
          ++v58;
          sub_186B220((void *)(v61 - 8));
          if ( v60 == v58 )
          {
            v58 = v128;
            goto LABEL_117;
          }
        }
        ++v58;
      }
      while ( v58 != v60 );
      v58 = v128;
    }
LABEL_117:
    sub_186B220(v58 - 1);
  }
  v62 = v127;
  if ( v127 )
  {
    v63 = (unsigned __int64)&v127[*((unsigned int *)v127 - 1)];
    if ( (unsigned __int64)v127 >= v63 )
      goto LABEL_126;
    do
    {
      while ( 1 )
      {
        v64 = *v62;
        if ( *v62 )
        {
          v65 = v126;
          v13 = (*(_DWORD *)(v64 + 8))-- == 1;
          if ( v13 )
            break;
        }
        if ( (unsigned __int64)++v62 >= v63 )
          goto LABEL_125;
      }
      sub_15D7BC0(v65, v64);
      ++v62;
    }
    while ( (unsigned __int64)v62 < v63 );
LABEL_125:
    v62 = v127;
    if ( v127 )
LABEL_126:
      sub_186B220(v62 - 1);
  }
  v66 = v125;
  if ( v125 )
  {
    v67 = *((unsigned int *)v125 - 1);
    if ( (_DWORD)v67 )
    {
      v68 = &v125[v67];
      do
      {
        while ( 1 )
        {
          v69 = *v66;
          if ( !*v66 )
            break;
          ++v66;
          sub_186B220((void *)(v69 - 8));
          if ( v68 == v66 )
          {
            v66 = v125;
            goto LABEL_133;
          }
        }
        ++v66;
      }
      while ( v66 != v68 );
      v66 = v125;
    }
LABEL_133:
    sub_186B220(v66 - 1);
  }
  if ( v124 )
    sub_186B220((void *)(v124 - 8));
  if ( v123 )
    sub_186B220((void *)(v123 - 8));
  v70 = v122;
  if ( v122 )
  {
    v71 = (unsigned __int64)&v122[*((unsigned int *)v122 - 1)];
    if ( (unsigned __int64)v122 >= v71 )
      goto LABEL_146;
    do
    {
      while ( 1 )
      {
        v72 = *v70;
        if ( *v70 )
        {
          v73 = v121;
          v13 = (*(_DWORD *)(v72 + 8))-- == 1;
          if ( v13 )
            break;
        }
        if ( (unsigned __int64)++v70 >= v71 )
          goto LABEL_145;
      }
      sub_15D7BC0(v73, v72);
      ++v70;
    }
    while ( (unsigned __int64)v70 < v71 );
LABEL_145:
    v70 = v122;
    if ( v122 )
LABEL_146:
      sub_186B220(v70 - 1);
  }
  if ( v120 )
    sub_186B220((void *)(v120 - 8));
  if ( v116 )
    sub_186B220(v116 - 1);
  if ( v114 )
    sub_186B220((void *)(v114 - 8));
  if ( ptr )
    sub_186B220(ptr);
  if ( v112 )
    sub_186B220((void *)(v112 - 8));
  v74 = v111;
  if ( v111 )
  {
    v75 = (unsigned __int64)&v111[*((unsigned int *)v111 - 1)];
    if ( (unsigned __int64)v111 >= v75 )
      goto LABEL_165;
    do
    {
      while ( 1 )
      {
        v76 = *v74;
        if ( *v74 )
        {
          v77 = v110;
          v13 = (*(_DWORD *)(v76 + 8))-- == 1;
          if ( v13 )
            break;
        }
        if ( (unsigned __int64)++v74 >= v75 )
          goto LABEL_164;
      }
      sub_15D7BC0(v77, v76);
      ++v74;
    }
    while ( (unsigned __int64)v74 < v75 );
LABEL_164:
    v74 = v111;
    if ( v111 )
LABEL_165:
      sub_186B220(v74 - 1);
  }
  v78 = v103;
  if ( v103 )
  {
    v79 = v104;
    v13 = (*(_DWORD *)(v103 + 8))-- == 1;
    if ( v13 )
      sub_15D7BC0(v79, v78);
  }
  v80 = (__int64 *)v95;
  if ( v95 )
  {
    v81 = v95 + 8LL * *(unsigned int *)(v95 - 4);
    if ( v95 < v81 )
    {
      do
      {
        while ( 1 )
        {
          v82 = *v80;
          if ( *v80 )
          {
            v13 = (*(_DWORD *)(v82 + 8))-- == 1;
            if ( v13 )
              break;
          }
          if ( (unsigned __int64)++v80 >= v81 )
            goto LABEL_176;
        }
        ++v80;
        sub_15D7BC0(v99, v82);
      }
      while ( (unsigned __int64)v80 < v81 );
    }
LABEL_176:
    sub_186B220((void *)(v95 - 8));
  }
  return v34;
}

