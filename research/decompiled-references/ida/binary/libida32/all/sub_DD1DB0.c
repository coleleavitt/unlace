__int64 __fastcall sub_DD1DB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // r13
  __int64 v4; // rbp
  signed __int64 v5; // r13
  unsigned int v6; // ebp
  unsigned __int64 v7; // r12
  unsigned __int64 v9; // rdx
  char v10; // cl
  __int64 v11; // rdx
  unsigned __int64 v12; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v13[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_QWORD *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v4 = *(_QWORD *)(a1 + 176);
  v12 = v3;
  v5 = *(_QWORD *)sub_DFDA20(v4, 8);
  sub_DFDA50(v4, 8);
  v13[0] = v5;
  if ( (*(_BYTE *)(sub_E0E500(a1) + 47) & 0x20) != 0 )
    v12 &= 0x3Fu;
  v6 = sub_D43DD0(a1, a2, v13, (unsigned int *)&v12, 0x40u);
  if ( (_BYTE)v6 )
  {
    if ( v12 > 0x3F )
    {
      v7 = 0;
      if ( (v13[0] & 0x8000000000000000LL) == 0LL )
      {
        if ( v13[0] )
        {
          _BitScanReverse64(&v9, v13[0]);
          LODWORD(v11) = v9 ^ 0x3F;
          v10 = v11;
          v11 = (int)v11;
        }
        else
        {
          v11 = 64;
          v10 = 64;
        }
        v12 = v11;
        v7 = v13[0] << v10;
      }
    }
    else
    {
      v7 = v13[0] << v12;
      if ( (v13[0] & 0x8000000000000000LL) != 0LL )
      {
        v7 = v13[0] << v12;
        if ( v13[0] == 0x8000000000000000LL )
          v7 = 0;
      }
    }
    *(_QWORD *)sub_DFD980(*(_QWORD *)(a1 + 176), 8) = v7;
  }
  return v6;
}

