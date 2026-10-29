__int64 __fastcall sub_48FE60(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  unsigned int v6; // ebx
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  unsigned int v9; // r12d
  unsigned int v10; // edx
  unsigned int *v11; // rax
  unsigned int v12; // eax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  unsigned int v15; // ebx
  unsigned int v16; // edx
  unsigned int *v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 *v21; // rbx
  int v22; // edi
  __int64 v23; // rcx
  __int64 i; // rdx
  unsigned int v25; // eax
  unsigned int v26; // esi
  unsigned int *v27; // rdx
  unsigned __int64 v28; // r9
  __int64 v29; // rbx
  int v30; // edx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rax
  unsigned int v34; // r12d
  __int64 v35; // rsi
  unsigned int v36; // ecx
  int *v37; // rdx
  unsigned int j; // eax
  int v39; // edi
  _QWORD *v40; // rbx
  int v41; // eax
  int v42; // eax
  __int64 *v43; // rbp
  __int64 v44; // rcx
  int v45; // ebx
  int *v46; // rax
  unsigned int k; // r15d
  int v48; // edx
  __int64 v49; // rsi
  int *v50; // rdx
  unsigned int v51; // r15d
  int v52; // eax
  __int64 v53; // rbx
  __int64 v54; // r13
  __int64 v55; // rbp
  __int64 v56; // rdx
  int v57; // eax
  int *v58; // rax
  int v59; // edx
  unsigned int v60; // ebx
  __int64 m; // rbp
  unsigned int v62; // r15d
  _DWORD *v63; // rax
  __int64 v64; // rdx
  _DWORD *v65; // rdx
  __int64 v66; // rbx
  int v67; // eax
  __int64 v68; // rsi
  unsigned int v69; // ecx
  int *v70; // rdx
  unsigned int n; // eax
  int v72; // edi
  int *v73; // rdx
  __int64 v74; // rdx
  __int64 v75; // rdi
  int v76; // edx
  char v77; // dl
  char v78; // dl
  __int64 v79; // rdi
  __int64 v80; // rax
  __int64 v81; // rax
  int v82; // edx
  _DWORD *v83; // rdx
  __int64 v84; // rdx
  __int64 v85; // rbx
  __int64 v86; // rbx
  __int64 v87; // rbx
  __int64 result; // rax
  unsigned int v89; // ebx
  unsigned int v90; // ecx
  unsigned int *v91; // rdx
  __int64 v92; // rdx
  _QWORD *v93; // rax
  char **v94; // rbp
  char **v95; // rbp
  char **exception; // rbp
  __int64 v97; // [rsp+8h] [rbp-190h]
  __int64 v98; // [rsp+8h] [rbp-190h]
  __int64 *v99; // [rsp+18h] [rbp-180h]
  __int64 v100; // [rsp+18h] [rbp-180h]
  int v101; // [rsp+20h] [rbp-178h]
  unsigned __int64 v102; // [rsp+30h] [rbp-168h]
  int v103; // [rsp+4Ch] [rbp-14Ch]
  _DWORD *v104; // [rsp+50h] [rbp-148h]
  __int64 v105; // [rsp+58h] [rbp-140h]
  __int64 v106; // [rsp+60h] [rbp-138h]
  _DWORD *s; // [rsp+68h] [rbp-130h]
  __int64 *v108; // [rsp+70h] [rbp-128h]
  unsigned __int64 v109; // [rsp+78h] [rbp-120h]
  int v110; // [rsp+80h] [rbp-118h]
  unsigned int v111; // [rsp+84h] [rbp-114h]
  _DWORD *v112; // [rsp+88h] [rbp-110h]
  __int64 v115[4]; // [rsp+B0h] [rbp-E8h] BYREF
  __int64 v116; // [rsp+D0h] [rbp-C8h]
  _QWORD v117[2]; // [rsp+D8h] [rbp-C0h] BYREF
  _QWORD v118[3]; // [rsp+E8h] [rbp-B0h] BYREF
  __int64 v119; // [rsp+100h] [rbp-98h]
  _QWORD v120[2]; // [rsp+108h] [rbp-90h] BYREF
  _QWORD v121[3]; // [rsp+118h] [rbp-80h] BYREF
  __int64 v122; // [rsp+130h] [rbp-68h] BYREF
  _QWORD v123[2]; // [rsp+138h] [rbp-60h] BYREF
  _QWORD v124[10]; // [rsp+148h] [rbp-50h] BYREF

  v4 = (_DWORD *)a1[3];
  v5 = (_DWORD *)a1[1];
  v104 = v4;
  s = v5;
  if ( v4 )
  {
    v111 = *(v4 - 1);
    if ( v5 )
    {
      v6 = *(v5 - 1);
      if ( v6 )
        goto LABEL_4;
      s = nullptr;
    }
LABEL_10:
    if ( v111 )
    {
      v13 = (_QWORD *)sub_186B270(0x10u);
      *v13 = 2;
      v14 = v13 + 1;
      v104 = v14;
      while ( 1 )
      {
        v18 = *((_DWORD *)v14 - 2);
        if ( v18 >= v111 )
          break;
        v15 = (3 * v18 + 1) >> 1;
        v16 = 4 * v15 + 8;
        if ( 4 * v18 + 8 >= v16 || v18 >= v15 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v122, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v122);
          sub_233E40((__int64)&v122);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v17 = (unsigned int *)sub_186B300(v104 - 2, v16);
        *v17 = v15;
        v104 = v17 + 2;
        v14 = v17 + 2;
      }
      *(v104 - 1) = v111;
      memset(v104, 0, 4LL * v111);
    }
    else
    {
      v104 = nullptr;
    }
    goto LABEL_17;
  }
  if ( v5 )
  {
    v111 = *(v5 - 1);
    if ( v111 )
    {
      v111 = 0;
      v6 = *(v5 - 1);
LABEL_4:
      v7 = (_QWORD *)sub_186B270(0x10u);
      *v7 = 2;
      v8 = v7 + 1;
      s = v8;
      while ( 1 )
      {
        v12 = *((_DWORD *)v8 - 2);
        if ( v12 >= v6 )
          break;
        v9 = (3 * v12 + 1) >> 1;
        v10 = 4 * v9 + 8;
        if ( 4 * v12 + 8 >= v10 || v12 >= v9 )
        {
          v95 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v122, "Overflow encountered when expanding vector");
          *v95 = (char *)off_1C63128;
          sub_2333C0(v95 + 1, &v122);
          sub_233E40((__int64)&v122);
          __cxa_throw(v95, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v11 = (unsigned int *)sub_186B300(s - 2, v10);
        *v11 = v9;
        s = v11 + 2;
        v8 = v11 + 2;
      }
      *(s - 1) = v6;
      memset(s, 0, 4LL * v6);
      goto LABEL_10;
    }
    s = nullptr;
  }
  else
  {
    v111 = 0;
  }
LABEL_17:
  v19 = *a1;
  v117[0] = 0;
  v117[1] = 0;
  v106 = v19;
  v116 = v19;
  v118[0] = 1;
  v118[1] = 0;
  v119 = v19;
  v120[0] = 0;
  v120[1] = 0;
  v121[0] = 1;
  v121[1] = 0;
  v122 = v19;
  v123[0] = 1;
  v123[1] = 0;
  v124[0] = 1;
  v124[1] = 0;
  sub_182EF00(v19, v124);
  BYTE4(v124[0]) &= ~1u;
  LODWORD(v124[0]) = 1;
  if ( !v111 )
  {
    sub_48E580((__int64)a2, 0xFFFFFFFF);
    goto LABEL_179;
  }
  v105 = 0;
  do
  {
    v20 = a1[3];
    v104[v105] = 0;
    v21 = (__int64 *)(v20 + 24 * v105);
    v22 = *((_DWORD *)v21 + 4);
    v23 = *v21;
    v108 = v21;
    *((_DWORD *)v21 + 4) = v22 + 1;
    if ( !v23 )
      goto LABEL_159;
    for ( i = 0; *(_DWORD *)(v23 - 4) != i && *(_DWORD *)(v23 + 8 * i) == -1; ++i )
      ;
    v25 = i;
    *((_DWORD *)v21 + 4) = v22 + 2;
    v26 = *(_DWORD *)(v23 - 4);
    if ( v26 == (_DWORD)i )
    {
LABEL_159:
      v60 = v105 + 1;
      goto LABEL_101;
    }
    while ( 1 )
    {
      v27 = (unsigned int *)(v23 + 8LL * v25);
      v28 = *v27;
      if ( !s[v28] )
      {
        v29 = *(_QWORD *)(a1[1] + 16 * v28) + 40LL * v27[1];
        v30 = *(_DWORD *)v29;
        if ( *(_DWORD *)v29 )
          break;
      }
      if ( ++v25 < v26 )
      {
        v83 = (_DWORD *)(v23 + 8LL * v25);
        do
        {
          if ( *v83 != -1 )
            break;
          ++v25;
          v83 += 2;
        }
        while ( v25 < v26 );
      }
      if ( v25 == v26 )
        goto LABEL_159;
    }
    v112 = &s[v28];
    v103 = v28;
    v109 = v28;
    v102 = v28;
    if ( (*(_BYTE *)(v29 + 4) & 1) != 0 )
    {
      sub_182EA00(v106, v120, v29);
    }
    else
    {
      BYTE4(v120[0]) &= ~1u;
      LODWORD(v120[0]) = v30;
    }
    if ( (*(_BYTE *)(v29 + 20) & 1) != 0 )
    {
      sub_182EA00(v106, v121, v29 + 16);
    }
    else
    {
      v31 = *(_DWORD *)(v29 + 16);
      BYTE4(v121[0]) &= ~1u;
      LODWORD(v121[0]) = v31;
    }
    if ( *(int *)v29 <= 0 )
      sub_1839100(v106, v120);
    else
      sub_48E4C0(a1, v102);
    v32 = a1[1];
    if ( v32 )
    {
      v33 = 0;
      v110 = *(_DWORD *)(v32 - 4);
      while ( *(_DWORD *)(v32 - 4) != v33 && !*(_DWORD *)(v32 + 16 * (v33 + 1) - 8) )
        ++v33;
      v34 = v33;
      if ( v110 != (_DWORD)v33 )
      {
        while ( 1 )
        {
          if ( v103 == v34 )
            goto LABEL_92;
          v35 = *(_QWORD *)(v32 + 16LL * v34);
          v97 = 16LL * v34;
          if ( v35 )
          {
            v36 = *(_DWORD *)(v35 - 4);
            v37 = (int *)(v35 + 32);
            for ( j = 0; v36 != j; ++j )
            {
              v39 = *v37;
              v37 += 10;
              if ( v39 != -1 )
              {
                while ( *(_DWORD *)(v35 + 40LL * j + 32) != (_DWORD)v105 )
                {
                  if ( ++j < v36 )
                  {
                    v84 = v35 + 40LL * j;
                    do
                    {
                      if ( *(_DWORD *)(v84 + 32) != -1 )
                        break;
                      ++j;
                      v84 += 40;
                    }
                    while ( j < v36 );
                  }
                  if ( v36 == j )
                    goto LABEL_45;
                }
                v40 = (_QWORD *)(v35 + 40LL * j);
                goto LABEL_46;
              }
            }
          }
LABEL_45:
          v40 = a1 + 8;
LABEL_46:
          if ( (*((_BYTE *)v40 + 4) & 1) != 0 )
          {
            sub_182EA00(v106, v117, v40);
          }
          else
          {
            v41 = *(_DWORD *)v40;
            BYTE4(v117[0]) &= ~1u;
            LODWORD(v117[0]) = v41;
          }
          if ( (*((_BYTE *)v40 + 20) & 1) != 0 )
          {
            sub_182EA00(v106, v118, v40 + 2);
          }
          else
          {
            v42 = *((_DWORD *)v40 + 4);
            BYTE4(v118[0]) &= ~1u;
            LODWORD(v118[0]) = v42;
          }
          if ( (v120[0] & 0x100000000LL) != 0 )
            break;
          if ( LODWORD(v120[0]) == 1 )
          {
            if ( (v121[0] & 0x100000000LL) != 0 || LODWORD(v121[0]) != 1 )
              break;
          }
          else
          {
            if ( LODWORD(v120[0]) != -1 || (v121[0] & 0x100000000LL) != 0 || LODWORD(v121[0]) != 1 )
              break;
            sub_48E4C0(a1, v34);
          }
LABEL_60:
          if ( LODWORD(v117[0]) )
          {
            v102 = v109 | v102 & 0xFFFFFFFF00000000LL;
            sub_48EFC0((__int64)a1, v34, (__int64)v117, v102);
          }
          if ( (v123[0] & 0x100000000LL) == 0 )
          {
            if ( LODWORD(v123[0]) == 1 )
            {
              if ( (v124[0] & 0x100000000LL) == 0 && LODWORD(v124[0]) == 1 )
                goto LABEL_91;
            }
            else if ( LODWORD(v123[0]) == -1 && (v124[0] & 0x100000000LL) == 0 && LODWORD(v124[0]) == 1 )
            {
              sub_48E4C0(a1, v34);
LABEL_91:
              v32 = a1[1];
              goto LABEL_92;
            }
          }
          v32 = a1[1];
          v49 = *(_QWORD *)(v32 + 16LL * v34);
          v99 = (__int64 *)(v32 + v97);
          if ( v49 )
          {
            v50 = (int *)(v49 + 32);
            v51 = 0;
            v101 = *(_DWORD *)(v49 - 4);
            while ( 1 )
            {
              if ( *(_DWORD *)(v49 - 4) == v51 )
                goto LABEL_92;
              v52 = *v50;
              v50 += 10;
              if ( v52 != -1 )
                break;
              ++v51;
            }
            while ( 2 )
            {
              v53 = *a1;
              v54 = v49 + 40LL * v51;
              if ( !*(_DWORD *)v54
                || (v123[0] & 0x100000000LL) == 0
                && LODWORD(v123[0]) == 1
                && (v124[0] & 0x100000000LL) == 0
                && LODWORD(v124[0]) == 1 )
              {
                v77 = *(_BYTE *)(v54 + 4);
                if ( (v77 & 1) != 0 )
                  sub_182EA00(*a1, v49 + 40LL * v51, v49 + 40LL * v51);
                else
                  *(_BYTE *)(v54 + 4) = v77 & 0xFE;
                v78 = *(_BYTE *)(v54 + 20);
                if ( (v78 & 1) != 0 )
                  sub_182EA00(v53, v54 + 16, v54 + 16);
                else
                  *(_BYTE *)(v54 + 20) = v78 & 0xFE;
                goto LABEL_82;
              }
              if ( (_QWORD *)v54 == v123 )
              {
                v75 = *a1;
                v115[0] = 0;
                v115[1] = 0;
                sub_1839230(v75, v49 + 40LL * v51, v124, v115);
                v55 = v54 + 16;
                sub_1839230(v53, v54 + 16, v123, v54 + 16);
                if ( (v115[0] & 0x100000000LL) != 0 )
                {
                  sub_182EA00(v53, v123, v115);
                }
                else
                {
                  v76 = v115[0];
                  *(_BYTE *)(v54 + 4) &= ~1u;
                  *(_DWORD *)v54 = v76;
                }
                sub_182EF00(v53, v115);
                if ( *(int *)(v54 + 16) >= 0 )
                {
LABEL_79:
                  v98 = v53 + 600;
                  sub_183B0A0(v53, v54, v55, v53 + 600);
                  if ( (*(_BYTE *)(v53 + 604) & 1) != 0 || *(_DWORD *)(v53 + 600) != 1 )
                  {
                    sub_183C300(v53, v54, v98, v54);
                    sub_183C300(v53, v55, v98, v55);
                  }
LABEL_82:
                  ++v51;
                  v49 = *v99;
                  if ( *v99 )
                  {
                    v56 = v49 + 40LL * v51;
                    while ( v51 < *(_DWORD *)(v49 - 4) )
                    {
                      v57 = *(_DWORD *)(v56 + 32);
                      v56 += 40;
                      if ( v57 != -1 )
                        goto LABEL_73;
                      ++v51;
                    }
                    if ( v51 == v101 )
                      goto LABEL_91;
                  }
                  else
                  {
LABEL_73:
                    if ( v51 == v101 )
                      goto LABEL_91;
                  }
                  continue;
                }
              }
              else
              {
                sub_1839230(*a1, v49 + 40LL * v51, v124, v49 + 40LL * v51);
                v55 = v54 + 16;
                sub_1839230(v53, v54 + 16, v123, v54 + 16);
                if ( *(int *)(v54 + 16) >= 0 )
                  goto LABEL_79;
              }
              break;
            }
            sub_1839100(v53, v54);
            sub_1839100(v53, v55);
            goto LABEL_79;
          }
LABEL_92:
          ++v34;
          if ( v32 )
          {
            v58 = (int *)(v32 + 16LL * v34 + 8);
            while ( v34 < *(_DWORD *)(v32 - 4) )
            {
              v59 = *v58;
              v58 += 4;
              if ( v59 )
                break;
              ++v34;
            }
          }
          if ( v110 == v34 )
            goto LABEL_98;
        }
        v43 = (__int64 *)(a1[1] + v97);
        v44 = *v43;
        if ( *v43 )
        {
          v45 = *(_DWORD *)(v44 - 4);
          v46 = (int *)(v44 + 32);
          for ( k = 0; v45 != k; ++k )
          {
            v48 = *v46;
            v46 += 10;
            if ( v48 != -1 )
            {
              do
              {
                v79 = *a1;
                v80 = v44 + 40LL * k;
                if ( (*(_BYTE *)(v80 + 20) & 1) != 0
                  || *(_DWORD *)(v80 + 16) != 1
                  || (v121[0] & 0x100000000LL) != 0
                  || LODWORD(v121[0]) != 1 )
                {
                  sub_184C880(v79, v80, v120, v44 + 40LL * k);
                }
                else
                {
                  v100 = v44 + 40LL * k;
                  sub_1839230(v79, v80, v120, v100);
                  sub_182EF00(v79, v100 + 16);
                  *(_BYTE *)(v100 + 20) &= ~1u;
                  *(_DWORD *)(v100 + 16) = 1;
                }
                v44 = *v43;
                ++k;
                if ( *v43 )
                {
                  v81 = v44 + 40LL * k;
                  while ( k < *(_DWORD *)(v44 - 4) )
                  {
                    v82 = *(_DWORD *)(v81 + 32);
                    v81 += 40;
                    if ( v82 != -1 )
                      break;
                    ++k;
                  }
                }
              }
              while ( v45 != k );
              goto LABEL_60;
            }
          }
        }
        goto LABEL_60;
      }
    }
LABEL_98:
    v60 = v105 + 1;
    *v112 = v105 + 1;
    v104[v105] = v103 + 1;
    if ( (v120[0] & 0x100000000LL) != 0 )
    {
      sub_182EA00(v106, v123, v120);
      if ( (v121[0] & 0x100000000LL) == 0 )
        goto LABEL_100;
    }
    else
    {
      BYTE4(v123[0]) &= ~1u;
      LODWORD(v123[0]) = v120[0];
      if ( (v121[0] & 0x100000000LL) == 0 )
      {
LABEL_100:
        BYTE4(v124[0]) &= ~1u;
        LODWORD(v124[0]) = v121[0];
        v22 = *((_DWORD *)v108 + 4) - 2;
        goto LABEL_101;
      }
    }
    sub_182EA00(v106, v124, v121);
    v22 = *((_DWORD *)v108 + 4) - 2;
LABEL_101:
    ++v105;
    *((_DWORD *)v108 + 4) = v22;
  }
  while ( v60 < v111 );
  sub_48E580((__int64)a2, v111 - 1);
  for ( m = 0; m != v111; ++m )
  {
    if ( !v104[m] )
    {
      v62 = sub_48E8C0((__int64)a2);
      v63 = (_DWORD *)*a3;
      if ( *a3 )
      {
        v64 = (unsigned int)*(v63 - 1);
        if ( (_DWORD)v64 == *(v63 - 2) )
        {
          v89 = (unsigned int)(3 * v64 + 1) >> 1;
          v90 = 4 * v89 + 8;
          if ( 4 * (int)v64 + 8 >= v90 || (unsigned int)v64 >= v89 )
          {
            v94 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v115, "Overflow encountered when expanding vector");
            *v94 = (char *)off_1C63128;
            sub_2333C0(v94 + 1, v115);
            sub_233E40((__int64)v115);
            __cxa_throw(v94, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v91 = (unsigned int *)sub_186B300(v63 - 2, v90);
          v63 = v91 + 2;
          *v91 = v89;
          v92 = v91[1];
          *a3 = v63;
          v65 = &v63[v92];
        }
        else
        {
          v65 = &v63[v64];
        }
      }
      else
      {
        v93 = (_QWORD *)sub_186B270(0x10u);
        *v93 = 2;
        v63 = v93 + 1;
        v65 = v63;
        *a3 = v63;
      }
      *v65 = m;
      v66 = 0;
      ++*(v63 - 1);
      do
      {
        v67 = v104[v66];
        if ( v67 )
        {
          v68 = *(_QWORD *)(a1[1] + 16LL * (unsigned int)(v67 - 1));
          if ( v68 )
          {
            v69 = *(_DWORD *)(v68 - 4);
            v70 = (int *)(v68 + 32);
            for ( n = 0; v69 != n; ++n )
            {
              v72 = *v70;
              v70 += 10;
              if ( v72 != -1 )
              {
                while ( 1 )
                {
                  v73 = (int *)(v68 + 40LL * n);
                  if ( v73[8] == (_DWORD)m )
                    goto LABEL_119;
                  if ( ++n >= v69 )
                  {
LABEL_120:
                    if ( n == v69 )
                      goto LABEL_118;
                  }
                  else
                  {
                    v74 = v68 + 40LL * n;
                    while ( *(_DWORD *)(v74 + 32) == -1 )
                    {
                      ++n;
                      v74 += 40;
                      if ( n >= v69 )
                        goto LABEL_120;
                    }
                    if ( n == v69 )
                      goto LABEL_118;
                  }
                }
              }
            }
          }
LABEL_118:
          v73 = (int *)(a1 + 8);
LABEL_119:
          sub_48EB00(a2, v62, v73, v66);
        }
        else if ( (_DWORD)m == (_DWORD)v66 )
        {
          sub_48EB00(a2, v62, (int *)v123, m);
        }
        ++v66;
      }
      while ( v111 != v66 );
    }
  }
LABEL_179:
  v85 = v122;
  sub_182EF00(v122, v123);
  sub_182EF00(v85, v124);
  v86 = v119;
  sub_182EF00(v119, v120);
  sub_182EF00(v86, v121);
  v87 = v116;
  sub_182EF00(v116, v117);
  sub_182EF00(v87, v118);
  if ( s )
    sub_186B220(s - 2);
  result = (__int64)v104;
  if ( v104 )
    return sub_186B220(v104 - 2);
  return result;
}

