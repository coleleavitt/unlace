__int64 __fastcall sub_D43640(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  unsigned int v4; // r14d
  __int64 v5; // r12
  signed __int64 v6; // r14
  unsigned int v7; // ebp
  unsigned __int64 v8; // r12
  int v10; // ecx
  unsigned __int64 v11; // rcx
  unsigned int v12; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v13[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = a1[70];
  v3 = a1[154];
  a1[155] = *a2;
  v4 = *(_DWORD *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v5 = a1[70];
  v12 = v4;
  v6 = *(_QWORD *)sub_DFDA20(v5, 8);
  sub_DFDA50(v5, 8);
  v13[0] = v6;
  if ( (*(_BYTE *)(sub_E0E500(a1 + 48) + 47) & 0x20) != 0 )
    v12 &= 0x3Fu;
  v7 = sub_D43440((__int64)(a1 + 48), v3, v13, &v12, 0x40u);
  if ( (_BYTE)v7 )
  {
    if ( v12 > 0x3F )
    {
      v8 = 0;
      if ( (v13[0] & 0x8000000000000000LL) == 0LL )
      {
        v10 = 64;
        if ( v13[0] )
        {
          _BitScanReverse64(&v11, v13[0]);
          v10 = v11 ^ 0x3F;
        }
        v12 = v10;
        v8 = v13[0] << v10;
      }
    }
    else
    {
      v8 = v13[0] << v12;
      if ( (v13[0] & 0x8000000000000000LL) != 0LL )
      {
        v8 = v13[0] << v12;
        if ( v13[0] == 0x8000000000000000LL )
          v8 = 0;
      }
    }
    *(_QWORD *)sub_DFD980(a1[70], 8) = v8;
  }
  return v7;
}

