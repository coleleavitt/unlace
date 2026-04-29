_UNKNOWN **__fastcall sub_39D180(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 v3; // rdi
  __int64 v4; // rdx
  _QWORD *v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 i; // rbx
  __int64 *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r12
  __int64 j; // rbx
  __int64 *v16; // rax
  __int64 v17; // rdi

  result = &off_4B3850;
  *(_QWORD *)a1 = &off_4B3850;
  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 40) = 0;
    result = (_UNKNOWN **)qfree(v3);
  }
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
  {
    if ( (*(_DWORD *)(v4 + 104))-- == 1 )
    {
      v6 = *(_QWORD **)(a1 + 24);
      if ( v6 )
      {
        sub_2515F0(*(__int64 **)(a1 + 24));
        v7 = v6[23];
        if ( v7 )
        {
          v8 = v6[24];
          if ( v8 )
          {
            for ( i = 0; i != v8; ++i )
            {
              v10 = (__int64 *)(v7 + 24 * i);
              v11 = *v10;
              if ( *v10 )
              {
                v10[1] = 0;
                qfree(v11);
                v7 = v6[23];
              }
            }
          }
          v6[24] = 0;
          qfree(v7);
        }
        v12 = v6[20];
        if ( v12 )
        {
          v6[21] = 0;
          qfree(v12);
        }
        v13 = v6[16];
        if ( v13 )
        {
          v14 = v6[17];
          if ( v14 )
          {
            for ( j = 0; j != v14; ++j )
            {
              v16 = (__int64 *)(v13 + 32 * j);
              v17 = *v16;
              if ( *v16 )
              {
                v16[1] = 0;
                qfree(v17);
                v13 = v6[16];
              }
            }
          }
          v6[17] = 0;
          qfree(v13);
        }
        sub_24DCD0((__int64)(v6 + 2));
        return (_UNKNOWN **)j__qfree(v6);
      }
    }
  }
  return result;
}
