_QWORD *__fastcall sub_91D850(_QWORD *a1, _QWORD *a2)
{
  char **exception; // rbx
  _QWORD *v4; // rbx
  __int64 v5; // rax
  _QWORD *result; // rax
  unsigned int v7; // r14d
  size_t v8; // rdi
  __int64 v9; // rax
  _QWORD *v10; // rdi
  _DWORD *v11; // rbp
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16[9]; // [rsp+0h] [rbp-48h] BYREF

  v4 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v5 = *((unsigned int *)v4 - 1);
    if ( (_DWORD)v5 == *((_DWORD *)v4 - 2) )
    {
      v7 = (unsigned int)(3 * v5 + 1) >> 1;
      v8 = 8 * v7 + 8;
      if ( 8 * (int)v5 + 8 >= (unsigned int)v8 || (unsigned int)v5 >= v7 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_91CD50(v16, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v16);
        sub_233E40((__int64)v16);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v9 = sub_186B270(v8);
      v10 = (_QWORD *)*a1;
      v11 = (_DWORD *)v9;
      v4 = (_QWORD *)(v9 + 8);
      if ( *a1 )
      {
        v12 = *((unsigned int *)v10 - 1);
        v13 = 0;
        v11[1] = v12;
        v14 = 8 * v12;
        if ( v14 )
        {
          do
          {
            *(_QWORD *)&v11[v13 / 4 + 2] = v10[v13 / 8];
            v13 += 8LL;
          }
          while ( v14 != v13 );
        }
        sub_186B220(v10 - 1);
        result = &v4[v11[1]];
      }
      else
      {
        *(_DWORD *)(v9 + 4) = 0;
        result = (_QWORD *)(v9 + 8);
      }
      *a1 = v4;
      *v11 = v7;
    }
    else
    {
      result = &v4[v5];
    }
  }
  else
  {
    v15 = (_QWORD *)sub_186B270(0x18u);
    v4 = v15 + 1;
    *v15 = 2;
    *a1 = v15 + 1;
    result = v15 + 1;
  }
  *result = *a2;
  ++*((_DWORD *)v4 - 1);
  return result;
}

