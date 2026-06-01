__int64 __fastcall sub_7C2CC0(__int64 a1, unsigned int a2)
{
  char **exception; // rbx
  __int64 v3; // rdx
  _DWORD *v6; // rcx
  unsigned int v7; // r13d
  unsigned int v8; // r12d
  __int64 v9; // r14
  _BYTE *v10; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned int v14; // edx
  unsigned int v15; // r14d
  size_t v16; // rsi
  unsigned int *v17; // rax
  char *v18; // rdi
  char *v19; // rdx
  __int64 v20; // rax
  __int64 v21[9]; // [rsp+0h] [rbp-48h] BYREF

  v6 = *(_DWORD **)(a1 + 816);
  if ( !v6 )
  {
    v8 = a2 + 1;
    if ( a2 == -1 )
      goto LABEL_4;
    v7 = 0;
    v20 = sub_186B270(0xAu);
    v14 = 2;
    v6 = (_DWORD *)(v20 + 8);
    *(_QWORD *)v20 = 2;
    *(_QWORD *)(a1 + 816) = v20 + 8;
    if ( v8 <= 2 )
    {
      *(_DWORD *)(v20 + 4) = v8;
      v18 = (char *)(v20 + 8);
      v9 = a2;
      v19 = (char *)v6 + v8;
      goto LABEL_18;
    }
    do
    {
LABEL_14:
      v15 = (3 * v14 + 1) >> 1;
      v16 = v15 + 8;
      if ( v14 + 8 >= (unsigned int)v16 || v14 >= v15 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_113C8C(v21, "Overflow encountered when expanding vector", v3);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v21);
        sub_233E40((__int64)v21);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v17 = (unsigned int *)sub_186B300(v6 - 2, v16);
      v14 = v15;
      v6 = v17 + 2;
      *v17 = v15;
      *(_QWORD *)(a1 + 816) = v17 + 2;
    }
    while ( v15 < v8 );
    v17[1] = v8;
    v9 = a2;
    v18 = (char *)v6 + v7;
    v19 = (char *)v6 + v8;
    if ( v7 == v8 )
    {
LABEL_5:
      v10 = (char *)v6 + v9;
      if ( *((_BYTE *)v6 + v9) )
        return 1;
LABEL_9:
      *v10 = 1;
      v12 = *(_QWORD *)(a1 + 824);
      if ( !v12 || (v13 = *(unsigned int *)(v12 - 4), (_DWORD)v13 == *(_DWORD *)(v12 - 8)) )
      {
        sub_2FD3F0((unsigned int **)(a1 + 824));
        v12 = *(_QWORD *)(a1 + 824);
        v13 = *(unsigned int *)(v12 - 4);
      }
      *(_DWORD *)(v12 + 4 * v13) = a2;
      ++*(_DWORD *)(v12 - 4);
      return 1;
    }
LABEL_18:
    memset(v18, 0, v19 - v18);
    v6 = *(_DWORD **)(a1 + 816);
    goto LABEL_5;
  }
  v7 = *(v6 - 1);
  if ( a2 >= v7 )
  {
    v8 = a2 + 1;
    if ( v7 >= a2 + 1 )
    {
LABEL_4:
      v9 = a2;
      goto LABEL_5;
    }
    v14 = *(v6 - 2);
    if ( v14 >= v8 )
    {
      *(v6 - 1) = v8;
      v9 = a2;
      v18 = (char *)v6 + v7;
      v19 = (char *)v6 + v8;
      goto LABEL_18;
    }
    goto LABEL_14;
  }
  v9 = a2;
  v10 = (char *)v6 + a2;
  if ( !*v10 )
  {
    v8 = a2 + 1;
    if ( v7 >= a2 + 1 )
      goto LABEL_9;
    v14 = *(v6 - 2);
    if ( v14 >= v8 )
    {
      *(v6 - 1) = v8;
      v18 = (char *)v6 + v7;
      v19 = (char *)v6 + v8;
      goto LABEL_18;
    }
    goto LABEL_14;
  }
  return 0;
}

