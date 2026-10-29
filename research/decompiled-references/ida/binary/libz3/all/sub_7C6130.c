_QWORD *__fastcall sub_7C6130(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r13
  __int64 v4; // r13
  __int64 v5; // rbp
  __int64 *v6; // rbx
  _QWORD *v7; // rax
  _DWORD *v8; // rax
  __int64 *v9; // r13
  _DWORD *v10; // rdx
  int v11; // edi
  __int64 v12; // rax
  unsigned int v13; // ecx
  unsigned int v14; // r14d
  size_t v15; // rsi
  unsigned int *v16; // rax
  __int64 v17; // rax
  char **exception; // rbp
  __int64 v20; // rdx
  __int64 v21[9]; // [rsp+0h] [rbp-48h] BYREF

  v3 = *(unsigned int *)(a2 + 32);
  *a1 = 0;
  v4 = 8 * v3;
  if ( v4 )
  {
    v5 = *(_QWORD *)(a2 + 76);
    v6 = (__int64 *)(a2 + 76);
    v7 = (_QWORD *)sub_186B270(0x10u);
    *v7 = 2;
    v8 = v7 + 1;
    v9 = (__int64 *)(a2 + 76 + v4);
    *a1 = v8;
    v10 = v8;
    while ( 1 )
    {
      ++v6;
      *v8 = HIDWORD(v5);
      v11 = *(v10 - 1);
      v12 = (unsigned int)(v11 + 1);
      *(v10 - 1) = v12;
      if ( v9 == v6 )
        break;
      v13 = *(v10 - 2);
      v5 = *v6;
      if ( v13 == (_DWORD)v12 )
      {
        v14 = (3 * v13 + 1) >> 1;
        v15 = 4 * v14 + 8;
        if ( 4 * v11 + 12 >= (unsigned int)v15 || v13 >= v14 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_113C8C(v21, "Overflow encountered when expanding vector", v20);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v21);
          sub_233E40((__int64)v21);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v16 = (unsigned int *)sub_186B300(v10 - 2, v15);
        v10 = v16 + 2;
        *v16 = v14;
        v17 = v16[1];
        *a1 = v10;
        v8 = &v10[v17];
      }
      else
      {
        v8 = &v10[v12];
      }
    }
  }
  return a1;
}

