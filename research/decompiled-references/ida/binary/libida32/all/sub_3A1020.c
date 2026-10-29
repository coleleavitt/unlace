void __fastcall sub_3A1020(__int64 a1)
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

  v1 = *(_QWORD *)(a1 + 1344);
  if ( *(_DWORD *)(v1 + 92) )
  {
    if ( (debug & 0x100) != 0 )
    {
      v2 = (__int64 *)(v1 + 184);
      v3 = 0;
      do
      {
        v4 = *v2;
        v2 += 13;
        v3 += 16 * v4;
      }
      while ( v2 != (__int64 *)(v1 + 1640) );
      sub_365330();
    }
    v5 = v1 + 144;
    sub_39C870((unsigned int *)v1, 0);
    do
    {
      *(_DWORD *)(v5 - 16) = -1;
      v6 = *(_DWORD *)(v5 + 60);
      v7 = v5;
      v5 += 104;
      sub_3A0FD0(v7, v6);
      *(_BYTE *)(v5 - 24) = 0;
    }
    while ( v5 != v1 + 1600 );
    *(_DWORD *)(v1 + 92) = 0;
    v8 = *(_DWORD *)(v1 + 1660);
    *(_DWORD *)(v1 + 1584) = -1;
    sub_3A0FD0(v5, v8);
    *(_BYTE *)(v1 + 1680) = 0;
    v9 = *(_DWORD *)(v1 + 1764);
    *(_DWORD *)(v1 + 1688) = -1;
    sub_3A0FD0(v1 + 1704, v9);
    *(_BYTE *)(v1 + 1784) = 0;
  }
}

