_QWORD *__fastcall sub_690CC0(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *result; // rax
  _QWORD *v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // r14
  unsigned int v8; // r15d
  size_t v9; // rsi
  unsigned int *v10; // rax
  unsigned int v11; // eax
  __int64 v12; // r14
  __int64 v13; // rbx
  __int64 v14; // r15
  int v15; // edx
  unsigned int v16; // eax
  _QWORD *v17; // rax
  char **exception; // rbx
  __int64 v19[11]; // [rsp+0h] [rbp-58h] BYREF

  result = (_QWORD *)*a2;
  v5 = (_QWORD *)*a3;
  if ( !*a2 )
  {
    if ( v5 )
      *((_DWORD *)v5 - 1) = 0;
    return result;
  }
  v6 = *((unsigned int *)result - 1);
  if ( v5 )
  {
    v7 = *((unsigned int *)v5 - 1);
    if ( (unsigned int)v7 >= (unsigned int)v6 )
    {
      *((_DWORD *)v5 - 1) = v6;
      if ( !(_DWORD)v6 )
        return result;
      goto LABEL_11;
    }
  }
  else
  {
    if ( !(_DWORD)v6 )
      return result;
    v7 = 0;
    v17 = (_QWORD *)sub_186B270(0x10u);
    v5 = v17 + 1;
    *v17 = 2;
    *a3 = v17 + 1;
  }
  while ( 1 )
  {
    v11 = *((_DWORD *)v5 - 2);
    if ( v11 >= (unsigned int)v6 )
      break;
    v8 = (3 * v11 + 1) >> 1;
    v9 = 4 * v8 + 8;
    if ( 4 * v11 + 8 >= (unsigned int)v9 || v11 >= v8 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_68CF80(v19, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v19);
      sub_233E40((__int64)v19);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v10 = (unsigned int *)sub_186B300(v5 - 1, v9);
    v5 = v10 + 2;
    *v10 = v8;
    *a3 = v10 + 2;
  }
  v12 = 4 * v7;
  *((_DWORD *)v5 - 1) = v6;
  if ( v12 != 4 * v6 )
    memset((char *)v5 + v12, 0, 4 * v6 - v12);
LABEL_11:
  v13 = 4 * v6;
  v14 = 0;
  do
  {
    while ( 1 )
    {
      v16 = sub_7E6C80(a1 + 4480);
      if ( v16 == 0x7FFFFFFF )
        break;
      v15 = *(_DWORD *)(*(_QWORD *)(a1 + 3392) + 24LL * v16);
      result = (_QWORD *)*a3;
      *(_DWORD *)(*a3 + v14) = v15;
      v14 += 4;
      if ( v14 == v13 )
        return result;
    }
    result = (_QWORD *)*a3;
    *(_DWORD *)(*a3 + v14) = -1;
    v14 += 4;
  }
  while ( v14 != v13 );
  return result;
}

