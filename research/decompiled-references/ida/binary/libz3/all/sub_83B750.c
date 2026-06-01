__int64 __fastcall sub_83B750(__int64 a1, unsigned int **a2, __int64 a3)
{
  _QWORD *v5; // rbx
  unsigned int *v6; // rax
  __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  void **v9; // r15
  __int64 v10; // r15
  unsigned int v11; // r13d
  unsigned int v12; // edx
  size_t v13; // rsi
  unsigned int v14; // r14d
  unsigned int *v15; // rax
  unsigned int v16; // eax
  __int64 v17; // r15
  __int64 v18; // rdx
  _QWORD *v20; // rdx
  unsigned int v21; // ecx
  __int64 v22; // rsi
  int v23; // ecx
  _QWORD *v24; // rsi
  _QWORD *v25; // rax
  unsigned int v26; // ebx
  size_t v27; // rsi
  unsigned int *v28; // rax
  __int64 v29; // rax
  int v30; // ecx
  _QWORD *v31; // rax
  _QWORD *v32; // rdx
  char **exception; // rbp
  __int64 v34; // [rsp+8h] [rbp-70h]
  __int64 v35[11]; // [rsp+20h] [rbp-58h] BYREF

  v5 = *(_QWORD **)(a1 + 56);
  v6 = *a2;
  if ( v5 && (v7 = *v6, (unsigned int)v7 < *((_DWORD *)v5 - 1)) && (v8 = v5[v7]) != 0 )
  {
    v9 = (void **)(v8 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v8 <= 7 )
    {
      v34 = a3 | 1;
      goto LABEL_17;
    }
    if ( *v9 )
      sub_186B220(*v9);
    sub_186B220(v9);
    v5 = *(_QWORD **)(a1 + 56);
    v34 = a3 | 1;
    v7 = **a2;
    if ( v5 )
      goto LABEL_8;
  }
  else
  {
    v20 = *(_QWORD **)(a1 + 64);
    if ( v20 )
    {
      v21 = *((_DWORD *)v20 - 1);
      if ( v21 == *((_DWORD *)v20 - 2) )
      {
        v26 = (3 * v21 + 1) >> 1;
        v27 = 8 * v26 + 8;
        if ( 8 * v21 + 8 >= (unsigned int)v27 || v21 >= v26 )
        {
LABEL_30:
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v35, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v35);
          sub_233E40((__int64)v35);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v28 = (unsigned int *)sub_186B300(v20 - 1, v27);
        v20 = v28 + 2;
        *v28 = v26;
        v29 = v28[1];
        *(_QWORD *)(a1 + 64) = v20;
        v5 = *(_QWORD **)(a1 + 56);
        v30 = v29;
        v24 = &v20[v29];
        v6 = *a2;
        v23 = v30 + 1;
      }
      else
      {
        v22 = v21;
        v23 = v21 + 1;
        v24 = &v20[v22];
      }
    }
    else
    {
      v31 = (_QWORD *)sub_186B270(0x18u);
      v5 = *(_QWORD **)(a1 + 56);
      v23 = 1;
      v32 = v31;
      *v31 = 2;
      v6 = *a2;
      v20 = v32 + 1;
      *(_QWORD *)(a1 + 64) = v20;
      v24 = v20;
    }
    *v24 = a2;
    v34 = a3 | 1;
    *((_DWORD *)v20 - 1) = v23;
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
    v25 = (_QWORD *)sub_186B270(0x18u);
    v5 = v25 + 1;
    *v25 = 2;
    *(_QWORD *)(a1 + 56) = v25 + 1;
LABEL_14:
    while ( 1 )
    {
      v16 = *((_DWORD *)v5 - 2);
      if ( v16 >= v11 )
        break;
      v12 = (3 * v16 + 1) >> 1;
      v13 = 8 * v12 + 8;
      v14 = v12;
      if ( 8 * v16 + 8 >= (unsigned int)v13 || v16 >= v12 )
        goto LABEL_30;
      v15 = (unsigned int *)sub_186B300(v5 - 1, v13);
      v5 = v15 + 2;
      *v15 = v14;
      *(_QWORD *)(a1 + 56) = v15 + 2;
    }
    v17 = 8 * v10;
    *((_DWORD *)v5 - 1) = v11;
    v18 = 8LL * v11;
    if ( v17 != v18 )
      memset(&v5[(unsigned __int64)v17 / 8], 0, v18 - v17);
  }
LABEL_17:
  v5[v7] = v34;
  return v34;
}

