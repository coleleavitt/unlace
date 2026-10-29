__int64 __fastcall sub_BD21A0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  int v4; // r12d
  unsigned int v5; // ebx
  _QWORD *v6; // rdx
  unsigned int v7; // eax
  unsigned int v8; // r14d
  size_t v9; // rsi
  unsigned int *v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rax
  _DWORD *v13; // rcx
  unsigned int *v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 result; // rax
  unsigned int *v18; // rsi
  unsigned int v19; // ebx
  size_t v20; // rsi
  unsigned int *v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  char **exception; // rbp
  __int64 v25; // rdx
  __int64 v26; // rdx
  unsigned int v27; // [rsp+Ch] [rbp-5Ch] BYREF
  __int64 v28[11]; // [rsp+10h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
    v4 = *(_DWORD *)(v3 - 4);
  else
    v4 = 0;
  v5 = *(_DWORD *)a1;
  v6 = *(_QWORD **)(a1 + 32);
  v27 = *(_DWORD *)a1;
  if ( v6 )
    goto LABEL_6;
  v12 = (_QWORD *)sub_186B270(0x10u);
  v6 = v12 + 1;
  *v12 = 2;
  *(_QWORD *)(a1 + 32) = v12 + 1;
  v13 = v12 + 1;
  while ( 1 )
  {
    *v13 = 0;
    ++*((_DWORD *)v6 - 1);
LABEL_6:
    v7 = *((_DWORD *)v6 - 1);
    if ( v5 < v7 )
      break;
    v13 = (_DWORD *)v6 + v7;
    if ( v7 == *((_DWORD *)v6 - 2) )
    {
      v8 = (3 * v7 + 1) >> 1;
      v9 = 4 * v8 + 8;
      if ( 4 * v7 + 8 >= (unsigned int)v9 || v7 >= v8 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_154526(v28, "Overflow encountered when expanding vector", v26);
LABEL_23:
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v28);
        sub_233E40((__int64)v28);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v10 = (unsigned int *)sub_186B300(v6 - 1, v9);
      v6 = v10 + 2;
      *v10 = v8;
      v11 = v10[1];
      *(_QWORD *)(a1 + 32) = v6;
      v13 = (_DWORD *)v6 + v11;
    }
  }
  if ( v5 >= *(_DWORD *)(a1 + 4) )
  {
    *((_DWORD *)v6 + v5) = v4;
    v14 = *(unsigned int **)(a1 + 16);
    if ( v14 )
      goto LABEL_13;
LABEL_20:
    v23 = (_QWORD *)sub_186B270(0x18u);
    v14 = (unsigned int *)(v23 + 1);
    *v23 = 2;
    result = 1;
    *(_QWORD *)(a1 + 16) = v14;
    v18 = v14;
    goto LABEL_15;
  }
  sub_BB7E40((_QWORD *)(a1 + 40), &v27);
  sub_BB7E40((_QWORD *)(a1 + 48), (unsigned int *)(4LL * v5 + *(_QWORD *)(a1 + 32)));
  *(_DWORD *)(*(_QWORD *)(a1 + 32) + 4LL * v5) = v4;
  v14 = *(unsigned int **)(a1 + 16);
  if ( !v14 )
    goto LABEL_20;
LABEL_13:
  v15 = *(v14 - 1);
  if ( v15 == *(v14 - 2) )
  {
    v19 = (3 * v15 + 1) >> 1;
    v20 = 8 * v19 + 8;
    if ( 8 * v15 + 8 >= (unsigned int)v20 || v15 >= v19 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_154526(v28, "Overflow encountered when expanding vector", v25);
      goto LABEL_23;
    }
    v21 = (unsigned int *)sub_186B300(v14 - 2, v20);
    v22 = v21[1];
    v14 = v21 + 2;
    *v21 = v19;
    *(_QWORD *)(a1 + 16) = v21 + 2;
    v18 = &v21[2 * v22 + 2];
    result = (unsigned int)(v22 + 1);
  }
  else
  {
    v16 = v15;
    result = v15 + 1;
    v18 = &v14[2 * v16];
  }
LABEL_15:
  *(_QWORD *)v18 = *a2;
  *(v14 - 1) = result;
  ++*(_DWORD *)a1;
  return result;
}

