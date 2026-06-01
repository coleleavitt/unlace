__int64 __fastcall sub_6BA260(_QWORD *a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rax
  unsigned int v7; // r13d
  __int64 v8; // rsi
  unsigned int v9; // r14d
  __int64 v10; // r15
  __int64 v11; // rax
  unsigned int v12; // edx
  __int64 v13; // rax
  unsigned int v14; // r14d
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // r15d
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 *v21; // rbp
  unsigned __int64 v22; // r14
  __int64 v23; // rsi
  __int64 v24; // rdi
  bool v25; // zf
  __int64 result; // rax
  __int64 *v27; // rbx
  unsigned __int64 v28; // rbp
  __int64 v29; // rsi
  __int64 v30; // rdi
  unsigned int v31; // r8d
  size_t v32; // rsi
  unsigned int *v33; // rax
  __int64 v34; // rdi
  _QWORD *v35; // rdx
  _QWORD *v36; // rdi
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rdx
  _QWORD *v40; // rax
  char **exception; // rbx
  unsigned int v42; // [rsp+4h] [rbp-64h]
  __int64 v43; // [rsp+8h] [rbp-60h]
  __int64 v44[11]; // [rsp+10h] [rbp-58h] BYREF

  v43 = a1[9];
  v6 = a2[3];
  if ( v6 )
    v7 = *(_DWORD *)(v6 - 4);
  else
    v7 = 0;
  v8 = a1[6];
  v9 = 0;
  if ( v8 )
  {
    while ( v9 < *(_DWORD *)(v8 - 4) )
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)(v8 + 8LL * v9);
        if ( v10 )
          ++*(_DWORD *)(v10 + 8);
        v11 = a2[1];
        if ( !v11 )
        {
          v40 = (_QWORD *)sub_186B270(0x18u);
          v35 = v40 + 1;
          *v40 = 2;
          v37 = 1;
          a2[1] = (__int64)v35;
          v36 = v35;
          v8 = a1[6];
          goto LABEL_43;
        }
        v12 = *(_DWORD *)(v11 - 4);
        if ( v12 == *(_DWORD *)(v11 - 8) )
          break;
        ++v9;
        *(_QWORD *)(v11 + 8LL * v12) = v10;
        *(_DWORD *)(v11 - 4) = v12 + 1;
        if ( v9 >= *(_DWORD *)(v8 - 4) )
          goto LABEL_10;
      }
      v31 = (3 * v12 + 1) >> 1;
      v32 = 8 * v31 + 8;
      if ( 8 * v12 + 8 >= (unsigned int)v32 || v12 >= v31 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_6A99E0(v44, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v44);
        sub_233E40((__int64)v44);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v42 = (3 * v12 + 1) >> 1;
      v33 = (unsigned int *)sub_186B300((void *)(v11 - 8), v32);
      v34 = v33[1];
      v35 = v33 + 2;
      a2[1] = (__int64)(v33 + 2);
      v8 = a1[6];
      *v33 = v42;
      LODWORD(v33) = v34;
      v36 = &v35[v34];
      v37 = (_DWORD)v33 + 1;
LABEL_43:
      *v36 = v10;
      *((_DWORD *)v35 - 1) = v37;
      if ( !v8 )
        break;
      ++v9;
    }
  }
LABEL_10:
  v13 = a1[8];
  if ( v13 )
  {
    v14 = 0;
    do
    {
      if ( v14 >= *(_DWORD *)(v13 - 4) )
        break;
      v15 = *(_QWORD *)(v13 + 8LL * v14);
      v44[0] = v15;
      if ( v15 )
        ++*(_DWORD *)(v15 + 8);
      ++v14;
      sub_6ACBA0(a2 + 3, v44);
      v13 = a1[8];
    }
    while ( v13 );
  }
  v16 = a1[18];
  if ( !v16 )
  {
    if ( !v43 || v43 == *(_QWORD *)(*a1 + 864LL) )
      goto LABEL_21;
    v39 = a1[2];
    if ( !v39 )
    {
      if ( a1[3] )
        goto LABEL_21;
      goto LABEL_60;
    }
    if ( *(_DWORD *)(v39 - 4) )
      goto LABEL_21;
    goto LABEL_49;
  }
  v17 = *(_DWORD *)(v16 - 4);
  if ( v17 )
  {
LABEL_18:
    v17 = 0;
    do
    {
LABEL_19:
      if ( v17 >= *(_DWORD *)(v16 - 4) )
        break;
      v18 = v17++;
      sub_6BA260(*(_QWORD *)(v16 + 8 * v18), a2, a3);
      v16 = a1[18];
    }
    while ( v16 );
    goto LABEL_21;
  }
  if ( v43 && v43 != *(_QWORD *)(*a1 + 864LL) )
  {
    v38 = a1[2];
    if ( !v38 )
    {
      if ( a1[3] )
        goto LABEL_19;
      goto LABEL_60;
    }
    if ( *(_DWORD *)(v38 - 4) )
      goto LABEL_19;
LABEL_49:
    if ( a1[3] )
    {
      if ( v16 )
        goto LABEL_18;
      goto LABEL_21;
    }
LABEL_60:
    sub_6AF2C0(a3, v43, a2);
  }
LABEL_21:
  v19 = a2[1];
  v20 = 8LL * v7;
  if ( v19 )
  {
    v21 = (__int64 *)(v19 + v20);
    v22 = v19 + 8LL * *(unsigned int *)(v19 - 4);
    if ( v19 + v20 >= v22 )
      goto LABEL_29;
    do
    {
      while ( 1 )
      {
        v23 = *v21;
        if ( *v21 )
        {
          v24 = *a2;
          v25 = (*(_DWORD *)(v23 + 8))-- == 1;
          if ( v25 )
            break;
        }
        if ( (unsigned __int64)++v21 >= v22 )
          goto LABEL_28;
      }
      sub_15D7BC0(v24, v23);
      ++v21;
    }
    while ( (unsigned __int64)v21 < v22 );
LABEL_28:
    v19 = a2[1];
    if ( v19 )
LABEL_29:
      *(_DWORD *)(v19 - 4) = v7;
  }
  result = a2[3];
  if ( result )
  {
    v27 = (__int64 *)(result + v20);
    v28 = result + 8LL * *(unsigned int *)(result - 4);
    if ( (unsigned __int64)v27 >= v28 )
      goto LABEL_38;
    do
    {
      while ( 1 )
      {
        v29 = *v27;
        if ( *v27 )
        {
          v30 = a2[2];
          v25 = (*(_DWORD *)(v29 + 8))-- == 1;
          if ( v25 )
            break;
        }
        if ( (unsigned __int64)++v27 >= v28 )
          goto LABEL_37;
      }
      sub_15D7BC0(v30, v29);
      ++v27;
    }
    while ( (unsigned __int64)v27 < v28 );
LABEL_37:
    result = a2[3];
    if ( result )
LABEL_38:
      *(_DWORD *)(result - 4) = v7;
  }
  return result;
}

