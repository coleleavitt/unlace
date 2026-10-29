__int64 __fastcall sub_7667D0(_QWORD *a1, __int64 a2, int a3)
{
  __int16 v5; // ax
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdi
  bool v11; // zf
  __int64 v12; // rax
  int v13; // edx
  int v14; // r13d
  _QWORD *v16; // rdi
  unsigned int v17; // eax
  __int64 v18; // rdx
  int v19; // eax
  __int64 *v20; // rdx
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
  unsigned __int8 v34; // dl
  __int64 v35; // rax
  unsigned int v36; // r15d
  size_t v37; // rsi
  char **exception; // rbp
  unsigned int *v39; // rax
  _QWORD *v40; // rdx
  unsigned int v41; // eax
  __int64 v42; // rcx
  int v43; // eax
  __int64 *v44; // rcx
  __int64 v45; // rax
  int v46; // edx
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  unsigned int v49; // r12d
  unsigned int v50; // ecx
  unsigned int *v51; // rax
  __int64 v52; // rcx
  _QWORD *v53; // rdx
  __int64 v54; // [rsp+8h] [rbp-60h] BYREF
  __int64 v55[11]; // [rsp+10h] [rbp-58h] BYREF

  if ( !a3 )
  {
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    v16 = (_QWORD *)a1[7];
    if ( v16 )
    {
      v17 = *((_DWORD *)v16 - 1);
      if ( v17 == *((_DWORD *)v16 - 2) )
      {
        v28 = (3 * v17 + 1) >> 1;
        v29 = 8 * v28 + 8;
        if ( 8 * v17 + 8 >= (unsigned int)v29 || v17 >= v28 )
          goto LABEL_54;
        v30 = (unsigned int *)sub_186B300(v16 - 1, v29);
        v31 = v30[1];
        v16 = v30 + 2;
        *v30 = v28;
        a1[7] = v30 + 2;
        LODWORD(v30) = v31;
        v20 = &v16[v31];
        v19 = (_DWORD)v30 + 1;
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
      v47 = (_QWORD *)sub_186B270(0x18u);
      v16 = v47 + 1;
      *v47 = 2;
      v19 = 1;
      a1[7] = v16;
      v20 = v16;
    }
    *v20 = a2;
    *((_DWORD *)v16 - 1) = v19;
    return 1;
  }
  v5 = *(_WORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == a1[15] )
  {
    v14 = 0;
  }
  else
  {
    if ( v5 )
    {
      if ( v5 != 2 )
      {
        if ( v5 != 1 )
        {
LABEL_21:
          sub_1872CE0("");
          sub_1873130(114, 226);
        }
        goto LABEL_39;
      }
    }
    else if ( !*(_DWORD *)(a2 + 24) )
    {
LABEL_6:
      v7 = a1[1];
      ++*(_DWORD *)(a2 + 8);
      if ( (unsigned int)sub_762950(a1[18], *(_QWORD *)(a2 + 16), 0, 0, a1 + 60, a1 + 62) == 5 )
      {
        ++*(_DWORD *)(a2 + 8);
        v55[0] = a2;
        sub_75C790(a1 + 7, v55);
      }
      else
      {
        v8 = a1[60];
        v54 = v8;
        if ( v8 )
          ++*(_DWORD *)(v8 + 8);
        sub_75C790(a1 + 7, &v54);
        v9 = a1[60];
        if ( v9 )
        {
          v10 = a1[61];
          v11 = (*(_DWORD *)(v9 + 8))-- == 1;
          if ( v11 )
            sub_15D7BC0(v10, v9);
        }
        a1[60] = 0;
        v12 = a1[5];
        if ( v12 )
        {
          v13 = *(_DWORD *)(v12 - 4);
          if ( v13 )
            *(_BYTE *)(v12 + 16LL * (unsigned int)(v13 - 1) + 8) |= 2u;
        }
      }
      v11 = (*(_DWORD *)(a2 + 8))-- == 1;
      if ( v11 )
        sub_15D7BC0(v7, a2);
      return 1;
    }
    v32 = sub_1680FB0(a1[4], a2, 0);
    v33 = v32;
    if ( v32 )
    {
      v40 = (_QWORD *)a1[7];
      ++*(_DWORD *)(v32 + 8);
      if ( v40 )
      {
        v41 = *((_DWORD *)v40 - 1);
        if ( v41 == *((_DWORD *)v40 - 2) )
        {
          v49 = (3 * v41 + 1) >> 1;
          v50 = 8 * v49 + 8;
          if ( 8 * v41 + 8 >= v50 || v41 >= v49 )
            goto LABEL_54;
          v51 = (unsigned int *)sub_186B300(v40 - 1, v50);
          v52 = v51[1];
          v40 = v51 + 2;
          *v51 = v49;
          a1[7] = v51 + 2;
          LODWORD(v51) = v52;
          v44 = &v40[v52];
          v43 = (_DWORD)v51 + 1;
        }
        else
        {
          v42 = v41;
          v43 = v41 + 1;
          v44 = &v40[v42];
        }
      }
      else
      {
        v53 = (_QWORD *)sub_186B270(0x18u);
        *v53 = 2;
        v43 = 1;
        v40 = v53 + 1;
        a1[7] = v40;
        v44 = v40;
      }
      *v44 = v33;
      *((_DWORD *)v40 - 1) = v43;
      if ( a2 != v33 )
      {
        v45 = a1[5];
        if ( v45 )
        {
          v46 = *(_DWORD *)(v45 - 4);
          if ( v46 )
            *(_BYTE *)(v45 + 16LL * (unsigned int)(v46 - 1) + 8) |= 2u;
        }
      }
      return 1;
    }
    v5 = *(_WORD *)(a2 + 4);
    v14 = 1;
  }
  if ( v5 == 1 )
  {
LABEL_39:
    sub_7662C0(a1, a2);
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
LABEL_69:
      v48 = (_QWORD *)sub_186B270(0x28u);
      v25 = v48 + 1;
      *v48 = 2;
      a1[5] = v48 + 1;
      v27 = (__int64)(v48 + 1);
      goto LABEL_36;
    }
    v26 = *((unsigned int *)v25 - 1);
    if ( (_DWORD)v26 != *((_DWORD *)v25 - 2) )
      goto LABEL_35;
    v36 = (unsigned int)(3 * v26 + 1) >> 1;
    v37 = 16 * v36 + 8;
    if ( 16 * (int)v26 + 8 < (unsigned int)v37 && (unsigned int)v26 < v36 )
    {
LABEL_57:
      v39 = (unsigned int *)sub_186B300(v25 - 1, v37);
      v25 = v39 + 2;
      a1[5] = v39 + 2;
      *v39 = v36;
      v27 = (__int64)&v39[4 * v39[1] + 2];
      goto LABEL_36;
    }
LABEL_54:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_75C2B0(v55, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v55);
    sub_233E40((__int64)v55);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  if ( v5 )
    goto LABEL_21;
  if ( !*(_DWORD *)(a2 + 24) )
    goto LABEL_6;
  v34 = 3;
  if ( a3 != 3 )
    v34 = (a3 - 1) & 3;
  v35 = a1[7];
  v23 = v34;
  if ( v35 )
    v24 = *(_DWORD *)(v35 - 4);
  else
    v24 = 0;
  v25 = (_QWORD *)a1[5];
  if ( !v25 )
    goto LABEL_69;
  v26 = *((unsigned int *)v25 - 1);
  if ( (_DWORD)v26 == *((_DWORD *)v25 - 2) )
  {
    v36 = (unsigned int)(3 * v26 + 1) >> 1;
    v37 = 16 * v36 + 8;
    if ( 16 * (int)v26 + 8 >= (unsigned int)v37 || (unsigned int)v26 >= v36 )
      goto LABEL_54;
    goto LABEL_57;
  }
LABEL_35:
  v27 = (__int64)&v25[2 * v26];
LABEL_36:
  *(_QWORD *)v27 = a2;
  *(_DWORD *)(v27 + 12) = v24;
  *(_DWORD *)(v27 + 8) = v14 | (16 * v23);
  ++*((_DWORD *)v25 - 1);
  return 0;
}

