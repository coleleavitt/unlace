__int64 __fastcall sub_394DB0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  _QWORD *v5; // rdx
  unsigned int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  unsigned int *v9; // rsi
  unsigned int v10; // r12d
  size_t v11; // rsi
  unsigned int *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  char **exception; // rbx
  __int64 v16[7]; // [rsp+10h] [rbp-38h] BYREF

  if ( *(_DWORD *)(a1 + 32) )
  {
    v5 = *(_QWORD **)(a1 + 56);
    if ( v5 )
    {
      v6 = *((_DWORD *)v5 - 1);
      if ( v6 == *((_DWORD *)v5 - 2) )
      {
        v10 = (3 * v6 + 1) >> 1;
        v11 = 8 * v10 + 8;
        if ( 8 * v6 + 8 >= (unsigned int)v11 || v6 >= v10 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v16, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v16);
          sub_233E40((__int64)v16);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v12 = (unsigned int *)sub_186B300(v5 - 1, v11);
        v13 = v12[1];
        v5 = v12 + 2;
        *v12 = v10;
        *(_QWORD *)(a1 + 56) = v12 + 2;
        v9 = &v12[2 * v13 + 2];
        v8 = v13 + 1;
      }
      else
      {
        v7 = v6;
        v8 = v6 + 1;
        v9 = (unsigned int *)&v5[v7];
      }
    }
    else
    {
      v14 = (_QWORD *)sub_186B270(0x18u);
      v5 = v14 + 1;
      *v14 = 2;
      v8 = 1;
      *(_QWORD *)(a1 + 56) = v5;
      v9 = (unsigned int *)v5;
    }
    *(_QWORD *)v9 = *a3;
    *((_DWORD *)v5 - 1) = v8;
    result = (unsigned int)(*(_DWORD *)(a1 + 32) + 1);
    *(_DWORD *)(a1 + 32) = result;
  }
  else
  {
    *(_QWORD *)(a1 + 40) = *a3;
    *(_DWORD *)(a1 + 32) = 1;
    return 1;
  }
  return result;
}

