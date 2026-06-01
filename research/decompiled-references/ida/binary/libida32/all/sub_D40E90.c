__int64 __fastcall sub_D40E90(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  unsigned int v4; // r14d
  __int64 v5; // r12
  signed int v6; // r14d
  unsigned int v7; // ebp
  unsigned int v8; // r12d
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // [rsp+8h] [rbp-30h] BYREF
  unsigned int v13[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v2 = a1[70];
  v3 = a1[154];
  a1[155] = *a2;
  v4 = *(_DWORD *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v5 = a1[70];
  v12 = v4;
  v6 = *(_DWORD *)sub_DFDA20(v5, 8);
  sub_DFDA50(v5, 8);
  v13[0] = v6;
  if ( (*(_BYTE *)(sub_E0E500(a1 + 48) + 47) & 0x20) != 0 )
    v12 &= 0x1Fu;
  v7 = sub_D40C90((__int64)(a1 + 48), v3, v13, &v12, 0x20u);
  if ( (_BYTE)v7 )
  {
    if ( v12 > 0x1F )
    {
      v8 = 0;
      if ( (v13[0] & 0x80000000) == 0 )
      {
        v10 = 32;
        if ( v13[0] )
        {
          _BitScanReverse(&v11, v13[0]);
          v10 = v11 ^ 0x1F;
        }
        v12 = v10;
        v8 = v13[0] << v10;
      }
    }
    else
    {
      v8 = v13[0] << v12;
      if ( (v13[0] & 0x80000000) != 0 )
      {
        v8 = v13[0] << v12;
        if ( v13[0] == 0x80000000 )
          v8 = 0;
      }
    }
    *(_DWORD *)sub_DFD980(a1[70], 8) = v8;
  }
  return v7;
}

