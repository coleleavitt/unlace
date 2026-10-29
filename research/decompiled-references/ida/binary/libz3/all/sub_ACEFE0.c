__int64 __fastcall sub_ACEFE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 *v9; // rcx
  __int64 result; // rax
  __int64 *v11; // rdx
  unsigned int v12; // esi
  __int64 v13; // rdi
  __int64 v14; // rdx
  int v15; // esi
  unsigned int v16; // r13d
  unsigned int v17; // eax
  unsigned int *v18; // rax
  char **exception; // rbx
  __int64 v20[11]; // [rsp+10h] [rbp-58h] BYREF

  v3 = a3 + 88;
  v5 = sub_ACDB80(
         a3,
         a3 + 88,
         a2,
         *(_DWORD *)(a1 + 16),
         *(_QWORD *)(a2 + 80 + 8LL * (unsigned int)(*(_DWORD *)(a2 + 20) + ~*(_DWORD *)(a1 + 16))));
  v6 = sub_ACDB80(
         a3,
         v3,
         a2,
         *(_DWORD *)(a1 + 20),
         *(_QWORD *)(a2 + 80 + 8LL * (unsigned int)(*(_DWORD *)(a2 + 20) + ~*(_DWORD *)(a1 + 20))));
  v7 = v5;
  do
  {
    v8 = v7;
    v7 = *(_QWORD *)(v7 + 8);
  }
  while ( v7 );
  v9 = *(__int64 **)(v8 + 40);
  if ( !v9 )
  {
    result = sub_186B270(0x18u);
    v15 = 1;
    *(_QWORD *)result = 2;
    v9 = (__int64 *)(result + 8);
    *(_QWORD *)(v8 + 40) = result + 8;
    v11 = (__int64 *)(result + 8);
LABEL_19:
    *v11 = v6;
    *((_DWORD *)v9 - 1) = v15;
    goto LABEL_8;
  }
  result = *((unsigned int *)v9 - 1);
  v11 = &v9[result];
  v12 = *((_DWORD *)v9 - 1);
  if ( v9 == v11 )
  {
LABEL_17:
    if ( v12 == *((_DWORD *)v9 - 2) )
    {
      v16 = (3 * v12 + 1) >> 1;
      v17 = 8 * v16 + 8;
      if ( 8 * v12 + 8 >= v17 || v12 >= v16 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v20, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v20);
        sub_233E40((__int64)v20);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v18 = (unsigned int *)sub_186B300(v9 - 1, v17);
      v9 = (__int64 *)(v18 + 2);
      *(_QWORD *)(v8 + 40) = v18 + 2;
      *v18 = v16;
      result = v18[1];
      v11 = &v9[result];
      v15 = result + 1;
    }
    else
    {
      v15 = v12 + 1;
    }
    goto LABEL_19;
  }
  result = *(_QWORD *)(v8 + 40);
  while ( *(_QWORD *)result != v6 )
  {
    result += 8;
    if ( (__int64 *)result == v11 )
      goto LABEL_17;
  }
LABEL_8:
  if ( v6 != v5 )
  {
    v20[0] = v5;
    do
    {
      v13 = v6;
      v6 = *(_QWORD *)(v6 + 8);
    }
    while ( v6 );
    result = *(_QWORD *)(v13 + 40);
    if ( result && (v14 = result + 8LL * *(unsigned int *)(result - 4), result != v14) )
    {
      while ( v5 != *(_QWORD *)result )
      {
        result += 8;
        if ( v14 == result )
          return sub_AC8580((_QWORD *)(v13 + 40), v20);
      }
    }
    else
    {
      return sub_AC8580((_QWORD *)(v13 + 40), v20);
    }
  }
  return result;
}

