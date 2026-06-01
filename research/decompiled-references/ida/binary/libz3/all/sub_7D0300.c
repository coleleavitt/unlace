__int64 __fastcall sub_7D0300(__int64 a1, __int64 a2, __int64 a3, unsigned int **a4)
{
  char **exception; // rbx
  __int64 v5; // rdx
  __int64 v6; // r13
  __int64 v8; // rax
  size_t v9; // rsi
  unsigned int v10; // r14d
  __int64 i; // rax
  __int64 v12; // rdx
  unsigned int v14; // ebx
  unsigned int *v15; // rdx
  unsigned int v16; // ebx
  __int64 v17; // rcx
  unsigned int *v18; // rcx
  unsigned int v19; // r15d
  unsigned int *v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23[11]; // [rsp+0h] [rbp-58h] BYREF

  v6 = a1 + 1592;
  sub_13D4540(a1 + 1592);
  v8 = *(_QWORD *)(a1 + 2336);
  if ( v8 )
    *(_DWORD *)(v8 - 4) = 0;
  v9 = a1 + 2336;
  v10 = 0;
  sub_13DBC80(v6);
  for ( i = *(_QWORD *)(a1 + 2336); i; ++v10 )
  {
    if ( v10 >= *(_DWORD *)(i - 4) )
      break;
    v12 = *(_QWORD *)(i + 8LL * v10);
    if ( (v12 & 7) == 1 )
    {
      v14 = v12;
      v15 = *a4;
      v16 = v14 >> 4;
      if ( *a4 )
      {
        v17 = *(v15 - 1);
        if ( (_DWORD)v17 == *(v15 - 2) )
        {
          v19 = (unsigned int)(3 * v17 + 1) >> 1;
          v9 = 4 * v19 + 8;
          if ( 4 * (int)v17 + 8 >= (unsigned int)v9 || (unsigned int)v17 >= v19 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_116834(v23, "Overflow encountered when expanding vector", v5);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v23);
            sub_233E40((__int64)v23);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v20 = (unsigned int *)sub_186B300(v15 - 2, v9);
          v15 = v20 + 2;
          *v20 = v19;
          v21 = v20[1];
          *a4 = v15;
          v18 = &v15[v21];
          i = *(_QWORD *)(a1 + 2336);
        }
        else
        {
          v18 = &v15[v17];
        }
      }
      else
      {
        v22 = (_QWORD *)sub_186B270(0x10u);
        v15 = (unsigned int *)(v22 + 1);
        *v22 = 2;
        i = *(_QWORD *)(a1 + 2336);
        *a4 = v15;
        v18 = v15;
      }
      *v18 = v16;
      ++*(v15 - 1);
    }
    else
    {
      v9 = 4294967294LL;
      (*(void (__fastcall **)(_QWORD, __int64, unsigned __int64, unsigned int **, __int64))(**(_QWORD **)(v12 & 0xFFFFFFFFFFFFFFF8LL)
                                                                                          + 80LL))(
        *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF8LL),
        4294967294LL,
        v12 & 0xFFFFFFFFFFFFFFF8LL,
        a4,
        1);
      i = *(_QWORD *)(a1 + 2336);
    }
  }
  return sub_13D4550(v6, v9);
}

