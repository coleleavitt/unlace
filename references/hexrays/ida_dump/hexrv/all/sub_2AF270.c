_UNKNOWN **__fastcall sub_2AF270(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  __int64 i; // rbp
  __int64 **v5; // rcx
  __int64 *v6; // rdx
  __int64 *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // r15
  __int64 j; // rbx
  __int64 *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r15
  __int64 k; // rbx
  __int64 *v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rdi
  _UNKNOWN **result; // rax

  *a1 = &off_4B3C20;
  v2 = a1[7];
  if ( v2 )
  {
    v3 = a1[8];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (__int64 **)(v2 + 8 * i);
        v6 = *v5;
        if ( *v5 )
        {
          if ( (*((_DWORD *)v6 + 26))-- == 1 )
          {
            v8 = *v5;
            if ( *v5 )
            {
              sub_253D70(*v5);
              v9 = v8[23];
              if ( v9 )
              {
                v10 = v8[24];
                if ( v10 )
                {
                  for ( j = 0; j != v10; ++j )
                  {
                    v12 = (__int64 *)(v9 + 24 * j);
                    v13 = *v12;
                    if ( *v12 )
                    {
                      v12[1] = 0;
                      qfree(v13);
                      v9 = v8[23];
                    }
                  }
                }
                v8[24] = 0;
                qfree(v9);
              }
              v14 = v8[20];
              if ( v14 )
              {
                v8[21] = 0;
                qfree(v14);
              }
              v15 = v8[16];
              if ( v15 )
              {
                v16 = v8[17];
                if ( v16 )
                {
                  for ( k = 0; k != v16; ++k )
                  {
                    v18 = (__int64 *)(v15 + 32 * k);
                    v19 = *v18;
                    if ( *v18 )
                    {
                      v18[1] = 0;
                      qfree(v19);
                      v15 = v8[16];
                    }
                  }
                }
                v8[17] = 0;
                qfree(v15);
              }
              sub_250450((__int64)(v8 + 2));
              j__qfree(v8);
            }
          }
          v2 = a1[7];
        }
      }
    }
    a1[8] = 0;
    qfree(v2);
  }
  v20 = a1[2];
  result = &off_4B39F0;
  *a1 = &off_4B39F0;
  if ( v20 )
  {
    a1[3] = 0;
    return (_UNKNOWN **)qfree(v20);
  }
  return result;
}
