__int64 __fastcall sub_BD3D10(__int64 a1, __int64 a2)
{
  char v3; // dl
  char v4; // r12
  __int64 v5; // rsi
  unsigned int v6; // eax
  bool v7; // r12
  unsigned int v9; // eax
  __int64 v10; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+8h] [rbp-20h]

  v3 = (*(_BYTE *)(a2 + 2) >> 3) & 3;
  if ( v3 == 1 )
  {
    v4 = *(_BYTE *)(a2 + 3);
    v5 = *(_QWORD *)(a2 + 24);
    v6 = *(_BYTE *)(a2 + 4) & 0x7F;
    v7 = (v4 & 2) != 0;
    v11 = v6;
    if ( v6 > 0x40 )
    {
      sub_21E1730(&v10, v5, 0);
      v6 = v11;
      v5 = v10;
    }
    *(_DWORD *)(a1 + 8) = v6;
    *(_BYTE *)(a1 + 12) = v7;
    *(_QWORD *)a1 = v5;
    return a1;
  }
  else if ( v3 == 2 )
  {
    v9 = *(_DWORD *)(a2 + 40);
    *(_DWORD *)(a1 + 8) = v9;
    if ( v9 > 0x40 )
      sub_21E17D0(a1);
    else
      *(_QWORD *)a1 = *(_QWORD *)(a2 + 32);
    *(_BYTE *)(a1 + 12) = *(_BYTE *)(a2 + 44);
    return a1;
  }
  else
  {
    return sub_BD3DC0(a1, a2);
  }
}

