__int64 __fastcall sub_8078B0(__int64 a1, unsigned int **a2, __int64 a3)
{
  char **v3; // rbx
  char **v4; // rbx
  char **v5; // rbx
  char **exception; // rbx
  unsigned int **v7; // r8
  unsigned int *v8; // rsi
  __int64 v10; // rbp
  int *v11; // rax
  int v12; // eax
  unsigned int **v13; // r13
  __int64 v14; // rbx
  unsigned int *v15; // r12
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  __int64 v19; // r9
  unsigned int **v20; // r14
  unsigned int v21; // ecx
  __int64 v22; // r9
  unsigned int **v23; // r15
  int v24; // edi
  __int64 v25; // rdx
  unsigned int **v26; // rsi
  unsigned int **v27; // rax
  unsigned int **v28; // r9
  unsigned int *v29; // rdx
  unsigned int *v30; // rax
  _OWORD *v32; // rax
  _QWORD *v33; // r9
  unsigned int *v34; // rax
  unsigned int v35; // r15d
  __int64 v36; // r14
  unsigned __int64 v37; // rdx
  void **v38; // r15
  unsigned int v39; // r15d
  __int64 v40; // rbp
  unsigned int v41; // eax
  unsigned int v42; // r14d
  unsigned int v43; // r12d
  unsigned int v44; // edx
  size_t v45; // rsi
  unsigned int v46; // ebp
  unsigned int *v47; // rax
  unsigned int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdx
  unsigned int **v52; // rax
  int v53; // r10d
  unsigned int **v54; // r8
  __int64 v55; // rax
  unsigned int **v56; // rbp
  __int64 v57; // rbx
  __int64 v58; // r8
  __int64 v59; // rax
  unsigned int **v60; // rdx
  unsigned int **v61; // rax
  unsigned int *v62; // rdx
  _QWORD *v63; // rbx
  unsigned int v64; // r12d
  __int64 v65; // r13
  unsigned __int64 v66; // rax
  void **v67; // r12
  unsigned int v68; // r12d
  unsigned int v69; // r13d
  __int64 v70; // r14
  unsigned int v71; // r15d
  unsigned int v72; // edx
  unsigned int *v73; // rax
  unsigned int v74; // eax
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rax
  _QWORD *v78; // rax
  _QWORD *v79; // rdx
  unsigned int v80; // esi
  __int64 v81; // rdi
  int v82; // esi
  unsigned int ***v83; // rdi
  unsigned int v84; // r14d
  unsigned int v85; // eax
  unsigned int *v86; // rax
  __int64 v87; // rax
  _QWORD *v88; // rax
  _QWORD *v89; // rax
  unsigned int v90; // ecx
  __int64 v91; // rdi
  int v92; // ecx
  _QWORD *v93; // rdi
  _QWORD *v94; // rax
  unsigned int v95; // ebx
  size_t v96; // rsi
  __int64 v97; // rax
  _DWORD *v98; // rcx
  __int64 v99; // rsi
  _QWORD *v100; // rax
  unsigned __int64 v101; // [rsp+0h] [rbp-A0h]
  unsigned int **v102; // [rsp+0h] [rbp-A0h]
  unsigned int **v103; // [rsp+0h] [rbp-A0h]
  unsigned int **v104; // [rsp+0h] [rbp-A0h]
  unsigned int **v105; // [rsp+0h] [rbp-A0h]
  unsigned int **v106; // [rsp+8h] [rbp-98h]
  __int64 v107; // [rsp+10h] [rbp-90h]
  size_t n; // [rsp+18h] [rbp-88h]
  size_t nb; // [rsp+18h] [rbp-88h]
  __int64 na; // [rsp+18h] [rbp-88h]
  unsigned int nc; // [rsp+18h] [rbp-88h]
  __int64 v112; // [rsp+20h] [rbp-80h]
  int v113; // [rsp+20h] [rbp-80h]
  __int64 v114; // [rsp+20h] [rbp-80h]
  int v115; // [rsp+28h] [rbp-78h]
  __int64 v116[11]; // [rsp+48h] [rbp-58h] BYREF

  v7 = a2;
  v8 = *a2;
  if ( *((_WORD *)v8 + 2) )
    return 0;
  v10 = *((unsigned int *)v7 + 38);
  if ( !(_DWORD)v10 )
  {
    v63 = *(_QWORD **)(a3 + 56);
    if ( v63 && (v64 = *v8, *v8 < *((_DWORD *)v63 - 1)) && (v65 = v64, (v66 = v63[v64]) != 0) )
    {
      v67 = (void **)(v66 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v66 <= 7 )
      {
LABEL_93:
        v63[v65] = 1;
        return 1;
      }
      if ( *v67 )
      {
        v102 = v7;
        sub_186B220(*v67);
        v7 = v102;
      }
      v103 = v7;
      sub_186B220(v67);
      v63 = *(_QWORD **)(a3 + 56);
      v8 = *v103;
    }
    else
    {
      v89 = *(_QWORD **)(a3 + 64);
      if ( v89 )
      {
        v90 = *((_DWORD *)v89 - 1);
        if ( v90 == *((_DWORD *)v89 - 2) )
        {
          v95 = (3 * v90 + 1) >> 1;
          v96 = 8 * v95 + 8;
          if ( 8 * v90 + 8 >= (unsigned int)v96 || v90 >= v95 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v116, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v116);
            sub_233E40((__int64)v116);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v104 = v7;
          v97 = sub_186B300(v89 - 1, v96);
          v7 = v104;
          v98 = (_DWORD *)v97;
          v89 = (_QWORD *)(v97 + 8);
          v99 = (unsigned int)v98[1];
          *v98 = v95;
          *(_QWORD *)(a3 + 64) = v89;
          v63 = *(_QWORD **)(a3 + 56);
          LODWORD(v98) = v99;
          v93 = &v89[v99];
          v8 = *v104;
          v92 = (_DWORD)v98 + 1;
        }
        else
        {
          v91 = v90;
          v92 = v90 + 1;
          v93 = &v89[v91];
        }
      }
      else
      {
        v105 = v7;
        v100 = (_QWORD *)sub_186B270(0x18u);
        v7 = v105;
        v63 = *(_QWORD **)(a3 + 56);
        v92 = 1;
        *v100 = 2;
        v89 = v100 + 1;
        *(_QWORD *)(a3 + 64) = v89;
        v8 = *v105;
        v93 = v89;
      }
      *v93 = v7;
      *((_DWORD *)v89 - 1) = v92;
    }
    v68 = *v8;
    if ( v63 )
    {
      LODWORD(v10) = *((_DWORD *)v63 - 1);
      if ( v68 < (unsigned int)v10 )
      {
LABEL_92:
        v65 = v68;
        goto LABEL_93;
      }
      v69 = v68 + 1;
      v70 = a3;
      if ( (unsigned int)v10 >= v68 + 1 )
      {
        *((_DWORD *)v63 - 1) = v69;
        goto LABEL_92;
      }
    }
    else
    {
      v69 = v68 + 1;
      if ( v68 == -1 )
      {
        v65 = 0xFFFFFFFFLL;
        goto LABEL_93;
      }
      v70 = a3;
      v88 = (_QWORD *)sub_186B270(0x18u);
      *v88 = 2;
      v63 = v88 + 1;
      *(_QWORD *)(a3 + 56) = v88 + 1;
    }
    while ( 1 )
    {
      v74 = *((_DWORD *)v63 - 2);
      if ( v74 >= v69 )
        break;
      v71 = (3 * v74 + 1) >> 1;
      v72 = 8 * v71 + 8;
      if ( 8 * v74 + 8 >= v72 || v74 >= v71 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v116, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v116);
        sub_233E40((__int64)v116);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v73 = (unsigned int *)sub_186B300(v63 - 1, v72);
      v63 = v73 + 2;
      *v73 = v71;
      *(_QWORD *)(v70 + 56) = v73 + 2;
    }
    v75 = v69;
    *((_DWORD *)v63 - 1) = v69;
    v65 = v68;
    v76 = 8LL * (unsigned int)v10;
    v77 = 8 * v75;
    if ( v76 != v77 )
      memset(&v63[(unsigned __int64)v76 / 8], 0, v77 - v76);
    goto LABEL_93;
  }
  v11 = *(int **)(*((_QWORD *)v8 + 2) + 24LL);
  if ( v11 )
    v12 = *v11;
  else
    v12 = -1;
  if ( *(_DWORD *)(a1 + 136) != v12 )
    return 0;
  v13 = v7 + 22;
  v14 = a3;
  v106 = v7;
  v15 = v7[22];
  v107 = (__int64)&v7[v10 + 22];
  v16 = *(_QWORD *)(a3 + 56);
  if ( v16 )
  {
LABEL_7:
    v17 = *v8;
    if ( (unsigned int)v17 < *(_DWORD *)(v16 - 4) )
    {
      v18 = *(_QWORD *)(v16 + 8 * v17);
      v101 = v18 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v18 > 7 )
        goto LABEL_9;
    }
  }
LABEL_30:
  v101 = sub_186B270(0x18u);
  v32 = (_OWORD *)sub_186B270(0x40u);
  v33 = *(_QWORD **)(v14 + 56);
  *(_DWORD *)(v101 + 16) = 0;
  *v32 = 0;
  *(_QWORD *)v101 = v32;
  v32[1] = 0;
  v32[2] = 0;
  v32[3] = 0;
  *(_QWORD *)(v101 + 8) = 8;
  v34 = *v106;
  if ( v33 && (v35 = *v34, *v34 < *((_DWORD *)v33 - 1)) && (v36 = v35, (v37 = v33[v35]) != 0) )
  {
    v38 = (void **)(v37 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v37 <= 7 )
    {
      v40 = v101 | 1;
      goto LABEL_47;
    }
    if ( *v38 )
      sub_186B220(*v38);
    sub_186B220(v38);
    v33 = *(_QWORD **)(v14 + 56);
    v34 = *v106;
  }
  else
  {
    v79 = *(_QWORD **)(v14 + 64);
    if ( v79 )
    {
      v80 = *((_DWORD *)v79 - 1);
      if ( v80 == *((_DWORD *)v79 - 2) )
      {
        v84 = (3 * v80 + 1) >> 1;
        v85 = 8 * v84 + 8;
        if ( 8 * v80 + 8 >= v85 || v80 >= v84 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v116, "Overflow encountered when expanding vector");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, v116);
          sub_233E40((__int64)v116);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v86 = (unsigned int *)sub_186B300(v79 - 1, v85);
        v33 = *(_QWORD **)(v14 + 56);
        v79 = v86 + 2;
        *v86 = v84;
        v87 = v86[1];
        *(_QWORD *)(v14 + 64) = v79;
        v83 = (unsigned int ***)&v79[v87];
        v82 = v87 + 1;
        v34 = *v106;
      }
      else
      {
        v81 = v80;
        v82 = v80 + 1;
        v83 = (unsigned int ***)&v79[v81];
      }
    }
    else
    {
      v94 = (_QWORD *)sub_186B270(0x18u);
      v33 = *(_QWORD **)(v14 + 56);
      v82 = 1;
      *v94 = 2;
      v79 = v94 + 1;
      *(_QWORD *)(v14 + 64) = v94 + 1;
      v34 = *v106;
      v83 = (unsigned int ***)v79;
    }
    *v83 = v106;
    *((_DWORD *)v79 - 1) = v82;
  }
  v39 = *v34;
  v40 = v101 | 1;
  if ( v33 )
  {
    v41 = *((_DWORD *)v33 - 1);
    if ( v39 >= v41 )
    {
      v42 = v39 + 1;
      if ( v41 < v39 + 1 )
      {
        n = (size_t)v15;
        v43 = *((_DWORD *)v33 - 1);
        v112 = v101 | 1;
LABEL_44:
        while ( 1 )
        {
          v48 = *((_DWORD *)v33 - 2);
          if ( v48 >= v42 )
            break;
          v44 = (3 * v48 + 1) >> 1;
          v45 = 8 * v44 + 8;
          v46 = v44;
          if ( 8 * v48 + 8 >= (unsigned int)v45 || v48 >= v44 )
          {
            v5 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v116, "Overflow encountered when expanding vector");
            *v5 = (char *)off_1C63128;
            sub_2333C0(v5 + 1, v116);
            sub_233E40((__int64)v116);
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v47 = (unsigned int *)sub_186B300(v33 - 1, v45);
          v33 = v47 + 2;
          *v47 = v46;
          *(_QWORD *)(v14 + 56) = v47 + 2;
        }
        v49 = v43;
        *((_DWORD *)v33 - 1) = v42;
        v15 = (unsigned int *)n;
        v50 = 8 * v49;
        v51 = 8LL * v42;
        v40 = v112;
        v36 = v39;
        if ( v50 != v51 )
        {
          nb = (size_t)v33;
          memset(&v33[(unsigned __int64)v50 / 8], 0, v51 - v50);
          v33 = (_QWORD *)nb;
        }
        goto LABEL_47;
      }
      *((_DWORD *)v33 - 1) = v42;
    }
    v36 = v39;
  }
  else
  {
    v42 = v39 + 1;
    if ( v39 != -1 )
    {
      v78 = (_QWORD *)sub_186B270(0x18u);
      n = (size_t)v15;
      v33 = v78 + 1;
      v112 = v101 | 1;
      *v78 = 2;
      *(_QWORD *)(v14 + 56) = v78 + 1;
      v43 = 0;
      goto LABEL_44;
    }
    v36 = 0xFFFFFFFFLL;
  }
LABEL_47:
  v33[v36] = v40;
LABEL_9:
  v19 = *(unsigned int *)(v101 + 8);
  if ( 3 * (int)v19 < (unsigned int)(4 * (*(_DWORD *)(v101 + 12) + *(_DWORD *)(v101 + 16))) )
  {
    v113 = 2 * v19;
    na = 8LL * (unsigned int)(2 * v19);
    v52 = (unsigned int **)sub_186B270(na);
    v53 = v113;
    v22 = na;
    v20 = v52;
    if ( v113 )
    {
      memset(v52, 0, na);
      v22 = na;
      v53 = v113;
    }
    v21 = v53 - 1;
    v23 = (unsigned int **)((char *)v20 + v22);
    v54 = (unsigned int **)(*(_QWORD *)v101 + 8LL * *(unsigned int *)(v101 + 8));
    if ( *(unsigned int ***)v101 != v54 )
    {
      v55 = v14;
      v56 = *(unsigned int ***)v101;
      v57 = *(_QWORD *)v101 + 8LL * *(unsigned int *)(v101 + 8);
      v58 = v55;
      do
      {
        while ( (unsigned __int64)*v56 <= 1 )
        {
          if ( (unsigned int **)v57 == ++v56 )
            goto LABEL_59;
        }
        v59 = 8LL * (**(_DWORD **)*v56 & v21);
        v60 = &v20[(unsigned __int64)v59 / 8];
        if ( v22 == v59 )
        {
LABEL_63:
          if ( v20 == v60 )
          {
LABEL_73:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v61 = v20;
          while ( *v61 )
          {
            if ( v60 == ++v61 )
              goto LABEL_73;
          }
        }
        else
        {
          v61 = &v20[(unsigned __int64)v59 / 8];
          while ( *v61 )
          {
            if ( v23 == ++v61 )
              goto LABEL_63;
          }
        }
        v62 = *v56++;
        *v61 = v62;
      }
      while ( (unsigned int **)v57 != v56 );
LABEL_59:
      v14 = v58;
      v54 = *(unsigned int ***)v101;
    }
    if ( v54 )
    {
      v115 = v53;
      v114 = v22;
      nc = v53 - 1;
      sub_186B220(v54);
      v53 = v115;
      v22 = v114;
      v21 = nc;
    }
    *(_QWORD *)v101 = v20;
    *(_DWORD *)(v101 + 8) = v53;
    *(_DWORD *)(v101 + 16) = 0;
  }
  else
  {
    v20 = *(unsigned int ***)v101;
    v21 = v19 - 1;
    v22 = 8 * v19;
    v23 = (unsigned int **)(*(_QWORD *)v101 + v22);
  }
  v24 = **(_DWORD **)v15;
  v25 = 8LL * (v24 & v21);
  v26 = &v20[(unsigned __int64)v25 / 8];
  if ( v25 != v22 )
  {
    v27 = &v20[(unsigned __int64)v25 / 8];
    v28 = nullptr;
    while ( 1 )
    {
      v29 = *v27;
      if ( (unsigned __int64)*v27 > 1 )
      {
        if ( **(_DWORD **)v29 == v24 && v15 == v29 )
        {
          *v27 = v15;
          goto LABEL_28;
        }
      }
      else
      {
        if ( !v29 )
        {
          if ( v28 )
            goto LABEL_69;
          v28 = v27;
          goto LABEL_70;
        }
        v28 = v27;
      }
      if ( ++v27 == v23 )
        goto LABEL_22;
    }
  }
  v28 = nullptr;
  while ( 1 )
  {
LABEL_22:
    if ( v26 == v20 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v30 = *v20;
    if ( (unsigned __int64)*v20 > 1 )
      break;
    if ( !v30 )
    {
      if ( v28 )
LABEL_69:
        --*(_DWORD *)(v101 + 16);
      else
        v28 = v20;
LABEL_70:
      *v28 = v15;
      ++v13;
      ++*(_DWORD *)(v101 + 12);
      if ( (unsigned int **)v107 == v13 )
        return 1;
LABEL_29:
      v15 = *v13;
      v8 = *v106;
      v16 = *(_QWORD *)(v14 + 56);
      if ( v16 )
        goto LABEL_7;
      goto LABEL_30;
    }
    v28 = v20;
LABEL_21:
    ++v20;
  }
  if ( **(_DWORD **)v30 != v24 || v15 != v30 )
    goto LABEL_21;
  *v20 = v15;
LABEL_28:
  if ( (unsigned int **)v107 != ++v13 )
    goto LABEL_29;
  return 1;
}

