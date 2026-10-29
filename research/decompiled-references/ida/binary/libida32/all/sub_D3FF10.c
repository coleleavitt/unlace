__int64 __fastcall sub_D3FF10(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  unsigned __int8 v4; // r14
  __int64 v5; // r12
  signed int v6; // r14d
  unsigned int v7; // ebp
  unsigned int v8; // r12d
  unsigned int v10; // ecx
  char v11; // cl
  char v12; // dl
  unsigned __int8 v13; // [rsp+Bh] [rbp-2Dh] BYREF
  unsigned int v14[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v2 = a1[70];
  v3 = a1[154];
  a1[155] = *a2;
  v4 = *(_BYTE *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v5 = a1[70];
  v13 = v4;
  v6 = *(_DWORD *)sub_DFDA20(v5, 8);
  sub_DFDA50(v5, 8);
  v14[0] = v6;
  if ( (*(_BYTE *)(sub_E0E500(a1 + 48) + 47) & 0x20) != 0 )
    v13 &= 0x1Fu;
  v7 = sub_D3FD00((__int64)(a1 + 48), v3, v14, &v13, 0x20u);
  if ( (_BYTE)v7 )
  {
    if ( v13 > 0x1Fu )
    {
      v8 = 0;
      if ( (v14[0] & 0x80000000) == 0 )
      {
        if ( v14[0] )
        {
          _BitScanReverse(&v10, v14[0]);
          v11 = v10 ^ 0x1F;
          v12 = v11;
        }
        else
        {
          v11 = 32;
          v12 = 32;
        }
        v13 = v12;
        v8 = v14[0] << v11;
      }
    }
    else
    {
      v8 = v14[0] << v13;
      if ( (v14[0] & 0x80000000) != 0 )
      {
        v8 = v14[0] << v13;
        if ( v14[0] == 0x80000000 )
          v8 = 0;
      }
    }
    *(_DWORD *)sub_DFD980(a1[70], 8) = v8;
  }
  return v7;
}

