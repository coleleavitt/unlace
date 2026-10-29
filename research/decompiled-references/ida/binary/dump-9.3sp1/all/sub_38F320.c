__int64 __fastcall sub_38F320(__int64 a1)
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
  __int64 v16; // rax
  __int64 result; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rsi

  if ( (get_merge_state() & 3) == 0 && (get_merge_state() & 4) == 0 )
  {
    v21 = *(_QWORD *)(a1 + 8);
    if ( v21 )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(68, v21, &callui, v18, v19, v20);
  }
  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 104))-- == 1 )
    {
      v4 = *(_QWORD **)(a1 + 32);
      if ( v4 )
      {
        sub_258970(*(__int64 **)(a1 + 32));
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
        sub_255050((__int64)(v4 + 2));
        j__qfree((__int64)v4);
      }
    }
  }
  v16 = *(_QWORD *)(a1 + 128);
  *(_DWORD *)a1 &= ~2u;
  *(_OWORD *)(a1 + 24) = 0;
  *(_QWORD *)(v16 + 1352) = 0;
  result = *(_QWORD *)(a1 + 128);
  *(_QWORD *)(result + 1344) = 0;
  return result;
}
