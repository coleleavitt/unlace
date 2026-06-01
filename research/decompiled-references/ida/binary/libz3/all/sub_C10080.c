__int64 __fastcall sub_C10080(__int64 a1, unsigned int a2)
{
  char **exception; // rbp
  __int64 result; // rax
  unsigned int v5; // ebp
  __int64 v6; // r12
  __int64 v7; // rax
  int v8; // r14d
  int *v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 *v14; // r13
  __int64 v15; // rsi
  __int64 *v16; // r12
  __int64 v17; // rsi
  bool v18; // zf
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rax
  unsigned int v22; // r12d
  _QWORD *v23; // rax
  unsigned int v24; // r13d
  __int64 v25; // rdx
  _QWORD *v26; // rdx
  __int64 v27; // r13
  unsigned int v28; // ecx
  size_t v29; // rsi
  unsigned int v30; // r14d
  unsigned int *v31; // rax
  unsigned int v32; // eax
  __int64 v33; // r13
  _QWORD *v34; // rdi
  __int64 v35; // rdx
  _DWORD *v36; // rcx
  __int64 v37; // r12
  unsigned int v38; // r13d
  size_t v39; // rsi
  unsigned int *v40; // rax
  unsigned int v41; // edx
  __int64 v42; // r12
  _DWORD *v43; // rdi
  char *v44; // rdx
  __int64 v45; // rax
  unsigned int v46; // r12d
  __int64 v47; // rcx
  __int64 *v48; // rbp
  __int64 v49; // rdx
  __int64 *v50; // r13
  __int64 v51; // rsi
  __int64 v52; // rsi
  __int64 v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rdx
  unsigned __int64 v56; // rdx
  __int64 *v57; // r13
  __int64 v58; // rsi
  __int64 v59; // rdi
  __int64 v60; // rax
  _QWORD *v61; // rax
  int v62; // [rsp+Ch] [rbp-6Ch]
  __int64 v63; // [rsp+10h] [rbp-68h]
  unsigned __int64 v64; // [rsp+18h] [rbp-60h]
  __int64 v65[11]; // [rsp+20h] [rbp-58h] BYREF

  result = *(unsigned int *)(a1 + 7232);
  v5 = *(_DWORD *)(a1 + 7232) - a2;
  if ( (unsigned int)result >= a2 )
  {
    *(_DWORD *)(a1 + 7232) = v5;
    return result;
  }
  *(_DWORD *)(a1 + 7232) = 0;
  v6 = a2 - (unsigned int)result;
  sub_15350A0(a1 + 2064);
  sub_1382420(a1 + 952, v6);
  sub_14E9E60(a1 + 5752, (unsigned int)v6);
  v7 = *(_QWORD *)(a1 + 2208);
  if ( v7 )
    v8 = *(_DWORD *)(v7 - 4);
  else
    v8 = 0;
  v9 = (int *)(v7 + 8LL * (v8 + v5));
  v62 = v8 + v5;
  *(_BYTE *)(a1 + 2200) = *((_BYTE *)v9 + 4);
  sub_13A2C20(a1 + 128, (unsigned int)v6);
  v10 = *(_QWORD *)(a1 + 4136);
  v11 = *(_QWORD *)(a1 + 4128);
  if ( v10 )
  {
    if ( !v11 )
    {
LABEL_19:
      *(_DWORD *)(v10 - 4) += v5;
      goto LABEL_20;
    }
    v12 = *(_DWORD *)(v10 - 4) + v5;
  }
  else
  {
    v12 = v5;
    if ( !v11 )
      goto LABEL_20;
  }
  v13 = *(unsigned int *)(v10 + 4 * v12);
  v14 = (__int64 *)(v11 + 24 * v13);
  v15 = 24LL * *(unsigned int *)(v11 - 4);
  v16 = (__int64 *)(v11 + v15);
  if ( 24 * v13 != v15 )
  {
    do
    {
      while ( 1 )
      {
        v19 = v14[1];
        v20 = *v14;
        if ( v19 )
        {
          v18 = (*(_DWORD *)(v19 + 8))-- == 1;
          if ( v18 )
          {
            sub_15D7BC0(v20, v19);
            v20 = *v14;
          }
        }
        v17 = v14[2];
        if ( v17 )
        {
          v18 = (*(_DWORD *)(v17 + 8))-- == 1;
          if ( v18 )
            break;
        }
        v14 += 3;
        if ( v16 == v14 )
          goto LABEL_17;
      }
      sub_15D7BC0(v20, v17);
      v14 += 3;
    }
    while ( v16 != v14 );
LABEL_17:
    v11 = *(_QWORD *)(a1 + 4128);
    v10 = *(_QWORD *)(a1 + 4136);
  }
  *(_DWORD *)(v11 - 4) = v13;
  if ( v10 )
    goto LABEL_19;
LABEL_20:
  v21 = *(_QWORD *)(a1 + 120);
  if ( v21 )
    v5 += *(_DWORD *)(v21 - 4);
  v22 = *(_DWORD *)(v21 + 4LL * v5);
  v23 = *(_QWORD **)(a1 + 112);
  v63 = 4LL * v5;
  if ( !v23 )
    goto LABEL_70;
  v24 = v22;
  while ( v24 < *((_DWORD *)v23 - 1) )
  {
    v25 = v24++;
    sub_1693C90(*(_QWORD *)(a1 + 96), v23[v25]);
    v23 = *(_QWORD **)(a1 + 112);
    if ( !v23 )
      goto LABEL_26;
  }
  v55 = *((unsigned int *)v23 - 1);
  if ( v22 < (unsigned int)v55 )
  {
    v56 = (unsigned __int64)&v23[v55];
    v57 = &v23[v22];
    if ( (unsigned __int64)v57 < v56 )
    {
      do
      {
        while ( 1 )
        {
          v58 = *v57;
          if ( *v57 )
          {
            v59 = *(_QWORD *)(a1 + 104);
            v18 = (*(_DWORD *)(v58 + 8))-- == 1;
            if ( v18 )
              break;
          }
          if ( (unsigned __int64)++v57 >= v56 )
            goto LABEL_66;
        }
        v64 = v56;
        ++v57;
        sub_15D7BC0(v59, v58);
        v56 = v64;
      }
      while ( (unsigned __int64)v57 < v64 );
LABEL_66:
      v23 = *(_QWORD **)(a1 + 112);
    }
  }
LABEL_26:
  v26 = v23;
  if ( v23 )
  {
    v27 = *((unsigned int *)v23 - 1);
    if ( (unsigned int)v27 >= v22 )
    {
      *((_DWORD *)v23 - 1) = v22;
      goto LABEL_35;
    }
  }
  else
  {
LABEL_70:
    if ( !v22 )
      goto LABEL_35;
    v27 = 0;
    v61 = (_QWORD *)sub_186B270(0x18u);
    v26 = v61 + 1;
    *v61 = 2;
    *(_QWORD *)(a1 + 112) = v61 + 1;
  }
  while ( 1 )
  {
    v32 = *((_DWORD *)v26 - 2);
    if ( v32 >= v22 )
      break;
    v28 = (3 * v32 + 1) >> 1;
    v29 = 8 * v28 + 8;
    v30 = v28;
    if ( 8 * v32 + 8 >= (unsigned int)v29 || v32 >= v28 )
    {
LABEL_75:
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_C0E620(v65, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v65);
      sub_233E40((__int64)v65);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v31 = (unsigned int *)sub_186B300(v26 - 1, v29);
    v26 = v31 + 2;
    *v31 = v30;
    *(_QWORD *)(a1 + 112) = v31 + 2;
  }
  v33 = 8 * v27;
  *((_DWORD *)v26 - 1) = v22;
  v34 = &v26[(unsigned __int64)v33 / 8];
  v35 = 8LL * v22;
  if ( v33 != v35 )
    memset(v34, 0, v35 - v33);
LABEL_35:
  v36 = *(_DWORD **)(a1 + 120);
  if ( !v36 )
  {
    if ( !v5 )
      goto LABEL_44;
    v37 = 0;
    v60 = sub_186B270(0x10u);
    v41 = 2;
    v36 = (_DWORD *)(v60 + 8);
    *(_QWORD *)v60 = 2;
    *(_QWORD *)(a1 + 120) = v60 + 8;
    if ( v5 > 2 )
      goto LABEL_38;
    *(_DWORD *)(v60 + 4) = v5;
    v43 = (_DWORD *)(v60 + 8);
    v44 = (char *)&v36[(unsigned __int64)v63 / 4];
    goto LABEL_43;
  }
  v37 = (unsigned int)*(v36 - 1);
  if ( (unsigned int)v37 < v5 )
  {
    while ( 1 )
    {
      v41 = *(v36 - 2);
      if ( v41 >= v5 )
        break;
LABEL_38:
      v38 = (3 * v41 + 1) >> 1;
      v39 = 4 * v38 + 8;
      if ( 4 * v41 + 8 >= (unsigned int)v39 || v41 >= v38 )
        goto LABEL_75;
      v40 = (unsigned int *)sub_186B300(v36 - 2, v39);
      v36 = v40 + 2;
      *v40 = v38;
      *(_QWORD *)(a1 + 120) = v40 + 2;
    }
    v42 = 4 * v37;
    *(v36 - 1) = v5;
    v43 = &v36[(unsigned __int64)v42 / 4];
    v44 = (char *)&v36[(unsigned __int64)v63 / 4];
    if ( v63 == v42 )
      goto LABEL_44;
LABEL_43:
    memset(v43, 0, v44 - (char *)v43);
    goto LABEL_44;
  }
  *(v36 - 1) = v5;
LABEL_44:
  v45 = *(_QWORD *)(a1 + 936);
  v46 = *v9;
  if ( v45 )
  {
    v47 = 24LL * v46;
    v48 = (__int64 *)(v45 + v47);
    v49 = 24LL * *(unsigned int *)(v45 - 4);
    v50 = (__int64 *)(v45 + v49);
    if ( v47 != v49 )
    {
      do
      {
        while ( 1 )
        {
          v52 = v48[1];
          v53 = *v48;
          if ( v52 )
          {
            v18 = (*(_DWORD *)(v52 + 8))-- == 1;
            if ( v18 )
            {
              sub_15D7BC0(v53, v52);
              v53 = *v48;
            }
          }
          v51 = v48[2];
          if ( v51 )
          {
            v18 = (*(_DWORD *)(v51 + 8))-- == 1;
            if ( v18 )
              break;
          }
          v48 += 3;
          if ( v50 == v48 )
            goto LABEL_54;
        }
        sub_15D7BC0(v53, v51);
        v48 += 3;
      }
      while ( v50 != v48 );
LABEL_54:
      v45 = *(_QWORD *)(a1 + 936);
    }
    *(_DWORD *)(v45 - 4) = v46;
    v46 = *v9;
  }
  v54 = *(_QWORD *)(a1 + 2208);
  *(_DWORD *)(a1 + 944) = v46;
  if ( v54 )
    *(_DWORD *)(v54 - 4) = v62;
  sub_14B6450(a1 + 24);
  return sub_14B64E0(a1 + 24, a1 + 40);
}

