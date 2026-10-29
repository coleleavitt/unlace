__int64 __fastcall sub_DF5760(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int8 v3; // r13
  __int64 v4; // rbp
  signed __int64 v5; // r13
  unsigned int v6; // ebp
  unsigned __int64 v7; // r12
  unsigned __int64 v9; // rcx
  char v10; // cl
  char v11; // dl
  unsigned __int8 v12; // [rsp+7h] [rbp-31h] BYREF
  unsigned __int64 v13[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_BYTE *)sub_E21760(v2, 8);
  sub_E21790(v2, 8);
  v4 = *(_QWORD *)(a1 + 176);
  v12 = v3;
  v5 = *(_QWORD *)sub_E21760(v4, 8);
  sub_E21790(v4, 8);
  v13[0] = v5;
  if ( (*(_BYTE *)(sub_E32240(a1) + 47) & 0x20) != 0 )
    v12 &= 0x3Fu;
  v6 = sub_D65E40(a1, a2, v13, &v12, 0x40u);
  if ( (_BYTE)v6 )
  {
    if ( v12 > 0x3Fu )
    {
      v7 = 0;
      if ( (v13[0] & 0x8000000000000000LL) == 0LL )
      {
        if ( v13[0] )
        {
          _BitScanReverse64(&v9, v13[0]);
          v10 = v9 ^ 0x3F;
          v11 = v10;
        }
        else
        {
          v10 = 64;
          v11 = 64;
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
    *(_QWORD *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = v7;
  }
  return v6;
}
