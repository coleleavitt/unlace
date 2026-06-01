__int64 __fastcall sub_BACD40(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // edx
  _QWORD *v6; // rbx
  __int64 v7; // r12
  __int64 v8; // r13
  unsigned int v9; // ebp
  __int64 v10; // rsi
  unsigned int v12; // r15d
  size_t v13; // rsi
  unsigned int *v14; // rax
  unsigned int v15; // eax
  __int64 v16; // r13
  __int64 v17; // rdx
  _QWORD *v18; // rax
  char **exception; // rbp
  unsigned int v20; // [rsp+Ch] [rbp-6Ch]
  __int64 v21[11]; // [rsp+20h] [rbp-58h] BYREF

  v1 = *(_DWORD *)(a1 + 168);
  v2 = *(_QWORD *)(a1 + 160);
  v3 = v1 >> 5;
  if ( v2 )
  {
    while ( (unsigned int)v3 < *(_DWORD *)(v2 - 4) && (*(_DWORD *)(v2 + 4 * v3) & (1 << v1)) != 0 )
    {
      *(_DWORD *)(a1 + 168) = ++v1;
      v3 = v1 >> 5;
    }
  }
  v4 = sub_18002C0();
  v5 = 255;
  if ( v4 )
  {
    v5 = 0xFFFF;
    if ( v4 != 2 )
      v5 = 196607;
  }
  if ( v5 < v1 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v21, "Character range exhausted");
    goto LABEL_20;
  }
  v6 = *(_QWORD **)(a1 + 160);
  v20 = *(_DWORD *)(a1 + 168);
  v7 = v20 >> 5;
  if ( v6 )
  {
    v8 = *((unsigned int *)v6 - 1);
    v9 = v7 + 1;
    if ( (unsigned int)v7 >= (unsigned int)v8 )
      goto LABEL_14;
  }
  else
  {
    v9 = v7 + 1;
    v8 = 0;
    v18 = (_QWORD *)sub_186B270(0x10u);
    v6 = v18 + 1;
    *v18 = 2;
    *(_QWORD *)(a1 + 160) = v18 + 1;
LABEL_14:
    while ( 1 )
    {
      v15 = *((_DWORD *)v6 - 2);
      if ( v15 >= v9 )
        break;
      v12 = (3 * v15 + 1) >> 1;
      v13 = 4 * v12 + 8;
      if ( 4 * v15 + 8 >= (unsigned int)v13 || v15 >= v12 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v21, "Overflow encountered when expanding vector");
LABEL_20:
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v21);
        sub_233E40((__int64)v21);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v14 = (unsigned int *)sub_186B300(v6 - 1, v13);
      v6 = v14 + 2;
      *v14 = v12;
      *(_QWORD *)(a1 + 160) = v14 + 2;
    }
    v16 = 4 * v8;
    *((_DWORD *)v6 - 1) = v9;
    v17 = 4LL * v9;
    if ( v16 != v17 )
      memset((char *)v6 + v16, 0, v17 - v16);
  }
  *((_DWORD *)v6 + v7) |= 1 << v20;
  v10 = *(unsigned int *)(a1 + 168);
  *(_DWORD *)(a1 + 168) = v10 + 1;
  return sub_163B390(a1 + 24, v10);
}

