__int64 __fastcall sub_BA3150(__int64 *a1)
{
  char **exception; // rbp
  char **v2; // rbp
  char **v3; // rbp
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // r12d
  unsigned int v8; // ebx
  __int64 v9; // rsi
  __int64 v10; // rdx
  unsigned int i; // ebp
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  unsigned int v16; // r13d
  __int64 v17; // rax
  unsigned int *v18; // rax
  _QWORD *v19; // rdx
  __int64 v20; // rax
  unsigned int *v21; // rax
  unsigned int v22; // ebx
  size_t v23; // rsi
  unsigned int *v24; // rax
  _QWORD *v25; // rcx
  __int64 v26; // rax
  unsigned int *v27; // rax
  unsigned int v28; // r10d
  size_t v29; // rsi
  unsigned int v30; // r13d
  unsigned int *v31; // rax
  __int64 v32; // rax
  unsigned int v33; // r11d
  size_t v34; // rsi
  unsigned int v35; // r14d
  unsigned int *v36; // rax
  __int64 v37; // rax
  unsigned int **v38; // rdi
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  char *v42[11]; // [rsp+20h] [rbp-58h] BYREF

  v5 = a1[55];
  v6 = a1[56];
  if ( !v6 )
  {
    v38 = (unsigned int **)(a1 + 56);
    i = *(_DWORD *)(*(_QWORD *)v5 + 36LL);
    goto LABEL_38;
  }
  v7 = *(_DWORD *)(v6 - 4);
  if ( !v7 )
  {
    i = *(_DWORD *)(*(_QWORD *)v5 + 36LL);
    if ( *(_DWORD *)(v6 - 8) )
      goto LABEL_8;
    v38 = (unsigned int **)(a1 + 56);
LABEL_38:
    sub_2FD3F0(v38);
    v6 = a1[56];
    v7 = *(_DWORD *)(v6 - 4);
LABEL_8:
    v13 = a1[57];
    *(_DWORD *)(v6 + 4LL * v7) = i;
    ++*(_DWORD *)(v6 - 4);
    if ( v13 )
    {
      v14 = *(unsigned int *)(v13 - 4);
      if ( (_DWORD)v14 != *(_DWORD *)(v13 - 8) )
      {
        *(_DWORD *)(v13 + 4 * v14) = i;
        ++*(_DWORD *)(v13 - 4);
        goto LABEL_11;
      }
      v22 = (unsigned int)(3 * v14 + 1) >> 1;
      v23 = 4 * v22 + 8;
      if ( 4 * (int)v14 + 8 >= (unsigned int)v23 || (unsigned int)v14 >= v22 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_151CF2(v42);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v42);
        sub_233E40((__int64)v42);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v24 = (unsigned int *)sub_186B300((void *)(v13 - 8), v23);
      v6 = a1[56];
      v25 = v24 + 2;
      *v24 = v22;
      v26 = v24[1];
      a1[57] = (__int64)v25;
      v27 = (unsigned int *)v25 + v26;
    }
    else
    {
      v41 = (_QWORD *)sub_186B270(0x10u);
      v6 = a1[56];
      v25 = v41 + 1;
      *v41 = 2;
      a1[57] = (__int64)(v41 + 1);
      v27 = (unsigned int *)(v41 + 1);
    }
    *v27 = i;
    ++*((_DWORD *)v25 - 1);
    if ( !v6 )
    {
      v5 = a1[55];
      v8 = i;
      v7 = 0;
LABEL_12:
      if ( !v5 )
        return sub_8E86E0(a1[1]);
      goto LABEL_13;
    }
LABEL_11:
    v7 = *(_DWORD *)(v6 - 4);
    v5 = a1[55];
    v8 = i;
    goto LABEL_12;
  }
  v8 = *(_DWORD *)(v6 + 4LL * (v7 - 1));
  v9 = a1[57];
  v10 = 0x3FFFFFFFCLL;
  if ( v9 )
    v10 = 4LL * (unsigned int)(*(_DWORD *)(v9 - 4) - 1);
  for ( i = *(_DWORD *)(v9 + v10); v5; ++*((_DWORD *)v19 - 1) )
  {
LABEL_13:
    if ( v7 >= *(_DWORD *)(v5 - 4) )
      break;
    v15 = (_QWORD *)a1[56];
    v16 = *(_DWORD *)(*(_QWORD *)(v5 + 8LL * v7) + 36LL);
    if ( v8 > v16 )
      v8 = *(_DWORD *)(*(_QWORD *)(v5 + 8LL * v7) + 36LL);
    if ( v15 )
    {
      v17 = *((unsigned int *)v15 - 1);
      if ( (_DWORD)v17 == *((_DWORD *)v15 - 2) )
      {
        v33 = (unsigned int)(3 * v17 + 1) >> 1;
        v34 = 4 * v33 + 8;
        v35 = v33;
        if ( 4 * (int)v17 + 8 >= (unsigned int)v34 || (unsigned int)v17 >= v33 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_151CF2(v42);
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, v42);
          sub_233E40((__int64)v42);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v36 = (unsigned int *)sub_186B300(v15 - 1, v34);
        v15 = v36 + 2;
        *v36 = v35;
        v37 = v36[1];
        a1[56] = (__int64)v15;
        v18 = (unsigned int *)v15 + v37;
      }
      else
      {
        v18 = (unsigned int *)v15 + v17;
      }
    }
    else
    {
      v40 = (_QWORD *)sub_186B270(0x10u);
      v15 = v40 + 1;
      *v40 = 2;
      a1[56] = (__int64)(v40 + 1);
      v18 = (unsigned int *)(v40 + 1);
    }
    *v18 = v8;
    ++*((_DWORD *)v15 - 1);
    v19 = (_QWORD *)a1[57];
    if ( i < v16 )
      i = v16;
    if ( v19 )
    {
      v20 = *((unsigned int *)v19 - 1);
      if ( (_DWORD)v20 == *((_DWORD *)v19 - 2) )
      {
        v28 = (unsigned int)(3 * v20 + 1) >> 1;
        v29 = 4 * v28 + 8;
        v30 = v28;
        if ( 4 * (int)v20 + 8 >= (unsigned int)v29 || (unsigned int)v20 >= v28 )
        {
          v2 = (char **)__cxa_allocate_exception(0x28u);
          sub_151CF2(v42);
          *v2 = (char *)off_1C63128;
          sub_2333C0(v2 + 1, v42);
          sub_233E40((__int64)v42);
          __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v31 = (unsigned int *)sub_186B300(v19 - 1, v29);
        v19 = v31 + 2;
        *v31 = v30;
        v32 = v31[1];
        a1[57] = (__int64)v19;
        v21 = (unsigned int *)v19 + v32;
      }
      else
      {
        v21 = (unsigned int *)v19 + v20;
      }
    }
    else
    {
      v39 = (_QWORD *)sub_186B270(0x10u);
      v19 = v39 + 1;
      *v39 = 2;
      a1[57] = (__int64)(v39 + 1);
      v21 = (unsigned int *)(v39 + 1);
    }
    *v21 = i;
    v5 = a1[55];
    ++v7;
  }
  return sub_8E86E0(a1[1]);
}

