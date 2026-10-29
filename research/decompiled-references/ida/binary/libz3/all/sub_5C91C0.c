__int64 __fastcall sub_5C91C0(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  unsigned int v4; // ebx
  _QWORD *v5; // rdx
  __int64 v6; // r12
  unsigned int v7; // r14d
  size_t v8; // rsi
  unsigned int *v9; // rax
  unsigned int v10; // ecx
  __int64 v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rdx
  _QWORD *v14; // rax
  __int64 result; // rax
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = sub_648530(*(_QWORD *)(a1 + 8) + 672LL, a2) + 1;
  sub_FA3BF0(a1 + 16);
  if ( *(_DWORD *)(a1 + 32) )
  {
    if ( *(_DWORD *)(a1 + 36) >= v4 )
      goto LABEL_17;
    v5 = *(_QWORD **)(a1 + 24);
    if ( v5 )
    {
LABEL_4:
      v6 = *((unsigned int *)v5 - 1);
      if ( (unsigned int)v6 >= v4 )
      {
        *((_DWORD *)v5 - 1) = v4;
        *(_DWORD *)(a1 + 36) = v4;
        *(_DWORD *)(a1 + 32) = 1;
        goto LABEL_17;
      }
      goto LABEL_9;
    }
    goto LABEL_21;
  }
  v5 = *(_QWORD **)(a1 + 24);
  if ( v5 )
    goto LABEL_4;
  if ( v4 )
  {
LABEL_21:
    v6 = 0;
    v16 = (_QWORD *)sub_186B270(0x38u);
    v5 = v16 + 1;
    *v16 = 2;
    *(_QWORD *)(a1 + 24) = v16 + 1;
LABEL_9:
    while ( 1 )
    {
      v10 = *((_DWORD *)v5 - 2);
      if ( v10 >= v4 )
        break;
      v7 = (3 * v10 + 1) >> 1;
      v8 = 8 * (v7 + ((3 * v10 + 1) & 0xFFFFFFFE)) + 8;
      if ( 24 * v10 + 8 >= (unsigned int)v8 || v10 >= v7 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v18, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v18);
        sub_233E40((__int64)v18);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v9 = (unsigned int *)sub_186B300(v5 - 1, v8);
      v5 = v9 + 2;
      *v9 = v7;
      *(_QWORD *)(a1 + 24) = v9 + 2;
    }
    *((_DWORD *)v5 - 1) = v4;
    v11 = 3LL * v4;
    v12 = &v5[3 * v6];
    v13 = &v5[v11];
    if ( 3 * v6 != v11 )
    {
      v14 = v12;
      do
      {
        *v14 = 0;
        v14 += 3;
        *((_DWORD *)v14 - 2) = 0;
      }
      while ( v13 != v14 );
      if ( (((_BYTE)v13 - (_BYTE)v12) & 8) == 0 || (*((_DWORD *)v12 + 2) = 0, v12 += 3, v13 != v12) )
      {
        do
        {
          *((_DWORD *)v12 + 2) = 0;
          v12 += 6;
          *((_DWORD *)v12 - 4) = 0;
        }
        while ( v13 != v12 );
      }
    }
  }
  *(_DWORD *)(a1 + 36) = v4;
  *(_DWORD *)(a1 + 32) = 1;
LABEL_17:
  result = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
  *(_DWORD *)(a1 + 40) = result;
  if ( (_DWORD)result == -1 )
  {
    result = *(_QWORD *)(a1 + 24);
    if ( result )
    {
      v17 = result + 24LL * *(unsigned int *)(result - 4);
      if ( result != v17 )
      {
        if ( ((24 * (unsigned __int8)*(_DWORD *)(result - 4)) & 8) == 0
          || (*(_DWORD *)(result + 16) = 0, result += 24, v17 != result) )
        {
          do
          {
            *(_DWORD *)(result + 16) = 0;
            result += 48;
            *(_DWORD *)(result - 8) = 0;
          }
          while ( v17 != result );
        }
      }
    }
    *(_DWORD *)(a1 + 40) = 1;
  }
  *(_QWORD *)(a1 + 248) = a2;
  return result;
}

