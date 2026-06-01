__int64 __fastcall sub_466BB0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, int a5, int a6)
{
  char **exception; // rbp
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // r13
  _QWORD *v13; // rdx
  unsigned int v14; // eax
  unsigned int v15; // r15d
  size_t v16; // rsi
  unsigned int *v17; // rax
  __int64 v18; // rcx
  _DWORD *v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdi
  _QWORD *v23; // rax
  __int64 v24; // [rsp+10h] [rbp-68h] BYREF
  __int64 v25; // [rsp+18h] [rbp-60h]
  __int64 v26[11]; // [rsp+20h] [rbp-58h] BYREF

  v7 = *(_QWORD *)(a1 + 32);
  v24 = 0;
  v25 = v7;
  result = *(unsigned int *)(a1 + 160);
  if ( !(_DWORD)result )
    return result;
  v10 = 8LL * (unsigned int)(result - 1);
  do
  {
    while ( 1 )
    {
      sub_4663A0(a1, (__int64 *)(v10 + *(_QWORD *)(a1 + 168)), (__int64)&v24, (int)a4, a5, a6);
      v12 = v24;
      if ( v24 )
        ++*(_DWORD *)(v24 + 8);
      v13 = *(_QWORD **)(a2 + 8);
      if ( !v13 )
      {
        v23 = (_QWORD *)sub_186B270(0x18u);
        v13 = v23 + 1;
        *v23 = 2;
        result = 1;
        *(_QWORD *)(a2 + 8) = v13;
        a4 = v13;
        goto LABEL_4;
      }
      v14 = *((_DWORD *)v13 - 1);
      if ( v14 == *((_DWORD *)v13 - 2) )
        break;
      v11 = v14;
      result = v14 + 1;
      a4 = &v13[v11];
LABEL_4:
      v10 -= 8;
      *a4 = v12;
      *((_DWORD *)v13 - 1) = result;
      if ( v10 == -8 )
        goto LABEL_12;
    }
    v15 = (3 * v14 + 1) >> 1;
    v16 = 8 * v15 + 8;
    if ( 8 * v14 + 8 >= (unsigned int)v16 || v14 >= v15 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v26, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v26);
      sub_233E40((__int64)v26);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v17 = (unsigned int *)sub_186B300(v13 - 1, v16);
    v18 = v17[1];
    v19 = v17 + 2;
    *v17 = v15;
    v10 -= 8;
    *(_QWORD *)(a2 + 8) = v17 + 2;
    LODWORD(v17) = v18;
    a4 = &v19[2 * v18];
    result = (unsigned int)((_DWORD)v17 + 1);
    *a4 = v12;
    *(v19 - 1) = result;
  }
  while ( v10 != -8 );
LABEL_12:
  v20 = v24;
  if ( v24 )
  {
    v21 = v25;
    if ( (*(_DWORD *)(v24 + 8))-- == 1 )
      return sub_15D7BC0(v21, v20);
  }
  return result;
}

