__m128 *__fastcall sub_6267A0(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  char **exception; // r12
  char **v6; // r12
  char **v7; // r13
  char **v8; // r12
  char **v9; // r12
  __int64 v11; // r13
  __int64 v12; // rax
  unsigned __int64 v13; // rsi
  unsigned int v14; // r14d
  __int64 v15; // rax
  void *v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // r12
  _QWORD *v19; // rbx
  _QWORD *v20; // r15
  unsigned int v21; // r14d
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 *v24; // rcx
  int v25; // eax
  __int64 *v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // rdx
  int v29; // eax
  __int64 *v30; // rdx
  __int64 v31; // r13
  bool v32; // zf
  __int64 v33; // rax
  int v34; // edx
  char v35; // cl
  __int64 v36; // rdx
  _QWORD *v37; // rdi
  __int64 v38; // rcx
  int v39; // eax
  _QWORD *v40; // rcx
  unsigned int v41; // eax
  __int64 v42; // rcx
  int v43; // eax
  _QWORD *v44; // rcx
  unsigned int v45; // r12d
  __int64 v46; // rax
  __int64 v47; // r14
  unsigned int v48; // eax
  __int64 v49; // rdx
  int v50; // eax
  __int64 *v51; // rdx
  __int64 *v52; // rdi
  __int64 v53; // rdx
  unsigned int v54; // eax
  unsigned int v55; // r12d
  size_t v56; // rsi
  unsigned int *v57; // rax
  __int64 v58; // rcx
  unsigned int v59; // edx
  size_t v60; // rsi
  __int64 v61; // rax
  _QWORD *v62; // rcx
  unsigned int v63; // edx
  size_t v64; // rsi
  __int64 v65; // rax
  unsigned int v66; // r13d
  size_t v67; // rsi
  unsigned int *v68; // rax
  __int64 v69; // rdx
  unsigned int v70; // r12d
  size_t v71; // rsi
  unsigned int *v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rdx
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // r12
  __int64 v78; // rdx
  __int64 v79; // rax
  _BYTE *v80; // rax
  int v81; // esi
  int v82; // edx
  __int64 v83; // rax
  int v84; // r8d
  int v85; // r9d
  __int64 v86; // r13
  __int64 v87; // rax
  int v88; // edx
  __int64 v89; // rax
  __int64 v90; // r14
  __int64 v91; // rdi
  __int64 v92; // rdx
  _QWORD *v93; // rcx
  __int64 v94; // rax
  __int64 *v95; // r12
  _QWORD *v96; // r15
  unsigned __int64 v97; // r13
  __int64 v98; // rsi
  __int64 *v99; // r14
  unsigned __int64 v100; // r12
  __int64 v101; // rsi
  unsigned __int64 v102; // r12
  __int64 *v103; // r15
  __int64 v104; // rsi
  __int64 v105; // rsi
  __int64 v106; // rdi
  _QWORD *v108; // rax
  _QWORD *v109; // rsi
  _QWORD *v110; // rax
  _QWORD *v111; // rax
  _QWORD *v112; // rax
  _QWORD *v113; // rax
  int v114; // [rsp+0h] [rbp-1A0h]
  __int64 v115; // [rsp+8h] [rbp-198h]
  int v116; // [rsp+10h] [rbp-190h]
  __m128 *v117; // [rsp+18h] [rbp-188h]
  __int64 v118; // [rsp+20h] [rbp-180h]
  void *v119; // [rsp+28h] [rbp-178h]
  __int64 v120; // [rsp+28h] [rbp-178h]
  __int64 v121; // [rsp+30h] [rbp-170h]
  unsigned int v122; // [rsp+38h] [rbp-168h]
  unsigned int v123; // [rsp+3Ch] [rbp-164h]
  int v124[2]; // [rsp+40h] [rbp-160h]
  int v125[2]; // [rsp+48h] [rbp-158h]
  void *v126; // [rsp+48h] [rbp-158h]
  int v127[2]; // [rsp+48h] [rbp-158h]
  int v128[2]; // [rsp+50h] [rbp-150h]
  __int64 v130; // [rsp+60h] [rbp-140h] BYREF
  _QWORD *v131; // [rsp+68h] [rbp-138h]
  __int64 v132; // [rsp+70h] [rbp-130h] BYREF
  __int64 v133; // [rsp+78h] [rbp-128h] BYREF
  __int64 v134; // [rsp+80h] [rbp-120h] BYREF
  __int64 v135; // [rsp+88h] [rbp-118h]
  void *v136; // [rsp+90h] [rbp-110h]
  void *v137; // [rsp+A0h] [rbp-100h]
  __int64 v138[4]; // [rsp+B0h] [rbp-F0h] BYREF
  _QWORD v139[19]; // [rsp+D0h] [rbp-D0h] BYREF
  int v140; // [rsp+168h] [rbp-38h]

  v117 = (__m128 *)a1;
  v11 = *(_QWORD *)(a5 + 16);
  v12 = sub_624790(a2, a3, a4, v11);
  v13 = *(_QWORD *)(a2 + 24);
  v116 = v12;
  if ( !v12 )
  {
    ++*(_DWORD *)(a5 + 8);
    *a1 = _mm_unpacklo_epi64((__m128i)a5, (__m128i)v13);
    return v117;
  }
  v14 = *(_DWORD *)(v12 + 32) - *(_DWORD *)(v11 + 32);
  sub_1584DD0(v139, v13, 0);
  v139[18] = 0;
  v140 = 0;
  v139[0] = &off_1C61DB8;
  v15 = *(_QWORD *)(a2 + 24);
  v134 = 0;
  v135 = v15;
  sub_1585D20(v139, a5, 0, v14, 0, &v134);
  v16 = *(void **)(a2 + 24);
  v17 = *(unsigned int *)(a5 + 24);
  v119 = v16;
  v136 = v16;
  v137 = v16;
  if ( !(_DWORD)v17 )
  {
    v126 = v16;
    v19 = nullptr;
    v18 = 0;
    v20 = nullptr;
    *(_QWORD *)v128 = 0;
    v132 = 0;
    v131 = nullptr;
    v83 = sub_15E1EC0((int)v16, 0, 0);
    goto LABEL_75;
  }
  v130 = v134;
  v18 = 0;
  v19 = nullptr;
  v121 = v134 + 8 * v17;
  v20 = nullptr;
  v21 = 0;
  v131 = nullptr;
  *(_QWORD *)v128 = 0;
  while ( 2 )
  {
    v31 = *(_QWORD *)(v130 + 32);
    if ( v31 )
      ++*(_DWORD *)(v31 + 8);
    if ( v18 )
    {
      v32 = (*(_DWORD *)(v18 + 8))-- == 1;
      if ( v32 )
        sub_15D7BC0(v119, v18);
    }
    *(_QWORD *)v124 = sub_15D1F10(v31);
    v33 = *(_QWORD *)(*(_QWORD *)v124 + 24LL);
    v34 = *(_DWORD *)(a2 + 40);
    if ( !v33 )
      goto LABEL_12;
    v35 = 0;
    while ( *(_DWORD *)v33 == v34 && !*(_DWORD *)(v33 + 4) )
    {
      v36 = *(_QWORD *)(v33 + 8);
      if ( !v36 )
      {
        v122 = -1;
LABEL_28:
        *(_QWORD *)v125 = 0;
        v123 = v21 + v122;
        while ( 1 )
        {
          v52 = (__int64 *)(*(_QWORD *)(v33 + 8) + *(_QWORD *)v125);
          if ( *((_BYTE *)v52 + 8) != 1 )
            sub_DBF6E(0);
          v53 = *v52;
          if ( *v52 )
            ++*(_DWORD *)(v53 + 8);
          if ( v131 )
          {
            v54 = *((_DWORD *)v131 - 1);
            if ( v54 == *((_DWORD *)v131 - 2) )
            {
              v55 = (3 * v54 + 1) >> 1;
              v56 = 8 * v55 + 8;
              if ( 8 * v54 + 8 >= (unsigned int)v56 || v54 >= v55 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v138, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v138);
                sub_233E40((__int64)v138);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v118 = v53;
              v57 = (unsigned int *)sub_186B300(v131 - 1, v56);
              v58 = v57[1];
              *v57 = v55;
              v131 = v57 + 2;
              v53 = v118;
              v37 = v57 + 2;
              LODWORD(v57) = v58;
              v40 = &v131[v58];
              v39 = (_DWORD)v57 + 1;
            }
            else
            {
              v37 = v131;
              v38 = v54;
              v39 = v54 + 1;
              v40 = &v131[v38];
            }
          }
          else
          {
            v118 = v53;
            v111 = (_QWORD *)sub_186B270(0x18u);
            *v111 = 2;
            v53 = v118;
            v131 = v111 + 1;
            v40 = v111 + 1;
            v37 = v111 + 1;
            v39 = 1;
          }
          *v40 = v53;
          *((_DWORD *)v37 - 1) = v39;
          if ( v20 )
          {
            v41 = *((_DWORD *)v20 - 1);
            if ( v41 == *((_DWORD *)v20 - 2) )
            {
              v59 = (3 * v41 + 1) >> 1;
              v60 = 8 * v59 + 8;
              if ( 8 * v41 + 8 >= (unsigned int)v60 || v41 >= v59 )
              {
                v6 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v138, "Overflow encountered when expanding vector");
                *v6 = (char *)off_1C63128;
                sub_2333C0(v6 + 1, v138);
                sub_233E40((__int64)v138);
                __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              LODWORD(v118) = (3 * v41 + 1) >> 1;
              v61 = sub_186B300(v20 - 1, v60);
              v62 = v131;
              v20 = (_QWORD *)(v61 + 8);
              *(_DWORD *)v61 = v118;
              v53 = v62[*((_DWORD *)v62 - 1) - 1];
              LODWORD(v61) = *(_DWORD *)(v61 + 4);
              v44 = &v20[(unsigned int)v61];
              v43 = v61 + 1;
            }
            else
            {
              v42 = v41;
              v43 = v41 + 1;
              v44 = &v20[v42];
            }
          }
          else
          {
            v108 = (_QWORD *)sub_186B270(0x18u);
            v109 = v131;
            v20 = v108 + 1;
            *v108 = 2;
            v44 = v108 + 1;
            v53 = v109[*((_DWORD *)v109 - 1) - 1];
            v43 = 1;
          }
          *v44 = 8LL * v21 + 1;
          v45 = v21 + 1;
          *((_DWORD *)v20 - 1) = v43;
          v46 = sub_15DB5C0(*(_QWORD *)(a2 + 24), v21, v53);
          v47 = v46;
          if ( v46 )
            ++*(_DWORD *)(v46 + 8);
          if ( v19 )
          {
            v48 = *((_DWORD *)v19 - 1);
            if ( v48 == *((_DWORD *)v19 - 2) )
            {
              v63 = (3 * v48 + 1) >> 1;
              v64 = 8 * v63 + 8;
              if ( 8 * v48 + 8 >= (unsigned int)v64 || v48 >= v63 )
              {
                v8 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v138, "Overflow encountered when expanding vector");
                *v8 = (char *)off_1C63128;
                sub_2333C0(v8 + 1, v138);
                sub_233E40((__int64)v138);
                __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              LODWORD(v118) = (3 * v48 + 1) >> 1;
              v65 = sub_186B300(v19 - 1, v64);
              v19 = (_QWORD *)(v65 + 8);
              *(_DWORD *)v65 = v118;
              LODWORD(v65) = *(_DWORD *)(v65 + 4);
              v51 = &v19[(unsigned int)v65];
              v50 = v65 + 1;
            }
            else
            {
              v49 = v48;
              v50 = v48 + 1;
              v51 = &v19[v49];
            }
          }
          else
          {
            v110 = (_QWORD *)sub_186B270(0x18u);
            v19 = v110 + 1;
            *v110 = 2;
            v50 = 1;
            v51 = v19;
          }
          *v51 = v47;
          *((_DWORD *)v19 - 1) = v50;
          *(_QWORD *)v125 += 16LL;
          if ( v45 == v123 )
            break;
          v21 = v45;
          v33 = *(_QWORD *)(*(_QWORD *)v124 + 24LL);
        }
        v74 = v122;
        goto LABEL_61;
      }
      v122 = *(_DWORD *)(v36 - 4) - 1;
      if ( *(_DWORD *)(v36 - 4) != 1 )
        goto LABEL_28;
      if ( !v19 )
      {
        v74 = 0;
        v75 = 0;
        goto LABEL_62;
      }
      v45 = v21;
      v74 = 0;
LABEL_61:
      v75 = *((unsigned int *)v19 - 1);
      v21 = v45;
LABEL_62:
      v76 = sub_624630(a2, v31, v122, &v19[v75 - v74]);
      v77 = v76;
      if ( v76 )
        ++*(_DWORD *)(v76 + 8);
      if ( v31 )
      {
        v32 = (*(_DWORD *)(v31 + 8))-- == 1;
        if ( v32 )
          sub_15D7BC0(v119, v31);
      }
      v78 = 0xFFFFFFFF0LL;
      v79 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v124 + 24LL) + 8LL);
      if ( v79 )
        v78 = 16LL * (unsigned int)(*(_DWORD *)(v79 - 4) - 1);
      v80 = (_BYTE *)(v78 + v79);
      if ( v80[8] != 1 )
        sub_DBF6E(0);
      v35 = 1;
      v31 = v77;
      *(_QWORD *)v124 = *(_QWORD *)v80;
      v33 = *(_QWORD *)(*(_QWORD *)v80 + 24LL);
      v34 = *(_DWORD *)(a2 + 40);
      if ( !v33 )
        goto LABEL_5;
    }
    if ( !v35 )
      goto LABEL_11;
LABEL_5:
    if ( v31 )
      ++*(_DWORD *)(v31 + 8);
    if ( *(_QWORD *)v128 )
    {
      v22 = *(_DWORD *)(*(_QWORD *)v128 - 4LL);
      if ( v22 == *(_DWORD *)(*(_QWORD *)v128 - 8LL) )
      {
        v70 = (3 * v22 + 1) >> 1;
        v71 = 8 * v70 + 8;
        if ( 8 * v22 + 8 >= (unsigned int)v71 || v22 >= v70 )
        {
          v9 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v138, "Overflow encountered when expanding vector");
          *v9 = (char *)off_1C63128;
          sub_2333C0(v9 + 1, v138);
          sub_233E40((__int64)v138);
          __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v72 = (unsigned int *)sub_186B300((void *)(*(_QWORD *)v128 - 8LL), v71);
        v73 = v72[1];
        *v72 = v70;
        *(_QWORD *)v128 = v72 + 2;
        v24 = (__int64 *)(v72 + 2);
        LODWORD(v72) = v73;
        v26 = (__int64 *)(*(_QWORD *)v128 + 8 * v73);
        v25 = (_DWORD)v72 + 1;
      }
      else
      {
        v23 = v22;
        v24 = *(__int64 **)v128;
        v25 = v22 + 1;
        v26 = (__int64 *)(*(_QWORD *)v128 + 8 * v23);
      }
    }
    else
    {
      v113 = (_QWORD *)sub_186B270(0x18u);
      *v113 = 2;
      *(_QWORD *)v128 = v113 + 1;
      v26 = v113 + 1;
      v24 = v113 + 1;
      v25 = 1;
    }
    *v26 = v31;
    *((_DWORD *)v24 - 1) = v25;
LABEL_11:
    v18 = 0;
    if ( v31 )
    {
LABEL_12:
      ++*(_DWORD *)(v31 + 8);
      v18 = v31;
    }
    if ( v19 )
    {
      v27 = *((_DWORD *)v19 - 1);
      if ( v27 == *((_DWORD *)v19 - 2) )
      {
        v66 = (3 * v27 + 1) >> 1;
        v67 = 8 * v66 + 8;
        if ( 8 * v27 + 8 >= (unsigned int)v67 || v27 >= v66 )
        {
          v7 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v138, "Overflow encountered when expanding vector");
          *v7 = (char *)off_1C63128;
          sub_2333C0(v7 + 1, v138);
          sub_233E40((__int64)v138);
          __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v68 = (unsigned int *)sub_186B300(v19 - 1, v67);
        v69 = v68[1];
        v19 = v68 + 2;
        *v68 = v66;
        LODWORD(v68) = v69;
        v30 = &v19[v69];
        v29 = (_DWORD)v68 + 1;
      }
      else
      {
        v28 = v27;
        v29 = v27 + 1;
        v30 = &v19[v28];
      }
    }
    else
    {
      v112 = (_QWORD *)sub_186B270(0x18u);
      v19 = v112 + 1;
      *v112 = 2;
      v29 = 1;
      v30 = v19;
    }
    v130 += 8;
    *v30 = v18;
    *((_DWORD *)v19 - 1) = v29;
    if ( v130 != v121 )
      continue;
    break;
  }
  v132 = 0;
  v126 = *(void **)(a2 + 24);
  if ( *(_QWORD *)v128 )
  {
    v81 = *(_DWORD *)(*(_QWORD *)v128 - 4LL);
    v82 = v128[0];
  }
  else
  {
    v81 = 0;
    v82 = 0;
  }
  v83 = sub_15E1EC0((int)v126, v81, v82);
LABEL_75:
  v86 = v83;
  if ( v83 )
    ++*(_DWORD *)(v83 + 8);
  v132 = v83;
  v133 = 0;
  v138[0] = 0;
  v87 = *(_QWORD *)(a2 + 24);
  v130 = v87;
  if ( v19 )
    v88 = *((_DWORD *)v19 - 1);
  else
    v88 = 0;
  v89 = sub_15DC610(
          v87,
          v116,
          v88,
          (int)v19,
          v84,
          v85,
          v114,
          (int)v139,
          v116,
          (int)v117,
          v118,
          (char)v119,
          v121,
          v122,
          v124[0],
          v126);
  v90 = v89;
  if ( v89 )
    ++*(_DWORD *)(v89 + 8);
  v91 = *(_QWORD *)(a2 + 24);
  if ( v131 )
  {
    v92 = *((unsigned int *)v131 - 1);
    v93 = v131;
  }
  else
  {
    v92 = 0;
    v93 = nullptr;
  }
  sub_15DB6A0(v91, 0, v92, v93, v20, v89, 1, &v133, v138, 1, &v132, 0, 0);
  v94 = sub_15E1B70(v91);
  if ( v94 )
    ++*(_DWORD *)(v94 + 8);
  if ( v90 )
  {
    v32 = (*(_DWORD *)(v90 + 8))-- == 1;
    if ( v32 )
      sub_15D7BC0(v130, v90);
  }
  *v117 = _mm_loadh_ps((const double *)&v130);
  if ( v86 )
  {
    v32 = (*(_DWORD *)(v86 + 8))-- == 1;
    if ( v32 )
      sub_15D7BC0(*(_QWORD *)v127, v86);
  }
  if ( v18 )
  {
    v32 = (*(_DWORD *)(v18 + 8))-- == 1;
    if ( v32 )
      sub_15D7BC0(v120, v18);
  }
  if ( v20 )
    sub_186B220(v20 - 1);
  if ( v131 )
  {
    v95 = v131;
    v96 = v131;
    v97 = (unsigned __int64)&v131[*((unsigned int *)v131 - 1)];
    if ( (unsigned __int64)v131 < v97 )
    {
      do
      {
        while ( 1 )
        {
          v98 = *v95;
          if ( *v95 )
          {
            v32 = (*(_DWORD *)(v98 + 8))-- == 1;
            if ( v32 )
              break;
          }
          if ( (unsigned __int64)++v95 >= v97 )
            goto LABEL_103;
        }
        ++v95;
        sub_15D7BC0(v120, v98);
      }
      while ( (unsigned __int64)v95 < v97 );
LABEL_103:
      v131 = v96;
    }
    sub_186B220(v131 - 1);
  }
  if ( *(_QWORD *)v128 )
  {
    v99 = *(__int64 **)v128;
    v100 = *(_QWORD *)v128 + 8LL * *(unsigned int *)(*(_QWORD *)v128 - 4LL);
    if ( *(_QWORD *)v128 < v100 )
    {
      do
      {
        while ( 1 )
        {
          v101 = *v99;
          if ( *v99 )
          {
            v32 = (*(_DWORD *)(v101 + 8))-- == 1;
            if ( v32 )
              break;
          }
          if ( (unsigned __int64)++v99 >= v100 )
            goto LABEL_112;
        }
        sub_15D7BC0(v120, v101);
        ++v99;
      }
      while ( (unsigned __int64)v99 < v100 );
    }
LABEL_112:
    sub_186B220((void *)(*(_QWORD *)v128 - 8LL));
  }
  if ( v19 )
  {
    v102 = (unsigned __int64)&v19[*((unsigned int *)v19 - 1)];
    if ( (unsigned __int64)v19 < v102 )
    {
      v103 = v19;
      do
      {
        while ( 1 )
        {
          v104 = *v103;
          if ( *v103 )
          {
            v32 = (*(_DWORD *)(v104 + 8))-- == 1;
            if ( v32 )
              break;
          }
          if ( (unsigned __int64)++v103 >= v102 )
            goto LABEL_120;
        }
        sub_15D7BC0(v120, v104);
        ++v103;
      }
      while ( (unsigned __int64)v103 < v102 );
    }
LABEL_120:
    sub_186B220(v19 - 1);
  }
  v105 = v134;
  if ( v134 )
  {
    v106 = v135;
    v32 = (*(_DWORD *)(v134 + 8))-- == 1;
    if ( v32 )
      sub_15D7BC0(v106, v105);
  }
  v139[0] = &qword_1C637E8;
  sub_15841B0(v115);
  return v117;
}

