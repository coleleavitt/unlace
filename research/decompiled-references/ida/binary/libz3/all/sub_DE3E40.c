__int64 __fastcall sub_DE3E40(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 *a5,
        __int64 *a6,
        unsigned int a7,
        __int64 *a8)
{
  char **exception; // rbx
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 *v12; // rbx
  __int64 *v13; // r13
  __int64 *v14; // rbp
  _QWORD *v15; // rax
  unsigned int v16; // edx
  _QWORD *v17; // rax
  _DWORD *v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rax
  unsigned int v21; // r14d
  size_t v22; // rsi
  unsigned int *v23; // rax
  __int64 v24; // rax
  int v25; // edx
  __int64 v26[9]; // [rsp+10h] [rbp-48h] BYREF

  *(_DWORD *)(a1 + 12) = a3;
  v9 = *a5;
  *(_DWORD *)(a1 + 8) = a2;
  result = a7;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = v9;
  v11 = *a6;
  *(_QWORD *)a1 = off_1C5ADF8;
  *(_QWORD *)(a1 + 32) = v11;
  *(_QWORD *)(a1 + 40) = 0;
  if ( a7 )
  {
    v12 = a8;
    v13 = &a8[a7];
    v14 = a8;
    v15 = (_QWORD *)sub_186B270(0x18u);
    v16 = 1;
    *v15 = 2;
    v17 = v15 + 1;
    *(_QWORD *)(a1 + 40) = v17;
    v18 = v17;
    while ( 1 )
    {
      v19 = *v14++;
      *v17 = v19;
      *(v18 - 1) = v16;
      if ( v13 == v14 )
        break;
      if ( *(v18 - 2) == v16 )
      {
        v21 = (3 * v16 + 1) >> 1;
        v22 = 8 * v21 + 8;
        if ( 8 * v16 + 8 >= (unsigned int)v22 || v16 >= v21 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v26, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v26);
          sub_233E40((__int64)v26);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v23 = (unsigned int *)sub_186B300(v18 - 2, v22);
        v18 = v23 + 2;
        *v23 = v21;
        v24 = v23[1];
        *(_QWORD *)(a1 + 40) = v18;
        v25 = v24;
        v17 = &v18[2 * v24];
        v16 = v25 + 1;
      }
      else
      {
        v20 = v16++;
        v17 = &v18[2 * v20];
      }
    }
    do
    {
      result = *v12;
      if ( *v12 )
        ++*(_DWORD *)(result + 16);
      ++v12;
    }
    while ( v13 != v12 );
  }
  return result;
}

