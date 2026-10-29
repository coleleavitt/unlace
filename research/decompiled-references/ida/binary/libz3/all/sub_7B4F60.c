__int64 __fastcall sub_7B4F60(_QWORD *a1, unsigned int *a2)
{
  char **exception; // rbx
  __int64 v3; // rdx
  _QWORD *v6; // rdi
  __int64 v7; // rax
  _DWORD *v8; // rdx
  __int64 result; // rax
  unsigned int v10; // ebp
  size_t v11; // rsi
  unsigned int *v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15[7]; // [rsp+0h] [rbp-38h] BYREF

  v6 = (_QWORD *)*a1;
  if ( v6 )
  {
    v7 = *((unsigned int *)v6 - 1);
    v8 = (_DWORD *)v6 + v7;
    if ( (_DWORD)v7 == *((_DWORD *)v6 - 2) )
    {
      v10 = (unsigned int)(3 * v7 + 1) >> 1;
      v11 = 4 * v10 + 8;
      if ( 4 * (int)v7 + 8 >= (unsigned int)v11 || (unsigned int)v7 >= v10 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_113C8C(v15, "Overflow encountered when expanding vector", v3);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v15);
        sub_233E40((__int64)v15);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v12 = (unsigned int *)sub_186B300(v6 - 1, v11);
      v6 = v12 + 2;
      *v12 = v10;
      v13 = v12[1];
      *a1 = v6;
      v8 = (_DWORD *)v6 + v13;
    }
  }
  else
  {
    v14 = (_QWORD *)sub_186B270(0x10u);
    v6 = v14 + 1;
    *v14 = 2;
    *a1 = v14 + 1;
    v8 = v14 + 1;
  }
  result = *a2;
  *v8 = result;
  ++*((_DWORD *)v6 - 1);
  return result;
}

