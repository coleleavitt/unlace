__int64 __fastcall sub_7DD3A0(__int64 a1, unsigned int **a2, __int64 a3)
{
  char **v3; // rbx
  char **exception; // rbx
  char **v5; // rbx
  char **v6; // rbx
  unsigned int **v7; // r8
  __int64 v8; // rbp
  int ***v9; // r13
  __int64 v10; // rbx
  __int64 v11; // rax
  int **v12; // r12
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // r9
  __int64 *v16; // r14
  unsigned int v17; // ecx
  __int64 v18; // r9
  __int64 *v19; // r15
  int v20; // edi
  __int64 v21; // rdx
  __int64 *v22; // rsi
  int ***v23; // rax
  _QWORD *v24; // r9
  int **v25; // rdx
  int **v26; // rax
  __int64 *v28; // rax
  int v29; // r10d
  __int64 *v30; // r8
  __int64 v31; // rax
  __int64 *v32; // rbp
  __int64 v33; // rbx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 *v36; // rdx
  __int64 *v37; // rax
  __int64 v38; // rdx
  _OWORD *v39; // rax
  _QWORD *v40; // r9
  unsigned int *v41; // rax
  unsigned int v42; // r15d
  __int64 v43; // r14
  unsigned __int64 v44; // rdx
  void **v45; // r15
  unsigned int v46; // r15d
  __int64 v47; // rbp
  unsigned int v48; // eax
  unsigned int v49; // r14d
  unsigned int v50; // r12d
  unsigned int v51; // edx
  size_t v52; // rsi
  unsigned int v53; // ebp
  unsigned int *v54; // rax
  unsigned int v55; // eax
  __int64 v56; // rax
  __int64 v57; // rdx
  _QWORD *v58; // rax
  _QWORD *v59; // rdx
  unsigned int v60; // esi
  __int64 v61; // rdi
  int v62; // esi
  unsigned int ***v63; // rdi
  _QWORD *v64; // rbx
  unsigned int *v65; // rcx
  __int64 v66; // r13
  unsigned __int64 v67; // rax
  void **v68; // r12
  unsigned int v69; // ebp
  unsigned int v70; // r15d
  __int64 v71; // r12
  unsigned int **v72; // r14
  unsigned int v73; // edx
  unsigned int v74; // ecx
  unsigned int v75; // ebp
  unsigned int *v76; // rax
  unsigned int v77; // eax
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rax
  _QWORD *v81; // rax
  unsigned int v82; // edx
  __int64 v83; // rsi
  int v84; // edx
  _QWORD *v85; // rsi
  unsigned int v86; // r14d
  unsigned int v87; // eax
  unsigned int *v88; // rax
  __int64 v89; // rax
  _QWORD *v90; // rax
  _QWORD *v91; // rax
  _QWORD *v92; // rax
  unsigned int v93; // ebx
  unsigned int v94; // ecx
  __int64 v95; // rax
  _DWORD *v96; // rdx
  __int64 v97; // rcx
  unsigned __int64 v99; // [rsp+8h] [rbp-A0h]
  unsigned int **v100; // [rsp+10h] [rbp-98h]
  unsigned int **v101; // [rsp+10h] [rbp-98h]
  unsigned int v102; // [rsp+10h] [rbp-98h]
  __int64 v103; // [rsp+18h] [rbp-90h]
  unsigned int **v104; // [rsp+18h] [rbp-90h]
  __int64 n; // [rsp+20h] [rbp-88h]
  unsigned int nb; // [rsp+20h] [rbp-88h]
  size_t na; // [rsp+20h] [rbp-88h]
  size_t nc; // [rsp+20h] [rbp-88h]
  int v109; // [rsp+28h] [rbp-80h]
  __int64 v110; // [rsp+28h] [rbp-80h]
  __int64 v111; // [rsp+28h] [rbp-80h]
  int v112; // [rsp+30h] [rbp-78h]
  __int64 v113[11]; // [rsp+50h] [rbp-58h] BYREF

  v7 = a2;
  v8 = *((unsigned int *)a2 + 38);
  if ( !(_DWORD)v8 )
  {
    v64 = *(_QWORD **)(a3 + 56);
    v65 = *a2;
    if ( v64 && (v66 = *v65, (unsigned int)v66 < *((_DWORD *)v64 - 1)) && (v67 = v64[v66]) != 0 )
    {
      v68 = (void **)(v67 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v67 <= 7 )
        goto LABEL_100;
      if ( *v68 )
      {
        sub_186B220(*v68);
        v7 = a2;
      }
      v101 = v7;
      sub_186B220(v68);
      v7 = v101;
      v65 = *v101;
      v64 = *(_QWORD **)(a3 + 56);
    }
    else
    {
      v81 = *(_QWORD **)(a3 + 64);
      if ( v81 )
      {
        v82 = *((_DWORD *)v81 - 1);
        if ( v82 == *((_DWORD *)v81 - 2) )
        {
          v93 = (3 * v82 + 1) >> 1;
          v94 = 8 * v93 + 8;
          if ( 8 * v82 + 8 >= v94 || v82 >= v93 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v113, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v113);
            sub_233E40((__int64)v113);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v95 = sub_186B300(v81 - 1, v94);
          v7 = a2;
          v96 = (_DWORD *)v95;
          v81 = (_QWORD *)(v95 + 8);
          v97 = (unsigned int)v96[1];
          *v96 = v93;
          *(_QWORD *)(a3 + 64) = v81;
          v64 = *(_QWORD **)(a3 + 56);
          LODWORD(v96) = v97;
          v85 = &v81[v97];
          v65 = *v7;
          v84 = (_DWORD)v96 + 1;
        }
        else
        {
          v83 = v82;
          v84 = v82 + 1;
          v85 = &v81[v83];
        }
      }
      else
      {
        v91 = (_QWORD *)sub_186B270(0x18u);
        v7 = a2;
        v84 = 1;
        *v91 = 2;
        v81 = v91 + 1;
        *(_QWORD *)(a3 + 64) = v81;
        v65 = *a2;
        v85 = v81;
        v64 = *(_QWORD **)(a3 + 56);
      }
      *v85 = v7;
      *((_DWORD *)v81 - 1) = v84;
    }
    v66 = *v65;
    if ( v64 )
    {
      v69 = *((_DWORD *)v64 - 1);
      if ( (unsigned int)v66 < v69 )
        goto LABEL_100;
      v70 = v66 + 1;
      if ( v69 >= (int)v66 + 1 )
      {
        *((_DWORD *)v64 - 1) = v70;
        goto LABEL_100;
      }
      v102 = *((_DWORD *)v64 - 1);
      v71 = a3;
      v72 = v7;
    }
    else
    {
      v70 = v66 + 1;
      if ( (_DWORD)v66 == -1 )
      {
        v66 = 0xFFFFFFFFLL;
        goto LABEL_100;
      }
      v104 = v7;
      v90 = (_QWORD *)sub_186B270(0x18u);
      v71 = a3;
      v102 = 0;
      *v90 = 2;
      v72 = v104;
      v64 = v90 + 1;
      *(_QWORD *)(a3 + 56) = v90 + 1;
    }
    while ( 1 )
    {
      v77 = *((_DWORD *)v64 - 2);
      if ( v77 >= v70 )
        break;
      v73 = (3 * v77 + 1) >> 1;
      v74 = 8 * v73 + 8;
      v75 = v73;
      if ( 8 * v77 + 8 >= v74 || v77 >= v73 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v113, "Overflow encountered when expanding vector");
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, v113);
        sub_233E40((__int64)v113);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v76 = (unsigned int *)sub_186B300(v64 - 1, v74);
      v64 = v76 + 2;
      *v76 = v75;
      *(_QWORD *)(v71 + 56) = v76 + 2;
    }
    *((_DWORD *)v64 - 1) = v70;
    v7 = v72;
    v78 = 8LL * v70;
    v79 = 8LL * v102;
    if ( v79 != v78 )
    {
      memset(&v64[(unsigned __int64)v79 / 8], 0, v78 - v79);
      v7 = v72;
    }
LABEL_100:
    v80 = *((unsigned int *)v7 + 38);
    v64[v66] = 1;
    v9 = (int ***)(v7 + 22);
    v80 *= 8;
    v103 = (__int64)v7 + v80 + 176;
    if ( !v80 )
      return 1;
    goto LABEL_3;
  }
  v9 = (int ***)(a2 + 22);
  v103 = (__int64)&a2[v8 + 22];
LABEL_3:
  v100 = v7;
  v10 = a3;
  do
  {
    v11 = *(_QWORD *)(v10 + 56);
    v12 = *v9;
    if ( v11 )
    {
      v13 = **v100;
      if ( (unsigned int)v13 < *(_DWORD *)(v11 - 4) )
      {
        v14 = *(_QWORD *)(v11 + 8 * v13);
        v99 = v14 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v14 > 7 )
          goto LABEL_7;
      }
    }
    v99 = sub_186B270(0x18u);
    v39 = (_OWORD *)sub_186B270(0x40u);
    v40 = *(_QWORD **)(v10 + 56);
    *(_DWORD *)(v99 + 16) = 0;
    *v39 = 0;
    *(_QWORD *)v99 = v39;
    v39[1] = 0;
    v39[2] = 0;
    v39[3] = 0;
    *(_QWORD *)(v99 + 8) = 8;
    v41 = *v100;
    if ( v40 && (v42 = *v41, *v41 < *((_DWORD *)v40 - 1)) && (v43 = v42, (v44 = v40[v42]) != 0) )
    {
      v45 = (void **)(v44 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v44 <= 7 )
      {
        v47 = v99 | 1;
        goto LABEL_64;
      }
      if ( *v45 )
        sub_186B220(*v45);
      sub_186B220(v45);
      v40 = *(_QWORD **)(v10 + 56);
      v41 = *v100;
    }
    else
    {
      v59 = *(_QWORD **)(v10 + 64);
      if ( v59 )
      {
        v60 = *((_DWORD *)v59 - 1);
        if ( v60 == *((_DWORD *)v59 - 2) )
        {
          v86 = (3 * v60 + 1) >> 1;
          v87 = 8 * v86 + 8;
          if ( 8 * v60 + 8 >= v87 || v60 >= v86 )
          {
            v3 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v113, "Overflow encountered when expanding vector");
            *v3 = (char *)off_1C63128;
            sub_2333C0(v3 + 1, v113);
            sub_233E40((__int64)v113);
            __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v88 = (unsigned int *)sub_186B300(v59 - 1, v87);
          v40 = *(_QWORD **)(v10 + 56);
          v59 = v88 + 2;
          *v88 = v86;
          v89 = v88[1];
          *(_QWORD *)(v10 + 64) = v59;
          v63 = (unsigned int ***)&v59[v89];
          v62 = v89 + 1;
          v41 = *v100;
        }
        else
        {
          v61 = v60;
          v62 = v60 + 1;
          v63 = (unsigned int ***)&v59[v61];
        }
      }
      else
      {
        v92 = (_QWORD *)sub_186B270(0x18u);
        v40 = *(_QWORD **)(v10 + 56);
        v62 = 1;
        *v92 = 2;
        v59 = v92 + 1;
        *(_QWORD *)(v10 + 64) = v92 + 1;
        v41 = *v100;
        v63 = (unsigned int ***)v59;
      }
      *v63 = v100;
      *((_DWORD *)v59 - 1) = v62;
    }
    v46 = *v41;
    v47 = v99 | 1;
    if ( v40 )
    {
      v48 = *((_DWORD *)v40 - 1);
      if ( v46 >= v48 )
      {
        v49 = v46 + 1;
        if ( v48 < v46 + 1 )
        {
          na = (size_t)v12;
          v50 = *((_DWORD *)v40 - 1);
          v111 = v99 | 1;
LABEL_61:
          while ( 1 )
          {
            v55 = *((_DWORD *)v40 - 2);
            if ( v55 >= v49 )
              break;
            v51 = (3 * v55 + 1) >> 1;
            v52 = 8 * v51 + 8;
            v53 = v51;
            if ( 8 * v55 + 8 >= (unsigned int)v52 || v55 >= v51 )
            {
              v6 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v113, "Overflow encountered when expanding vector");
              *v6 = (char *)off_1C63128;
              sub_2333C0(v6 + 1, v113);
              sub_233E40((__int64)v113);
              __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v54 = (unsigned int *)sub_186B300(v40 - 1, v52);
            v40 = v54 + 2;
            *v54 = v53;
            *(_QWORD *)(v10 + 56) = v54 + 2;
          }
          *((_DWORD *)v40 - 1) = v49;
          v47 = v111;
          v56 = 8LL * v50;
          v57 = 8LL * v49;
          v12 = (int **)na;
          v43 = v46;
          if ( v56 != v57 )
          {
            nc = (size_t)v40;
            memset(&v40[(unsigned __int64)v56 / 8], 0, v57 - v56);
            v40 = (_QWORD *)nc;
          }
          goto LABEL_64;
        }
        *((_DWORD *)v40 - 1) = v49;
      }
      v43 = v46;
    }
    else
    {
      v49 = v46 + 1;
      if ( v46 != -1 )
      {
        v58 = (_QWORD *)sub_186B270(0x18u);
        na = (size_t)v12;
        v40 = v58 + 1;
        v111 = v99 | 1;
        *v58 = 2;
        *(_QWORD *)(v10 + 56) = v58 + 1;
        v50 = 0;
        goto LABEL_61;
      }
      v43 = 0xFFFFFFFFLL;
    }
LABEL_64:
    v40[v43] = v47;
LABEL_7:
    v15 = *(unsigned int *)(v99 + 8);
    if ( 3 * (int)v15 < (unsigned int)(4 * (*(_DWORD *)(v99 + 12) + *(_DWORD *)(v99 + 16))) )
    {
      v109 = 2 * v15;
      n = 8LL * (unsigned int)(2 * v15);
      v28 = (__int64 *)sub_186B270(n);
      v29 = v109;
      v18 = n;
      v16 = v28;
      if ( v109 )
      {
        memset(v28, 0, n);
        v18 = n;
        v29 = v109;
      }
      v17 = v29 - 1;
      v19 = (__int64 *)((char *)v16 + v18);
      v30 = (__int64 *)(*(_QWORD *)v99 + 8LL * *(unsigned int *)(v99 + 8));
      if ( *(__int64 **)v99 != v30 )
      {
        v31 = v10;
        v32 = *(__int64 **)v99;
        v33 = *(_QWORD *)v99 + 8LL * *(unsigned int *)(v99 + 8);
        v34 = v31;
        do
        {
          while ( (unsigned __int64)*v32 <= 1 )
          {
            if ( (__int64 *)v33 == ++v32 )
              goto LABEL_38;
          }
          v35 = 8LL * (**(_DWORD **)*v32 & v17);
          v36 = &v16[(unsigned __int64)v35 / 8];
          if ( v18 == v35 )
          {
LABEL_42:
            if ( v16 == v36 )
            {
LABEL_68:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v37 = v16;
            while ( *v37 )
            {
              if ( v36 == ++v37 )
                goto LABEL_68;
            }
          }
          else
          {
            v37 = &v16[(unsigned __int64)v35 / 8];
            while ( *v37 )
            {
              if ( v19 == ++v37 )
                goto LABEL_42;
            }
          }
          v38 = *v32++;
          *v37 = v38;
        }
        while ( (__int64 *)v33 != v32 );
LABEL_38:
        v10 = v34;
        v30 = *(__int64 **)v99;
      }
      if ( v30 )
      {
        v112 = v29;
        v110 = v18;
        nb = v29 - 1;
        sub_186B220(v30);
        v29 = v112;
        v18 = v110;
        v17 = nb;
      }
      *(_QWORD *)v99 = v16;
      *(_DWORD *)(v99 + 8) = v29;
      *(_DWORD *)(v99 + 16) = 0;
    }
    else
    {
      v16 = *(__int64 **)v99;
      v17 = v15 - 1;
      v18 = 8 * v15;
      v19 = (__int64 *)(*(_QWORD *)v99 + v18);
    }
    v20 = **v12;
    v21 = 8LL * (v20 & v17);
    v22 = &v16[(unsigned __int64)v21 / 8];
    if ( v21 != v18 )
    {
      v23 = (int ***)&v16[(unsigned __int64)v21 / 8];
      v24 = nullptr;
      while ( 1 )
      {
        v25 = *v23;
        if ( (unsigned __int64)*v23 > 1 )
        {
          if ( **v25 == v20 && v12 == v25 )
          {
            *v23 = v12;
            goto LABEL_25;
          }
        }
        else
        {
          if ( !v25 )
          {
            if ( v24 )
              goto LABEL_66;
            v24 = v23;
            goto LABEL_67;
          }
          v24 = v23;
        }
        if ( ++v23 == (int ***)v19 )
          goto LABEL_20;
      }
    }
    v24 = nullptr;
    while ( 1 )
    {
LABEL_20:
      if ( v22 == v16 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v26 = (int **)*v16;
      if ( (unsigned __int64)*v16 <= 1 )
        break;
      if ( **v26 == v20 && v12 == v26 )
      {
        *v16 = (__int64)v12;
        goto LABEL_25;
      }
LABEL_19:
      ++v16;
    }
    if ( v26 )
    {
      v24 = v16;
      goto LABEL_19;
    }
    if ( v24 )
LABEL_66:
      --*(_DWORD *)(v99 + 16);
    else
      v24 = v16;
LABEL_67:
    *v24 = v12;
    ++*(_DWORD *)(v99 + 12);
LABEL_25:
    ++v9;
  }
  while ( (int ***)v103 != v9 );
  return 1;
}

