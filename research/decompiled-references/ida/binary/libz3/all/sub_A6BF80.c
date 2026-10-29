__int64 __fastcall sub_A6BF80(__int64 a1, __m128 a2)
{
  __int64 result; // rax
  __int64 v3; // r12
  size_t v4; // rsi
  int v5; // r13d
  __int64 v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // rbp
  unsigned int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 *v12; // rcx
  unsigned int v13; // r13d
  unsigned int *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  char **exception; // rbx
  __int64 v18[9]; // [rsp+0h] [rbp-48h] BYREF

  if ( !(unsigned __int8)sub_A65790(a1, *(double *)a2.m128_u64) || (unsigned __int8)sub_9CEFC0(a1) )
    return 1;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = 24;
  v5 = *(_DWORD *)(a1 + 936);
  v6 = sub_180C100(v3 + 8400, 24);
  v7 = *(_QWORD **)(v3 + 9456);
  v8 = v6;
  *(_QWORD *)v6 = &off_1C4C070;
  *(_QWORD *)(v6 + 8) = a1 + 936;
  *(_DWORD *)(v6 + 16) = v5;
  if ( v7 )
  {
    v9 = *((_DWORD *)v7 - 1);
    if ( v9 == *((_DWORD *)v7 - 2) )
    {
      v13 = (3 * v9 + 1) >> 1;
      v4 = 8 * v13 + 8;
      if ( 8 * v9 + 8 >= (unsigned int)v4 || v9 >= v13 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_98B3B0(v18, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v18);
        sub_233E40((__int64)v18);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v14 = (unsigned int *)sub_186B300(v7 - 1, v4);
      v15 = v14[1];
      v7 = v14 + 2;
      *(_QWORD *)(v3 + 9456) = v14 + 2;
      *v14 = v13;
      LODWORD(v14) = v15;
      v12 = &v7[v15];
      v11 = (_DWORD)v14 + 1;
    }
    else
    {
      v10 = v9;
      v11 = v9 + 1;
      v12 = &v7[v10];
    }
  }
  else
  {
    v16 = (_QWORD *)sub_186B270(0x18u);
    v7 = v16 + 1;
    *v16 = 2;
    v11 = 1;
    *(_QWORD *)(v3 + 9456) = v7;
    v12 = v7;
  }
  *v12 = v8;
  *((_DWORD *)v7 - 1) = v11;
  *(_WORD *)(a1 + 1184) = 1;
  result = sub_A6BE10(a1, v4, a2);
  if ( !(_DWORD)result )
  {
    if ( *(_BYTE *)(a1 + 1185) )
    {
      *(_WORD *)(a1 + 1184) = 0;
      return sub_A6BE10(a1, v4, a2);
    }
  }
  return result;
}

