__int64 __fastcall sub_E66670(_QWORD *a1, _QWORD *a2)
{
  char **exception; // rbx
  _QWORD *v4; // rdx
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 result; // rax
  unsigned int *v8; // rsi
  unsigned int v9; // ebx
  size_t v10; // rsi
  unsigned int *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14[7]; // [rsp+0h] [rbp-38h] BYREF

  v4 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v5 = *((_DWORD *)v4 - 1);
    if ( v5 == *((_DWORD *)v4 - 2) )
    {
      v9 = (3 * v5 + 1) >> 1;
      v10 = 8 * v9 + 8;
      if ( 8 * v5 + 8 >= (unsigned int)v10 || v5 >= v9 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_E65BE0(v14, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v14);
        sub_233E40((__int64)v14);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v11 = (unsigned int *)sub_186B300(v4 - 1, v10);
      v12 = v11[1];
      v4 = v11 + 2;
      *v11 = v9;
      *a1 = v11 + 2;
      v8 = &v11[2 * v12 + 2];
      result = (unsigned int)(v12 + 1);
    }
    else
    {
      v6 = v5;
      result = v5 + 1;
      v8 = (unsigned int *)&v4[v6];
    }
  }
  else
  {
    v13 = (_QWORD *)sub_186B270(0x18u);
    v4 = v13 + 1;
    *v13 = 2;
    result = 1;
    *a1 = v4;
    v8 = (unsigned int *)v4;
  }
  *(_QWORD *)v8 = *a2;
  *((_DWORD *)v4 - 1) = result;
  return result;
}

