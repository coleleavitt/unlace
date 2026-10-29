__int64 __fastcall sub_181490(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r12
  __int64 i; // r15
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  void (__fastcall ***v8)(void *); // r14
  void (__fastcall *v9)(void *); // rsi
  void (__fastcall *v10)(void *); // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + 80 * i);
        v6 = v5[9];
        if ( v6 )
        {
          if ( (*(_DWORD *)(v6 + 8))-- == 1 )
          {
            v8 = (void (__fastcall ***)(void *))v5[9];
            v9 = **v8;
            if ( v9 == sub_17EC30 )
            {
              if ( v8 )
              {
                v10 = (*v8)[2];
                if ( (char *)v10 == (char *)sub_17E990 )
                {
                  *v8 = (void (__fastcall **)(void *))&off_235C58;
                  qregfree();
                  operator delete(v8, 0x30u);
                }
                else
                {
                  v10((void *)v5[9]);
                }
              }
            }
            else
            {
              v9((void *)v5[9]);
            }
          }
        }
        if ( v5[5] )
        {
          v5[6] = 0;
          qfree();
        }
        if ( v5[1] )
        {
          v5[2] = 0;
          qfree();
        }
        v2 = *a1;
      }
    }
    a1[1] = 0;
    return qfree();
  }
  return result;
}

