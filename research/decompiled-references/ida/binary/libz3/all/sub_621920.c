__int64 __fastcall sub_621920(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rdx
  _DWORD *v7; // rcx
  _DWORD *v8; // r8
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  _QWORD *v12; // rax
  int v13; // edi
  __int64 v14; // r12
  __int64 *v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // r9d
  __int64 *v18; // rsi
  __int64 v19; // r9
  __int64 *v20; // r8
  __int64 *i; // rax
  __int64 v22; // rbx
  void *v23; // rdi
  __int64 *v24; // rbp
  unsigned int v25; // r15d
  __int64 v26; // rdx
  int v27; // eax
  __int64 *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r14
  unsigned int v31; // eax
  unsigned int v32; // ecx
  size_t v33; // rsi
  unsigned int *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r14
  int v37; // ecx
  int v38; // r8d
  int v39; // r9d
  _DWORD *v40; // rax
  bool v41; // dl
  __int64 v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rdx
  unsigned int v45; // eax
  __int64 v46; // rcx
  int v47; // eax
  __int64 *v48; // rcx
  int v49; // r9d
  __int64 v50; // r14
  bool v51; // zf
  __int64 v52; // rsi
  __int64 v53; // rdi
  __int64 v54; // rsi
  __int64 v55; // rdi
  __int64 v56; // rsi
  __int64 v57; // rdi
  __int64 *v58; // r12
  unsigned __int64 v59; // r14
  __int64 v60; // rsi
  _QWORD *v61; // rax
  _QWORD *v62; // r14
  __int64 v63; // rax
  __int64 v64; // rbp
  __int64 v65; // rbx
  __int64 v66; // rax
  int v67; // edx
  __int64 *v68; // rdi
  _DWORD *v69; // r9
  __int64 *j; // rax
  __int64 v71; // rax
  _QWORD *v72; // rcx
  int v73; // edx
  _QWORD *v74; // rdi
  __int64 v75; // rdx
  _QWORD *v76; // r9
  _QWORD *k; // rax
  _DWORD *v78; // rdx
  _DWORD *v79; // rax
  _QWORD *v80; // rax
  __int64 v81; // r15
  int v82; // edx
  int v83; // ecx
  int v84; // r8d
  int v85; // r9d
  unsigned int v86; // ecx
  size_t v87; // rsi
  unsigned int *v88; // rax
  __int64 v89; // rsi
  __int64 v90; // rdi
  __int64 v91; // rsi
  __int64 v92; // rdi
  __int64 v93; // rsi
  __int64 v94; // rdi
  __int64 v95; // rax
  __int64 v96; // rbp
  __int64 v97; // rbx
  unsigned __int64 v98; // r12
  __int64 v99; // rax
  int v100; // edx
  __int64 *v101; // rdi
  __int64 v102; // rdx
  __int64 *m; // rax
  __int64 v104; // rdx
  __int64 v105; // rax
  __int64 *v106; // rdx
  int v107; // edi
  __int64 *v108; // rcx
  __int64 v109; // rdi
  __int64 *v110; // r8
  __int64 *n; // rax
  __int64 v112; // rdi
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 result; // rax
  void *v116; // rbx
  _QWORD *v117; // rcx
  char **exception; // r12
  char **v119; // r12
  unsigned int v120; // [rsp+0h] [rbp-318h]
  void *v121; // [rsp+0h] [rbp-318h]
  int v122[2]; // [rsp+0h] [rbp-318h]
  bool v123; // [rsp+0h] [rbp-318h]
  int v124; // [rsp+0h] [rbp-318h]
  int v125[2]; // [rsp+0h] [rbp-318h]
  __int64 v126; // [rsp+8h] [rbp-310h]
  __int64 **v127; // [rsp+10h] [rbp-308h]
  _QWORD *v128; // [rsp+18h] [rbp-300h]
  __int64 v129; // [rsp+20h] [rbp-2F8h]
  _DWORD *ptr; // [rsp+28h] [rbp-2F0h]
  __int64 v131; // [rsp+30h] [rbp-2E8h]
  __int64 v132; // [rsp+30h] [rbp-2E8h]
  void *v133; // [rsp+38h] [rbp-2E0h]
  void *v134; // [rsp+38h] [rbp-2E0h]
  unsigned int v135; // [rsp+4Ch] [rbp-2CCh]
  _QWORD v136[2]; // [rsp+70h] [rbp-2A8h] BYREF
  _QWORD v137[2]; // [rsp+80h] [rbp-298h] BYREF
  int v138[2]; // [rsp+90h] [rbp-288h] BYREF
  __int64 *v139; // [rsp+B0h] [rbp-268h] BYREF
  __int64 v140; // [rsp+150h] [rbp-1C8h]
  _QWORD v141[20]; // [rsp+158h] [rbp-1C0h] BYREF
  _QWORD v142[19]; // [rsp+1F8h] [rbp-120h] BYREF
  __int64 v143; // [rsp+290h] [rbp-88h]
  __int64 v144; // [rsp+298h] [rbp-80h]
  __int64 v145; // [rsp+2A0h] [rbp-78h]
  __int64 v146; // [rsp+2A8h] [rbp-70h]
  __int64 v147; // [rsp+2B0h] [rbp-68h]
  __int64 v148; // [rsp+2B8h] [rbp-60h]
  __int64 v149; // [rsp+2C0h] [rbp-58h]
  _BYTE v150[80]; // [rsp+2C8h] [rbp-50h] BYREF

  v129 = a2;
  v3 = sub_186B270(0xA0u);
  v4 = *(_QWORD *)(a1 + 32);
  v5 = v3;
  ptr = (_DWORD *)v3;
  sub_1373200(v3, v4);
  v9 = *(unsigned int *)(a1 + 80);
  ++*(_DWORD *)(v5 + 16);
  v10 = *(_QWORD *)(a1 + 72);
  v11 = v10 + 16 * v9;
  v128 = (_QWORD *)v11;
  if ( v11 != v10 )
  {
    v6 = v11;
    v12 = *(_QWORD **)(a1 + 72);
    while ( *v12 <= 1u )
    {
      v12 += 2;
      if ( (_QWORD *)v6 == v12 )
        goto LABEL_67;
    }
    v126 = (__int64)v12;
    if ( v128 != v12 )
    {
      v7 = (_DWORD *)*v12;
      v127 = &v139;
      do
      {
        v13 = v7[3];
        v14 = *(_QWORD *)(v126 + 8);
        v15 = *(__int64 **)(*(_QWORD *)v129 + 48LL);
        v16 = *(unsigned int *)(*(_QWORD *)v129 + 56LL);
        v17 = v16 - 1;
        v16 *= 16;
        v18 = (__int64 *)((char *)v15 + v16);
        v19 = 16LL * (v13 & v17);
        v20 = &v15[(unsigned __int64)v19 / 8];
        if ( v19 != v16 )
        {
          for ( i = &v15[(unsigned __int64)v19 / 8]; v18 != i; i += 2 )
          {
            v22 = *i;
            if ( (unsigned __int64)*i > 1 )
            {
              if ( *(_DWORD *)(v22 + 12) == v13 && v7 == (_DWORD *)v22 )
                goto LABEL_88;
            }
            else if ( !v22 )
            {
              goto LABEL_14;
            }
          }
        }
        if ( v15 == v20 )
        {
LABEL_97:
          v22 = 0;
        }
        else
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v22 = *v15;
              if ( (unsigned __int64)*v15 > 1 )
                break;
              if ( !v22 )
                goto LABEL_14;
              v15 += 2;
              if ( v20 == v15 )
                goto LABEL_97;
            }
            if ( *(_DWORD *)(v22 + 12) == v13 && v7 == (_DWORD *)v22 )
              break;
            v15 += 2;
            if ( v20 == v15 )
              goto LABEL_97;
          }
          i = v15;
LABEL_88:
          v22 = i[1];
        }
LABEL_14:
        v131 = *(_QWORD *)(a1 + 32);
        sub_633760(v127, v131, 0, v150);
        v23 = *(void **)(a1 + 32);
        v150[8] = 0;
        v139 = &off_1C4CA80;
        v133 = v23;
        if ( v22 )
        {
          v24 = nullptr;
          v25 = 0;
          if ( *(_DWORD *)(v14 + 32) )
          {
            while ( 1 )
            {
              v29 = sub_15DB5C0(v23, v25, *(_QWORD *)(v14 + 8LL * v25 + 48));
              v30 = v29;
              if ( v29 )
                ++*(_DWORD *)(v29 + 8);
              if ( v24 )
              {
                v31 = *((_DWORD *)v24 - 1);
                if ( v31 == *((_DWORD *)v24 - 2) )
                {
                  v32 = (3 * v31 + 1) >> 1;
                  v33 = 8 * v32 + 8;
                  if ( 8 * v31 + 8 >= (unsigned int)v33 || v31 >= v32 )
                  {
                    exception = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0((__int64 *)v138, "Overflow encountered when expanding vector");
                    *exception = (char *)off_1C63128;
                    sub_2333C0(exception + 1, v138);
                    sub_233E40((__int64)v138);
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v120 = (3 * v31 + 1) >> 1;
                  v34 = (unsigned int *)sub_186B300(v24 - 1, v33);
                  v35 = v34[1];
                  v24 = (__int64 *)(v34 + 2);
                  *v34 = v120;
                  LODWORD(v34) = v35;
                  v28 = &v24[v35];
                  v27 = (_DWORD)v34 + 1;
                }
                else
                {
                  v26 = v31;
                  v27 = v31 + 1;
                  v28 = &v24[v26];
                }
              }
              else
              {
                v80 = (_QWORD *)sub_186B270(0x18u);
                v24 = v80 + 1;
                v28 = v80 + 1;
                *v80 = 2;
                v27 = 1;
              }
              *v28 = v30;
              ++v25;
              *((_DWORD *)v24 - 1) = v27;
              if ( v25 >= *(_DWORD *)(v14 + 32) )
                break;
              v23 = *(void **)(a1 + 32);
            }
          }
          v36 = sub_15D2CD0(*(_QWORD *)(a1 + 56), 5, 0, 0, 0);
          v136[0] = 1;
          v136[1] = 0;
          v137[0] = 1;
          v137[1] = 0;
          sub_182CBA0(qword_1C7F2C0, v137);
          v40 = *(_DWORD **)(v36 + 24);
          BYTE4(v137[0]) &= ~1u;
          v41 = 0;
          LODWORD(v137[0]) = 1;
          if ( v40 && *v40 == 5 )
            v41 = v40[1] == 1;
          v42 = *(_QWORD *)(a1 + 64);
          if ( !v42 )
          {
            v123 = v41;
            sub_16669E0(a1 + 56);
            v42 = *(_QWORD *)(a1 + 64);
            v41 = v123;
          }
          v43 = sub_166A700(v42, (unsigned int)v136, v41, v37, v38, v39);
          v44 = v43;
          if ( v43 )
            ++*(_DWORD *)(v43 + 8);
          if ( v24 )
          {
            v45 = *((_DWORD *)v24 - 1);
            if ( v45 == *((_DWORD *)v24 - 2) )
            {
              v86 = (3 * v45 + 1) >> 1;
              v87 = 8 * v86 + 8;
              if ( 8 * v45 + 8 >= (unsigned int)v87 || v45 >= v86 )
              {
                v119 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)v138, "Overflow encountered when expanding vector");
                *v119 = (char *)off_1C63128;
                sub_2333C0(v119 + 1, v138);
                sub_233E40((__int64)v138);
                __cxa_throw(v119, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v135 = (3 * v45 + 1) >> 1;
              *(_QWORD *)v122 = v44;
              v88 = (unsigned int *)sub_186B300(v24 - 1, v87);
              v24 = (__int64 *)(v88 + 2);
              v44 = *(_QWORD *)v122;
              *v88 = v135;
              LODWORD(v88) = v88[1];
              v48 = &v24[(unsigned int)v88];
              v47 = (_DWORD)v88 + 1;
            }
            else
            {
              v46 = v45;
              v47 = v45 + 1;
              v48 = &v24[v46];
            }
          }
          else
          {
            *(_QWORD *)v125 = v43;
            v117 = (_QWORD *)sub_186B270(0x18u);
            *v117 = 2;
            v44 = *(_QWORD *)v125;
            v47 = 1;
            v48 = v117 + 1;
            v24 = v48;
          }
          *v48 = v44;
          *((_DWORD *)v24 - 1) = v47;
          v121 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v136);
          sub_182CBA0(v121, v137);
          sub_157BE40(
            (int)v138,
            (int)v127,
            *(_QWORD *)(v22 + 24),
            *((_DWORD *)v24 - 1),
            (int)v24,
            v49,
            (int)v121,
            v126,
            (int)v127,
            (int)v128,
            v129,
            (int)ptr,
            v131,
            v133);
          v50 = *(_QWORD *)v138;
          if ( *(_DWORD *)(v14 + 32) )
          {
            v81 = sub_186B270(0x38u);
            sub_13478B0(v81, *(_QWORD *)(a1 + 32), *(unsigned int *)(v14 + 32));
            sub_1349280(v81, v50, v82, v83, v84, v85);
            sub_135F980(ptr, v14, v81);
          }
          else
          {
            sub_135F9B0(ptr, v14, *(_QWORD *)v138);
          }
          if ( v50 )
          {
            v51 = (*(_DWORD *)(v50 + 8))-- == 1;
            if ( v51 )
              sub_15D7BC0(v134, v50);
          }
          v139 = (__int64 *)&off_1C4CA60;
          if ( v149 )
            sub_186B220((void *)(v149 - 8));
          v52 = v147;
          if ( v147 )
          {
            v53 = v148;
            v51 = (*(_DWORD *)(v147 + 8))-- == 1;
            if ( v51 )
              sub_15D7BC0(v53, v52);
          }
          v54 = v145;
          if ( v145 )
          {
            v55 = v146;
            v51 = (*(_DWORD *)(v145 + 8))-- == 1;
            if ( v51 )
              sub_15D7BC0(v55, v54);
          }
          v56 = v143;
          if ( v143 )
          {
            v57 = v144;
            v51 = (*(_DWORD *)(v143 + 8))-- == 1;
            if ( v51 )
              sub_15D7BC0(v57, v56);
          }
          v142[0] = &qword_1C637E8;
          sub_15841B0(v142);
          v141[0] = &qword_1C637E8;
          sub_15841B0(v141);
          if ( v140 )
            sub_186B220((void *)(v140 - 8));
          sub_15841B0(v127);
          v58 = v24;
          v59 = (unsigned __int64)&v24[*((unsigned int *)v24 - 1)];
          if ( (unsigned __int64)v24 < v59 )
          {
            do
            {
              while ( 1 )
              {
                v60 = *v58;
                if ( *v58 )
                {
                  v51 = (*(_DWORD *)(v60 + 8))-- == 1;
                  if ( v51 )
                    break;
                }
                if ( (unsigned __int64)++v58 >= v59 )
                  goto LABEL_61;
              }
              ++v58;
              sub_15D7BC0(v132, v60);
            }
            while ( (unsigned __int64)v58 < v59 );
          }
LABEL_61:
          sub_186B220(v24 - 1);
        }
        else
        {
          v139 = (__int64 *)&off_1C4CA60;
          if ( v149 )
            sub_186B220((void *)(v149 - 8));
          v89 = v147;
          if ( v147 )
          {
            v90 = v148;
            v51 = (*(_DWORD *)(v147 + 8))-- == 1;
            if ( v51 )
              sub_15D7BC0(v90, v89);
          }
          v91 = v145;
          if ( v145 )
          {
            v92 = v146;
            v51 = (*(_DWORD *)(v145 + 8))-- == 1;
            if ( v51 )
              sub_15D7BC0(v92, v91);
          }
          v93 = v143;
          if ( v143 )
          {
            v94 = v144;
            v51 = (*(_DWORD *)(v143 + 8))-- == 1;
            if ( v51 )
              sub_15D7BC0(v94, v93);
          }
          v142[0] = &qword_1C637E8;
          sub_15841B0(v142);
          v141[0] = &qword_1C637E8;
          sub_15841B0(v141);
          if ( v140 )
            sub_186B220((void *)(v140 - 8));
          sub_15841B0(v127);
        }
        v4 = (unsigned __int64)v128;
        v61 = (_QWORD *)(v126 + 16);
        if ( v128 == (_QWORD *)(v126 + 16) )
          break;
        while ( 1 )
        {
          v7 = (_DWORD *)*v61;
          if ( *v61 > 1u )
            break;
          v61 += 2;
          if ( v128 == v61 )
            goto LABEL_67;
        }
        v126 = (__int64)v61;
      }
      while ( v128 != v61 );
    }
  }
LABEL_67:
  v62 = *(_QWORD **)v129;
  v63 = *(_QWORD *)(*(_QWORD *)v129 + 80LL);
  if ( v63 )
  {
    v6 = *(unsigned int *)(v63 - 4);
    if ( (_DWORD)v6 )
    {
      v64 = 8 * v6;
      v65 = 0;
      while ( 1 )
      {
        v8 = *(_DWORD **)(v63 + v65);
        v66 = *(unsigned int *)(a1 + 80);
        v7 = *(_DWORD **)(a1 + 72);
        v4 = (unsigned int)v8[3];
        v67 = v66 - 1;
        v66 *= 16;
        v68 = (__int64 *)((char *)v7 + v66);
        v6 = 16LL * ((unsigned int)v4 & v67);
        v69 = (_DWORD *)((char *)v7 + v6);
        if ( v6 != v66 )
        {
          for ( j = (__int64 *)((char *)v7 + v6); v68 != j; j += 2 )
          {
            v6 = *j;
            if ( (unsigned __int64)*j > 1 )
            {
              if ( *(_DWORD *)(v6 + 12) == (_DWORD)v4 && v8 == (_DWORD *)v6 )
                goto LABEL_85;
            }
            else if ( !v6 )
            {
              goto LABEL_77;
            }
          }
        }
        for ( ; v69 != v7; v7 += 4 )
        {
          v79 = *(_DWORD **)v7;
          if ( *(_QWORD *)v7 > 1u )
          {
            if ( v79[3] == (_DWORD)v4 && v8 == v79 )
              goto LABEL_85;
          }
          else if ( !v79 )
          {
            break;
          }
        }
LABEL_77:
        v71 = *((unsigned int *)v62 + 8);
        v72 = (_QWORD *)v62[3];
        v73 = v71 - 1;
        v71 *= 24;
        v74 = (_QWORD *)((char *)v72 + v71);
        v75 = 24LL * ((unsigned int)v4 & v73);
        v76 = &v72[(unsigned __int64)v75 / 8];
        if ( v75 != v71 )
        {
          for ( k = &v72[(unsigned __int64)v75 / 8]; v74 != k; k += 3 )
          {
            v78 = (_DWORD *)*k;
            if ( *k > 1u )
            {
              if ( v78[3] == (_DWORD)v4 && v8 == v78 )
                goto LABEL_127;
            }
            else if ( !v78 )
            {
              goto LABEL_84;
            }
          }
        }
        if ( v72 == v76 )
        {
LABEL_174:
          v78 = nullptr;
        }
        else
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v78 = (_DWORD *)*v72;
              if ( *v72 > 1u )
                break;
              if ( !v78 )
                goto LABEL_84;
              v72 += 3;
              if ( v76 == v72 )
                goto LABEL_174;
            }
            if ( v78[3] == (_DWORD)v4 && v8 == v78 )
              break;
            v72 += 3;
            if ( v76 == v72 )
              goto LABEL_174;
          }
          k = v72;
LABEL_127:
          v78 = (_DWORD *)k[2];
        }
LABEL_84:
        v4 = (unsigned __int64)v8;
        sub_135F9B0(ptr, v8, v78);
        v62 = *(_QWORD **)v129;
LABEL_85:
        v65 += 8;
        if ( v65 == v64 )
          break;
        v63 = v62[10];
      }
    }
  }
  v95 = v62[11];
  if ( v95 && (v96 = 0, v6 = *(unsigned int *)(v95 - 4), v97 = 8 * v6, (_DWORD)v6) )
  {
    while ( 1 )
    {
      v98 = *(_QWORD *)(v95 + v96);
      v99 = *(unsigned int *)(a1 + 80);
      v7 = *(_DWORD **)(a1 + 72);
      v4 = *(unsigned int *)(v98 + 12);
      v100 = v99 - 1;
      v99 *= 16;
      v101 = (__int64 *)((char *)v7 + v99);
      v102 = 16LL * ((unsigned int)v4 & v100);
      v8 = &v7[(unsigned __int64)v102 / 4];
      if ( v102 != v99 )
      {
        for ( m = (__int64 *)&v7[(unsigned __int64)v102 / 4]; v101 != m; m += 2 )
        {
          v104 = *m;
          if ( (unsigned __int64)*m > 1 )
          {
            if ( *(_DWORD *)(v104 + 12) == (_DWORD)v4 && v98 == v104 )
              goto LABEL_145;
          }
          else if ( !v104 )
          {
            goto LABEL_137;
          }
        }
      }
      for ( ; v8 != v7; v7 += 4 )
      {
        v114 = *(_QWORD *)v7;
        if ( *(_QWORD *)v7 > 1u )
        {
          if ( *(_DWORD *)(v114 + 12) == (_DWORD)v4 && v98 == v114 )
            goto LABEL_145;
        }
        else if ( !v114 )
        {
          break;
        }
      }
LABEL_137:
      v105 = *((unsigned int *)v62 + 14);
      v106 = (__int64 *)v62[6];
      v107 = v105 - 1;
      v105 *= 16;
      v108 = (__int64 *)((char *)v106 + v105);
      v109 = 16LL * ((unsigned int)v4 & v107);
      v110 = &v106[(unsigned __int64)v109 / 8];
      if ( v109 != v105 )
      {
        for ( n = &v106[(unsigned __int64)v109 / 8]; v108 != n; n += 2 )
        {
          v112 = *n;
          if ( (unsigned __int64)*n > 1 )
          {
            if ( *(_DWORD *)(v112 + 12) == (_DWORD)v4 && v98 == v112 )
              goto LABEL_156;
          }
          else if ( !v112 )
          {
            goto LABEL_144;
          }
        }
      }
      if ( v106 == v110 )
      {
LABEL_165:
        v112 = 0;
      }
      else
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v112 = *v106;
            if ( (unsigned __int64)*v106 > 1 )
              break;
            if ( !v112 )
              goto LABEL_144;
            v106 += 2;
            if ( v110 == v106 )
              goto LABEL_165;
          }
          if ( *(_DWORD *)(v112 + 12) == (_DWORD)v4 && v98 == v112 )
            break;
          v106 += 2;
          if ( v110 == v106 )
            goto LABEL_165;
        }
        n = v106;
LABEL_156:
        v112 = n[1];
      }
LABEL_144:
      v113 = sub_13495F0(v112, v4, v106, v108, v110);
      v4 = v98;
      sub_135F980(ptr, v98, v113);
      v62 = *(_QWORD **)v129;
LABEL_145:
      v96 += 8;
      if ( v96 == v97 )
        break;
      v95 = v62[11];
    }
    result = (unsigned int)ptr[4];
    v6 = (unsigned int)(result + 1);
    ptr[4] = v6;
    if ( !v62 )
    {
      v7 = ptr;
      *(_QWORD *)v129 = ptr;
      v116 = ptr;
      ptr[4] = result;
      if ( (_DWORD)result )
        return result;
LABEL_182:
      (**(void (__fastcall ***)(void *, unsigned __int64, __int64, _DWORD *, _DWORD *))v116)(v116, v4, v6, v7, v8);
      return sub_186B220(v116);
    }
  }
  else
  {
    ++ptr[4];
  }
  v51 = (*((_DWORD *)v62 + 4))-- == 1;
  if ( v51 )
  {
    (*(void (__fastcall **)(_QWORD *, unsigned __int64, __int64, _DWORD *, _DWORD *))*v62)(v62, v4, v6, v7, v8);
    sub_186B220(v62);
  }
  *(_QWORD *)v129 = ptr;
  v116 = ptr;
  v124 = ptr[4];
  result = (unsigned int)(v124 - 1);
  ptr[4] = result;
  if ( v124 == 1 )
    goto LABEL_182;
  return result;
}

