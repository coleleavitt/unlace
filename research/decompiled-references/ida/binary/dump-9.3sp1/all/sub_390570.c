__int64 __fastcall sub_390570(__int64 a1)
{
  __int64 v1; // rbp
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdx
  _QWORD *v9; // r13
  __int64 v10; // rdx
  __int64 v11; // r14
  __int64 i; // r12
  __int64 *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r14
  __int64 j; // r12
  __int64 *v19; // rax
  __int64 v20; // rdi

  v1 = *(_QWORD *)(a1 + 1008);
  while ( 1 )
  {
    result = *(_QWORD *)(v1 + 48);
    if ( !result )
      break;
    v3 = 8 * result - 8;
    v4 = *(_QWORD *)(v1 + 40);
    do
      v5 = *(_QWORD *)(v4 + v3);
    while ( !v5 );
    sub_38F320(*(_QWORD *)(v4 + v3));
    sub_389D00(v5);
    clear_tinfo_t();
    v6 = *(_QWORD *)(v5 + 136);
    if ( v6 )
    {
      *(_QWORD *)(v5 + 144) = 0;
      qfree(v6);
    }
    v7 = *(_QWORD *)(v5 + 32);
    if ( v7 )
    {
      if ( (*(_DWORD *)(v7 + 104))-- == 1 )
      {
        v9 = *(_QWORD **)(v5 + 32);
        if ( v9 )
        {
          sub_258970(*(__int64 **)(v5 + 32));
          v10 = v9[23];
          if ( v10 )
          {
            v11 = v9[24];
            if ( v11 )
            {
              for ( i = 0; i != v11; ++i )
              {
                v13 = (__int64 *)(v10 + 24 * i);
                v14 = *v13;
                if ( *v13 )
                {
                  v13[1] = 0;
                  qfree(v14);
                  v10 = v9[23];
                }
              }
            }
            v9[24] = 0;
            qfree(v10);
          }
          v15 = v9[20];
          if ( v15 )
          {
            v9[21] = 0;
            qfree(v15);
          }
          v16 = v9[16];
          if ( v16 )
          {
            v17 = v9[17];
            if ( v17 )
            {
              for ( j = 0; j != v17; ++j )
              {
                v19 = (__int64 *)(v16 + 32 * j);
                v20 = *v19;
                if ( *v19 )
                {
                  v19[1] = 0;
                  qfree(v20);
                  v16 = v9[16];
                }
              }
            }
            v9[17] = 0;
            qfree(v16);
          }
          sub_255050((__int64)(v9 + 2));
          j__qfree((__int64)v9);
        }
      }
    }
    operator delete((void *)v5, 0xA8u);
  }
  return result;
}
