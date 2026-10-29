void __fastcall sub_8336C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 v5; // r12
  void *v6; // rdi
  void *v7; // rdi
  __int64 *v8; // r12
  __int64 *v9; // rbp
  __int64 v10; // rsi
  __int64 *v11; // r13
  __int64 *v12; // rbp
  __int64 v13; // rsi

  v4 = *(_QWORD *)(a1 + 64);
  v5 = sub_2575D20(a1, a2, a3);
  if ( v4 == v5 )
  {
    v11 = *(__int64 **)(a1 + 72);
    if ( v11 )
    {
      v12 = &v11[3 * *(v11 - 1)];
      if ( v11 == v12 )
      {
        v13 = 0;
      }
      else
      {
        do
        {
          v12 -= 3;
          sub_5FF3B0(v12);
        }
        while ( v11 != v12 );
        v13 = 24 * *(v11 - 1);
      }
      operator delete[](v11 - 1, v13 + 8);
    }
    *(_QWORD *)(a1 + 72) = 0;
  }
  else
  {
    sub_25769A0(a1 + 64);
  }
  if ( *(_QWORD *)(a1 + 40) == v5 )
  {
    v8 = *(__int64 **)(a1 + 48);
    if ( v8 )
    {
      v9 = &v8[3 * *(v8 - 1)];
      if ( v8 == v9 )
      {
        v10 = 0;
      }
      else
      {
        do
        {
          v9 -= 3;
          sub_5FF3B0(v9);
        }
        while ( v8 != v9 );
        v10 = 24 * *(v8 - 1);
      }
      operator delete[](v8 - 1, v10 + 8);
    }
    *(_QWORD *)(a1 + 48) = 0;
  }
  else
  {
    sub_25769A0(a1 + 40);
  }
  if ( *(_DWORD *)(a1 + 32) > 0x40u )
  {
    v6 = *(void **)(a1 + 24);
    if ( v6 )
      operator delete[](v6);
  }
  if ( *(_DWORD *)(a1 + 16) > 0x40u )
  {
    v7 = *(void **)(a1 + 8);
    if ( v7 )
      operator delete[](v7);
  }
}

