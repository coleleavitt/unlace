__int64 __fastcall sub_DF52F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int8 v3; // r13
  __int64 v4; // rbp
  signed int v5; // r13d
  unsigned int v6; // ebp
  unsigned int v7; // r12d
  unsigned int v9; // ecx
  char v10; // cl
  char v11; // dl
  unsigned __int8 v12; // [rsp+Bh] [rbp-2Dh] BYREF
  unsigned int v13[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_BYTE *)sub_E21760(v2, 8);
  sub_E21790(v2, 8);
  v4 = *(_QWORD *)(a1 + 176);
  v12 = v3;
  v5 = *(_DWORD *)sub_E21760(v4, 8);
  sub_E21790(v4, 8);
  v13[0] = v5;
  if ( (*(_BYTE *)(sub_E32240(a1) + 47) & 0x20) != 0 )
    v12 &= 0x1Fu;
  v6 = sub_D63A40(a1, a2, v13, &v12, 0x20u);
  if ( (_BYTE)v6 )
  {
    if ( v12 > 0x1Fu )
    {
      v7 = 0;
      if ( (v13[0] & 0x80000000) == 0 )
      {
        if ( v13[0] )
        {
          _BitScanReverse(&v9, v13[0]);
          v10 = v9 ^ 0x1F;
          v11 = v10;
        }
        else
        {
          v10 = 32;
          v11 = 32;
        }
        v12 = v11;
        v7 = v13[0] << v10;
      }
    }
    else
    {
      v7 = v13[0] << v12;
      if ( (v13[0] & 0x80000000) != 0 )
      {
        v7 = v13[0] << v12;
        if ( v13[0] == 0x80000000 )
          v7 = 0;
      }
    }
    *(_DWORD *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = v7;
  }
  return v6;
}
