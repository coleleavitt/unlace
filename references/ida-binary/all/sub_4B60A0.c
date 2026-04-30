void __fastcall sub_4B60A0(__int64 *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // r12
  __int64 *v6; // rbx
  volatile signed __int32 *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 j; // r15
  __int64 *v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v16; // [rsp+8h] [rbp-40h]

  v3 = *a1;
  if ( v3 )
  {
    v16 = a1[1];
    if ( v16 )
    {
      v4 = 0;
      for ( i = 0; i != v16; ++i )
      {
        v6 = (__int64 *)(v3 + v4);
        v7 = *(volatile signed __int32 **)(v3 + v4 + 88);
        if ( v7 && !_InterlockedSub(v7, 1u) )
          free((void *)v6[11]);
        v8 = v6[6];
        if ( v8 )
        {
          v9 = v6[7];
          if ( v9 )
          {
            for ( j = 0; j != v9; ++j )
            {
              v11 = (__int64 *)(v8 + 40 * j);
              jvalue_t_clear(v11 + 3);
              v12 = *v11;
              if ( *v11 )
              {
                v11[1] = 0;
                qfree(v12, a2);
              }
              v8 = v6[6];
            }
          }
          v6[7] = 0;
          qfree(v8, a2);
        }
        v13 = v6[3];
        if ( v13 )
        {
          v6[4] = 0;
          qfree(v13, a2);
        }
        v14 = *v6;
        if ( *v6 )
        {
          v6[1] = 0;
          qfree(v14, a2);
        }
        v4 += 120;
        v3 = *a1;
      }
    }
    a1[1] = 0;
    qfree(v3, a2);
  }
}
