__int64 __fastcall sub_DF59D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int v3; // r13d
  __int64 v4; // rbp
  signed __int64 v5; // r13
  unsigned int v6; // ebp
  unsigned __int64 v7; // r12
  int v9; // ecx
  unsigned __int64 v10; // rcx
  unsigned int v11; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v12[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_DWORD *)sub_E21760(v2, 8);
  sub_E21790(v2, 8);
  v4 = *(_QWORD *)(a1 + 176);
  v11 = v3;
  v5 = *(_QWORD *)sub_E21760(v4, 8);
  sub_E21790(v4, 8);
  v12[0] = v5;
  if ( (*(_BYTE *)(sub_E32240(a1) + 47) & 0x20) != 0 )
    v11 &= 0x3Fu;
  v6 = sub_D67180(a1, a2, v12, &v11, 0x40u);
  if ( (_BYTE)v6 )
  {
    if ( v11 > 0x3F )
    {
      v7 = 0;
      if ( (v12[0] & 0x8000000000000000LL) == 0LL )
      {
        v9 = 64;
        if ( v12[0] )
        {
          _BitScanReverse64(&v10, v12[0]);
          v9 = v10 ^ 0x3F;
        }
        v11 = v9;
        v7 = v12[0] << v9;
      }
    }
    else
    {
      v7 = v12[0] << v11;
      if ( (v12[0] & 0x8000000000000000LL) != 0LL )
      {
        v7 = v12[0] << v11;
        if ( v12[0] == 0x8000000000000000LL )
          v7 = 0;
      }
    }
    *(_QWORD *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = v7;
  }
  return v6;
}
