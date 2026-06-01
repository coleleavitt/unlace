_QWORD *__fastcall sub_7C6000(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rbp
  _QWORD *v6; // rax
  _DWORD *v7; // rax
  _DWORD *v8; // rdx
  int v9; // ecx
  int v10; // edi
  __int64 v11; // rax
  unsigned int v12; // ecx
  unsigned int v13; // r13d
  size_t v14; // rsi
  unsigned int *v15; // rax
  __int64 v16; // rax
  char **exception; // rbx
  __int64 v19; // rdx
  __int64 v20[9]; // [rsp+0h] [rbp-48h] BYREF

  v3 = *(unsigned int *)(a2 + 32);
  *a1 = 0;
  if ( (_DWORD)v3 )
  {
    v4 = a2;
    v5 = a2 + 4 * v3;
    v6 = (_QWORD *)sub_186B270(0x10u);
    *v6 = 2;
    v7 = v6 + 1;
    *a1 = v7;
    v8 = v7;
    while ( 1 )
    {
      v9 = *(_DWORD *)(v4 + 64);
      v4 += 4;
      *v7 = v9;
      v10 = *(v8 - 1);
      v11 = (unsigned int)(v10 + 1);
      *(v8 - 1) = v11;
      if ( v5 == v4 )
        break;
      v12 = *(v8 - 2);
      if ( v12 == (_DWORD)v11 )
      {
        v13 = (3 * v12 + 1) >> 1;
        v14 = 4 * v13 + 8;
        if ( 4 * v10 + 12 >= (unsigned int)v14 || v12 >= v13 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_113C8C(v20, "Overflow encountered when expanding vector", v19);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v20);
          sub_233E40((__int64)v20);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v15 = (unsigned int *)sub_186B300(v8 - 2, v14);
        v8 = v15 + 2;
        *v15 = v13;
        v16 = v15[1];
        *a1 = v8;
        v7 = &v8[v16];
      }
      else
      {
        v7 = &v8[v11];
      }
    }
  }
  return a1;
}

