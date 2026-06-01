char __fastcall sub_CCEE60(__int64 a1, __int64 a2, __int64 a3)
{
  char **exception; // rbx
  __int64 v4; // rdx
  char result; // al
  char v9; // r10
  __int64 v10; // rax
  int v11; // r13d
  _QWORD *v12; // rdi
  __int64 v13; // rax
  _DWORD *v14; // rax
  unsigned int v15; // r14d
  size_t v16; // rsi
  unsigned int *v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20[9]; // [rsp+0h] [rbp-48h] BYREF

  result = sub_CCE850(a1, a2);
  if ( result )
  {
    if ( v9 )
    {
      v10 = *(_QWORD *)(a1 + 56);
      if ( v10 )
        v11 = *(_DWORD *)(v10 - 4);
      else
        v11 = 0;
      v12 = *(_QWORD **)(a1 + 64);
      if ( v12 )
      {
        v13 = *((unsigned int *)v12 - 1);
        if ( (_DWORD)v13 == *((_DWORD *)v12 - 2) )
        {
          v15 = (unsigned int)(3 * v13 + 1) >> 1;
          v16 = 4 * v15 + 8;
          if ( 4 * (int)v13 + 8 >= (unsigned int)v16 || (unsigned int)v13 >= v15 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_163D96(v20, "Overflow encountered when expanding vector", v4);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v20);
            sub_233E40((__int64)v20);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v17 = (unsigned int *)sub_186B300(v12 - 1, v16);
          v12 = v17 + 2;
          *v17 = v15;
          v18 = v17[1];
          *(_QWORD *)(a1 + 64) = v12;
          v14 = (_DWORD *)v12 + v18;
        }
        else
        {
          v14 = (_DWORD *)v12 + v13;
        }
      }
      else
      {
        v19 = (_QWORD *)sub_186B270(0x10u);
        v12 = v19 + 1;
        *v19 = 2;
        *(_QWORD *)(a1 + 64) = v19 + 1;
        v14 = v19 + 1;
      }
      *v14 = v11;
      ++*((_DWORD *)v12 - 1);
    }
    return sub_CCE960(a1, a2, a3);
  }
  return result;
}

