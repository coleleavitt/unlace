__int64 __fastcall sub_DAB7E0(_QWORD *a1, __int64 a2)
{
  int *v2; // r12
  __int64 v4; // rax
  int v5; // ebp
  _QWORD *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // rcx
  int **v10; // rdi
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 result; // rax
  int **v14; // rdx
  unsigned int v15; // ebp
  size_t v16; // rsi
  unsigned int *v17; // rax
  __int64 v18; // rdx
  int v19; // eax
  unsigned int v20; // ebp
  unsigned int v21; // r14d
  size_t v22; // rsi
  unsigned int *v23; // rax
  unsigned int v24; // eax
  __int64 v25; // r13
  _QWORD *v26; // rdi
  __int64 v27; // rdx
  _QWORD *v28; // rax
  unsigned __int64 v29; // r14
  __int64 *v30; // r13
  __int64 v31; // rsi
  __int64 v32; // rdi
  size_t v34; // rsi
  __int64 v35; // rdi
  _DWORD *v36; // rax
  __int64 v37; // rbp
  _QWORD *v38; // rdi
  unsigned int v39; // eax
  __int64 v40; // rdx
  __int64 *v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned int v44; // r12d
  size_t v45; // rsi
  unsigned int *v46; // rax
  __int64 v47; // rdx
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  char **exception; // rbp
  __int64 v52[9]; // [rsp+10h] [rbp-48h] BYREF

  v2 = (int *)(a2 & 0xFFFFFFFFFFFFFFFELL);
  v4 = *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFFELL) + 8);
  if ( (a2 & 1) != 0 )
  {
    if ( v4 )
    {
      v2 = *(int **)(a1[3] + 8LL * (unsigned int)(*v2 - 0x7FFFFFFF));
    }
    else
    {
      v42 = (unsigned int)*v2;
      if ( (_DWORD)v42 )
        v2 = *(int **)(*(_QWORD *)(*a1 + 112LL) + 8 * v42);
      else
        v2 = *(int **)(a1[1] + 856LL);
    }
    v10 = (int **)a1[5];
    if ( !v10 )
    {
      v49 = (_QWORD *)sub_186B270(0x18u);
      v10 = (int **)(v49 + 1);
      *v49 = 2;
      result = 1;
      a1[5] = v10;
      v14 = v10;
      goto LABEL_9;
    }
    v11 = *((_DWORD *)v10 - 1);
    if ( v11 != *((_DWORD *)v10 - 2) )
    {
LABEL_8:
      v12 = v11;
      result = v11 + 1;
      v14 = &v10[v12];
LABEL_9:
      *v14 = v2;
      *((_DWORD *)v10 - 1) = result;
      return result;
    }
    v15 = (3 * v11 + 1) >> 1;
    v16 = 8 * v15 + 8;
    if ( 8 * v11 + 8 < (unsigned int)v16 && v11 < v15 )
    {
      v17 = (unsigned int *)sub_186B300(v10 - 1, v16);
      v10 = (int **)(v17 + 2);
      a1[5] = v17 + 2;
LABEL_17:
      v18 = v17[1];
      *v17 = v15;
      v19 = v18;
      v14 = &v10[v18];
      result = (unsigned int)(v19 + 1);
      goto LABEL_9;
    }
LABEL_68:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v52, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v52);
    sub_233E40((__int64)v52);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  if ( v4 )
  {
    v5 = *v2;
    v6 = (_QWORD *)a1[3];
    v7 = (unsigned int)(*v2 - 0x7FFFFFFF);
    if ( v6 )
    {
      v8 = *((unsigned int *)v6 - 1);
      if ( (unsigned int)v7 < (unsigned int)v8 )
      {
        v9 = v6[v7];
        if ( !v9 )
          goto LABEL_6;
        v35 = a1[1];
        goto LABEL_40;
      }
      v20 = v5 - 2147483646;
      if ( v20 >= (unsigned int)v8 )
        goto LABEL_19;
      v29 = (unsigned __int64)&v6[v8];
      v30 = &v6[v20];
      if ( (unsigned __int64)v30 >= v29 )
      {
LABEL_60:
        *((_DWORD *)v6 - 1) = v20;
        goto LABEL_6;
      }
      do
      {
        v31 = *v30;
        if ( *v30 )
        {
          v32 = a1[2];
          if ( (*(_DWORD *)(v31 + 8))-- == 1 )
            sub_15D7BC0(v32, v31);
        }
        ++v30;
      }
      while ( (unsigned __int64)v30 < v29 );
      v6 = (_QWORD *)a1[3];
      if ( v6 )
      {
        v8 = *((unsigned int *)v6 - 1);
LABEL_19:
        if ( (unsigned int)v8 < v20 )
          goto LABEL_24;
        goto LABEL_60;
      }
    }
    else
    {
      v20 = v5 - 2147483646;
    }
    if ( v20 )
    {
      v8 = 0;
      v28 = (_QWORD *)sub_186B270(0x18u);
      v6 = v28 + 1;
      *v28 = 2;
      a1[3] = v28 + 1;
LABEL_24:
      while ( 1 )
      {
        v24 = *((_DWORD *)v6 - 2);
        if ( v24 >= v20 )
          break;
        v21 = (3 * v24 + 1) >> 1;
        v22 = 8 * v21 + 8;
        if ( 8 * v24 + 8 >= (unsigned int)v22 || v24 >= v21 )
          goto LABEL_68;
        v23 = (unsigned int *)sub_186B300(v6 - 1, v22);
        v6 = v23 + 2;
        *v23 = v21;
        a1[3] = v23 + 2;
      }
      v25 = 8 * v8;
      *((_DWORD *)v6 - 1) = v20;
      v26 = &v6[(unsigned __int64)v25 / 8];
      v27 = 8LL * v20;
      if ( v25 != v27 )
        memset(v26, 0, v27 - v25);
    }
LABEL_6:
    v10 = (int **)a1[6];
    if ( !v10 )
    {
      v48 = (_QWORD *)sub_186B270(0x18u);
      v10 = (int **)(v48 + 1);
      *v48 = 2;
      result = 1;
      a1[6] = v10;
      v14 = v10;
      goto LABEL_9;
    }
    v11 = *((_DWORD *)v10 - 1);
    if ( v11 != *((_DWORD *)v10 - 2) )
      goto LABEL_8;
    v15 = (3 * v11 + 1) >> 1;
    v34 = 8 * v15 + 8;
    if ( 8 * v11 + 8 < (unsigned int)v34 && v11 < v15 )
    {
      v17 = (unsigned int *)sub_186B300(v10 - 1, v34);
      v10 = (int **)(v17 + 2);
      a1[6] = v17 + 2;
      goto LABEL_17;
    }
    goto LABEL_68;
  }
  v43 = (unsigned int)*v2;
  v35 = a1[1];
  if ( !(_DWORD)v43 )
  {
    v9 = *(_QWORD *)(v35 + 856);
    if ( *(_WORD *)(v9 + 4) || (v36 = *(_DWORD **)(*(_QWORD *)(v9 + 16) + 24LL)) == nullptr )
    {
LABEL_54:
      v37 = *(_QWORD *)(v35 + 864);
      goto LABEL_45;
    }
    goto LABEL_42;
  }
  v9 = *(_QWORD *)(*(_QWORD *)(*a1 + 112LL) + 8 * v43);
LABEL_40:
  if ( *(_WORD *)(v9 + 4) || (v36 = *(_DWORD **)(*(_QWORD *)(v9 + 16) + 24LL)) == nullptr )
  {
LABEL_43:
    if ( *(_QWORD *)(v35 + 856) != v9 )
    {
      v37 = sub_15E1A70(v35);
      goto LABEL_45;
    }
    goto LABEL_54;
  }
LABEL_42:
  if ( *v36 || v36[1] != 8 )
    goto LABEL_43;
  v37 = *(_QWORD *)(v9 + 32);
LABEL_45:
  v38 = (_QWORD *)a1[5];
  if ( v38 )
  {
    v39 = *((_DWORD *)v38 - 1);
    if ( v39 == *((_DWORD *)v38 - 2) )
    {
      v44 = (3 * v39 + 1) >> 1;
      v45 = 8 * v44 + 8;
      if ( 8 * v39 + 8 >= (unsigned int)v45 || v39 >= v44 )
        goto LABEL_68;
      v46 = (unsigned int *)sub_186B300(v38 - 1, v45);
      v47 = v46[1];
      v38 = v46 + 2;
      *v46 = v44;
      a1[5] = v46 + 2;
      LODWORD(v46) = v47;
      v41 = &v38[v47];
      result = (unsigned int)((_DWORD)v46 + 1);
    }
    else
    {
      v40 = v39;
      result = v39 + 1;
      v41 = &v38[v40];
    }
  }
  else
  {
    v50 = (_QWORD *)sub_186B270(0x18u);
    v38 = v50 + 1;
    *v50 = 2;
    result = 1;
    a1[5] = v38;
    v41 = v38;
  }
  *v41 = v37;
  *((_DWORD *)v38 - 1) = result;
  return result;
}

