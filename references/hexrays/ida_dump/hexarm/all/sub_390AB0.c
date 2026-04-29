__int64 __fastcall sub_390AB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdx
  _QWORD *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // r14
  __int64 i; // r12
  __int64 *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // r14
  __int64 j; // r12
  __int64 *v22; // rax
  __int64 v23; // rdi

  v4 = *(_QWORD *)(a1 + 1008);
  while ( 1 )
  {
    result = *(_QWORD *)(v4 + 48);
    if ( !result )
      break;
    v6 = 8 * result - 8;
    v7 = *(_QWORD *)(v4 + 40);
    do
      v8 = *(_QWORD *)(v7 + v6);
    while ( !v8 );
    sub_38F860(*(_QWORD *)(v7 + v6), a2, v6, a4);
    sub_38A240(v8);
    clear_tinfo_t(v8 + 160);
    v9 = *(_QWORD *)(v8 + 136);
    if ( v9 )
    {
      *(_QWORD *)(v8 + 144) = 0;
      qfree(v9);
    }
    v10 = *(_QWORD *)(v8 + 32);
    if ( v10 )
    {
      if ( (*(_DWORD *)(v10 + 104))-- == 1 )
      {
        v12 = *(_QWORD **)(v8 + 32);
        if ( v12 )
        {
          sub_258D30(*(__int64 **)(v8 + 32));
          v13 = v12[23];
          if ( v13 )
          {
            v14 = v12[24];
            if ( v14 )
            {
              for ( i = 0; i != v14; ++i )
              {
                v16 = (__int64 *)(v13 + 24 * i);
                v17 = *v16;
                if ( *v16 )
                {
                  v16[1] = 0;
                  qfree(v17);
                  v13 = v12[23];
                }
              }
            }
            v12[24] = 0;
            qfree(v13);
          }
          v18 = v12[20];
          if ( v18 )
          {
            v12[21] = 0;
            qfree(v18);
          }
          v19 = v12[16];
          if ( v19 )
          {
            v20 = v12[17];
            if ( v20 )
            {
              for ( j = 0; j != v20; ++j )
              {
                v22 = (__int64 *)(v19 + 32 * j);
                v23 = *v22;
                if ( *v22 )
                {
                  v22[1] = 0;
                  qfree(v23);
                  v19 = v12[16];
                }
              }
            }
            v12[17] = 0;
            qfree(v19);
          }
          sub_255410((__int64)(v12 + 2));
          j__qfree(v12);
        }
      }
    }
    a2 = 168;
    operator delete((void *)v8, 0xA8u);
  }
  return result;
}
