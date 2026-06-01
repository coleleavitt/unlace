__int64 __fastcall sub_81FD70(__int64 a1, int *a2, __int64 a3)
{
  char **v3; // rbx
  char **exception; // rbx
  char **v5; // rbx
  char **v6; // rbx
  __int64 v7; // rbp
  int v8; // eax
  _DWORD *v9; // rdx
  unsigned int v10; // esi
  unsigned int **v11; // r8
  char *v13; // rax
  unsigned int v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // ecx
  __int64 v17; // r13
  __int64 v18; // rbp
  __int64 v19; // r13
  __int64 v20; // rbx
  int **v21; // r12
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  __int64 v25; // r9
  __int64 *v26; // r14
  unsigned int v27; // ecx
  __int64 v28; // r9
  __int64 *v29; // r15
  int v30; // edi
  __int64 v31; // rdx
  __int64 *v32; // rsi
  int ***v33; // rax
  _QWORD *v34; // r9
  int **v35; // rdx
  int **v36; // rax
  __int64 *v37; // rax
  int v38; // r10d
  __int64 *v39; // r8
  __int64 v40; // rax
  __int64 *v41; // rbp
  __int64 v42; // rbx
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 *v45; // rdx
  __int64 *v46; // rax
  __int64 v47; // rdx
  _OWORD *v48; // rax
  _QWORD *v49; // r9
  unsigned int *v50; // rax
  unsigned int v51; // r15d
  __int64 v52; // r14
  unsigned __int64 v53; // rdx
  void **v54; // r15
  unsigned int v55; // r15d
  __int64 v56; // rbp
  unsigned int v57; // eax
  unsigned int v58; // r14d
  unsigned int v59; // r12d
  unsigned int v60; // edx
  size_t v61; // rsi
  unsigned int v62; // ebp
  unsigned int *v63; // rax
  unsigned int v64; // eax
  __int64 v65; // rax
  __int64 v66; // rdx
  _QWORD *v67; // rax
  _QWORD *v68; // rdx
  unsigned int v69; // esi
  __int64 v70; // rdi
  int v71; // esi
  unsigned int ***v72; // rdi
  unsigned int *v73; // rcx
  _QWORD *v74; // rbx
  __int64 v75; // r15
  unsigned __int64 v76; // rax
  void **v77; // r12
  __int64 v78; // r14
  unsigned int v79; // r12d
  _QWORD *v80; // rdx
  unsigned int v81; // ebx
  size_t v82; // rsi
  unsigned int *v83; // rax
  unsigned int v84; // eax
  __int64 v85; // rsi
  __int64 v86; // rax
  __int64 v87; // rax
  unsigned int v88; // r14d
  unsigned int v89; // eax
  unsigned int *v90; // rax
  __int64 v91; // rax
  _QWORD *v92; // rax
  _QWORD *v93; // rax
  _QWORD *v94; // rax
  unsigned int v95; // edx
  __int64 v96; // rsi
  int v97; // edx
  _QWORD *v98; // rsi
  unsigned int v99; // ebx
  unsigned int v100; // ecx
  __int64 v101; // rax
  _DWORD *v102; // rdx
  __int64 v103; // rcx
  _QWORD *v104; // rax
  unsigned __int64 v106; // [rsp+8h] [rbp-A0h]
  unsigned int **v108; // [rsp+10h] [rbp-98h]
  unsigned int **v109; // [rsp+10h] [rbp-98h]
  unsigned int **v110; // [rsp+10h] [rbp-98h]
  __int64 v111; // [rsp+18h] [rbp-90h]
  unsigned int **v112; // [rsp+18h] [rbp-90h]
  __int64 n; // [rsp+20h] [rbp-88h]
  unsigned int nb; // [rsp+20h] [rbp-88h]
  size_t na; // [rsp+20h] [rbp-88h]
  size_t nc; // [rsp+20h] [rbp-88h]
  int v117; // [rsp+28h] [rbp-80h]
  __int64 v118; // [rsp+28h] [rbp-80h]
  __int64 v119; // [rsp+28h] [rbp-80h]
  int v120; // [rsp+30h] [rbp-78h]
  __int64 v121[11]; // [rsp+50h] [rbp-58h] BYREF

  v7 = sub_15D1F10(*(_QWORD *)a2);
  v8 = sub_15F0200(a1 + 112);
  v9 = *(_DWORD **)(v7 + 24);
  v10 = 0;
  if ( v9 )
  {
    v11 = (unsigned int **)a2;
    if ( v8 == *v9 && !v9[1] )
    {
      v13 = (char *)(a2 + 22);
      if ( a2[22] >> 8 != -1 )
      {
        while ( *(_DWORD *)(a1 + 12) != *v13 )
        {
          v13 = *((char **)v13 + 1);
          if ( !v13 )
            return 0;
        }
        v14 = *(int *)v13 >> 8;
        if ( v14 == -1 )
          return 0;
        do
        {
          v15 = v14;
          v16 = v14;
          v14 = *(_DWORD *)(*(_QWORD *)(a1 + 336) + 4LL * v14);
        }
        while ( v16 != v14 );
        v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 312) + 8 * v15) + 8LL);
        v18 = *(unsigned int *)(v17 + 152);
        if ( (_DWORD)v18 )
        {
          v19 = v17 + 176;
          v111 = v19 + 8 * v18;
LABEL_13:
          v108 = v11;
          v20 = a3;
          while ( 1 )
          {
            v21 = *(int ***)(*(_QWORD *)v19 + 64LL);
            v22 = *(_QWORD *)(v20 + 56);
            if ( v22 )
            {
              v23 = **v108;
              if ( (unsigned int)v23 < *(_DWORD *)(v22 - 4) )
              {
                v24 = *(_QWORD *)(v22 + 8 * v23);
                v106 = v24 & 0xFFFFFFFFFFFFFFF8LL;
                if ( v24 > 7 )
                  goto LABEL_17;
              }
            }
            v106 = sub_186B270(0x18u);
            v48 = (_OWORD *)sub_186B270(0x40u);
            v49 = *(_QWORD **)(v20 + 56);
            *(_DWORD *)(v106 + 16) = 0;
            *v48 = 0;
            *(_QWORD *)v106 = v48;
            v48[1] = 0;
            v48[2] = 0;
            v48[3] = 0;
            *(_QWORD *)(v106 + 8) = 8;
            v50 = *v108;
            if ( v49 && (v51 = *v50, *v50 < *((_DWORD *)v49 - 1)) && (v52 = v51, (v53 = v49[v51]) != 0) )
            {
              v54 = (void **)(v53 & 0xFFFFFFFFFFFFFFF8LL);
              if ( v53 <= 7 )
              {
                v56 = v106 | 1;
                goto LABEL_74;
              }
              if ( *v54 )
                sub_186B220(*v54);
              sub_186B220(v54);
              v49 = *(_QWORD **)(v20 + 56);
              v50 = *v108;
            }
            else
            {
              v68 = *(_QWORD **)(v20 + 64);
              if ( v68 )
              {
                v69 = *((_DWORD *)v68 - 1);
                if ( v69 == *((_DWORD *)v68 - 2) )
                {
                  v88 = (3 * v69 + 1) >> 1;
                  v89 = 8 * v88 + 8;
                  if ( 8 * v69 + 8 >= v89 || v69 >= v88 )
                  {
                    exception = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(v121, "Overflow encountered when expanding vector");
                    *exception = (char *)off_1C63128;
                    sub_2333C0(exception + 1, v121);
                    sub_233E40((__int64)v121);
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v90 = (unsigned int *)sub_186B300(v68 - 1, v89);
                  v49 = *(_QWORD **)(v20 + 56);
                  v68 = v90 + 2;
                  *v90 = v88;
                  v91 = v90[1];
                  *(_QWORD *)(v20 + 64) = v68;
                  v72 = (unsigned int ***)&v68[v91];
                  v71 = v91 + 1;
                  v50 = *v108;
                }
                else
                {
                  v70 = v69;
                  v71 = v69 + 1;
                  v72 = (unsigned int ***)&v68[v70];
                }
              }
              else
              {
                v92 = (_QWORD *)sub_186B270(0x18u);
                v49 = *(_QWORD **)(v20 + 56);
                v71 = 1;
                *v92 = 2;
                v68 = v92 + 1;
                *(_QWORD *)(v20 + 64) = v92 + 1;
                v50 = *v108;
                v72 = (unsigned int ***)v68;
              }
              *v72 = v108;
              *((_DWORD *)v68 - 1) = v71;
            }
            v55 = *v50;
            v56 = v106 | 1;
            if ( v49 )
            {
              v57 = *((_DWORD *)v49 - 1);
              if ( v55 >= v57 )
              {
                v58 = v55 + 1;
                if ( v57 < v55 + 1 )
                {
                  na = (size_t)v21;
                  v59 = *((_DWORD *)v49 - 1);
                  v119 = v106 | 1;
LABEL_71:
                  while ( 1 )
                  {
                    v64 = *((_DWORD *)v49 - 2);
                    if ( v64 >= v58 )
                      break;
                    v60 = (3 * v64 + 1) >> 1;
                    v61 = 8 * v60 + 8;
                    v62 = v60;
                    if ( 8 * v64 + 8 >= (unsigned int)v61 || v64 >= v60 )
                    {
                      v3 = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0(v121, "Overflow encountered when expanding vector");
                      *v3 = (char *)off_1C63128;
                      sub_2333C0(v3 + 1, v121);
                      sub_233E40((__int64)v121);
                      __cxa_throw(
                        v3,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v63 = (unsigned int *)sub_186B300(v49 - 1, v61);
                    v49 = v63 + 2;
                    *v63 = v62;
                    *(_QWORD *)(v20 + 56) = v63 + 2;
                  }
                  *((_DWORD *)v49 - 1) = v58;
                  v56 = v119;
                  v65 = 8LL * v59;
                  v66 = 8LL * v58;
                  v21 = (int **)na;
                  v52 = v55;
                  if ( v65 != v66 )
                  {
                    nc = (size_t)v49;
                    memset(&v49[(unsigned __int64)v65 / 8], 0, v66 - v65);
                    v49 = (_QWORD *)nc;
                  }
                  goto LABEL_74;
                }
                *((_DWORD *)v49 - 1) = v58;
              }
              v52 = v55;
            }
            else
            {
              v58 = v55 + 1;
              if ( v55 != -1 )
              {
                v67 = (_QWORD *)sub_186B270(0x18u);
                na = (size_t)v21;
                v49 = v67 + 1;
                v119 = v106 | 1;
                *v67 = 2;
                *(_QWORD *)(v20 + 56) = v67 + 1;
                v59 = 0;
                goto LABEL_71;
              }
              v52 = 0xFFFFFFFFLL;
            }
LABEL_74:
            v49[v52] = v56;
LABEL_17:
            v25 = *(unsigned int *)(v106 + 8);
            if ( 3 * (int)v25 < (unsigned int)(4 * (*(_DWORD *)(v106 + 12) + *(_DWORD *)(v106 + 16))) )
            {
              v117 = 2 * v25;
              n = 8LL * (unsigned int)(2 * v25);
              v37 = (__int64 *)sub_186B270(n);
              v38 = v117;
              v28 = n;
              v26 = v37;
              if ( v117 )
              {
                memset(v37, 0, n);
                v28 = n;
                v38 = v117;
              }
              v27 = v38 - 1;
              v29 = (__int64 *)((char *)v26 + v28);
              v39 = (__int64 *)(*(_QWORD *)v106 + 8LL * *(unsigned int *)(v106 + 8));
              if ( *(__int64 **)v106 != v39 )
              {
                v40 = v20;
                v41 = *(__int64 **)v106;
                v42 = *(_QWORD *)v106 + 8LL * *(unsigned int *)(v106 + 8);
                v43 = v40;
                do
                {
                  while ( (unsigned __int64)*v41 <= 1 )
                  {
                    if ( (__int64 *)v42 == ++v41 )
                      goto LABEL_48;
                  }
                  v44 = 8LL * (**(_DWORD **)*v41 & v27);
                  v45 = &v26[(unsigned __int64)v44 / 8];
                  if ( v28 == v44 )
                  {
LABEL_52:
                    if ( v26 == v45 )
                    {
LABEL_78:
                      sub_1872CE0("");
                      sub_1873130(114, 213);
                    }
                    v46 = v26;
                    while ( *v46 )
                    {
                      if ( v45 == ++v46 )
                        goto LABEL_78;
                    }
                  }
                  else
                  {
                    v46 = &v26[(unsigned __int64)v44 / 8];
                    while ( *v46 )
                    {
                      if ( v29 == ++v46 )
                        goto LABEL_52;
                    }
                  }
                  v47 = *v41++;
                  *v46 = v47;
                }
                while ( (__int64 *)v42 != v41 );
LABEL_48:
                v20 = v43;
                v39 = *(__int64 **)v106;
              }
              if ( v39 )
              {
                v120 = v38;
                v118 = v28;
                nb = v38 - 1;
                sub_186B220(v39);
                v38 = v120;
                v28 = v118;
                v27 = nb;
              }
              *(_QWORD *)v106 = v26;
              *(_DWORD *)(v106 + 8) = v38;
              *(_DWORD *)(v106 + 16) = 0;
            }
            else
            {
              v26 = *(__int64 **)v106;
              v27 = v25 - 1;
              v28 = 8 * v25;
              v29 = (__int64 *)(*(_QWORD *)v106 + v28);
            }
            v30 = **v21;
            v31 = 8LL * (v30 & v27);
            v32 = &v26[(unsigned __int64)v31 / 8];
            if ( v31 != v28 )
            {
              v33 = (int ***)&v26[(unsigned __int64)v31 / 8];
              v34 = nullptr;
              while ( 1 )
              {
                v35 = *v33;
                if ( (unsigned __int64)*v33 > 1 )
                {
                  if ( **v35 == v30 && v21 == v35 )
                  {
                    *v33 = v21;
                    goto LABEL_35;
                  }
                }
                else
                {
                  if ( !v35 )
                  {
                    if ( v34 )
                      goto LABEL_76;
                    v34 = v33;
                    goto LABEL_77;
                  }
                  v34 = v33;
                }
                if ( ++v33 == (int ***)v29 )
                  goto LABEL_30;
              }
            }
            v34 = nullptr;
            while ( 1 )
            {
LABEL_30:
              if ( v32 == v26 )
              {
                sub_1872CE0("");
                sub_1873130(114, 405);
              }
              v36 = (int **)*v26;
              if ( (unsigned __int64)*v26 <= 1 )
                break;
              if ( **v36 == v30 && v21 == v36 )
              {
                *v26 = (__int64)v21;
                goto LABEL_35;
              }
LABEL_29:
              ++v26;
            }
            if ( v36 )
            {
              v34 = v26;
              goto LABEL_29;
            }
            if ( v34 )
LABEL_76:
              --*(_DWORD *)(v106 + 16);
            else
              v34 = v26;
LABEL_77:
            *v34 = v21;
            ++*(_DWORD *)(v106 + 12);
LABEL_35:
            v19 += 8;
            if ( v111 == v19 )
              return 1;
          }
        }
        v73 = *(unsigned int **)a2;
        v74 = *(_QWORD **)(a3 + 56);
        if ( v74 && (v75 = *v73, (unsigned int)v75 < *((_DWORD *)v74 - 1)) && (v76 = v74[v75]) != 0 )
        {
          v77 = (void **)(v76 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v76 <= 7 )
            goto LABEL_112;
          if ( *v77 )
          {
            sub_186B220(*v77);
            v11 = (unsigned int **)a2;
          }
          v109 = v11;
          sub_186B220(v77);
          v11 = v109;
          v73 = *v109;
          v74 = *(_QWORD **)(a3 + 56);
        }
        else
        {
          v94 = *(_QWORD **)(a3 + 64);
          if ( v94 )
          {
            v95 = *((_DWORD *)v94 - 1);
            if ( v95 == *((_DWORD *)v94 - 2) )
            {
              v99 = (3 * v95 + 1) >> 1;
              v100 = 8 * v99 + 8;
              if ( 8 * v95 + 8 >= v100 || v95 >= v99 )
              {
                v6 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v121, "Overflow encountered when expanding vector");
                *v6 = (char *)off_1C63128;
                sub_2333C0(v6 + 1, v121);
                sub_233E40((__int64)v121);
                __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v101 = sub_186B300(v94 - 1, v100);
              v11 = (unsigned int **)a2;
              v102 = (_DWORD *)v101;
              v94 = (_QWORD *)(v101 + 8);
              v103 = (unsigned int)v102[1];
              *v102 = v99;
              *(_QWORD *)(a3 + 64) = v94;
              v74 = *(_QWORD **)(a3 + 56);
              LODWORD(v102) = v103;
              v98 = &v94[v103];
              v73 = *(unsigned int **)a2;
              v97 = (_DWORD)v102 + 1;
            }
            else
            {
              v96 = v95;
              v97 = v95 + 1;
              v98 = &v94[v96];
            }
          }
          else
          {
            v104 = (_QWORD *)sub_186B270(0x18u);
            v11 = (unsigned int **)a2;
            v97 = 1;
            *v104 = 2;
            v94 = v104 + 1;
            *(_QWORD *)(a3 + 64) = v94;
            v73 = *(unsigned int **)a2;
            v98 = v94;
            v74 = *(_QWORD **)(a3 + 56);
          }
          *v98 = v11;
          *((_DWORD *)v94 - 1) = v97;
        }
        v75 = *v73;
        if ( v74 )
        {
          LODWORD(v18) = *((_DWORD *)v74 - 1);
          if ( (unsigned int)v75 < (unsigned int)v18 )
            goto LABEL_112;
          if ( (unsigned int)v18 >= (int)v75 + 1 )
          {
            *((_DWORD *)v74 - 1) = v75 + 1;
            goto LABEL_112;
          }
          v110 = v11;
          v78 = a3;
          v79 = v75 + 1;
          v80 = v74;
        }
        else
        {
          if ( (_DWORD)v75 == -1 )
          {
            v75 = 0xFFFFFFFFLL;
            goto LABEL_112;
          }
          v112 = v11;
          v93 = (_QWORD *)sub_186B270(0x18u);
          v78 = a3;
          v79 = v75 + 1;
          *v93 = 2;
          v110 = v112;
          *(_QWORD *)(a3 + 56) = v93 + 1;
          v80 = v93 + 1;
        }
        while ( 1 )
        {
          v84 = *((_DWORD *)v80 - 2);
          if ( v84 >= v79 )
            break;
          v81 = (3 * v84 + 1) >> 1;
          v82 = 8 * v81 + 8;
          if ( 8 * v84 + 8 >= (unsigned int)v82 || v84 >= v81 )
          {
            v5 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v121, "Overflow encountered when expanding vector");
            *v5 = (char *)off_1C63128;
            sub_2333C0(v5 + 1, v121);
            sub_233E40((__int64)v121);
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v83 = (unsigned int *)sub_186B300(v80 - 1, v82);
          v80 = v83 + 2;
          *v83 = v81;
          *(_QWORD *)(v78 + 56) = v83 + 2;
        }
        v11 = v110;
        v74 = v80;
        *((_DWORD *)v80 - 1) = v79;
        v85 = 8LL * (unsigned int)v18;
        v86 = 8LL * v79;
        if ( v85 != v86 )
        {
          memset(&v80[(unsigned __int64)v85 / 8], 0, v86 - v85);
          v11 = v110;
        }
LABEL_112:
        v87 = *(unsigned int *)(v17 + 152);
        v19 = v17 + 176;
        v74[v75] = 1;
        v87 *= 8;
        v111 = v19 + v87;
        if ( !v87 )
          return 1;
        goto LABEL_13;
      }
    }
  }
  return v10;
}

