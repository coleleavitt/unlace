__int64 __fastcall sub_7E67D0(__int64 a1, __int64 a2, char a3)
{
  char **exception; // rbx
  _QWORD **v6; // rcx
  __int64 v7; // rdi
  unsigned int **v8; // rbx
  __int64 v9; // rax
  unsigned int **v10; // r14
  _QWORD *v11; // r13
  __int64 v12; // rax
  unsigned int v13; // edx
  __int64 v14; // rax
  int v15; // edx
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned int v19; // r15d
  size_t v20; // rsi
  unsigned int *v21; // rax
  __int64 v22; // rax
  unsigned int v23; // edx
  __int64 v24; // rbx
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29[11]; // [rsp+10h] [rbp-58h] BYREF

  v6 = *(_QWORD ***)(a1 + 56);
  v7 = *(_QWORD *)(a1 + 80);
  if ( !v6 )
  {
    if ( a3 )
      goto LABEL_18;
    v8 = (unsigned int **)(a2 + 32);
    v26 = 8LL * *(unsigned int *)(a2 + 24);
    v10 = (unsigned int **)(a2 + 32 + v26);
    if ( !v26 )
      goto LABEL_18;
    v11 = *(_QWORD **)(v7 + 1720);
    if ( v11 )
    {
      v27 = **(unsigned int **)(a2 + 32);
      if ( (unsigned int)v27 >= *((_DWORD *)v11 - 1) )
        v11 = nullptr;
      else
        v11 = (_QWORD *)v11[v27];
    }
    v28 = (_QWORD *)sub_186B270(0x18u);
    v7 = *(_QWORD *)(a1 + 80);
    v15 = 1;
    *v28 = 2;
    v16 = v28 + 1;
    *(_QWORD *)(a1 + 56) = v16;
    v6 = (_QWORD **)v16;
LABEL_9:
    ++v8;
    *v16 = v11;
    *((_DWORD *)v6 - 1) = v15;
    if ( v8 == v10 )
      goto LABEL_16;
    while ( 1 )
    {
      v17 = *(_QWORD *)(v7 + 1720);
      if ( !v17 )
        break;
      v11 = nullptr;
      v18 = **v8;
      if ( (unsigned int)v18 >= *(_DWORD *)(v17 - 4) )
        goto LABEL_7;
      v11 = *(_QWORD **)(v17 + 8 * v18);
      v13 = *((_DWORD *)v6 - 1);
      if ( v13 != *((_DWORD *)v6 - 2) )
      {
LABEL_8:
        v14 = v13;
        v15 = v13 + 1;
        v16 = &v6[v14];
        goto LABEL_9;
      }
LABEL_13:
      v19 = (3 * v13 + 1) >> 1;
      v20 = 8 * v19 + 8;
      if ( 8 * v13 + 8 >= (unsigned int)v20 || v13 >= v19 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v29, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v29);
        sub_233E40((__int64)v29);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      ++v8;
      v21 = (unsigned int *)sub_186B300(v6 - 1, v20);
      v7 = *(_QWORD *)(a1 + 80);
      v6 = (_QWORD **)(v21 + 2);
      *v21 = v19;
      v22 = v21[1];
      *(_QWORD *)(a1 + 56) = v6;
      v6[v22] = v11;
      *((_DWORD *)v6 - 1) = v22 + 1;
      if ( v8 == v10 )
        goto LABEL_16;
    }
LABEL_20:
    v11 = nullptr;
LABEL_7:
    v13 = *((_DWORD *)v6 - 1);
    if ( v13 != *((_DWORD *)v6 - 2) )
      goto LABEL_8;
    goto LABEL_13;
  }
  *((_DWORD *)v6 - 1) = 0;
  if ( a3 )
  {
LABEL_18:
    v23 = 0;
    goto LABEL_19;
  }
  v8 = (unsigned int **)(a2 + 32);
  v9 = 8LL * *(unsigned int *)(a2 + 24);
  v10 = (unsigned int **)(a2 + 32 + v9);
  if ( v9 )
  {
    v11 = *(_QWORD **)(v7 + 1720);
    if ( v11 )
    {
      v12 = **(unsigned int **)(a2 + 32);
      if ( (unsigned int)v12 >= *((_DWORD *)v11 - 1) )
        goto LABEL_20;
      v11 = (_QWORD *)v11[v12];
    }
    goto LABEL_7;
  }
LABEL_16:
  v23 = *((_DWORD *)v6 - 1);
LABEL_19:
  v24 = sub_79AF20(v7, a2, v23, v6);
  sub_79D5A0(*(_QWORD *)(a1 + 80), v24);
  return v24;
}

