double __fastcall sub_4D3FC0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdx
  __int64 v5; // rdi
  double result; // xmm0_8
  __int64 v7; // rdi
  void (__fastcall ***v8)(void *); // rbp
  void (__fastcall *v9)(void *); // rdx
  void (__fastcall *v10)(void *); // rax

  v3 = a1[9];
  if ( v3 )
  {
    if ( (*(_DWORD *)(v3 + 8))-- == 1 )
    {
      v8 = (void (__fastcall ***)(void *))a1[9];
      v9 = **v8;
      if ( v9 == refcnted_regex_t__::vfunc_0 )
      {
        if ( v8 )
        {
          v10 = (*v8)[2];
          if ( (char *)v10 == (char *)refcnted_regex_t__::vfunc_2 )
          {
            *v8 = (void (__fastcall **)(void *))&refcnted_regex_t___vtable;
            qregfree(v8 + 2);
            a2 = (const char *)&dword_30;
            operator delete(v8, 0x30u);
          }
          else
          {
            v10((void *)a1[9]);
          }
        }
      }
      else
      {
        v9((void *)a1[9]);
      }
    }
  }
  v5 = a1[5];
  if ( v5 )
  {
    a1[6] = 0;
    result = qfree(v5, a2);
  }
  v7 = a1[1];
  if ( v7 )
  {
    a1[2] = 0;
    return qfree(v7, a2);
  }
  return result;
}
