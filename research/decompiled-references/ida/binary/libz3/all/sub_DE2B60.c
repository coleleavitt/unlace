__int64 (__fastcall **__fastcall sub_DE2B60(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 (__fastcall ***a6)()))()
{
  char **exception; // rbx
  __int64 (__fastcall **result)(); // rax
  __int64 (__fastcall ***v8)(); // r13
  __int64 (__fastcall ***v9)(); // rbx
  __int64 (__fastcall ***v10)(); // rbp
  _QWORD *v11; // rax
  unsigned int v12; // ecx
  __int64 (__fastcall ***v13)(); // rax
  __int64 (__fastcall ***v14)(); // rdx
  __int64 (__fastcall **v15)(); // rsi
  __int64 v16; // rax
  __int64 (__fastcall ***i)(); // rcx
  unsigned int v18; // r14d
  size_t v19; // rsi
  unsigned int *v20; // rax
  __int64 v21; // rax
  int v22; // ecx
  __int64 v23[9]; // [rsp+2h] [rbp-48h] BYREF

  result = off_1C5AEB0;
  *(_DWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 12) = a3;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = off_1C5AEB0;
  *(_QWORD *)(a1 + 24) = 0;
  if ( a5 )
  {
    v8 = &a6[a5];
    v9 = a6;
    v10 = a6;
    v11 = (_QWORD *)sub_186B270(0x18u);
    v12 = 1;
    *v11 = 2;
    v13 = (__int64 (__fastcall ***)())(v11 + 1);
    *(_QWORD *)(a1 + 24) = v13;
    v14 = v13;
    while ( 1 )
    {
      v15 = *v10++;
      *v13 = v15;
      *((_DWORD *)v14 - 1) = v12;
      if ( v8 == v10 )
        break;
      if ( *((_DWORD *)v14 - 2) == v12 )
      {
        v18 = (3 * v12 + 1) >> 1;
        v19 = 8 * v18 + 8;
        if ( 8 * v12 + 8 >= (unsigned int)v19 || v12 >= v18 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v23, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v23);
          sub_233E40((__int64)v23);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v20 = (unsigned int *)sub_186B300(v14 - 1, v19);
        v14 = (__int64 (__fastcall ***)())(v20 + 2);
        *v20 = v18;
        v21 = v20[1];
        *(_QWORD *)(a1 + 24) = v14;
        v22 = v21;
        v13 = &v14[v21];
        v12 = v22 + 1;
      }
      else
      {
        v16 = v12++;
        v13 = &v14[v16];
      }
    }
    do
    {
      if ( *v9 )
        ++*((_DWORD *)*v9 + 4);
      ++v9;
    }
    while ( v8 != v9 );
    result = (__int64 (__fastcall **)())*((unsigned int *)v14 - 1);
    for ( i = &v14[(_QWORD)result]; v14 != i; result[7] = (__int64 (__fastcall *)())a1 )
      result = *v14++;
  }
  return result;
}

