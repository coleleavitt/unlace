void __fastcall sub_D2AA90(_QWORD *a1, __int64 a2)
{
  char **exception; // rbx
  unsigned int v3; // ebx
  __int64 v4; // rbp
  _DWORD *v7; // rax
  __int64 v8; // rax
  int v9; // esi
  __int64 *v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // edx
  __int64 *v13; // rdi
  __int64 v14; // rdx
  __int64 *v15; // r8
  __int64 *i; // rax
  __int64 v17; // rdx
  __int64 **v18; // r15
  unsigned int v19; // r11d
  __int64 *v20; // rdx
  __int64 v21; // r10
  __int64 v22; // r8
  __int64 *v23; // rdi
  __int64 *v24; // rcx
  __int64 *j; // rax
  __int64 v26; // r14
  int v27; // eax
  __int64 *v28; // rax
  __int64 *v29; // r10
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 *v32; // r14
  __int64 v33; // rax
  _QWORD *v34; // rdx
  unsigned int v35; // r8d
  _QWORD *v36; // rcx
  __int64 v37; // r8
  _QWORD *v38; // rdi
  _QWORD *v39; // rax
  _QWORD *v40; // r15
  __int64 v41; // rsi
  unsigned int v42; // ecx
  __int64 v43; // rdx
  __int64 v44; // rbp
  int *v45; // rdi
  int v46; // eax
  int v47; // r10d
  char v48; // al
  __int64 v49; // r10
  int v50; // r9d
  __int64 v51; // r10
  _QWORD *v52; // rax
  __int64 v53; // rax
  _DWORD *v54; // rax
  char v55; // al
  __int64 v56; // r14
  __int64 v57; // rax
  unsigned int v58; // edx
  int v59; // edi
  __int64 v60; // r15
  size_t v61; // r14
  _QWORD *v62; // r8
  int v63; // esi
  __int64 v64; // rdx
  __int64 v65; // r9
  _QWORD *v66; // rdx
  _QWORD *v67; // r14
  __int64 v68; // rcx
  __int64 v69; // rdx
  _OWORD *v70; // rdx
  _OWORD *v71; // r9
  _QWORD *v72; // rcx
  _QWORD *v73; // r10
  unsigned __int64 v74; // rsi
  __int64 v75; // rdx
  _QWORD *v76; // rdi
  _QWORD *v77; // rdx
  __int64 v78; // rsi
  unsigned int v79; // edx
  __int64 v80; // rsi
  char *v81; // rdx
  char *v82; // rsi
  __int64 v83; // rcx
  int v84; // r14d
  _QWORD *v85; // rax
  _QWORD *v86; // rdx
  _QWORD *v87; // rcx
  _QWORD *v88; // rax
  __int64 v89; // rax
  __int64 *v90; // r14
  void *v91; // rdi
  __int64 v92; // rax
  _QWORD *v93; // rax
  _QWORD *v94; // rcx
  unsigned int v95; // edx
  size_t v96; // rsi
  unsigned int v97; // r15d
  unsigned int *v98; // rax
  unsigned int v99; // eax
  __int64 v100; // rdx
  __int64 v101; // rax
  __int64 v102; // rax
  int v103; // esi
  char *v104; // rcx
  __int64 v105; // rax
  unsigned int v106; // edx
  char *v107; // r15
  __int64 v108; // rdx
  char *v109; // rdi
  char *v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // rbp
  int v114; // esi
  __int64 v115; // rbx
  _DWORD *v116; // rdi
  char v117; // al
  unsigned int v118; // ecx
  _QWORD *v119; // rax
  unsigned __int8 v120; // al
  __int64 v121; // rax
  __int64 v122; // rax
  _DWORD *v123; // rax
  __int64 v124; // [rsp+8h] [rbp-90h]
  __int64 v125; // [rsp+8h] [rbp-90h]
  unsigned int v126; // [rsp+8h] [rbp-90h]
  __int64 *v127; // [rsp+8h] [rbp-90h]
  __int64 v128; // [rsp+8h] [rbp-90h]
  __int64 v129; // [rsp+8h] [rbp-90h]
  unsigned int v130; // [rsp+8h] [rbp-90h]
  unsigned int v131; // [rsp+8h] [rbp-90h]
  __int64 v132; // [rsp+10h] [rbp-88h]
  int v133; // [rsp+10h] [rbp-88h]
  _QWORD *v134; // [rsp+10h] [rbp-88h]
  char *v135; // [rsp+10h] [rbp-88h]
  _QWORD *v136; // [rsp+10h] [rbp-88h]
  __int64 *v137; // [rsp+10h] [rbp-88h]
  __int64 *v138; // [rsp+10h] [rbp-88h]
  _DWORD *v139; // [rsp+10h] [rbp-88h]
  int v140; // [rsp+18h] [rbp-80h]
  __int64 v141; // [rsp+18h] [rbp-80h]
  _QWORD *v142; // [rsp+18h] [rbp-80h]
  char *v143; // [rsp+18h] [rbp-80h]
  unsigned int v144; // [rsp+20h] [rbp-78h]
  unsigned int v145; // [rsp+20h] [rbp-78h]
  _QWORD *v146; // [rsp+20h] [rbp-78h]
  _QWORD *v147; // [rsp+20h] [rbp-78h]
  _DWORD *v148; // [rsp+28h] [rbp-70h]
  unsigned int v149; // [rsp+28h] [rbp-70h]
  char *v150; // [rsp+28h] [rbp-70h]
  _QWORD *ptr; // [rsp+30h] [rbp-68h]
  _QWORD *ptrb; // [rsp+30h] [rbp-68h]
  size_t ptra; // [rsp+30h] [rbp-68h]
  _OWORD *v154; // [rsp+38h] [rbp-60h]
  __int64 v155; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v156[10]; // [rsp+48h] [rbp-50h] BYREF

  v3 = *(_DWORD *)(a2 + 24);
  if ( !v3 )
    return;
  v4 = *(_QWORD *)(a2 + 16);
  v7 = *(_DWORD **)(v4 + 24);
  if ( v7 )
  {
    if ( *v7 != -1 )
      return;
  }
  v8 = a1[2];
  v9 = *(_DWORD *)(v4 + 12);
  v10 = *(__int64 **)v8;
  v11 = *(unsigned int *)(v8 + 8);
  v12 = v11 - 1;
  v11 *= 8;
  v13 = (__int64 *)((char *)v10 + v11);
  v14 = 8LL * (v9 & v12);
  v15 = &v10[(unsigned __int64)v14 / 8];
  if ( v14 != v11 )
  {
    for ( i = &v10[(unsigned __int64)v14 / 8]; v13 != i; ++i )
    {
      v17 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v17 + 12) == v9 && v4 == v17 )
          return;
      }
      else if ( !v17 )
      {
        goto LABEL_11;
      }
    }
  }
  if ( v10 != v15 )
  {
    v31 = *v10;
    if ( (unsigned __int64)*v10 <= 1 )
      goto LABEL_34;
LABEL_30:
    if ( *(_DWORD *)(v31 + 12) == v9 && v4 == v31 )
      return;
    do
    {
      if ( v15 == ++v10 )
        break;
      v31 = *v10;
      if ( (unsigned __int64)*v10 > 1 )
        goto LABEL_30;
LABEL_34:
      ;
    }
    while ( v31 );
  }
LABEL_11:
  v18 = (__int64 **)a1[3];
  v19 = *((_DWORD *)v18 + 2);
  v20 = *v18;
  v21 = 24LL * (v9 & (v19 - 1));
  v22 = 24LL * v19;
  v23 = &(*v18)[(unsigned __int64)v21 / 8];
  v24 = (__int64 *)((char *)*v18 + v22);
  if ( v21 != v22 )
  {
    for ( j = &(*v18)[(unsigned __int64)v21 / 8]; v24 != j; j += 3 )
    {
      v26 = *j;
      if ( (unsigned __int64)*j > 1 )
      {
        if ( *(_DWORD *)(v26 + 12) == v9 && v4 == v26 )
        {
LABEL_36:
          v32 = j;
          if ( v24 != j )
          {
            while ( (unsigned __int64)*v32 <= 1 )
            {
              v32 += 3;
              if ( v24 == v32 )
                goto LABEL_18;
            }
            if ( v24 != v32 )
            {
              v33 = *((unsigned int *)a1 + 10);
              v34 = (_QWORD *)a1[4];
              v35 = v33 - 1;
              v33 *= 16;
              v36 = (_QWORD *)((char *)v34 + v33);
              v37 = 16LL * (v9 & v35);
              v38 = &v34[(unsigned __int64)v37 / 8];
              if ( v37 != v33 )
              {
                v39 = &v34[(unsigned __int64)v37 / 8];
                do
                {
                  v40 = (_QWORD *)*v39;
                  if ( *v39 > 1u )
                  {
                    if ( *((_DWORD *)v40 + 3) == v9 && (_QWORD *)v4 == v40 )
                    {
                      v40 = v39;
                      goto LABEL_48;
                    }
                  }
                  else if ( !v40 )
                  {
                    goto LABEL_48;
                  }
                  v39 += 2;
                }
                while ( v36 != v39 );
              }
              if ( v34 == v38 )
              {
LABEL_89:
                v40 = nullptr;
                goto LABEL_48;
              }
              while ( 1 )
              {
                v40 = (_QWORD *)*v34;
                if ( *v34 > 1u )
                {
                  if ( *((_DWORD *)v40 + 3) == v9 && (_QWORD *)v4 == v40 )
                  {
                    v40 = v34;
LABEL_48:
                    v41 = v32[2];
                    v42 = v3 - 1;
                    v43 = 8LL * (v3 - 1);
                    while ( 2 )
                    {
                      v44 = 4LL * (v42 >> 5);
                      v45 = (int *)(v41 + v44);
                      v46 = *(_DWORD *)(v41 + v44);
                      v47 = (1 << v42) & v46;
                      if ( v47 )
                      {
                        v145 = v42;
                        v140 = 1 << v42;
                        v132 = v43;
                        v124 = *(_QWORD *)(a2 + v43 + 32);
                        v148 = (_DWORD *)a1[1];
                        v48 = sub_15D2710(*a1, v124);
                        v49 = v124;
                        v43 = v132;
                        v50 = v140;
                        v42 = v145;
                        if ( v48 )
                        {
                          v51 = 0;
                          goto LABEL_54;
                        }
                        if ( !*(_WORD *)(v124 + 4) )
                        {
                          v52 = *(_QWORD **)(*(_QWORD *)(v124 + 16) + 24LL);
                          if ( v52 )
                          {
                            if ( *v52 == ((unsigned int)*v148 | 0x400000000LL) && *(_DWORD *)(v124 + 24) == 2 )
                            {
                              v53 = *(_QWORD *)(v124 + 32);
                              if ( !*(_WORD *)(v53 + 4) )
                              {
                                v54 = *(_DWORD **)(*(_QWORD *)(v53 + 16) + 24LL);
                                if ( v54 )
                                {
                                  if ( *v148 == *v54 && !v54[1] )
                                    v49 = *(_QWORD *)(v124 + 40);
                                }
                              }
                            }
                          }
                        }
                        v141 = v132;
                        v133 = v50;
                        v125 = v49;
                        v55 = sub_1622640(v49);
                        v51 = v125;
                        v50 = v133;
                        v43 = v141;
                        v42 = v145;
                        if ( v55 )
                        {
                          v41 = v32[2];
                          v45 = (int *)(v41 + v44);
                          v46 = *(_DWORD *)(v41 + v44);
                          v47 = v46 & v133;
                        }
                        else
                        {
LABEL_54:
                          v41 = v32[2];
                          v45 = (int *)(v41 + v44);
                          v46 = *(_DWORD *)(v41 + v44);
                          v47 = v50 & (v46 ^ -(*(_QWORD *)(v40[1] + v43) == v51));
                        }
                      }
                      v43 -= 8;
                      *v45 = v47 ^ v46;
                      if ( !v42 )
                        return;
                      --v42;
                      continue;
                    }
                  }
                }
                else if ( !v40 )
                {
                  goto LABEL_48;
                }
                v34 += 2;
                if ( v38 == v34 )
                  goto LABEL_89;
              }
            }
          }
          goto LABEL_18;
        }
      }
      else if ( !v26 )
      {
        goto LABEL_18;
      }
    }
  }
  if ( v20 != v23 )
  {
    for ( j = *v18; v23 != j; j += 3 )
    {
      v56 = *j;
      if ( (unsigned __int64)*j > 1 )
      {
        if ( *(_DWORD *)(v56 + 12) == v9 && v4 == v56 )
          goto LABEL_36;
      }
      else if ( !v56 )
      {
        break;
      }
    }
  }
LABEL_18:
  v156[0] = 0;
  v27 = *((_DWORD *)v18 + 3) + *((_DWORD *)v18 + 4);
  v155 = v4;
  v144 = 2 * v19;
  v156[1] = 0;
  if ( 3 * v19 < 4 * v27 )
  {
    v84 = 2 * v19;
    ptra = 6LL * v19;
    v85 = (_QWORD *)sub_186B270(ptra * 8);
    v86 = v85;
    v87 = &v85[ptra];
    if ( v84 )
    {
      do
      {
        *v85 = 0;
        v85 += 3;
        *(v85 - 2) = 0;
      }
      while ( v87 != v85 );
      v88 = v86;
      if ( (((_BYTE)v87 - (_BYTE)v86) & 8) == 0 || (v88 = v86 + 3, v86[2] = 0, v86 + 3 != v87) )
      {
        do
        {
          v88[2] = 0;
          v88 += 6;
          *(v88 - 1) = 0;
        }
        while ( v88 != v87 );
      }
    }
    v127 = v86;
    sub_D303C0(*v18, *((unsigned int *)v18 + 2), v86, v144);
    v20 = v127;
    v22 = ptra * 8;
    v150 = (char *)*v18;
    if ( *v18 )
    {
      v89 = *((unsigned int *)v18 + 2);
      if ( (_DWORD)v89 )
      {
        v90 = *v18;
        v143 = &v150[24 * v89];
        do
        {
          while ( 1 )
          {
            v91 = (void *)v90[2];
            if ( !v91 )
              break;
            v137 = v20;
            v90 += 3;
            v128 = v22;
            sub_186B220(v91);
            v22 = v128;
            v20 = v137;
            if ( v143 == (char *)v90 )
              goto LABEL_154;
          }
          v90 += 3;
        }
        while ( v90 != (__int64 *)v143 );
      }
LABEL_154:
      v138 = v20;
      v129 = v22;
      sub_186B220(v150);
      v22 = v129;
      v20 = v138;
    }
    v9 = *(_DWORD *)(v4 + 12);
    *v18 = v20;
    *((_DWORD *)v18 + 4) = 0;
    *((_DWORD *)v18 + 2) = v144;
    v24 = &v20[ptra];
    v21 = 24LL * (v9 & (v144 - 1));
    v23 = &v20[(unsigned __int64)v21 / 8];
  }
  if ( v21 == v22 )
  {
    v29 = nullptr;
    while ( 1 )
    {
LABEL_85:
      if ( v20 == v23 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v57 = *v20;
      if ( (unsigned __int64)*v20 > 1 )
      {
        if ( *(_DWORD *)(v57 + 12) == v9 && v4 == v57 )
        {
          *v20 = v4;
          sub_D24180((__int64)(v20 + 1), (unsigned int *)v156);
          goto LABEL_92;
        }
      }
      else
      {
        if ( !v57 )
        {
          if ( v29 )
            --*((_DWORD *)v18 + 4);
          else
            v29 = v20;
          *v29 = v4;
          sub_D24180((__int64)(v29 + 1), (unsigned int *)v156);
          ++*((_DWORD *)v18 + 3);
          goto LABEL_92;
        }
        v29 = v20;
      }
      v20 += 3;
    }
  }
  v28 = v23;
  v29 = nullptr;
  while ( 1 )
  {
    v30 = *v28;
    if ( (unsigned __int64)*v28 <= 1 )
      break;
    if ( *(_DWORD *)(v30 + 12) == v9 && v4 == v30 )
    {
      *v28 = v4;
      sub_D24180((__int64)(v28 + 1), (unsigned int *)v156);
      goto LABEL_92;
    }
LABEL_23:
    v28 += 3;
    if ( v28 == v24 )
      goto LABEL_85;
  }
  if ( v30 )
  {
    v29 = v28;
    goto LABEL_23;
  }
  if ( v29 )
    --*((_DWORD *)v18 + 4);
  else
    v29 = v28;
  *v29 = v4;
  *((_DWORD *)v29 + 2) = 0;
  ++*((_DWORD *)v18 + 3);
LABEL_92:
  v58 = *((_DWORD *)a1 + 10);
  v59 = *((_DWORD *)a1 + 12);
  v149 = 2 * v58;
  if ( 3 * v58 >= 4 * (v59 + *((_DWORD *)a1 + 11)) )
  {
    v60 = a1[4];
    v126 = v58 - 1;
    v61 = 16LL * v58;
    v62 = (_QWORD *)(v60 + v61);
    goto LABEL_94;
  }
  v61 = 16LL * v149;
  v60 = sub_186B270(v61);
  v70 = (_OWORD *)v60;
  v71 = (_OWORD *)(v61 + v60);
  if ( v149 )
  {
    if ( (v61 & 0x10) == 0 || (v70 = (_OWORD *)(v60 + 16), *(_OWORD *)v60 = 0, v71 != (_OWORD *)(v60 + 16)) )
    {
      do
      {
        *v70 = 0;
        v70 += 2;
        *(v70 - 1) = 0;
      }
      while ( v71 != v70 );
    }
  }
  v62 = (_QWORD *)(v61 + v60);
  ptr = (_QWORD *)a1[4];
  v72 = ptr + 1;
  v73 = &ptr[2 * *((unsigned int *)a1 + 10)];
  v126 = v149 - 1;
  if ( ptr != v73 )
  {
    while ( 1 )
    {
      v74 = *(v72 - 1);
      if ( v74 <= 1 )
        goto LABEL_116;
      v75 = 16LL * (*(_DWORD *)(v74 + 12) & v126);
      v76 = (_QWORD *)(v60 + v75);
      if ( v61 == v75 )
      {
LABEL_127:
        if ( (_QWORD *)v60 == v76 )
        {
LABEL_219:
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        v77 = (_QWORD *)v60;
        while ( *v77 )
        {
          v77 += 2;
          if ( v76 == v77 )
            goto LABEL_219;
        }
        *v77 = v74;
        if ( v72 != v77 + 1 )
        {
          v78 = v77[1];
          if ( v78 )
          {
LABEL_125:
            v154 = v71;
            ptrb = v62;
            v146 = v72;
            v142 = v77;
            v134 = v73;
            sub_186B220((void *)(v78 - 8));
            v71 = v154;
            v62 = ptrb;
            v72 = v146;
            v77 = v142;
            v73 = v134;
          }
LABEL_126:
          v77[1] = 0;
          v77[1] = *v72;
          *v72 = 0;
        }
      }
      else
      {
        v77 = (_QWORD *)(v60 + v75);
        while ( *v77 )
        {
          v77 += 2;
          if ( v71 == (_OWORD *)v77 )
            goto LABEL_127;
        }
        *v77 = v74;
        if ( v72 != v77 + 1 )
        {
          v78 = v77[1];
          if ( v78 )
            goto LABEL_125;
          goto LABEL_126;
        }
      }
LABEL_116:
      if ( v73 == v72 + 1 )
      {
        ptr = (_QWORD *)a1[4];
        break;
      }
      v72 += 2;
    }
  }
  if ( ptr )
  {
    v79 = *((_DWORD *)a1 + 10);
    if ( v79 )
    {
      v80 = v79;
      v81 = (char *)ptr;
      v82 = (char *)&ptr[2 * v80];
      do
      {
        while ( 1 )
        {
          v83 = *((_QWORD *)v81 + 1);
          if ( !v83 )
            break;
          v147 = v62;
          v135 = v81;
          sub_186B220((void *)(v83 - 8));
          v62 = v147;
          v81 = v135 + 16;
          if ( v135 + 16 == v82 )
            goto LABEL_140;
        }
        v81 += 16;
      }
      while ( v81 != v82 );
    }
LABEL_140:
    v136 = v62;
    sub_186B220(ptr);
    v62 = v136;
  }
  a1[4] = v60;
  v59 = 0;
  *((_DWORD *)a1 + 12) = 0;
  *((_DWORD *)a1 + 10) = v149;
LABEL_94:
  v63 = *(_DWORD *)(v4 + 12);
  v64 = 16LL * (v63 & v126);
  v65 = v60 + v64;
  if ( v64 != v61 )
  {
    v66 = (_QWORD *)(v60 + v64);
    v67 = nullptr;
    while ( 1 )
    {
      v68 = *v66;
      if ( *v66 > 1u )
      {
        if ( *(_DWORD *)(v68 + 12) == v63 && v4 == v68 )
        {
          v94 = (_QWORD *)v66[1];
          v67 = v66;
          goto LABEL_221;
        }
      }
      else
      {
        if ( !v68 )
        {
          if ( v67 )
            *((_DWORD *)a1 + 12) = v59 - 1;
          else
            v67 = v66;
          v92 = v67[1];
          *v67 = v4;
          if ( v92 )
LABEL_165:
            sub_186B220((void *)(v92 - 8));
LABEL_166:
          v67[1] = 0;
          ++*((_DWORD *)a1 + 11);
LABEL_167:
          v93 = (_QWORD *)sub_186B270(0x18u);
          v130 = 0;
          v94 = v93 + 1;
          *v93 = 2;
          v67[1] = v93 + 1;
          goto LABEL_171;
        }
        v67 = v66;
      }
      v66 += 2;
      if ( v66 == v62 )
        goto LABEL_105;
    }
  }
  v67 = nullptr;
LABEL_105:
  while ( 2 )
  {
    if ( v65 == v60 )
    {
      sub_1872CE0("");
      sub_1873130(114, 461);
    }
    v69 = *(_QWORD *)v60;
    if ( *(_QWORD *)v60 <= 1u )
    {
      if ( !v69 )
      {
        if ( v67 )
          *((_DWORD *)a1 + 12) = v59 - 1;
        else
          v67 = (_QWORD *)v60;
        v92 = v67[1];
        *v67 = v4;
        if ( v92 )
          goto LABEL_165;
        goto LABEL_166;
      }
      v67 = (_QWORD *)v60;
      goto LABEL_104;
    }
    if ( *(_DWORD *)(v69 + 12) != v63 || v4 != v69 )
    {
LABEL_104:
      v60 += 16;
      continue;
    }
    break;
  }
  v94 = *(_QWORD **)(v60 + 8);
  v67 = (_QWORD *)v60;
LABEL_221:
  if ( !v94 )
    goto LABEL_167;
  v130 = *((_DWORD *)v94 - 1);
  if ( v130 < v3 )
  {
LABEL_171:
    while ( 1 )
    {
      v99 = *((_DWORD *)v94 - 2);
      if ( v99 >= v3 )
        break;
      v95 = (3 * v99 + 1) >> 1;
      v96 = 8 * v95 + 8;
      v97 = v95;
      if ( 8 * v99 + 8 >= (unsigned int)v96 || v99 >= v95 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_D240F0(&v155, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v155);
        sub_233E40((__int64)&v155);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v98 = (unsigned int *)sub_186B300(v94 - 1, v96);
      v94 = v98 + 2;
      v67[1] = v98 + 2;
      *v98 = v97;
    }
    *((_DWORD *)v94 - 1) = v3;
    v100 = 8LL * v3;
    v101 = 8LL * v130;
    if ( v101 != v100 )
      memset(&v94[(unsigned __int64)v101 / 8], 0, v100 - v101);
  }
  else
  {
    *((_DWORD *)v94 - 1) = v3;
  }
  v102 = a1[3];
  v103 = *(_DWORD *)(v4 + 12);
  v104 = *(char **)v102;
  v105 = *(unsigned int *)(v102 + 8);
  v106 = v105 - 1;
  v105 *= 24;
  v107 = &v104[v105];
  v108 = 24LL * (v103 & v106);
  v109 = &v104[v108];
  if ( v108 != v105 )
  {
    v110 = &v104[v108];
    do
    {
      v111 = *(_QWORD *)v110;
      if ( *(_QWORD *)v110 > 1u )
      {
        if ( *(_DWORD *)(v111 + 12) == v103 && v4 == v111 )
          goto LABEL_193;
      }
      else if ( !v111 )
      {
        goto LABEL_181;
      }
      v110 += 24;
    }
    while ( v107 != v110 );
  }
  while ( v109 != v104 )
  {
    v121 = *(_QWORD *)v104;
    if ( *(_QWORD *)v104 > 1u )
    {
      if ( *(_DWORD *)(v121 + 12) == v103 && v4 == v121 )
      {
        v110 = v104;
LABEL_193:
        if ( v110 != v107 )
        {
          while ( *(_QWORD *)v110 <= 1u )
          {
            v110 += 24;
            if ( v107 == v110 )
              goto LABEL_181;
          }
          v107 = v110;
        }
        break;
      }
    }
    else if ( !v121 )
    {
      break;
    }
    v104 += 24;
  }
LABEL_181:
  if ( *((_DWORD *)v107 + 2) < v3 )
    sub_186B510(v107 + 8, v3, 0);
  v112 = v3 - 1;
  v113 = 8 * v112;
  while ( 1 )
  {
    v115 = *(_QWORD *)(a2 + v113 + 32);
    v131 = v112;
    v139 = (_DWORD *)a1[1];
    v117 = sub_15D2710(*a1, v115);
    v118 = v131;
    if ( v117 )
    {
      v114 = -1;
      v115 = 0;
    }
    else
    {
      if ( !*(_WORD *)(v115 + 4) )
      {
        v119 = *(_QWORD **)(*(_QWORD *)(v115 + 16) + 24LL);
        if ( v119 )
        {
          if ( *v119 == ((unsigned int)*v139 | 0x400000000LL) && *(_DWORD *)(v115 + 24) == 2 )
          {
            v122 = *(_QWORD *)(v115 + 32);
            if ( !*(_WORD *)(v122 + 4) )
            {
              v123 = *(_DWORD **)(*(_QWORD *)(v122 + 16) + 24LL);
              if ( v123 )
              {
                if ( *v139 == *v123 && !v123[1] )
                  v115 = *(_QWORD *)(v115 + 40);
              }
            }
          }
        }
      }
      v120 = sub_1622640(v115);
      v118 = v131;
      v114 = v120 - 1;
    }
    v116 = (_DWORD *)(*((_QWORD *)v107 + 2) + 4LL * (v118 >> 5));
    *v116 ^= (*v116 ^ v114) & (1 << v118);
    *(_QWORD *)(v67[1] + v113) = v115;
    v113 -= 8;
    if ( !v118 )
      break;
    LODWORD(v112) = v118 - 1;
  }
}

