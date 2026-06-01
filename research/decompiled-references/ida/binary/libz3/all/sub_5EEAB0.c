const double *__fastcall sub_5EEAB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char **exception; // rbx
  _DWORD *v9; // rdi
  unsigned int v10; // ebx
  unsigned int v11; // r15d
  size_t v12; // rsi
  unsigned int *v13; // rax
  unsigned int v14; // eax
  const double *result; // rax
  _QWORD *v16; // rax
  __m128 *v17[11]; // [rsp+10h] [rbp-58h] BYREF

  v9 = *(_DWORD **)(a1 + 352);
  if ( v9 )
  {
    *(v9 - 1) = 0;
    v10 = *(_DWORD *)(a2 + 20);
    if ( !v10 )
      goto LABEL_9;
  }
  else
  {
    v10 = *(_DWORD *)(a2 + 20);
    if ( !v10 )
      goto LABEL_9;
    v16 = (_QWORD *)sub_186B270(0x18u);
    v9 = v16 + 1;
    *v16 = 2;
    *(_QWORD *)(a1 + 352) = v16 + 1;
  }
  while ( 1 )
  {
    v14 = *(v9 - 2);
    if ( v14 >= v10 )
      break;
    v11 = (3 * v14 + 1) >> 1;
    v12 = 8 * v11 + 8;
    if ( 8 * v14 + 8 >= (unsigned int)v12 || v14 >= v11 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)v17, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v17);
      sub_233E40((__int64)v17);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v13 = (unsigned int *)sub_186B300(v9 - 2, v12);
    v9 = v13 + 2;
    *v13 = v11;
    *(_QWORD *)(a1 + 352) = v13 + 2;
  }
  *(v9 - 1) = v10;
  memset(v9, 0, 8LL * v10);
LABEL_9:
  v17[0] = nullptr;
  result = sub_5ECBF0(a1, a3, 0, v17, a2, a4);
  if ( v17[0] )
    return (const double *)sub_186B220(&v17[0][-1].m128_u16[4]);
  return result;
}

