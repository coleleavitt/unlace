double __fastcall sub_4E59C0(__int64 *a1, void (__fastcall *a2)(void *a1))
{
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 i; // r15
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  void (__fastcall ***v9)(void *); // r14
  void (__fastcall *v10)(void *); // rcx
  __int64 v11; // rdi
  __int64 v12; // rdi
  double result; // xmm0_8

  v3 = *a1;
  if ( v3 )
  {
    v4 = a1[1];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (_QWORD *)(v3 + 80 * i);
        v7 = v6[9];
        if ( v7 )
        {
          if ( (*(_DWORD *)(v7 + 8))-- == 1 )
          {
            v9 = (void (__fastcall ***)(void *))v6[9];
            a2 = **v9;
            if ( a2 == refcnted_regex_t__::vfunc_0 )
            {
              if ( v9 )
              {
                v10 = (*v9)[2];
                if ( (char *)v10 == (char *)refcnted_regex_t__::vfunc_2 )
                {
                  *v9 = (void (__fastcall **)(void *))&refcnted_regex_t___vtable;
                  qregfree(v9 + 2);
                  a2 = (void (__fastcall *)(void *))&dword_30;
                  operator delete(v9, 0x30u);
                }
                else
                {
                  v10((void *)v6[9]);
                }
              }
            }
            else
            {
              a2((void *)v6[9]);
            }
          }
        }
        v11 = v6[5];
        if ( v11 )
        {
          v6[6] = 0;
          qfree(v11, (const char *)a2);
        }
        v12 = v6[1];
        if ( v12 )
        {
          v6[2] = 0;
          qfree(v12, (const char *)a2);
        }
        v3 = *a1;
      }
    }
    a1[1] = 0;
    return qfree(v3, (const char *)a2);
  }
  return result;
}
