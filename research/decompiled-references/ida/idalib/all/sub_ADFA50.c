void __fastcall sub_ADFA50(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rcx

  if ( a2 )
  {
    v3 = (__int64 *)(a2 + 24);
    v4 = a2 + 8LL * (*(_DWORD *)(a2 + 20) & 0x1FFFFFFF) + 24;
    if ( v4 != a2 + 24 )
    {
      do
      {
        v5 = *v3++;
        sub_ADDB10(a1, v5);
      }
      while ( (__int64 *)v4 != v3 );
    }
    if ( (*(_BYTE *)(a2 + 23) & 0x40) != 0 )
    {
      v6 = *(_QWORD *)(a2 + 8LL * (*(_DWORD *)(a2 + 20) & 0x1FFFFFFF) + 24);
      if ( v6 )
        sub_ADE7F0(a1 + 8, 0, 0, v6, a1);
    }
  }
}
