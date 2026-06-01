__int64 __fastcall sub_DD17F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int v3; // r13d
  __int64 v4; // rbp
  signed int v5; // r13d
  unsigned int v6; // ebp
  unsigned int v7; // r12d
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // [rsp+8h] [rbp-30h] BYREF
  unsigned int v12[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_DWORD *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v4 = *(_QWORD *)(a1 + 176);
  v11 = v3;
  v5 = *(_DWORD *)sub_DFDA20(v4, 8);
  sub_DFDA50(v4, 8);
  v12[0] = v5;
  if ( (*(_BYTE *)(sub_E0E500(a1) + 47) & 0x20) != 0 )
    v11 &= 0x1Fu;
  v6 = sub_D40C90(a1, a2, v12, &v11, 0x20u);
  if ( (_BYTE)v6 )
  {
    if ( v11 > 0x1F )
    {
      v7 = 0;
      if ( (v12[0] & 0x80000000) == 0 )
      {
        v9 = 32;
        if ( v12[0] )
        {
          _BitScanReverse(&v10, v12[0]);
          v9 = v10 ^ 0x1F;
        }
        v11 = v9;
        v7 = v12[0] << v9;
      }
    }
    else
    {
      v7 = v12[0] << v11;
      if ( (v12[0] & 0x80000000) != 0 )
      {
        v7 = v12[0] << v11;
        if ( v12[0] == 0x80000000 )
          v7 = 0;
      }
    }
    *(_DWORD *)sub_DFD980(*(_QWORD *)(a1 + 176), 8) = v7;
  }
  return v6;
}

