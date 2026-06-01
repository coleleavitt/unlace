_QWORD *__fastcall sub_9CDE10(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rdx
  __int64 v4; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rax
  _QWORD *result; // rax
  _QWORD *v8; // rax
  unsigned int v9; // ebp
  size_t v10; // rsi
  unsigned int *v11; // rax
  __int64 v12; // rax
  char **exception; // rbx
  __int64 v14[7]; // [rsp+0h] [rbp-38h] BYREF

  v2 = *(unsigned int *)(a1 + 12);
  ++*(_DWORD *)(a1 + 8);
  v3 = *(_QWORD **)a1;
  if ( (_DWORD)v2 == -1 )
  {
    if ( v3 )
    {
      *a2 = *((_DWORD *)v3 - 1);
      v4 = *((unsigned int *)v3 - 1);
      v5 = &v3[v4];
      if ( (_DWORD)v4 == *((_DWORD *)v3 - 2) )
      {
        v9 = (unsigned int)(3 * v4 + 1) >> 1;
        v10 = 8 * v9 + 8;
        if ( 8 * (int)v4 + 8 >= (unsigned int)v10 || (unsigned int)v4 >= v9 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_98B3B0(v14, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v14);
          sub_233E40((__int64)v14);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v11 = (unsigned int *)sub_186B300(v3 - 1, v10);
        v3 = v11 + 2;
        *v11 = v9;
        v12 = v11[1];
        *(_QWORD *)a1 = v3;
        v5 = &v3[v12];
      }
    }
    else
    {
      *a2 = 0;
      v8 = (_QWORD *)sub_186B270(0x18u);
      v3 = v8 + 1;
      *v8 = 2;
      *(_QWORD *)a1 = v8 + 1;
      v5 = v8 + 1;
    }
    *v5 = 0;
    v6 = *((unsigned int *)v3 - 1);
    *((_DWORD *)v3 - 1) = v6 + 1;
    return &v3[v6];
  }
  else
  {
    *a2 = v2;
    result = &v3[v2];
    *(_DWORD *)(a1 + 12) = *((_DWORD *)result + 1);
  }
  return result;
}

