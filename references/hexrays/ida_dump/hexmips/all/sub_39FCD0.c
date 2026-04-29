void __fastcall sub_39FCD0(void *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  _QWORD *v5; // r12
  __int64 v6; // rdx
  __int64 v7; // r13
  __int64 i; // rbp
  __int64 *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 j; // rbp
  __int64 *v15; // rax
  __int64 v16; // rdi

  *(_QWORD *)a1 = &off_4C7770;
  v2 = *((_QWORD *)a1 + 4);
  if ( v2 )
  {
    *((_QWORD *)a1 + 5) = 0;
    qfree(v2);
  }
  v3 = *((_QWORD *)a1 + 3);
  if ( v3 )
  {
    if ( (*(_DWORD *)(v3 + 104))-- == 1 )
    {
      v5 = *((_QWORD **)a1 + 3);
      if ( v5 )
      {
        sub_2540F0(*((__int64 **)a1 + 3));
        v6 = v5[23];
        if ( v6 )
        {
          v7 = v5[24];
          if ( v7 )
          {
            for ( i = 0; i != v7; ++i )
            {
              v9 = (__int64 *)(v6 + 24 * i);
              v10 = *v9;
              if ( *v9 )
              {
                v9[1] = 0;
                qfree(v10);
                v6 = v5[23];
              }
            }
          }
          v5[24] = 0;
          qfree(v6);
        }
        v11 = v5[20];
        if ( v11 )
        {
          v5[21] = 0;
          qfree(v11);
        }
        v12 = v5[16];
        if ( v12 )
        {
          v13 = v5[17];
          if ( v13 )
          {
            for ( j = 0; j != v13; ++j )
            {
              v15 = (__int64 *)(v12 + 32 * j);
              v16 = *v15;
              if ( *v15 )
              {
                v15[1] = 0;
                qfree(v16);
                v12 = v5[16];
              }
            }
          }
          v5[17] = 0;
          qfree(v12);
        }
        sub_2507D0((__int64)(v5 + 2));
        j__qfree(v5);
      }
    }
  }
  operator delete(a1, 0x40u);
}
