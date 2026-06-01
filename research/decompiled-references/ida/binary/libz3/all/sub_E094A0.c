__int64 __fastcall sub_E094A0(__int64 a1, __int64 a2)
{
  char **v2; // rbp
  _QWORD *exception; // rbp
  const char *v4; // rax
  __int64 v6; // r12
  void (__fastcall ***v7)(void *); // r13
  bool v8; // zf
  _QWORD *v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  _QWORD *v13; // rcx
  __int64 v14; // rdi
  unsigned int v16; // r13d
  size_t v17; // rsi
  unsigned int *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // edx
  __int64 v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25[9]; // [rsp+0h] [rbp-48h] BYREF

  sub_DFBCB0(a1);
  v6 = *(_QWORD *)(a1 + 296);
  sub_1829790(v6, 0);
  if ( !(unsigned __int8)sub_E2D9A0(a1 + 328, a2) )
  {
    exception = __cxa_allocate_exception(0x30u);
    v4 = (const char *)sub_E2D980(a1 + 328);
    sub_305660(exception, v4);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  v7 = *(void (__fastcall ****)(void *))(a1 + 872);
  if ( v7 )
  {
    v8 = (*((_DWORD *)v7 + 12))-- == 1;
    if ( v8 )
    {
      (**v7)(v7);
      sub_186B220(v7);
    }
  }
  *(_QWORD *)(a1 + 872) = 0;
  sub_DFBCB0(a1);
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v9 = *(_QWORD **)(a1 + 760);
  if ( !v9 )
  {
    v24 = (_QWORD *)sub_186B270(0x18u);
    v9 = v24 + 1;
    *v24 = 2;
    v12 = 1;
    *(_QWORD *)(a1 + 760) = v9;
    v13 = v9;
LABEL_10:
    v8 = *(_BYTE *)(a1 + 192) == 0;
    *v13 = a2;
    *((_DWORD *)v9 - 1) = v12;
    if ( v8 )
      goto LABEL_11;
LABEL_17:
    v20 = *(_QWORD *)(a1 + 792);
    if ( !v20 || (v21 = *(_DWORD *)(v20 - 4), v21 == *(_DWORD *)(v20 - 8)) )
    {
      sub_23A6F0((unsigned int **)(a1 + 792));
      v22 = *(_QWORD *)(a1 + 792);
      v23 = *(unsigned int *)(v22 - 4);
      *(_QWORD *)(v22 + 8 * v23) = 0;
      *(_DWORD *)(v22 - 4) = v23 + 1;
    }
    else
    {
      *(_QWORD *)(v20 + 8LL * v21) = 0;
      *(_DWORD *)(v20 - 4) = v21 + 1;
    }
    goto LABEL_11;
  }
  v10 = *((_DWORD *)v9 - 1);
  if ( v10 != *((_DWORD *)v9 - 2) )
  {
    v11 = v10;
    v12 = v10 + 1;
    v13 = &v9[v11];
    goto LABEL_10;
  }
  v16 = (3 * v10 + 1) >> 1;
  v17 = 8 * v16 + 8;
  if ( 8 * v10 + 8 >= (unsigned int)v17 || v10 >= v16 )
  {
    v2 = (char **)__cxa_allocate_exception(0x28u);
    sub_DF63A0(v25, "Overflow encountered when expanding vector");
    *v2 = (char *)off_1C63128;
    sub_2333C0(v2 + 1, v25);
    sub_233E40((__int64)v25);
    __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v18 = (unsigned int *)sub_186B300(v9 - 1, v17);
  v19 = v18[1];
  *v18 = v16;
  *(_QWORD *)(a1 + 760) = v18 + 2;
  v8 = *(_BYTE *)(a1 + 192) == 0;
  *(_QWORD *)&v18[2 * v19 + 2] = a2;
  v18[1] = v19 + 1;
  if ( !v8 )
    goto LABEL_17;
LABEL_11:
  v14 = *(_QWORD *)(a1 + 864);
  if ( v14 )
    sub_E5EBF0(v14, a2);
  return sub_1829100(v6);
}

