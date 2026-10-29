__int64 __fastcall sub_794C80(__int64 a1, void (****a2)(void), char a3)
{
  __int64 result; // rax
  void (***v6)(void); // rdi
  bool v7; // zf
  __int64 v9; // r12
  __int64 i; // r13
  __int64 (__fastcall *v11)(); // rax
  _QWORD *v12; // r12
  _QWORD *v13; // r13
  __int64 v14; // rsi
  __int64 v15; // rdi
  char *v16; // rdi
  int v17; // ecx
  __int64 v18; // rsi
  char *v19; // rax
  char *v20; // rdx
  unsigned int v21; // r13d
  size_t v22; // r12
  _OWORD *v23; // rdx
  _OWORD *v24; // rcx
  _OWORD *v25; // rax
  __int64 v26; // rsi
  _OWORD *v27; // rax
  __int64 v28; // r13
  _QWORD *v29; // r15
  __int64 v30; // rdx
  _QWORD *v31; // r13
  _QWORD *j; // r15
  __int64 v33; // rdi
  __int64 (__fastcall *v34)(); // rax
  void *v35; // rdi
  char *v36; // rbx
  char *v37; // rbp
  __int64 v38; // rsi
  __int64 v39; // rcx
  __int64 v40; // rdx
  char *v41; // rax
  __int64 **v42; // r14
  __int64 **v43; // rbp
  __int64 *v44; // r12
  __int64 *v45; // rbx
  __int64 *v46; // r13
  __int64 v47; // rsi
  __int64 v48; // rdi
  void ***v49; // rbx
  void ***v50; // r12
  void **v51; // rbp
  __int64 *v52; // rbx
  unsigned __int64 v53; // rbp
  __int64 v54; // rsi
  __int64 v55; // rdi
  __int64 *v56; // rbx
  unsigned __int64 v57; // rbp
  __int64 v58; // rsi
  __int64 v59; // rdi
  unsigned int ***v60; // rbx
  __int64 v61; // r12
  __int64 v62; // rax
  unsigned int **v63; // rbp
  __int64 v64; // rdx
  void **v65; // r13
  size_t v66; // rsi
  __int64 (__fastcall **v67)(); // [rsp+10h] [rbp-158h] BYREF
  __int64 v68; // [rsp+18h] [rbp-150h]
  __int64 v69; // [rsp+20h] [rbp-148h]
  __int64 v70; // [rsp+28h] [rbp-140h]
  __int64 v71; // [rsp+30h] [rbp-138h]
  __int64 v72; // [rsp+38h] [rbp-130h]
  int v73; // [rsp+40h] [rbp-128h]
  __int128 v74; // [rsp+48h] [rbp-120h]
  _QWORD v75[2]; // [rsp+60h] [rbp-108h] BYREF
  void (****v76)(void); // [rsp+70h] [rbp-F8h]
  __int64 v77; // [rsp+78h] [rbp-F0h]
  __int64 *v78; // [rsp+80h] [rbp-E8h] BYREF
  void *v79; // [rsp+98h] [rbp-D0h]
  __int64 v80; // [rsp+B0h] [rbp-B8h]
  __int64 *v81; // [rsp+B8h] [rbp-B0h]
  __int64 v82; // [rsp+C0h] [rbp-A8h]
  __int64 *v83; // [rsp+C8h] [rbp-A0h]
  void ***v84; // [rsp+D0h] [rbp-98h]
  void *v85; // [rsp+D8h] [rbp-90h]
  void *v86; // [rsp+F0h] [rbp-78h]
  __int64 **v87; // [rsp+108h] [rbp-60h]
  void *ptr; // [rsp+110h] [rbp-58h]
  __int64 v89; // [rsp+118h] [rbp-50h]
  int v90; // [rsp+120h] [rbp-48h]

  result = *(_QWORD *)(a1 + 8400);
  v6 = *a2;
  if ( result )
  {
    ++*(_DWORD *)(result + 16);
    if ( v6 )
    {
      v7 = (*((_DWORD *)v6 + 4))-- == 1;
      if ( v7 )
      {
        (**v6)();
        sub_186B220(v6);
        result = *(_QWORD *)(a1 + 8400);
      }
    }
    *a2 = (void (***)(void))result;
    return result;
  }
  sub_13744E0(v6);
  v9 = *(_QWORD *)(a1 + 2392);
  if ( v9 )
  {
    for ( i = v9 + 8LL * *(unsigned int *)(v9 - 4); i != v9; v9 += 8 )
    {
      while ( 1 )
      {
        v11 = *(__int64 (__fastcall **)())(*(_QWORD *)(*(_QWORD *)v9 + 32LL) + 40LL);
        if ( v11 != nullsub_380 )
          break;
        v9 += 8;
        if ( i == v9 )
          goto LABEL_13;
      }
      v11();
    }
  }
LABEL_13:
  v12 = *(_QWORD **)(a1 + 8368);
  if ( v12 )
  {
    v13 = &v12[*((unsigned int *)v12 - 1)];
    if ( v12 >= v13 )
      goto LABEL_21;
    do
    {
      while ( 1 )
      {
        v14 = *v12;
        if ( *v12 )
        {
          v15 = *(_QWORD *)(a1 + 8360);
          v7 = (*(_DWORD *)(v14 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v12 >= v13 )
          goto LABEL_20;
      }
      sub_15D7BC0(v15, v14);
      ++v12;
    }
    while ( v12 < v13 );
LABEL_20:
    v12 = *(_QWORD **)(a1 + 8368);
    if ( v12 )
LABEL_21:
      *((_DWORD *)v12 - 1) = 0;
  }
  if ( *(_DWORD *)(a1 + 8388) || *(_DWORD *)(a1 + 8392) )
  {
    v16 = *(char **)(a1 + 8376);
    v17 = 0;
    v18 = *(unsigned int *)(a1 + 8384);
    v19 = v16;
    v20 = &v16[16 * v18];
    if ( v16 == v20 )
      goto LABEL_37;
    do
    {
      while ( *(_QWORD *)v19 )
      {
        *(_QWORD *)v19 = 0;
        v19 += 16;
        if ( v20 == v19 )
          goto LABEL_29;
      }
      v19 += 16;
      ++v17;
    }
    while ( v20 != v19 );
LABEL_29:
    if ( (unsigned int)v18 <= 0x10 || 3 * (int)v18 >= (unsigned int)(4 * v17) )
      goto LABEL_37;
    if ( v16 )
    {
      sub_186B220(v16);
      v21 = *(_DWORD *)(a1 + 8384);
      *(_QWORD *)(a1 + 8376) = 0;
      v21 >>= 1;
      *(_DWORD *)(a1 + 8384) = v21;
      v22 = v21;
      v23 = (_OWORD *)sub_186B270(v22 * 16);
      if ( !v21 )
      {
LABEL_36:
        *(_QWORD *)(a1 + 8376) = v23;
LABEL_37:
        *(_QWORD *)(a1 + 8388) = 0;
        goto LABEL_38;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 8376) = 0;
      v66 = (unsigned int)v18 >> 1;
      *(_DWORD *)(a1 + 8384) = v66;
      v22 = v66;
      v23 = (_OWORD *)sub_186B270(16 * v66);
    }
    v24 = &v23[v22];
    v25 = v23;
    if ( ((v22 * 16) & 0x10) == 0 || (v25 = v23 + 1, *v23 = 0, v23 + 1 != v24) )
    {
      do
      {
        *v25 = 0;
        v25 += 2;
        *(v25 - 1) = 0;
      }
      while ( v25 != v24 );
    }
    goto LABEL_36;
  }
LABEL_38:
  v26 = *(_QWORD *)(a1 + 144);
  v67 = &off_1C54798;
  v68 = 0;
  v69 = 0;
  v70 = 0;
  v71 = 0;
  v72 = 0;
  v75[0] = a1;
  v75[1] = v26;
  v76 = a2;
  v77 = a1 + 8360;
  v74 = 0;
  sub_1371BA0(&v78);
  v87 = nullptr;
  v27 = (_OWORD *)sub_186B270(0x80u);
  ptr = v27;
  *v27 = 0;
  v27[1] = 0;
  v27[2] = 0;
  v27[3] = 0;
  v27[4] = 0;
  v27[5] = 0;
  v27[6] = 0;
  v27[7] = 0;
  v89 = 8;
  v90 = 0;
  sub_793C30(a1, (int)v75, (int)&v67);
  v73 = 0;
  if ( v68 )
    *(_DWORD *)(v68 - 4) = 0;
  if ( v70 )
    *(_DWORD *)(v70 - 4) = 0;
  if ( *((_QWORD *)&v74 + 1) )
  {
    v28 = *((_QWORD *)&v74 + 1) + 8LL * *(unsigned int *)(*((_QWORD *)&v74 + 1) - 4LL);
    if ( *((_QWORD *)&v74 + 1) != v28 )
    {
      v29 = *((_QWORD **)&v74 + 1);
      do
        sub_7968A0(&v67, *v29++);
      while ( (_QWORD *)v28 != v29 );
    }
  }
  if ( v69 )
    *(_DWORD *)(v69 - 4) = 0;
  sub_793440((_QWORD *)a1, (__int64)v75, (__int64)&v67, a2, 0.0);
  sub_792690(a1, &v67, a2);
  v31 = *(_QWORD **)(a1 + 2392);
  if ( v31 )
  {
    for ( j = &v31[*((unsigned int *)v31 - 1)]; j != v31; ++v31 )
    {
      while ( 1 )
      {
        v33 = *v31 + 32LL;
        v34 = *(__int64 (__fastcall **)())(*(_QWORD *)v33 + 48LL);
        if ( v34 != nullsub_381 )
          break;
        if ( j == ++v31 )
          goto LABEL_54;
      }
      ((void (__fastcall *)(__int64, void (***)(void), __int64, __int64 (__fastcall *)()))v34)(
        v33,
        *a2,
        v30,
        nullsub_381);
    }
  }
LABEL_54:
  if ( a3 )
    sub_793200((_QWORD *)a1, (__int64)*a2, 0.0);
  v35 = ptr;
  v36 = (char *)ptr;
  v37 = (char *)ptr + 16 * (unsigned int)v89;
  if ( ptr != v37 )
  {
    while ( *(_QWORD *)v36 <= 1u )
    {
      v36 += 16;
      if ( v37 == v36 )
        goto LABEL_70;
    }
    if ( v37 != v36 )
    {
      v38 = *(_QWORD *)v36;
      do
      {
        v39 = *(_QWORD *)(*((_QWORD *)v36 + 1) + 8LL);
        if ( v39 )
          v40 = *(unsigned int *)(v39 - 4);
        else
          v40 = 0;
        sub_1376FA0(*v76, v38, v40, v39);
        v41 = v36 + 16;
        if ( v37 == v36 + 16 )
          break;
        while ( 1 )
        {
          v38 = *(_QWORD *)v41;
          v36 = v41;
          if ( *(_QWORD *)v41 > 1u )
            break;
          v41 += 16;
          if ( v37 == v41 )
            goto LABEL_69;
        }
      }
      while ( v37 != v41 );
LABEL_69:
      v35 = ptr;
    }
  }
LABEL_70:
  if ( v35 )
    sub_186B220(v35);
  v42 = v87;
  if ( v87 )
  {
    v43 = &v87[*((unsigned int *)v87 - 1)];
    if ( v87 == v43 )
      goto LABEL_87;
    do
    {
      v44 = *v42;
      if ( *v42 )
      {
        v45 = (__int64 *)v44[1];
        if ( v45 )
        {
          v46 = &v45[*((unsigned int *)v45 - 1)];
          if ( v45 >= v46 )
            goto LABEL_83;
          do
          {
            while ( 1 )
            {
              v47 = *v45;
              if ( *v45 )
              {
                v48 = *v44;
                v7 = (*(_DWORD *)(v47 + 8))-- == 1;
                if ( v7 )
                  break;
              }
              if ( ++v45 >= v46 )
                goto LABEL_82;
            }
            sub_15D7BC0(v48, v47);
            ++v45;
          }
          while ( v45 < v46 );
LABEL_82:
          v45 = (__int64 *)v44[1];
          if ( v45 )
LABEL_83:
            sub_186B220(v45 - 1);
        }
        sub_186B220(v44);
      }
      ++v42;
    }
    while ( v43 != v42 );
    v43 = v87;
    if ( v87 )
    {
LABEL_87:
      *((_DWORD *)v43 - 1) = 0;
      sub_186B220(v43 - 1);
    }
  }
  v78 = (__int64 *)&off_1C611F0;
  if ( v86 )
    sub_186B220(v86);
  if ( v85 )
    sub_186B220(v85);
  v49 = v84;
  v78 = qword_1C6A598;
  if ( v84 )
  {
    v50 = &v84[*((unsigned int *)v84 - 1)];
    if ( v84 == v50 )
      goto LABEL_100;
    do
    {
      v51 = *v49;
      if ( *v49 )
      {
        if ( *v51 )
          sub_186B220(*v51);
        sub_186B220(v51);
      }
      ++v49;
    }
    while ( v50 != v49 );
    v50 = v84;
    if ( v84 )
LABEL_100:
      sub_186B220(v50 - 1);
  }
  v52 = v83;
  if ( v83 )
  {
    v53 = (unsigned __int64)&v83[*((unsigned int *)v83 - 1)];
    if ( (unsigned __int64)v83 >= v53 )
      goto LABEL_109;
    do
    {
      while ( 1 )
      {
        v54 = *v52;
        if ( *v52 )
        {
          v55 = v82;
          v7 = (*(_DWORD *)(v54 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( (unsigned __int64)++v52 >= v53 )
          goto LABEL_108;
      }
      sub_15D7BC0(v55, v54);
      ++v52;
    }
    while ( (unsigned __int64)v52 < v53 );
LABEL_108:
    v52 = v83;
    if ( v83 )
LABEL_109:
      sub_186B220(v52 - 1);
  }
  v56 = v81;
  if ( v81 )
  {
    v57 = (unsigned __int64)&v81[*((unsigned int *)v81 - 1)];
    if ( (unsigned __int64)v81 >= v57 )
      goto LABEL_118;
    do
    {
      while ( 1 )
      {
        v58 = *v56;
        if ( *v56 )
        {
          v59 = v80;
          v7 = (*(_DWORD *)(v58 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( (unsigned __int64)++v56 >= v57 )
          goto LABEL_117;
      }
      sub_15D7BC0(v59, v58);
      ++v56;
    }
    while ( (unsigned __int64)v56 < v57 );
LABEL_117:
    v56 = v81;
    if ( v81 )
LABEL_118:
      sub_186B220(v56 - 1);
  }
  if ( v79 )
    sub_186B220(v79);
  v60 = *((unsigned int ****)&v74 + 1);
  v67 = &off_1C54798;
  if ( *((_QWORD *)&v74 + 1) )
  {
    v61 = *((_QWORD *)&v74 + 1) + 8LL * *(unsigned int *)(*((_QWORD *)&v74 + 1) - 4LL);
    if ( *((_QWORD *)&v74 + 1) != v61 )
    {
      v62 = v74;
      do
      {
        v63 = *v60;
        v64 = ***v60;
        if ( v62 )
        {
          if ( (unsigned int)v64 < *(_DWORD *)(v62 - 4) )
          {
            v65 = (void **)(*(_QWORD *)(v62 + 8 * v64) & 0xFFFFFFFFFFFFFFF8LL);
            if ( *(_QWORD *)(v62 + 8 * v64) > 7u )
            {
              if ( *v65 )
                sub_186B220(*v65);
              sub_186B220(v65);
              v62 = v74;
              v64 = **v63;
            }
          }
        }
        ++v60;
        *(_QWORD *)(v62 + 8 * v64) = 0;
      }
      while ( (unsigned int ***)v61 != v60 );
      v61 = *((_QWORD *)&v74 + 1);
      if ( !*((_QWORD *)&v74 + 1) )
        goto LABEL_134;
    }
    sub_186B220((void *)(v61 - 8));
  }
  v62 = v74;
LABEL_134:
  if ( v62 )
    sub_186B220((void *)(v62 - 8));
  if ( v72 )
    sub_186B220((void *)(v72 - 8));
  if ( v71 )
    sub_186B220((void *)(v71 - 8));
  if ( v70 )
    sub_186B220((void *)(v70 - 8));
  if ( v69 )
    sub_186B220((void *)(v69 - 8));
  result = v68;
  if ( v68 )
    return sub_186B220((void *)(v68 - 8));
  return result;
}

