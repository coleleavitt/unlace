__int64 __fastcall sub_76E930(_QWORD *a1, __int64 a2)
{
  unsigned int v4; // edx
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // r12
  _QWORD *v10; // rdi
  unsigned int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  _QWORD *v14; // rdx
  __int64 result; // rax
  int v16; // edx
  _QWORD *v17; // rdi
  unsigned int v18; // eax
  __int64 v19; // rdx
  _QWORD *v20; // rdx
  unsigned int v21; // r12d
  size_t v22; // rsi
  unsigned int *v23; // rax
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rbp
  __int64 v27; // rax
  __int64 v28; // r13
  __int64 *v29; // rdi
  unsigned int v30; // eax
  __int64 v31; // rdx
  int v32; // eax
  __int64 *v33; // rdx
  unsigned int v34; // ebp
  size_t v35; // rsi
  unsigned int *v36; // rax
  __int64 v37; // rdx
  _QWORD *v38; // rax
  unsigned int v39; // ebp
  size_t v40; // rsi
  unsigned int *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // r13
  _QWORD *v45; // rdx
  unsigned int v46; // eax
  __int64 v47; // rcx
  int v48; // eax
  _QWORD *v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rsi
  __int64 v52; // rdi
  _QWORD *v54; // rax
  unsigned int v55; // r14d
  unsigned int v56; // ecx
  unsigned int *v57; // rax
  __int64 v58; // rcx
  _QWORD *v59; // rax
  _QWORD *v60; // rdx
  char **exception; // rbp
  char **v62; // rbp
  __int64 v63; // [rsp+0h] [rbp-58h] BYREF
  __int64 v64; // [rsp+8h] [rbp-50h]
  __int64 v65[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = *(_DWORD *)(a2 + 16);
  v5 = *(_QWORD *)(a1[18] + 32LL);
  if ( v5 && v4 < *(_DWORD *)(v5 - 4) )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_76A180(v65, "not handled by bvarray2uf");
LABEL_51:
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v65);
    sub_233E40((__int64)v65);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v6 = a1[20];
  if ( !v6 || (v7 = *(_DWORD *)(v6 - 4), v4 >= v7) || (v8 = v7 - v4 - 1, (v9 = *(_QWORD *)(v6 + 8 * v8)) == 0) )
  {
    v17 = (_QWORD *)a1[7];
    ++*(_DWORD *)(a2 + 8);
    if ( v17 )
    {
      v18 = *((_DWORD *)v17 - 1);
      if ( v18 == *((_DWORD *)v17 - 2) )
      {
        v21 = (3 * v18 + 1) >> 1;
        v22 = 8 * v21 + 8;
        if ( 8 * v18 + 8 >= (unsigned int)v22 || v18 >= v21 )
          goto LABEL_50;
        v23 = (unsigned int *)sub_186B300(v17 - 1, v22);
        v24 = v23[1];
        v17 = v23 + 2;
        *v23 = v21;
        a1[7] = v23 + 2;
        LODWORD(v23) = v24;
        v20 = &v17[v24];
        result = (unsigned int)((_DWORD)v23 + 1);
      }
      else
      {
        v19 = v18;
        result = v18 + 1;
        v20 = &v17[v19];
      }
    }
    else
    {
      v38 = (_QWORD *)sub_186B270(0x18u);
      v17 = v38 + 1;
      *v38 = 2;
      result = 1;
      a1[7] = v17;
      v20 = v17;
    }
    *v20 = a2;
    *((_DWORD *)v17 - 1) = result;
    return result;
  }
  if ( !*(_WORD *)(v9 + 4) && (*(_BYTE *)(v9 + 30) & 1) != 0 || (v25 = *(_DWORD *)(a1[66] + 4 * v8), v25 == v7) )
  {
    v10 = (_QWORD *)a1[7];
    ++*(_DWORD *)(v9 + 8);
    if ( !v10 )
    {
      v54 = (_QWORD *)sub_186B270(0x18u);
      v10 = v54 + 1;
      *v54 = 2;
      v13 = 1;
      a1[7] = v10;
      v14 = v10;
      goto LABEL_11;
    }
    v11 = *((_DWORD *)v10 - 1);
    if ( v11 != *((_DWORD *)v10 - 2) )
    {
      v12 = v11;
      v13 = v11 + 1;
      v14 = &v10[v12];
LABEL_11:
      *v14 = v9;
      *((_DWORD *)v10 - 1) = v13;
      goto LABEL_12;
    }
    v34 = (3 * v11 + 1) >> 1;
    v35 = 8 * v34 + 8;
    if ( 8 * v11 + 8 < (unsigned int)v35 && v11 < v34 )
    {
      v36 = (unsigned int *)sub_186B300(v10 - 1, v35);
      v37 = v36[1];
      v10 = v36 + 2;
      *v36 = v34;
      a1[7] = v36 + 2;
      LODWORD(v36) = v37;
      v14 = &v10[v37];
      v13 = (_DWORD)v36 + 1;
      goto LABEL_11;
    }
LABEL_50:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_76A180(v65, "Overflow encountered when expanding vector");
    goto LABEL_51;
  }
  v26 = v7 - v25;
  v27 = sub_1680FB0(a1[4], v9, v26);
  v28 = v27;
  if ( !v27 )
  {
    v43 = a1[1];
    v63 = 0;
    v64 = v43;
    sub_1585D20(a1 + 21, v9, 0, (unsigned int)v26, 0, &v63);
    v44 = v63;
    if ( v63 )
      ++*(_DWORD *)(v63 + 8);
    v45 = (_QWORD *)a1[7];
    if ( v45 )
    {
      v46 = *((_DWORD *)v45 - 1);
      if ( v46 == *((_DWORD *)v45 - 2) )
      {
        v55 = (3 * v46 + 1) >> 1;
        v56 = 8 * v55 + 8;
        if ( 8 * v46 + 8 >= v56 || v46 >= v55 )
        {
          v62 = (char **)__cxa_allocate_exception(0x28u);
          sub_76A180(v65, "Overflow encountered when expanding vector");
          *v62 = (char *)off_1C63128;
          sub_2333C0(v62 + 1, v65);
          sub_233E40((__int64)v65);
          __cxa_throw(v62, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v57 = (unsigned int *)sub_186B300(v45 - 1, v56);
        v58 = v57[1];
        v45 = v57 + 2;
        *v57 = v55;
        a1[7] = v57 + 2;
        LODWORD(v57) = v58;
        v49 = &v45[v58];
        v48 = (_DWORD)v57 + 1;
      }
      else
      {
        v47 = v46;
        v48 = v46 + 1;
        v49 = &v45[v47];
      }
    }
    else
    {
      v60 = (_QWORD *)sub_186B270(0x18u);
      *v60 = 2;
      v48 = 1;
      v45 = v60 + 1;
      a1[7] = v45;
      v49 = v45;
    }
    *v49 = v44;
    v50 = v63;
    *((_DWORD *)v45 - 1) = v48;
    sub_1584390(a1, v9, (unsigned int)v26, v50);
    v51 = v63;
    if ( v63 )
    {
      v52 = v64;
      if ( (*(_DWORD *)(v63 + 8))-- == 1 )
        sub_15D7BC0(v52, v51);
    }
    goto LABEL_12;
  }
  v29 = (__int64 *)a1[7];
  ++*(_DWORD *)(v27 + 8);
  if ( !v29 )
  {
    v59 = (_QWORD *)sub_186B270(0x18u);
    v29 = v59 + 1;
    *v59 = 2;
    v32 = 1;
    a1[7] = v29;
    v33 = v29;
    goto LABEL_28;
  }
  v30 = *((_DWORD *)v29 - 1);
  if ( v30 == *((_DWORD *)v29 - 2) )
  {
    v39 = (3 * v30 + 1) >> 1;
    v40 = 8 * v39 + 8;
    if ( 8 * v30 + 8 < (unsigned int)v40 && v30 < v39 )
    {
      v41 = (unsigned int *)sub_186B300(v29 - 1, v40);
      v42 = v41[1];
      v29 = (__int64 *)(v41 + 2);
      *v41 = v39;
      a1[7] = v41 + 2;
      LODWORD(v41) = v42;
      v33 = &v29[v42];
      v32 = (_DWORD)v41 + 1;
      goto LABEL_28;
    }
    goto LABEL_50;
  }
  v31 = v30;
  v32 = v30 + 1;
  v33 = &v29[v31];
LABEL_28:
  *v33 = v28;
  *((_DWORD *)v29 - 1) = v32;
LABEL_12:
  result = a1[5];
  if ( result )
  {
    v16 = *(_DWORD *)(result - 4);
    if ( v16 )
      *(_BYTE *)(result + 16LL * (unsigned int)(v16 - 1) + 8) |= 2u;
  }
  return result;
}

