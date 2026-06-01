_DWORD *__fastcall sub_B46250(__int64 a1)
{
  char **exception; // rbx
  _DWORD *result; // rax
  __int64 v4; // rax
  int v5; // r12d
  _QWORD *v6; // rdi
  __int64 v7; // rax
  unsigned int v8; // ebp
  size_t v9; // rsi
  unsigned int *v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 v13[7]; // [rsp+10h] [rbp-38h] BYREF

  result = (_DWORD *)sub_965DE0(a1);
  if ( !(_BYTE)result )
  {
    sub_966D90(a1);
    sub_180C250(a1 + 312);
    v4 = *(_QWORD *)(a1 + 296);
    if ( v4 )
      v5 = *(_DWORD *)(v4 - 4);
    else
      v5 = 0;
    v6 = *(_QWORD **)(a1 + 304);
    if ( v6 )
    {
      v7 = *((unsigned int *)v6 - 1);
      if ( (_DWORD)v7 == *((_DWORD *)v6 - 2) )
      {
        v8 = (unsigned int)(3 * v7 + 1) >> 1;
        v9 = 4 * v8 + 8;
        if ( 4 * (int)v7 + 8 >= (unsigned int)v9 || (unsigned int)v7 >= v8 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v13, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v13);
          sub_233E40((__int64)v13);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v10 = (unsigned int *)sub_186B300(v6 - 1, v9);
        v6 = v10 + 2;
        *v10 = v8;
        v11 = v10[1];
        *(_QWORD *)(a1 + 304) = v6;
        result = (_DWORD *)v6 + v11;
      }
      else
      {
        result = (_DWORD *)v6 + v7;
      }
    }
    else
    {
      v12 = (_QWORD *)sub_186B270(0x10u);
      v6 = v12 + 1;
      *v12 = 2;
      *(_QWORD *)(a1 + 304) = v12 + 1;
      result = v12 + 1;
    }
    *result = v5;
    ++*((_DWORD *)v6 - 1);
  }
  return result;
}

