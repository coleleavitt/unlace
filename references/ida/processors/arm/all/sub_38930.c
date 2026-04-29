void __fastcall sub_38930(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  __int64 i; // r15
  void (__fastcall ****v5)(void *); // rbx
  __int64 v6; // rdi
  void (__fastcall ***v7)(void *); // rdx
  void (__fastcall ***v9)(void *); // rbx
  void (__fastcall *v10)(void *); // rdx
  void (__fastcall *v11)(void *); // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (void (__fastcall ****)(void *))(v2 + 32 * i);
        v6 = (__int64)v5[1];
        if ( v6 )
        {
          v5[2] = 0;
          qfree(v6);
        }
        v7 = *v5;
        if ( *v5 )
        {
          if ( (*((_DWORD *)v7 + 2))-- == 1 )
          {
            v9 = *v5;
            v10 = **v9;
            if ( v10 == sub_387B0 )
            {
              if ( v9 )
              {
                v11 = (*v9)[2];
                if ( (char *)v11 == (char *)sub_38540 )
                {
                  *v9 = (void (__fastcall **)(void *))&off_A0628;
                  qregfree();
                  operator delete(v9, 0x30u);
                }
                else
                {
                  v11(v9);
                }
              }
            }
            else
            {
              v10(v9);
            }
          }
        }
        v2 = *a1;
      }
    }
    a1[1] = 0;
    qfree(v2);
  }
}
