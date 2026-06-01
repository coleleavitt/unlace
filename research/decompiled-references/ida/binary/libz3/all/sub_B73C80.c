__int64 __fastcall sub_B73C80(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  __int64 result; // rax
  __int64 v5; // rbx
  _QWORD *v6; // r12
  _QWORD *v7; // rdx
  int v8; // r14d
  __int64 v9; // rax
  unsigned int v10; // r13d
  size_t v11; // rsi
  unsigned int *v12; // rax
  _DWORD *v13; // rdx
  _QWORD *v14; // rax
  __int64 v15[11]; // [rsp+2h] [rbp-58h] BYREF

  result = *(unsigned int *)(a1 + 12);
  if ( (_DWORD)result )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = *(_QWORD **)(a2 + 176);
      v7 = (_QWORD *)*v6;
      v8 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4 * v5);
      if ( !*v6 )
        break;
      v9 = *((unsigned int *)v7 - 1);
      if ( (_DWORD)v9 == *((_DWORD *)v7 - 2) )
      {
        v10 = (unsigned int)(3 * v9 + 1) >> 1;
        v11 = 4 * v10 + 8;
        if ( 4 * (int)v9 + 8 >= (unsigned int)v11 || (unsigned int)v9 >= v10 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v15, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v15);
          sub_233E40((__int64)v15);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        ++v5;
        v12 = (unsigned int *)sub_186B300(v7 - 1, v11);
        v13 = v12 + 2;
        *v6 = v12 + 2;
        *v12 = v10;
        result = (__int64)&v12[v12[1] + 2];
        *(_DWORD *)result = v8;
        ++*(v13 - 1);
        if ( (unsigned int)v5 >= *(_DWORD *)(a1 + 12) )
          return result;
      }
      else
      {
        result = (__int64)v7 + 4 * v9;
LABEL_4:
        *(_DWORD *)result = v8;
        ++v5;
        ++*((_DWORD *)v7 - 1);
        if ( (unsigned int)v5 >= *(_DWORD *)(a1 + 12) )
          return result;
      }
    }
    v14 = (_QWORD *)sub_186B270(0x10u);
    v7 = v14 + 1;
    *v14 = 2;
    *v6 = v14 + 1;
    result = (__int64)(v14 + 1);
    goto LABEL_4;
  }
  return result;
}

