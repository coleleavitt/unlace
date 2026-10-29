__int64 __fastcall sub_BD4400(__int64 a1, unsigned int a2, int a3)
{
  _QWORD *v5; // rdx
  __int64 result; // rax
  unsigned int v7; // r13d
  size_t v8; // rsi
  unsigned int *v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rax
  _DWORD *v12; // rax
  char **exception; // rbx
  __int64 v14; // rdx
  unsigned int v15; // [rsp+Ch] [rbp-4Ch] BYREF
  __int64 v16[9]; // [rsp+10h] [rbp-48h] BYREF

  v5 = *(_QWORD **)(a1 + 32);
  v15 = a2;
  if ( v5 )
    goto LABEL_5;
  v11 = (_QWORD *)sub_186B270(0x10u);
  v5 = v11 + 1;
  *v11 = 2;
  *(_QWORD *)(a1 + 32) = v11 + 1;
  v12 = v11 + 1;
  while ( 1 )
  {
    *v12 = 0;
    ++*((_DWORD *)v5 - 1);
LABEL_5:
    result = *((unsigned int *)v5 - 1);
    if ( a2 < (unsigned int)result )
      break;
    if ( (_DWORD)result == *((_DWORD *)v5 - 2) )
    {
      v7 = (unsigned int)(3 * result + 1) >> 1;
      v8 = 4 * v7 + 8;
      if ( 4 * (int)result + 8 >= (unsigned int)v8 || (unsigned int)result >= v7 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_154526(v16, "Overflow encountered when expanding vector", v14);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v16);
        sub_233E40((__int64)v16);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v9 = (unsigned int *)sub_186B300(v5 - 1, v8);
      v5 = v9 + 2;
      *v9 = v7;
      v10 = v9[1];
      *(_QWORD *)(a1 + 32) = v5;
      v12 = (_DWORD *)v5 + v10;
    }
    else
    {
      v12 = (_DWORD *)v5 + result;
    }
  }
  if ( a2 < *(_DWORD *)(a1 + 4) )
  {
    sub_BB7E40((_QWORD *)(a1 + 40), &v15);
    result = sub_BB7E40((_QWORD *)(a1 + 48), (unsigned int *)(4LL * a2 + *(_QWORD *)(a1 + 32)));
    v5 = *(_QWORD **)(a1 + 32);
  }
  *((_DWORD *)v5 + a2) = a3;
  return result;
}

