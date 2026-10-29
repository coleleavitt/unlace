__int64 __fastcall sub_D4C880(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // ecx
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // r12
  _QWORD *v9; // rdi
  unsigned int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  _QWORD *v13; // rdx
  __int64 result; // rax
  int v15; // edx
  _QWORD *v16; // rdi
  unsigned int v17; // eax
  __int64 v18; // rdx
  _QWORD *v19; // rdx
  unsigned int v20; // r12d
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rdx
  unsigned int v26; // ebp
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
  char **v61; // rbp
  char **exception; // rbp
  __int64 v63; // [rsp+0h] [rbp-58h] BYREF
  __int64 v64; // [rsp+8h] [rbp-50h]
  __int64 v65[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = a1[20];
  if ( !v4
    || (v5 = *(_DWORD *)(a2 + 16), v6 = *(_DWORD *)(v4 - 4), v5 >= v6)
    || (v7 = v6 - v5 - 1, (v8 = *(_QWORD *)(v4 + 8 * v7)) == 0) )
  {
    v16 = (_QWORD *)a1[7];
    ++*(_DWORD *)(a2 + 8);
    if ( v16 )
    {
      v17 = *((_DWORD *)v16 - 1);
      if ( v17 == *((_DWORD *)v16 - 2) )
      {
        v20 = (3 * v17 + 1) >> 1;
        v21 = 8 * v20 + 8;
        if ( 8 * v17 + 8 >= (unsigned int)v21 || v17 >= v20 )
          goto LABEL_48;
        v22 = (unsigned int *)sub_186B300(v16 - 1, v21);
        v23 = v22[1];
        v16 = v22 + 2;
        *v22 = v20;
        a1[7] = v22 + 2;
        LODWORD(v22) = v23;
        v19 = &v16[v23];
        result = (unsigned int)((_DWORD)v22 + 1);
      }
      else
      {
        v18 = v17;
        result = v17 + 1;
        v19 = &v16[v18];
      }
    }
    else
    {
      v38 = (_QWORD *)sub_186B270(0x18u);
      v16 = v38 + 1;
      *v38 = 2;
      result = 1;
      a1[7] = v16;
      v19 = v16;
    }
    *v19 = a2;
    *((_DWORD *)v16 - 1) = result;
    return result;
  }
  if ( !*(_WORD *)(v8 + 4) && (*(_BYTE *)(v8 + 30) & 1) != 0 || (v24 = *(_DWORD *)(a1[66] + 4 * v7), v24 == v6) )
  {
    v9 = (_QWORD *)a1[7];
    ++*(_DWORD *)(v8 + 8);
    if ( v9 )
    {
      v10 = *((_DWORD *)v9 - 1);
      if ( v10 == *((_DWORD *)v9 - 2) )
      {
        v34 = (3 * v10 + 1) >> 1;
        v35 = 8 * v34 + 8;
        if ( 8 * v10 + 8 >= (unsigned int)v35 || v10 >= v34 )
          goto LABEL_48;
        v36 = (unsigned int *)sub_186B300(v9 - 1, v35);
        v37 = v36[1];
        v9 = v36 + 2;
        *v36 = v34;
        a1[7] = v36 + 2;
        LODWORD(v36) = v37;
        v13 = &v9[v37];
        v12 = (_DWORD)v36 + 1;
      }
      else
      {
        v11 = v10;
        v12 = v10 + 1;
        v13 = &v9[v11];
      }
    }
    else
    {
      v54 = (_QWORD *)sub_186B270(0x18u);
      v9 = v54 + 1;
      *v54 = 2;
      v12 = 1;
      a1[7] = v9;
      v13 = v9;
    }
    *v13 = v8;
    *((_DWORD *)v9 - 1) = v12;
    goto LABEL_10;
  }
  v25 = v6 - v24;
  v26 = v25;
  v27 = sub_1680FB0(a1[4], v8, v25);
  v28 = v27;
  if ( !v27 )
  {
    v43 = a1[1];
    v63 = 0;
    v64 = v43;
    sub_1585D20(a1 + 21, v8, 0, v26, 0, &v63);
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
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_D47290(v65, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v65);
          sub_233E40((__int64)v65);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
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
    sub_1584390(a1, v8, v26, v50);
    v51 = v63;
    if ( v63 )
    {
      v52 = v64;
      if ( (*(_DWORD *)(v63 + 8))-- == 1 )
        sub_15D7BC0(v52, v51);
    }
    goto LABEL_10;
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
    goto LABEL_26;
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
      goto LABEL_26;
    }
LABEL_48:
    v61 = (char **)__cxa_allocate_exception(0x28u);
    sub_D47290(v65, "Overflow encountered when expanding vector");
    *v61 = (char *)off_1C63128;
    sub_2333C0(v61 + 1, v65);
    sub_233E40((__int64)v65);
    __cxa_throw(v61, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v31 = v30;
  v32 = v30 + 1;
  v33 = &v29[v31];
LABEL_26:
  *v33 = v28;
  *((_DWORD *)v29 - 1) = v32;
LABEL_10:
  result = a1[5];
  if ( result )
  {
    v15 = *(_DWORD *)(result - 4);
    if ( v15 )
      *(_BYTE *)(result + 16LL * (unsigned int)(v15 - 1) + 8) |= 2u;
  }
  return result;
}

