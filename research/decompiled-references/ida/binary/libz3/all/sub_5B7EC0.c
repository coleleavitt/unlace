unsigned __int64 __fastcall sub_5B7EC0(unsigned __int64 *a1, __int64 a2, __int64 *a3)
{
  char **exception; // rbx
  unsigned __int64 result; // rax
  __int64 v5; // r15
  __int64 v6; // r13
  int v8; // r12d
  unsigned int v9; // edx
  unsigned int v10; // edx
  __int64 v11; // rdx
  unsigned int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rsi
  _QWORD *v15; // rax
  unsigned int v16; // r14d
  size_t v17; // rsi
  unsigned int *v18; // rdx
  __int64 v19[11]; // [rsp+2h] [rbp-58h] BYREF

  result = *(unsigned int *)(a2 + 24);
  if ( (_DWORD)result )
  {
    v5 = a2 + 8 * result;
    v6 = a2;
    result = *a1;
    do
    {
      v11 = *(_QWORD *)(v6 + 32);
      if ( *(_WORD *)(v11 + 4) != 1
        || (v12 = *(_DWORD *)(v11 + 16), v13 = *a3, v14 = v12 >> 5, *a3)
        && (unsigned int)v14 < *(_DWORD *)(v13 - 4)
        && (*(_DWORD *)(v13 + 4 * v14) & (1 << v12)) != 0 )
      {
        v8 = 1;
        if ( result )
          goto LABEL_4;
      }
      else
      {
        v8 = 0;
        if ( result )
        {
LABEL_4:
          v9 = *(_DWORD *)(result - 8);
          if ( *(_DWORD *)(result - 4) == v9 )
          {
            v16 = (3 * v9 + 1) >> 1;
            v17 = 4 * v16 + 8;
            if ( 4 * v9 + 8 >= (unsigned int)v17 || v9 >= v16 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v19, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v19);
              sub_233E40((__int64)v19);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v18 = (unsigned int *)sub_186B300((void *)(result - 8), v17);
            result = (unsigned __int64)(v18 + 2);
            *a1 = (unsigned __int64)(v18 + 2);
            *v18 = v16;
          }
          goto LABEL_5;
        }
      }
      v15 = (_QWORD *)sub_186B270(0x10u);
      *v15 = 2;
      result = (unsigned __int64)(v15 + 1);
      *a1 = result;
LABEL_5:
      v6 += 8;
      v10 = *(_DWORD *)(result - 4);
      *(_DWORD *)(result + 4LL * v10) = v8;
      *(_DWORD *)(result - 4) = v10 + 1;
    }
    while ( v5 != v6 );
  }
  return result;
}

