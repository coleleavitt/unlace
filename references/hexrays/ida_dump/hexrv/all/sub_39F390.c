void __fastcall sub_39F390(void *a1)
{
  __int64 v2; // rdx
  _QWORD *v4; // r12
  __int64 v5; // rdx
  __int64 v6; // r13
  __int64 i; // rbp
  __int64 *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r13
  __int64 j; // rbp
  __int64 *v14; // rax
  __int64 v15; // rdi

  v2 = *((_QWORD *)a1 + 3);
  *(_QWORD *)a1 = off_4B97B8;
  if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 104))-- == 1 )
    {
      v4 = *((_QWORD **)a1 + 3);
      if ( v4 )
      {
        sub_253D70(*((__int64 **)a1 + 3));
        v5 = v4[23];
        if ( v5 )
        {
          v6 = v4[24];
          if ( v6 )
          {
            for ( i = 0; i != v6; ++i )
            {
              v8 = (__int64 *)(v5 + 24 * i);
              v9 = *v8;
              if ( *v8 )
              {
                v8[1] = 0;
                qfree(v9);
                v5 = v4[23];
              }
            }
          }
          v4[24] = 0;
          qfree(v5);
        }
        v10 = v4[20];
        if ( v10 )
        {
          v4[21] = 0;
          qfree(v10);
        }
        v11 = v4[16];
        if ( v11 )
        {
          v12 = v4[17];
          if ( v12 )
          {
            for ( j = 0; j != v12; ++j )
            {
              v14 = (__int64 *)(v11 + 32 * j);
              v15 = *v14;
              if ( *v14 )
              {
                v14[1] = 0;
                qfree(v15);
                v11 = v4[16];
              }
            }
          }
          v4[17] = 0;
          qfree(v11);
        }
        sub_250450((__int64)(v4 + 2));
        j__qfree(v4);
      }
    }
  }
  operator delete(a1, 0x28u);
}
