__int64 __fastcall sub_BACC00(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // r13
  unsigned int v4; // ebp
  size_t v5; // rsi
  unsigned int *v6; // rax
  unsigned int v7; // eax
  _QWORD *v8; // rax
  char **exception; // rbx
  __int64 v10[9]; // [rsp+10h] [rbp-48h] BYREF

  v1 = *(_QWORD **)(a1 + 160);
  if ( v1 )
  {
    v2 = *((unsigned int *)v1 - 1);
    if ( (unsigned int)v2 > 3 )
      goto LABEL_3;
  }
  else
  {
    v2 = 0;
    v8 = (_QWORD *)sub_186B270(0x10u);
    v1 = v8 + 1;
    *v8 = 2;
    *(_QWORD *)(a1 + 160) = v8 + 1;
  }
  while ( 1 )
  {
    v7 = *((_DWORD *)v1 - 2);
    if ( v7 > 3 )
      break;
    v4 = (3 * v7 + 1) >> 1;
    v5 = 4 * v4 + 8;
    if ( 4 * v7 + 8 >= (unsigned int)v5 || v7 >= v4 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v10, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v10);
      sub_233E40((__int64)v10);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v6 = (unsigned int *)sub_186B300(v1 - 1, v5);
    v1 = v6 + 2;
    *v6 = v4;
    *(_QWORD *)(a1 + 160) = v6 + 2;
  }
  *((_DWORD *)v1 - 1) = 4;
  memset((char *)v1 + 4 * v2, 0, 16 - 4 * v2);
LABEL_3:
  *((_DWORD *)v1 + 3) |= 2u;
  return sub_163B390(a1 + 24, 97);
}

