__int64 __fastcall sub_805700(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v4; // rcx
  char v5; // bp
  unsigned int v6; // eax
  char v7; // bp
  __int64 v8; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v9; // [rsp+8h] [rbp-20h]

  v2 = (*(_BYTE *)(a2 + 2) >> 3) & 3;
  if ( v2 == 1 )
  {
    v4 = *(_QWORD *)(a2 + 24);
    v5 = *(_BYTE *)(a2 + 3) >> 1;
    v6 = *(_BYTE *)(a2 + 4) & 0x7F;
    v9 = v6;
    v7 = v5 & 1;
    if ( v6 > 0x40 )
    {
      sub_2585A50(&v8, v4, 0);
      v6 = v9;
      v4 = v8;
    }
    *(_DWORD *)(a1 + 16) = v6;
    *(_BYTE *)(a1 + 4) &= ~1u;
    *(_DWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v4;
    *(_BYTE *)(a1 + 20) = v7;
    return a1;
  }
  else if ( v2 == 2 )
  {
    sub_6A4260(a1, (int *)(a2 + 24));
    return a1;
  }
  else if ( (*(_WORD *)(a2 + 2) & 0x1E0) == 0x20 )
  {
    *(_BYTE *)(a1 + 4) &= ~1u;
    *(_DWORD *)a1 = 1;
    return a1;
  }
  else
  {
    *(_BYTE *)(a1 + 4) &= ~1u;
    *(_DWORD *)a1 = 0;
    return a1;
  }
}

