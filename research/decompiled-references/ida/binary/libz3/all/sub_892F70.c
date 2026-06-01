_QWORD *__fastcall sub_892F70(_QWORD *a1, _DWORD *a2)
{
  char **exception; // rbx
  __int64 v3; // rdx
  _QWORD *v4; // rdx
  __int64 v5; // rax
  _QWORD *v6; // rcx
  __int64 v7; // rax
  int v8; // ecx
  unsigned int v10; // ebp
  size_t v11; // rsi
  unsigned int *v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15[7]; // [rsp+0h] [rbp-38h] BYREF

  v4 = (_QWORD *)*a1;
  if ( *a1 )
  {
    *a2 = *((_DWORD *)v4 - 1);
    v5 = *((unsigned int *)v4 - 1);
    v6 = &v4[v5];
    if ( (_DWORD)v5 == *((_DWORD *)v4 - 2) )
    {
      v10 = (unsigned int)(3 * v5 + 1) >> 1;
      v11 = 8 * v10 + 8;
      if ( 8 * (int)v5 + 8 >= (unsigned int)v11 || (unsigned int)v5 >= v10 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_12D192(v15, "Overflow encountered when expanding vector", v3);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v15);
        sub_233E40((__int64)v15);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v12 = (unsigned int *)sub_186B300(v4 - 1, v11);
      v4 = v12 + 2;
      *v12 = v10;
      v13 = v12[1];
      *a1 = v4;
      v6 = &v4[v13];
    }
  }
  else
  {
    *a2 = 0;
    v14 = (_QWORD *)sub_186B270(0x18u);
    v4 = v14 + 1;
    *v14 = 2;
    *a1 = v14 + 1;
    v6 = v14 + 1;
  }
  *v6 = 0;
  v7 = *((unsigned int *)v4 - 1);
  v8 = v7 + 1;
  *((_DWORD *)v4 - 1) = v8;
  return &v4[v7];
}

