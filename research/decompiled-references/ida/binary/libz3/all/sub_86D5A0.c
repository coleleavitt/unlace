__int64 __fastcall sub_86D5A0(__int64 a1, unsigned int a2)
{
  char **v2; // rbp
  char **exception; // rbp
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r12
  _QWORD *v8; // rbx
  unsigned int v9; // eax
  unsigned int v10; // r14d
  unsigned int v11; // edx
  size_t v12; // rsi
  unsigned int v13; // r15d
  unsigned int *v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r15
  __int64 v18; // r14
  __int64 v19; // rax
  _QWORD *v20; // rdx
  __int64 v21; // rbx
  unsigned int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 *v25; // rcx
  unsigned int v27; // ebp
  size_t v28; // rsi
  unsigned int *v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  unsigned int v33; // [rsp+Ch] [rbp-6Ch]
  __int64 v34[11]; // [rsp+20h] [rbp-58h] BYREF

  v5 = sub_7E4EC0(a1);
  v6 = sub_180C100(v5, 40);
  *(_OWORD *)(v6 + 8) = 0;
  v7 = v6;
  v8 = *(_QWORD **)(a1 + 624);
  *(_DWORD *)v6 = a2;
  *(_QWORD *)(v6 + 24) = 0;
  *(_QWORD *)(v6 + 32) = 0xFFFFFFFEFFFFFFFELL;
  if ( v8 )
  {
    v9 = *((_DWORD *)v8 - 1);
    v33 = v9;
    if ( a2 < v9 )
      goto LABEL_11;
    v10 = a2 + 1;
    if ( v9 >= a2 + 1 )
    {
      *((_DWORD *)v8 - 1) = v10;
      goto LABEL_11;
    }
  }
  else
  {
    v10 = a2 + 1;
    if ( a2 == -1 )
      goto LABEL_11;
    v31 = (_QWORD *)sub_186B270(0x18u);
    v33 = 0;
    v8 = v31 + 1;
    *v31 = 2;
    *(_QWORD *)(a1 + 624) = v31 + 1;
  }
  while ( 1 )
  {
    v15 = *((_DWORD *)v8 - 2);
    if ( v15 >= v10 )
      break;
    v11 = (3 * v15 + 1) >> 1;
    v12 = 8 * v11 + 8;
    v13 = v11;
    if ( 8 * v15 + 8 >= (unsigned int)v12 || v15 >= v11 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v34, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v34);
      sub_233E40((__int64)v34);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v14 = (unsigned int *)sub_186B300(v8 - 1, v12);
    v8 = v14 + 2;
    *v14 = v13;
    *(_QWORD *)(a1 + 624) = v14 + 2;
  }
  *((_DWORD *)v8 - 1) = v10;
  v16 = 8LL * v10;
  v17 = 8LL * v33;
  if ( v17 != v16 )
    memset(&v8[(unsigned __int64)v17 / 8], 0, v16 - v17);
LABEL_11:
  v18 = *(_QWORD *)(a1 + 80);
  v8[a2] = v7;
  v19 = sub_180C100(v18 + 2144, 24);
  v20 = *(_QWORD **)(v18 + 2128);
  v21 = v19;
  *(_QWORD *)v19 = off_1C556D8;
  *(_QWORD *)(v19 + 8) = a1;
  *(_DWORD *)(v19 + 16) = a2;
  if ( v20 )
  {
    v22 = *((_DWORD *)v20 - 1);
    if ( v22 == *((_DWORD *)v20 - 2) )
    {
      v27 = (3 * v22 + 1) >> 1;
      v28 = 8 * v27 + 8;
      if ( 8 * v22 + 8 >= (unsigned int)v28 || v22 >= v27 )
      {
        v2 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v34, "Overflow encountered when expanding vector");
        *v2 = (char *)off_1C63128;
        sub_2333C0(v2 + 1, v34);
        sub_233E40((__int64)v34);
        __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v29 = (unsigned int *)sub_186B300(v20 - 1, v28);
      v30 = v29[1];
      v20 = v29 + 2;
      *(_QWORD *)(v18 + 2128) = v29 + 2;
      *v29 = v27;
      LODWORD(v29) = v30;
      v25 = &v20[v30];
      v24 = (_DWORD)v29 + 1;
    }
    else
    {
      v23 = v22;
      v24 = v22 + 1;
      v25 = &v20[v23];
    }
  }
  else
  {
    v32 = (_QWORD *)sub_186B270(0x18u);
    v20 = v32 + 1;
    *v32 = 2;
    v24 = 1;
    *(_QWORD *)(v18 + 2128) = v20;
    v25 = v20;
  }
  *v25 = v21;
  *((_DWORD *)v20 - 1) = v24;
  return v7;
}

