__int64 (__fastcall **__fastcall sub_DE4010(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 *a5,
        int a6,
        __int64 (__fastcall ***a7)()))()
{
  char **exception; // rbx
  __int64 v8; // rax
  __int64 (__fastcall **result)(); // rax
  __int64 (__fastcall ***v10)(); // rbx
  __int64 (__fastcall ***v11)(); // r13
  __int64 (__fastcall ***v12)(); // rbp
  _QWORD *v13; // rax
  unsigned int v14; // edx
  _QWORD *v15; // rax
  _DWORD *v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rax
  unsigned int v19; // r14d
  size_t v20; // rsi
  unsigned int *v21; // rax
  __int64 v22; // rax
  int v23; // edx
  __int64 v24[9]; // [rsp+8h] [rbp-48h] BYREF

  v8 = *a5;
  *(_DWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 12) = a3;
  *(_QWORD *)(a1 + 24) = v8;
  result = off_1C5AE48;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)a1 = off_1C5AE48;
  *(_OWORD *)(a1 + 40) = 0;
  if ( a6 )
  {
    v10 = a7;
    v11 = &a7[a6];
    v12 = a7;
    v13 = (_QWORD *)sub_186B270(0x18u);
    v14 = 1;
    *v13 = 2;
    v15 = v13 + 1;
    *(_QWORD *)(a1 + 48) = v15;
    v16 = v15;
    while ( 1 )
    {
      v17 = (__int64)*v12++;
      *v15 = v17;
      *(v16 - 1) = v14;
      if ( v11 == v12 )
        break;
      if ( *(v16 - 2) == v14 )
      {
        v19 = (3 * v14 + 1) >> 1;
        v20 = 8 * v19 + 8;
        if ( 8 * v14 + 8 >= (unsigned int)v20 || v14 >= v19 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v24, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v24);
          sub_233E40((__int64)v24);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v21 = (unsigned int *)sub_186B300(v16 - 2, v20);
        v16 = v21 + 2;
        *v21 = v19;
        v22 = v21[1];
        *(_QWORD *)(a1 + 48) = v16;
        v23 = v22;
        v15 = &v16[2 * v22];
        v14 = v23 + 1;
      }
      else
      {
        v18 = v14++;
        v15 = &v16[2 * v18];
      }
    }
    *(_QWORD *)(a1 + 56) = 0;
    do
    {
      result = *v10;
      if ( *v10 )
        ++*((_DWORD *)result + 4);
      ++v10;
    }
    while ( v11 != v10 );
  }
  else
  {
    *(_QWORD *)(a1 + 56) = 0;
  }
  return result;
}

