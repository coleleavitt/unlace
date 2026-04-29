__int64 __fastcall sub_3892A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  _QWORD *v9; // r12
  __int64 v10; // rdx
  __int64 v11; // r13
  __int64 i; // rbp
  __int64 *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r13
  __int64 j; // rbp
  __int64 *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 result; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rsi

  if ( (get_merge_state(a1, a2, a3, a4) & 3) == 0 && (get_merge_state(a1, a2, v5, v6) & 4) == 0 )
  {
    v26 = *(_QWORD *)(a1 + 8);
    if ( v26 )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(68, v26, &callui, v23, v24, v25);
  }
  v7 = *(_QWORD *)(a1 + 32);
  if ( v7 )
  {
    if ( (*(_DWORD *)(v7 + 104))-- == 1 )
    {
      v9 = *(_QWORD **)(a1 + 32);
      if ( v9 )
      {
        sub_2535B0(*(__int64 **)(a1 + 32));
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
        sub_24FC90((__int64)(v9 + 2));
        j__qfree(v9);
      }
    }
  }
  v21 = *(_QWORD *)(a1 + 128);
  *(_DWORD *)a1 &= ~2u;
  *(_OWORD *)(a1 + 24) = 0;
  *(_QWORD *)(v21 + 1352) = 0;
  result = *(_QWORD *)(a1 + 128);
  *(_QWORD *)(result + 1344) = 0;
  return result;
}
