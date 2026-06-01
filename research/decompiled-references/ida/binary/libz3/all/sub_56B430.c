__int64 __fastcall sub_56B430(__int64 a1, __int64 a2, __int64 *a3, unsigned int a4)
{
  char **exception; // r12
  __int64 v5; // rax
  int v8; // eax
  __int64 v9; // rbp
  __int64 v10; // r13
  _QWORD *v11; // rdi
  unsigned int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  _QWORD *v15; // rdx
  unsigned int v17; // ebx
  size_t v18; // rsi
  unsigned int *v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rax
  unsigned int v22; // [rsp+Ch] [rbp-4Ch] BYREF
  __int64 v23[9]; // [rsp+10h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a2 + 32) != *(_DWORD *)(a1 + 8) )
    return 0;
  v5 = *(_QWORD *)(a2 + 16);
  if ( v5 )
  {
    v8 = *(_DWORD *)(v5 - 4);
    if ( v8 == 1 )
      return 0;
  }
  else
  {
    v8 = 0;
  }
  if ( a4 >= v8 - *(_DWORD *)(a2 + 24) )
    return 0;
  v9 = sub_186B270(0x28u);
  *(_DWORD *)(v9 + 16) = 0;
  v10 = *a3;
  *(_QWORD *)(v9 + 8) = 0;
  *(_QWORD *)v9 = &off_1C51480;
  *(_DWORD *)(v9 + 24) = a4;
  *(_QWORD *)(v9 + 32) = 0;
  v22 = a4;
  sub_4D76C0((__int64 *)(a2 + 16), 1u, &v22, v9 + 8);
  v11 = *(_QWORD **)(v9 + 32);
  if ( v11 )
  {
    v12 = *((_DWORD *)v11 - 1);
    if ( v12 == *((_DWORD *)v11 - 2) )
    {
      v17 = (3 * v12 + 1) >> 1;
      v18 = 8 * v17 + 8;
      if ( 8 * v12 + 8 >= (unsigned int)v18 || v12 >= v17 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v23, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v23);
        sub_233E40((__int64)v23);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v19 = (unsigned int *)sub_186B300(v11 - 1, v18);
      v20 = v19[1];
      v11 = v19 + 2;
      *v19 = v17;
      *(_QWORD *)(v9 + 32) = v19 + 2;
      LODWORD(v19) = v20;
      v15 = &v11[v20];
      v14 = (_DWORD)v19 + 1;
    }
    else
    {
      v13 = v12;
      v14 = v12 + 1;
      v15 = &v11[v13];
    }
  }
  else
  {
    v21 = (_QWORD *)sub_186B270(0x18u);
    v11 = v21 + 1;
    *v21 = 2;
    v14 = 1;
    *(_QWORD *)(v9 + 32) = v11;
    v15 = v11;
  }
  *v15 = v10;
  *((_DWORD *)v11 - 1) = v14;
  return v9;
}

