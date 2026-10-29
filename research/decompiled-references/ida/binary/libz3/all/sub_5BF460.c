void __fastcall sub_5BF460(_QWORD *a1, int a2)
{
  char **exception; // rbp
  unsigned int v4; // ebx
  _DWORD *v5; // rdi
  unsigned int v6; // r13d
  unsigned int v7; // edx
  unsigned int v8; // ebp
  size_t v9; // rsi
  unsigned int *v10; // rax
  char *v11; // rax
  char *v12; // rdx
  _QWORD *v13; // rdx
  __int64 v14; // rbp
  unsigned int v15; // eax
  unsigned int v16; // r13d
  size_t v17; // rsi
  unsigned int *v18; // rax
  char *v19; // rdi
  char *v20; // rdx
  _QWORD *v21; // rdx
  __int64 v22; // rbp
  unsigned int v23; // eax
  unsigned int v24; // r13d
  size_t v25; // rsi
  unsigned int *v26; // rax
  char *v27; // rdi
  char *v28; // rdx
  _QWORD *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // r13
  unsigned int v32; // ebp
  size_t v33; // rsi
  unsigned int *v34; // rax
  unsigned int v35; // eax
  __int64 v36; // r13
  __int64 v37; // rdx
  _QWORD *v38; // rdi
  __int64 v39; // rax
  unsigned __int64 v40; // r13
  __int64 *v41; // rbp
  __int64 v42; // rsi
  __int64 v43; // rdi
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = a2 + 1;
  v5 = (_DWORD *)a1[6];
  if ( v5 )
  {
    v6 = *(v5 - 1);
    if ( v6 >= v4 )
    {
      v13 = (_QWORD *)a1[7];
      *(v5 - 1) = v4;
      if ( !v13 )
        goto LABEL_50;
      goto LABEL_9;
    }
    v7 = *(v5 - 2);
    if ( v7 >= v4 )
    {
      *(v5 - 1) = v4;
      v11 = (char *)v5 + v6;
      v12 = (char *)v5 + v4;
      goto LABEL_8;
    }
  }
  else
  {
    if ( a2 == -1 )
    {
      v49 = a1[7];
      if ( v49 )
      {
        *(_DWORD *)(v49 - 4) = 0;
        v50 = a1[10];
        if ( !v50 )
          goto LABEL_67;
      }
      else
      {
        v50 = a1[10];
        if ( !v50 )
          goto LABEL_73;
      }
      v29 = (_QWORD *)a1[9];
      *(_DWORD *)(v50 - 4) = 0;
      if ( !v29 )
        return;
LABEL_26:
      v30 = *((unsigned int *)v29 - 1);
      if ( v4 >= (unsigned int)v30 )
      {
LABEL_27:
        v31 = *((unsigned int *)v29 - 1);
        if ( (unsigned int)v31 < v4 )
          goto LABEL_32;
        goto LABEL_38;
      }
LABEL_40:
      v40 = (unsigned __int64)&v29[v30];
      v41 = &v29[v4];
      if ( (unsigned __int64)v41 >= v40 )
        goto LABEL_38;
      do
      {
LABEL_43:
        while ( 1 )
        {
          v42 = *v41;
          if ( *v41 )
          {
            v43 = a1[8];
            if ( (*(_DWORD *)(v42 + 8))-- == 1 )
              break;
          }
          if ( (unsigned __int64)++v41 >= v40 )
            goto LABEL_46;
        }
        sub_15D7BC0(v43, v42);
        ++v41;
      }
      while ( (unsigned __int64)v41 < v40 );
LABEL_46:
      v29 = (_QWORD *)a1[9];
      if ( v29 )
        goto LABEL_27;
      goto LABEL_47;
    }
    v6 = 0;
    v48 = sub_186B270(0xAu);
    v7 = 2;
    v5 = (_DWORD *)(v48 + 8);
    *(_QWORD *)v48 = 2;
    a1[6] = v48 + 8;
    if ( v4 <= 2 )
    {
      *(_DWORD *)(v48 + 4) = v4;
      v11 = (char *)(v48 + 8);
      v12 = (char *)v5 + v4;
      goto LABEL_8;
    }
  }
  do
  {
    v8 = (3 * v7 + 1) >> 1;
    v9 = v8 + 8;
    if ( v7 + 8 >= (unsigned int)v9 || v7 >= v8 )
    {
LABEL_77:
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v52, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v52);
      sub_233E40((__int64)v52);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v10 = (unsigned int *)sub_186B300(v5 - 2, v9);
    v7 = v8;
    v5 = v10 + 2;
    *v10 = v8;
    a1[6] = v10 + 2;
  }
  while ( v8 < v4 );
  v10[1] = v4;
  v11 = (char *)v5 + v6;
  v12 = (char *)v5 + v4;
  if ( v4 != v6 )
  {
LABEL_8:
    memset(v11, 0, v12 - v11);
    v13 = (_QWORD *)a1[7];
    if ( v13 )
      goto LABEL_9;
LABEL_50:
    if ( v4 )
    {
LABEL_51:
      LODWORD(v14) = 0;
      v46 = (_QWORD *)sub_186B270(0xAu);
      v13 = v46 + 1;
      *v46 = 2;
      a1[7] = v46 + 1;
      goto LABEL_14;
    }
    v39 = a1[10];
    if ( v39 )
    {
      v29 = (_QWORD *)a1[9];
      *(_DWORD *)(v39 - 4) = 0;
      if ( !v29 )
        return;
LABEL_37:
      v30 = *((unsigned int *)v29 - 1);
      if ( !(_DWORD)v30 )
      {
LABEL_38:
        *((_DWORD *)v29 - 1) = v4;
        return;
      }
      goto LABEL_40;
    }
LABEL_73:
    v29 = (_QWORD *)a1[9];
    if ( !v29 )
      return;
    goto LABEL_37;
  }
  v13 = (_QWORD *)a1[7];
  if ( !v13 )
    goto LABEL_51;
LABEL_9:
  v14 = *((unsigned int *)v13 - 1);
  if ( (unsigned int)v14 >= v4 )
  {
    *((_DWORD *)v13 - 1) = v4;
    v21 = (_QWORD *)a1[10];
    if ( !v21 )
      goto LABEL_53;
LABEL_17:
    v22 = *((unsigned int *)v21 - 1);
    if ( (unsigned int)v22 >= v4 )
    {
      *((_DWORD *)v21 - 1) = v4;
    }
    else
    {
      v23 = *((_DWORD *)v21 - 2);
      if ( v23 >= v4 )
      {
        *((_DWORD *)v21 - 1) = v4;
        v27 = (char *)v21 + v22;
        v28 = (char *)v21 + v4;
LABEL_24:
        memset(v27, 1, v28 - v27);
        goto LABEL_25;
      }
      do
      {
        v24 = (3 * v23 + 1) >> 1;
        v25 = v24 + 8;
        if ( v23 + 8 >= (unsigned int)v25 || v23 >= v24 )
          goto LABEL_77;
        v26 = (unsigned int *)sub_186B300(v21 - 1, v25);
        v21 = v26 + 2;
        *v26 = v24;
        a1[10] = v26 + 2;
LABEL_22:
        v23 = *((_DWORD *)v21 - 2);
      }
      while ( v23 < v4 );
      *((_DWORD *)v21 - 1) = v4;
      v27 = (char *)v21 + (unsigned int)v22;
      v28 = (char *)v21 + v4;
      if ( v4 != (_DWORD)v22 )
        goto LABEL_24;
    }
LABEL_25:
    v29 = (_QWORD *)a1[9];
    if ( !v29 )
    {
LABEL_47:
      if ( v4 )
      {
        v31 = 0;
        v45 = (_QWORD *)sub_186B270(0x18u);
        *v45 = 2;
        v29 = v45 + 1;
        a1[9] = v45 + 1;
LABEL_32:
        while ( 1 )
        {
          v35 = *((_DWORD *)v29 - 2);
          if ( v35 >= v4 )
            break;
          v32 = (3 * v35 + 1) >> 1;
          v33 = 8 * v32 + 8;
          if ( 8 * v35 + 8 >= (unsigned int)v33 || v35 >= v32 )
            goto LABEL_77;
          v34 = (unsigned int *)sub_186B300(v29 - 1, v33);
          v29 = v34 + 2;
          *v34 = v32;
          a1[9] = v34 + 2;
        }
        v36 = 8 * v31;
        *((_DWORD *)v29 - 1) = v4;
        v37 = 8LL * v4;
        v38 = &v29[(unsigned __int64)v36 / 8];
        if ( v36 != v37 )
          memset(v38, 0, v37 - v36);
      }
      return;
    }
    goto LABEL_26;
  }
  v15 = *((_DWORD *)v13 - 2);
  if ( v15 >= v4 )
  {
    *((_DWORD *)v13 - 1) = v4;
    v19 = (char *)v13 + v14;
    v20 = (char *)v13 + v4;
    goto LABEL_16;
  }
  do
  {
    v16 = (3 * v15 + 1) >> 1;
    v17 = v16 + 8;
    if ( v15 + 8 >= (unsigned int)v17 || v15 >= v16 )
      goto LABEL_77;
    v18 = (unsigned int *)sub_186B300(v13 - 1, v17);
    v13 = v18 + 2;
    *v18 = v16;
    a1[7] = v18 + 2;
LABEL_14:
    v15 = *((_DWORD *)v13 - 2);
  }
  while ( v15 < v4 );
  *((_DWORD *)v13 - 1) = v4;
  v19 = (char *)v13 + (unsigned int)v14;
  v20 = (char *)v13 + v4;
  if ( v4 == (_DWORD)v14 )
  {
    v21 = (_QWORD *)a1[10];
    if ( !v21 )
      goto LABEL_54;
    goto LABEL_17;
  }
LABEL_16:
  memset(v19, 0, v20 - v19);
  v21 = (_QWORD *)a1[10];
  if ( v21 )
    goto LABEL_17;
LABEL_53:
  if ( v4 )
  {
LABEL_54:
    LODWORD(v22) = 0;
    v47 = (_QWORD *)sub_186B270(0xAu);
    v21 = v47 + 1;
    *v47 = 2;
    a1[10] = v47 + 1;
    goto LABEL_22;
  }
LABEL_67:
  v29 = (_QWORD *)a1[9];
  if ( v29 )
  {
    v51 = *((unsigned int *)v29 - 1);
    if ( (_DWORD)v51 )
    {
      v40 = (unsigned __int64)&v29[v51];
      if ( (unsigned __int64)v29 < v40 )
      {
        v41 = (__int64 *)a1[9];
        goto LABEL_43;
      }
    }
    goto LABEL_38;
  }
}

