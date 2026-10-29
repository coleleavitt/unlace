__int64 __fastcall sub_DF5640(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // r13
  __int64 v4; // rbp
  unsigned int v5; // ebp
  unsigned int v6; // r12d
  unsigned int v8; // ecx
  signed int v9; // ecx
  __int64 v10; // rdx
  signed int v11; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v12[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_QWORD *)sub_E21760(v2, 8);
  sub_E21790(v2, 8);
  v4 = *(_QWORD *)(a1 + 176);
  v12[0] = v3;
  LODWORD(v3) = *(_DWORD *)sub_E21760(v4, 8);
  sub_E21790(v4, 8);
  v11 = v3;
  if ( (*(_BYTE *)(sub_E32240(a1) + 47) & 0x20) != 0 )
    v12[0] = v12[0] & 0x1F;
  v5 = sub_D65340(a1, a2, (unsigned int *)&v11, (unsigned int *)v12, 0x20u);
  if ( (_BYTE)v5 )
  {
    if ( v12[0] > 0x1F )
    {
      v6 = 0;
      if ( v11 >= 0 )
      {
        if ( v11 )
        {
          _BitScanReverse(&v8, v11);
          v9 = v8 ^ 0x1F;
          v10 = v9;
        }
        else
        {
          v10 = 32;
          LOBYTE(v9) = 32;
        }
        v12[0] = v10;
        v6 = v11 << v9;
      }
    }
    else
    {
      v6 = v11 << SLOBYTE(v12[0]);
      if ( v11 < 0 )
      {
        v6 = v11 << SLOBYTE(v12[0]);
        if ( v11 == 0x80000000 )
          v6 = 0;
      }
    }
    *(_DWORD *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = v6;
  }
  return v5;
}
