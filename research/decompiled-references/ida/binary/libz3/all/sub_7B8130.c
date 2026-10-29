_QWORD *__fastcall sub_7B8130(_QWORD *a1, _QWORD *a2)
{
  char **exception; // rbx
  __int64 v3; // rdx
  _QWORD *v5; // rbx
  __int64 v6; // rax
  _QWORD *result; // rax
  unsigned int v8; // r14d
  size_t v9; // rdi
  __int64 v10; // rax
  _QWORD *v11; // rdi
  _DWORD *v12; // rbp
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17[9]; // [rsp+0h] [rbp-48h] BYREF

  v5 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v6 = *((unsigned int *)v5 - 1);
    if ( (_DWORD)v6 == *((_DWORD *)v5 - 2) )
    {
      v8 = (unsigned int)(3 * v6 + 1) >> 1;
      v9 = 8 * v8 + 8;
      if ( 8 * (int)v6 + 8 >= (unsigned int)v9 || (unsigned int)v6 >= v8 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_113C8C(v17, "Overflow encountered when expanding vector", v3);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v17);
        sub_233E40((__int64)v17);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v10 = sub_186B270(v9);
      v11 = (_QWORD *)*a1;
      v12 = (_DWORD *)v10;
      v5 = (_QWORD *)(v10 + 8);
      if ( *a1 )
      {
        v13 = *((unsigned int *)v11 - 1);
        v14 = 0;
        v12[1] = v13;
        v15 = 8 * v13;
        if ( v15 )
        {
          do
          {
            *(_QWORD *)&v12[v14 / 4 + 2] = v11[v14 / 8];
            v14 += 8LL;
          }
          while ( v15 != v14 );
        }
        sub_186B220(v11 - 1);
        result = &v5[v12[1]];
      }
      else
      {
        *(_DWORD *)(v10 + 4) = 0;
        result = (_QWORD *)(v10 + 8);
      }
      *a1 = v5;
      *v12 = v8;
    }
    else
    {
      result = &v5[v6];
    }
  }
  else
  {
    v16 = (_QWORD *)sub_186B270(0x18u);
    v5 = v16 + 1;
    *v16 = 2;
    *a1 = v16 + 1;
    result = v16 + 1;
  }
  *result = *a2;
  ++*((_DWORD *)v5 - 1);
  return result;
}

