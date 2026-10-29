void __fastcall sub_3A56E0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 *v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rbx
  unsigned int v6; // esi
  __int64 v7; // rdi
  unsigned int v8; // esi
  unsigned int v9; // esi

  v1 = *(_QWORD *)(a1 + 1536);
  if ( *(_DWORD *)(v1 + 120) )
  {
    if ( (debug & 0x100) != 0 )
    {
      v2 = (__int64 *)(v1 + 216);
      v3 = 0;
      do
      {
        v4 = *v2;
        v2 += 13;
        v3 += 32 * v4;
      }
      while ( v2 != (__int64 *)(v1 + 1672) );
      sub_368890();
    }
    v5 = v1 + 176;
    sub_3A1430((unsigned int *)v1, 0);
    do
    {
      *(_QWORD *)(v5 - 16) = -1;
      v6 = *(_DWORD *)(v5 + 60);
      v7 = v5;
      v5 += 104;
      sub_3A5690(v7, v6);
      *(_BYTE *)(v5 - 24) = 0;
    }
    while ( v5 != v1 + 1632 );
    *(_DWORD *)(v1 + 120) = 0;
    v8 = *(_DWORD *)(v1 + 1692);
    *(_QWORD *)(v1 + 1616) = -1;
    sub_3A5690(v5, v8);
    *(_BYTE *)(v1 + 1712) = 0;
    v9 = *(_DWORD *)(v1 + 1796);
    *(_QWORD *)(v1 + 1720) = -1;
    sub_3A5690(v1 + 1736, v9);
    *(_BYTE *)(v1 + 1816) = 0;
  }
}
