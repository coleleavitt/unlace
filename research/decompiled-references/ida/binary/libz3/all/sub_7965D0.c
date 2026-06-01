__int64 __fastcall sub_7965D0(__int64 a1, unsigned int **a2, __int64 a3)
{
  _QWORD *v5; // rbx
  unsigned int *v6; // rax
  __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  void **v9; // r14
  __int64 v10; // r14
  unsigned int v11; // r13d
  unsigned int v12; // r15d
  size_t v13; // rsi
  unsigned int *v14; // rax
  unsigned int v15; // eax
  __int64 v16; // r14
  __int64 v17; // rdx
  _QWORD *v19; // rdx
  unsigned int v20; // ecx
  __int64 v21; // rsi
  int v22; // ecx
  _QWORD *v23; // rsi
  _QWORD *v24; // rax
  unsigned int v25; // ebx
  size_t v26; // rsi
  unsigned int *v27; // rax
  __int64 v28; // rax
  int v29; // ecx
  _QWORD *v30; // rax
  _QWORD *v31; // rdx
  char **exception; // rbp
  __int64 v33[11]; // [rsp+10h] [rbp-58h] BYREF

  v5 = *(_QWORD **)(a3 + 56);
  v6 = *a2;
  if ( v5 && (v7 = *v6, (unsigned int)v7 < *((_DWORD *)v5 - 1)) && (v8 = v5[v7]) != 0 )
  {
    v9 = (void **)(v8 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v8 <= 7 )
      goto LABEL_17;
    if ( *v9 )
      sub_186B220(*v9);
    sub_186B220(v9);
    v5 = *(_QWORD **)(a3 + 56);
    v7 = **a2;
    if ( v5 )
      goto LABEL_8;
  }
  else
  {
    v19 = *(_QWORD **)(a3 + 64);
    if ( v19 )
    {
      v20 = *((_DWORD *)v19 - 1);
      if ( v20 == *((_DWORD *)v19 - 2) )
      {
        v25 = (3 * v20 + 1) >> 1;
        v26 = 8 * v25 + 8;
        if ( 8 * v20 + 8 >= (unsigned int)v26 || v20 >= v25 )
        {
LABEL_29:
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v33, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v33);
          sub_233E40((__int64)v33);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v27 = (unsigned int *)sub_186B300(v19 - 1, v26);
        v19 = v27 + 2;
        *v27 = v25;
        v28 = v27[1];
        *(_QWORD *)(a3 + 64) = v19;
        v5 = *(_QWORD **)(a3 + 56);
        v29 = v28;
        v23 = &v19[v28];
        v6 = *a2;
        v22 = v29 + 1;
      }
      else
      {
        v21 = v20;
        v22 = v20 + 1;
        v23 = &v19[v21];
      }
    }
    else
    {
      v30 = (_QWORD *)sub_186B270(0x18u);
      v5 = *(_QWORD **)(a3 + 56);
      v22 = 1;
      v31 = v30;
      *v30 = 2;
      v6 = *a2;
      v19 = v31 + 1;
      *(_QWORD *)(a3 + 64) = v19;
      v23 = v19;
    }
    *v23 = a2;
    *((_DWORD *)v19 - 1) = v22;
    v7 = *v6;
    if ( v5 )
    {
LABEL_8:
      v10 = *((unsigned int *)v5 - 1);
      if ( (unsigned int)v7 >= (unsigned int)v10 )
      {
        v11 = v7 + 1;
        if ( (unsigned int)v10 < (int)v7 + 1 )
          goto LABEL_14;
        *((_DWORD *)v5 - 1) = v11;
      }
      goto LABEL_17;
    }
  }
  v11 = v7 + 1;
  if ( (_DWORD)v7 == -1 )
  {
    v7 = 0xFFFFFFFFLL;
  }
  else
  {
    v10 = 0;
    v24 = (_QWORD *)sub_186B270(0x18u);
    v5 = v24 + 1;
    *v24 = 2;
    *(_QWORD *)(a3 + 56) = v24 + 1;
LABEL_14:
    while ( 1 )
    {
      v15 = *((_DWORD *)v5 - 2);
      if ( v15 >= v11 )
        break;
      v12 = (3 * v15 + 1) >> 1;
      v13 = 8 * v12 + 8;
      if ( 8 * v15 + 8 >= (unsigned int)v13 || v15 >= v12 )
        goto LABEL_29;
      v14 = (unsigned int *)sub_186B300(v5 - 1, v13);
      v5 = v14 + 2;
      *v14 = v12;
      *(_QWORD *)(a3 + 56) = v14 + 2;
    }
    v16 = 8 * v10;
    *((_DWORD *)v5 - 1) = v11;
    v17 = 8LL * v11;
    if ( v16 != v17 )
      memset(&v5[(unsigned __int64)v16 / 8], 0, v17 - v16);
  }
LABEL_17:
  v5[v7] = 1;
  return 1;
}

