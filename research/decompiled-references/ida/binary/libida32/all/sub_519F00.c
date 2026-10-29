__int64 __fastcall sub_519F00(__int64 a1, __int64 *a2)
{
  int v2; // edx
  bool v3; // zf
  __int64 *v4; // rdi
  int v5; // eax
  unsigned int v6; // eax
  __int64 v7; // rsi
  unsigned int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned int v11; // eax

  v2 = *(_DWORD *)(a1 + 8);
  v3 = *(_QWORD *)a1 == 0;
  v4 = (__int64 *)*a2;
  if ( *(_BYTE *)(*a2 + 51) )
    return 4294967291LL;
  v5 = *((_DWORD *)v4 + 11);
  if ( ((v5 & 0x400) != 0) == !v3 )
    return 0;
  if ( !v3 )
  {
    v6 = v5 & 0xFFFFFF9F;
    v7 = v4[1];
    *((_BYTE *)v4 + 50) = 0;
    *((_DWORD *)v4 + 11) = v6;
    v8 = v6;
    v9 = *v4;
    v10 = *v4 + (v7 << 7);
    if ( v10 != *v4 )
    {
      do
      {
        *(_DWORD *)(v9 + 116) &= ~0x40u;
        v9 += 128;
        *(_DWORD *)(v9 - 16) = 0;
        *(_BYTE *)(v9 - 8) = 0;
      }
      while ( v9 != v10 );
      v8 = *((_DWORD *)v4 + 11);
    }
    v11 = v8;
    BYTE1(v11) = BYTE1(v8) | 4;
    *((_DWORD *)v4 + 11) = v11;
    return 0;
  }
  if ( v2 < 0 )
    return 4294967291LL;
  BYTE1(v5) &= ~4u;
  *((_DWORD *)v4 + 11) = v5;
  return 0;
}

