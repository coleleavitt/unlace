__int64 __fastcall sub_D41800(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  unsigned __int64 v4; // r14
  __int64 v5; // r12
  unsigned int v6; // ebp
  unsigned int v7; // r12d
  unsigned int v9; // ecx
  signed int v10; // ecx
  __int64 v11; // rdx
  signed int v12; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v13[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = a1[70];
  v3 = a1[154];
  a1[155] = *a2;
  v4 = *(_QWORD *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v5 = a1[70];
  v13[0] = v4;
  LODWORD(v4) = *(_DWORD *)sub_DFDA20(v5, 8);
  sub_DFDA50(v5, 8);
  v12 = v4;
  if ( (*(_BYTE *)(sub_E0E500(a1 + 48) + 47) & 0x20) != 0 )
    v13[0] = v13[0] & 0x1F;
  v6 = sub_D41600((__int64)(a1 + 48), v3, (unsigned int *)&v12, (unsigned int *)v13, 0x20u);
  if ( (_BYTE)v6 )
  {
    if ( v13[0] > 0x1F )
    {
      v7 = 0;
      if ( v12 >= 0 )
      {
        if ( v12 )
        {
          _BitScanReverse(&v9, v12);
          v10 = v9 ^ 0x1F;
          v11 = v10;
        }
        else
        {
          v11 = 32;
          LOBYTE(v10) = 32;
        }
        v13[0] = v11;
        v7 = v12 << v10;
      }
    }
    else
    {
      v7 = v12 << SLOBYTE(v13[0]);
      if ( v12 < 0 )
      {
        v7 = v12 << SLOBYTE(v13[0]);
        if ( v12 == 0x80000000 )
          v7 = 0;
      }
    }
    *(_DWORD *)sub_DFD980(a1[70], 8) = v7;
  }
  return v6;
}

