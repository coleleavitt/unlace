__int64 __fastcall sub_E72F60(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rbp
  _QWORD *v5; // r14
  void *v6; // r13
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // r14
  __int64 v11; // r13
  unsigned int v12; // eax
  unsigned int v13; // ebp
  unsigned int v14; // edx
  size_t v15; // rsi
  unsigned int v16; // r15d
  unsigned int *v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r15
  __int64 v21; // rax
  unsigned int v22; // edx
  __int64 v23; // rdi
  __int64 v24; // rax
  _QWORD *v25; // rcx
  __int64 v26; // r14
  __int64 v27; // r13
  unsigned int v28; // eax
  unsigned int v29; // ebp
  unsigned int v30; // edx
  size_t v31; // rsi
  unsigned int v32; // r15d
  unsigned int *v33; // rax
  unsigned int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // r15
  __int64 v37; // rax
  unsigned int v38; // edx
  __int64 v39; // rdi
  __int64 v40; // rax
  _QWORD *v41; // r15
  __int64 v42; // r13
  __int64 v43; // r12
  unsigned int v44; // eax
  unsigned int v45; // ebp
  unsigned int v46; // edx
  size_t v47; // rsi
  unsigned int v48; // r14d
  unsigned int *v49; // rax
  unsigned int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // r14
  __int64 result; // rax
  unsigned int v54; // edx
  __int64 v55; // rax
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // rax
  char **exception; // rbp
  unsigned int v61; // [rsp+0h] [rbp-68h]
  _QWORD *v62; // [rsp+0h] [rbp-68h]
  unsigned int **v63; // [rsp+0h] [rbp-68h]
  unsigned int v64; // [rsp+8h] [rbp-60h]
  _QWORD *v65; // [rsp+8h] [rbp-60h]
  unsigned int v66; // [rsp+8h] [rbp-60h]
  __int64 v67[11]; // [rsp+10h] [rbp-58h] BYREF

  v4 = (_QWORD *)a1[83];
  a1[9] = a2;
  if ( v4 )
  {
    v5 = &v4[*((unsigned int *)v4 - 1)];
    if ( v4 == v5 )
    {
      v59 = a1[82];
      if ( v59 )
        *(_DWORD *)(v59 - 4) = 0;
      goto LABEL_9;
    }
    do
    {
      v6 = (void *)*v4;
      if ( *v4 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(*v4);
        sub_186B220(v6);
      }
      ++v4;
    }
    while ( v5 != v4 );
    v7 = a1[82];
    v4 = (_QWORD *)a1[83];
    if ( v7 )
      *(_DWORD *)(v7 - 4) = 0;
    if ( v4 )
LABEL_9:
      *((_DWORD *)v4 - 1) = 0;
  }
  else
  {
    v55 = a1[82];
    if ( v55 )
      *(_DWORD *)(v55 - 4) = 0;
  }
  v8 = sub_E821B0(*a1, a2);
  v9 = (_QWORD *)a1[82];
  v10 = *(unsigned int *)(v8 + 16);
  v11 = v8;
  if ( v9 )
  {
    v12 = *((_DWORD *)v9 - 1);
    v61 = v12;
    if ( (unsigned int)v10 < v12 )
      goto LABEL_20;
    v13 = v10 + 1;
    if ( v12 >= (int)v10 + 1 )
    {
      *((_DWORD *)v9 - 1) = v13;
      goto LABEL_20;
    }
  }
  else
  {
    v13 = v10 + 1;
    if ( (_DWORD)v10 == -1 )
      goto LABEL_20;
    v56 = (_QWORD *)sub_186B270(0x18u);
    v61 = 0;
    v9 = v56 + 1;
    *v56 = 2;
    a1[82] = v56 + 1;
  }
  while ( 1 )
  {
    v18 = *((_DWORD *)v9 - 2);
    if ( v18 >= v13 )
      break;
    v14 = (3 * v18 + 1) >> 1;
    v15 = 8 * v14 + 8;
    v16 = v14;
    if ( 8 * v18 + 8 >= (unsigned int)v15 || v18 >= v14 )
    {
LABEL_60:
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_E65BE0(v67, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v67);
      sub_233E40((__int64)v67);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v17 = (unsigned int *)sub_186B300(v9 - 1, v15);
    v9 = v17 + 2;
    *v17 = v16;
    a1[82] = v17 + 2;
  }
  *((_DWORD *)v9 - 1) = v13;
  v19 = 8LL * v13;
  v20 = 8LL * v61;
  if ( v20 != v19 )
  {
    v62 = v9;
    memset(&v9[(unsigned __int64)v20 / 8], 0, v19 - v20);
    v9 = v62;
  }
LABEL_20:
  v9[v10] = v11;
  v63 = (unsigned int **)(a1 + 83);
  v21 = a1[83];
  if ( !v21 || (v22 = *(_DWORD *)(v21 - 4), v22 == *(_DWORD *)(v21 - 8)) )
  {
    sub_E72E80(v63);
    v21 = a1[83];
    v22 = *(_DWORD *)(v21 - 4);
  }
  v23 = *a1;
  *(_QWORD *)(v21 + 8LL * v22) = v11;
  *(_DWORD *)(v21 - 4) = v22 + 1;
  v24 = sub_E82170(v23, a2);
  v25 = (_QWORD *)a1[82];
  v26 = *(unsigned int *)(v24 + 16);
  v27 = v24;
  if ( v25 )
  {
    v28 = *((_DWORD *)v25 - 1);
    v64 = v28;
    if ( (unsigned int)v26 >= v28 )
    {
      v29 = v26 + 1;
      if ( v28 < (int)v26 + 1 )
        goto LABEL_29;
      *((_DWORD *)v25 - 1) = v29;
    }
  }
  else
  {
    v29 = v26 + 1;
    if ( (_DWORD)v26 != -1 )
    {
      v58 = (_QWORD *)sub_186B270(0x18u);
      v64 = 0;
      v25 = v58 + 1;
      *v58 = 2;
      a1[82] = v58 + 1;
LABEL_29:
      while ( 1 )
      {
        v34 = *((_DWORD *)v25 - 2);
        if ( v34 >= v29 )
          break;
        v30 = (3 * v34 + 1) >> 1;
        v31 = 8 * v30 + 8;
        v32 = v30;
        if ( 8 * v34 + 8 >= (unsigned int)v31 || v34 >= v30 )
          goto LABEL_60;
        v33 = (unsigned int *)sub_186B300(v25 - 1, v31);
        v25 = v33 + 2;
        *v33 = v32;
        a1[82] = v33 + 2;
      }
      *((_DWORD *)v25 - 1) = v29;
      v35 = 8LL * v29;
      v36 = 8LL * v64;
      if ( v36 != v35 )
      {
        v65 = v25;
        memset(&v25[(unsigned __int64)v36 / 8], 0, v35 - v36);
        v25 = v65;
      }
    }
  }
  v37 = a1[83];
  v25[v26] = v27;
  if ( !v37 || (v38 = *(_DWORD *)(v37 - 4), v38 == *(_DWORD *)(v37 - 8)) )
  {
    sub_E72E80(v63);
    v37 = a1[83];
    v38 = *(_DWORD *)(v37 - 4);
  }
  v39 = *a1;
  *(_QWORD *)(v37 + 8LL * v38) = v27;
  *(_DWORD *)(v37 - 4) = v38 + 1;
  v40 = sub_E82290(v39, a2);
  v41 = (_QWORD *)a1[82];
  v42 = *(unsigned int *)(v40 + 16);
  v43 = v40;
  if ( v41 )
  {
    v44 = *((_DWORD *)v41 - 1);
    v66 = v44;
    if ( (unsigned int)v42 >= v44 )
    {
      v45 = v42 + 1;
      if ( v44 < (int)v42 + 1 )
        goto LABEL_41;
      *((_DWORD *)v41 - 1) = v45;
    }
  }
  else
  {
    v45 = v42 + 1;
    if ( (_DWORD)v42 != -1 )
    {
      v57 = (_QWORD *)sub_186B270(0x18u);
      v66 = 0;
      v41 = v57 + 1;
      *v57 = 2;
      a1[82] = v57 + 1;
LABEL_41:
      while ( 1 )
      {
        v50 = *((_DWORD *)v41 - 2);
        if ( v50 >= v45 )
          break;
        v46 = (3 * v50 + 1) >> 1;
        v47 = 8 * v46 + 8;
        v48 = v46;
        if ( 8 * v50 + 8 >= (unsigned int)v47 || v50 >= v46 )
          goto LABEL_60;
        v49 = (unsigned int *)sub_186B300(v41 - 1, v47);
        v41 = v49 + 2;
        *v49 = v48;
        a1[82] = v49 + 2;
      }
      *((_DWORD *)v41 - 1) = v45;
      v51 = 8LL * v45;
      v52 = 8LL * v66;
      if ( v52 != v51 )
        memset(&v41[(unsigned __int64)v52 / 8], 0, v51 - v52);
    }
  }
  result = a1[83];
  v41[v42] = v43;
  if ( !result || (v54 = *(_DWORD *)(result - 4), v54 == *(_DWORD *)(result - 8)) )
  {
    sub_E72E80(v63);
    result = a1[83];
    v54 = *(_DWORD *)(result - 4);
  }
  *(_QWORD *)(result + 8LL * v54) = v43;
  *(_DWORD *)(result - 4) = v54 + 1;
  return result;
}

