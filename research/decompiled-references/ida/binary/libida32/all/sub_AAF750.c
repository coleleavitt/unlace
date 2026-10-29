void __fastcall sub_AAF750(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rbx
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rcx

  if ( a2 )
  {
    v7 = (__int64 *)(a2 + 24);
    v8 = a2 + 8LL * (*(_DWORD *)(a2 + 20) & 0x1FFFFFFF) + 24;
    if ( v8 != a2 + 24 )
    {
      do
      {
        v9 = *v7++;
        sub_AAD6B0(a1, v9);
      }
      while ( (__int64 *)v8 != v7 );
    }
    if ( (*(_BYTE *)(a2 + 23) & 0x40) != 0 )
    {
      v10 = *(_QWORD *)(a2 + 8LL * (*(_DWORD *)(a2 + 20) & 0x1FFFFFFF) + 24);
      if ( v10 )
        sub_AAE4E0(a1 + 8, 0, 0, v10, a1, a6);
    }
  }
}

