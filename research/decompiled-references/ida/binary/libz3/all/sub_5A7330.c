__int64 __fastcall sub_5A7330(__int64 a1, __int64 a2, __int64 *a3)
{
  _QWORD *v3; // r13
  __int64 v4; // r14
  _QWORD *v5; // rbx
  __int64 v6; // r12
  unsigned int v7; // ebp
  __int64 result; // rax
  unsigned int v9; // edx
  size_t v10; // rsi
  unsigned int v11; // r15d
  unsigned int *v12; // rax
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r15
  _QWORD *v16; // rax
  char **exception; // rbx
  unsigned int v18; // [rsp+Ch] [rbp-6Ch]
  __int64 v19[11]; // [rsp+20h] [rbp-58h] BYREF

  v3 = *(_QWORD **)(a1 + 8);
  v4 = *a3;
  v5 = (_QWORD *)*v3;
  v6 = (unsigned int)*a3 >> 5;
  if ( *v3 )
  {
    v7 = v6 + 1;
    v18 = *((_DWORD *)v5 - 1);
    if ( (unsigned int)v6 < v18 )
      goto LABEL_3;
  }
  else
  {
    v7 = v6 + 1;
    v16 = (_QWORD *)sub_186B270(0x10u);
    v18 = 0;
    v5 = v16 + 1;
    *v16 = 2;
    *v3 = v16 + 1;
  }
  while ( 1 )
  {
    v13 = *((_DWORD *)v5 - 2);
    if ( v13 >= v7 )
      break;
    v9 = (3 * v13 + 1) >> 1;
    v10 = 4 * v9 + 8;
    v11 = v9;
    if ( 4 * v13 + 8 >= (unsigned int)v10 || v13 >= v9 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v19, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v19);
      sub_233E40((__int64)v19);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v12 = (unsigned int *)sub_186B300(v5 - 1, v10);
    v5 = v12 + 2;
    *v3 = v12 + 2;
    *v12 = v11;
  }
  *((_DWORD *)v5 - 1) = v7;
  v14 = 4LL * v7;
  v15 = 4LL * v18;
  if ( v15 != v14 )
    memset((char *)v5 + v15, 0, v14 - v15);
LABEL_3:
  result = (unsigned int)(1 << v4);
  *((_DWORD *)v5 + v6) |= result;
  return result;
}

