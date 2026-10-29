__int64 __fastcall sub_CDD460(_QWORD *a1, __int64 a2, int a3)
{
  __int16 v5; // ax
  __int64 v7; // r12
  int v9; // r13d
  _QWORD *v11; // rdi
  unsigned int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  __int64 *v15; // rdx
  _QWORD *v16; // rdi
  unsigned int v17; // eax
  __int64 v18; // rdx
  int v19; // eax
  _QWORD *v20; // rdx
  unsigned __int8 v21; // dl
  __int64 v22; // rax
  int v23; // r12d
  int v24; // r14d
  _QWORD *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int v28; // r12d
  size_t v29; // rsi
  unsigned int *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // r13
  unsigned int v34; // ebx
  size_t v35; // rsi
  unsigned int *v36; // rax
  __int64 v37; // rdx
  unsigned __int8 v38; // dl
  __int64 v39; // rax
  unsigned int v40; // r15d
  size_t v41; // rsi
  unsigned int *v42; // rax
  __int64 v43; // rax
  int v44; // edx
  __int64 v45; // rax
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  char **exception; // rbx
  __int64 v50; // [rsp+8h] [rbp-60h] BYREF
  __int64 v51[11]; // [rsp+10h] [rbp-58h] BYREF

  if ( !a3 )
  {
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    v11 = (_QWORD *)a1[7];
    if ( v11 )
    {
      v12 = *((_DWORD *)v11 - 1);
      if ( v12 == *((_DWORD *)v11 - 2) )
      {
        v28 = (3 * v12 + 1) >> 1;
        v29 = 8 * v28 + 8;
        if ( 8 * v12 + 8 >= (unsigned int)v29 || v12 >= v28 )
          goto LABEL_67;
        v30 = (unsigned int *)sub_186B300(v11 - 1, v29);
        v31 = v30[1];
        v11 = v30 + 2;
        *v30 = v28;
        a1[7] = v30 + 2;
        LODWORD(v30) = v31;
        v15 = &v11[v31];
        v14 = (_DWORD)v30 + 1;
      }
      else
      {
        v13 = v12;
        v14 = v12 + 1;
        v15 = &v11[v13];
      }
    }
    else
    {
      v47 = (_QWORD *)sub_186B270(0x18u);
      v11 = v47 + 1;
      *v47 = 2;
      v14 = 1;
      a1[7] = v11;
      v15 = v11;
    }
    *v15 = a2;
    *((_DWORD *)v11 - 1) = v14;
    v16 = (_QWORD *)a1[11];
    if ( v16 )
    {
      v17 = *((_DWORD *)v16 - 1);
      if ( v17 == *((_DWORD *)v16 - 2) )
      {
        v34 = (3 * v17 + 1) >> 1;
        v35 = 8 * v34 + 8;
        if ( 8 * v17 + 8 >= (unsigned int)v35 || v17 >= v34 )
          goto LABEL_67;
        v36 = (unsigned int *)sub_186B300(v16 - 1, v35);
        v37 = v36[1];
        v16 = v36 + 2;
        *v36 = v34;
        a1[11] = v36 + 2;
        LODWORD(v36) = v37;
        v20 = &v16[v37];
        v19 = (_DWORD)v36 + 1;
      }
      else
      {
        v18 = v17;
        v19 = v17 + 1;
        v20 = &v16[v18];
      }
    }
    else
    {
      v46 = (_QWORD *)sub_186B270(0x18u);
      v16 = v46 + 1;
      *v46 = 2;
      v19 = 1;
      a1[11] = v16;
      v20 = v16;
    }
    *v20 = 0;
    *((_DWORD *)v16 - 1) = v19;
    return 1;
  }
  v5 = *(_WORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == a1[15] )
  {
    v9 = 0;
  }
  else
  {
    if ( v5 )
    {
      if ( v5 != 2 )
      {
        if ( v5 != 1 )
        {
LABEL_12:
          sub_1872CE0("");
          sub_1873130(114, 226);
        }
        goto LABEL_33;
      }
    }
    else if ( !*(_DWORD *)(a2 + 24) )
    {
      goto LABEL_6;
    }
    v32 = sub_1680FB0(a1[4], a2, 0);
    v33 = v32;
    if ( v32 )
    {
      v51[0] = v32;
      ++*(_DWORD *)(v32 + 8);
      sub_CD7660(a1 + 7, v51);
      if ( a2 != v33 )
      {
        v43 = a1[5];
        if ( v43 )
        {
          v44 = *(_DWORD *)(v43 - 4);
          if ( v44 )
            *(_BYTE *)(v43 + 16LL * (unsigned int)(v44 - 1) + 8) |= 2u;
        }
      }
      v45 = sub_1680FB0(a1[9], a2, 0);
      v51[0] = v45;
      if ( v45 )
        ++*(_DWORD *)(v45 + 8);
      sub_CD7720(a1 + 11, v51);
      return 1;
    }
    v5 = *(_WORD *)(a2 + 4);
    v9 = 1;
  }
  if ( v5 == 1 )
  {
LABEL_33:
    sub_CDD020(a1, a2);
    return 1;
  }
  if ( v5 == 2 )
  {
    v21 = 3;
    if ( a3 != 3 )
      v21 = (a3 - 1) & 3;
    v22 = a1[7];
    v23 = v21;
    if ( v22 )
      v24 = *(_DWORD *)(v22 - 4);
    else
      v24 = 0;
    v25 = (_QWORD *)a1[5];
    if ( !v25 )
    {
LABEL_66:
      v48 = (_QWORD *)sub_186B270(0x28u);
      v25 = v48 + 1;
      *v48 = 2;
      a1[5] = v48 + 1;
      v27 = (__int64)(v48 + 1);
      goto LABEL_30;
    }
    v26 = *((unsigned int *)v25 - 1);
    if ( (_DWORD)v26 != *((_DWORD *)v25 - 2) )
      goto LABEL_29;
    v40 = (unsigned int)(3 * v26 + 1) >> 1;
    v41 = 16 * v40 + 8;
    if ( 16 * (int)v26 + 8 < (unsigned int)v41 && (unsigned int)v26 < v40 )
    {
LABEL_54:
      v42 = (unsigned int *)sub_186B300(v25 - 1, v41);
      v25 = v42 + 2;
      a1[5] = v42 + 2;
      *v42 = v40;
      v27 = (__int64)&v42[4 * v42[1] + 2];
      goto LABEL_30;
    }
LABEL_67:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_CD6E90(v51, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v51);
    sub_233E40((__int64)v51);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  if ( v5 )
    goto LABEL_12;
  if ( !*(_DWORD *)(a2 + 24) )
  {
LABEL_6:
    v7 = a1[1];
    ++*(_DWORD *)(a2 + 8);
    sub_CD6E50(a1[62], a1[63]);
    v51[0] = a2;
    a1[62] = 0;
    ++*(_DWORD *)(a2 + 8);
    sub_CD7660(a1 + 7, v51);
    v50 = 0;
    sub_CD7720(a1 + 11, &v50);
    if ( (*(_DWORD *)(a2 + 8))-- == 1 )
      sub_15D7BC0(v7, a2);
    return 1;
  }
  v38 = 3;
  if ( a3 != 3 )
    v38 = (a3 - 1) & 3;
  v39 = a1[7];
  v23 = v38;
  if ( v39 )
    v24 = *(_DWORD *)(v39 - 4);
  else
    v24 = 0;
  v25 = (_QWORD *)a1[5];
  if ( !v25 )
    goto LABEL_66;
  v26 = *((unsigned int *)v25 - 1);
  if ( (_DWORD)v26 == *((_DWORD *)v25 - 2) )
  {
    v40 = (unsigned int)(3 * v26 + 1) >> 1;
    v41 = 16 * v40 + 8;
    if ( 16 * (int)v26 + 8 >= (unsigned int)v41 || (unsigned int)v26 >= v40 )
      goto LABEL_67;
    goto LABEL_54;
  }
LABEL_29:
  v27 = (__int64)&v25[2 * v26];
LABEL_30:
  *(_QWORD *)v27 = a2;
  *(_DWORD *)(v27 + 12) = v24;
  *(_DWORD *)(v27 + 8) = v9 | (16 * v23);
  ++*((_DWORD *)v25 - 1);
  return 0;
}

