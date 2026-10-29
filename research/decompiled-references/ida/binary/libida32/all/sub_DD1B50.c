__int64 __fastcall sub_DD1B50(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int16 v3; // r13
  __int64 v4; // rbp
  signed __int64 v5; // r13
  unsigned int v6; // ebp
  unsigned __int64 v7; // r12
  unsigned __int64 v9; // rcx
  __int16 v10; // cx
  __int16 v11; // dx
  unsigned __int16 v12; // [rsp+6h] [rbp-32h] BYREF
  unsigned __int64 v13[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_WORD *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v4 = *(_QWORD *)(a1 + 176);
  v12 = v3;
  v5 = *(_QWORD *)sub_DFDA20(v4, 8);
  sub_DFDA50(v4, 8);
  v13[0] = v5;
  if ( (*(_BYTE *)(sub_E0E500(a1) + 47) & 0x20) != 0 )
    v12 &= 0x3Fu;
  v6 = sub_D42AA0(a1, a2, v13, &v12, 0x40u);
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
          LOBYTE(v10) = 64;
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
    *(_QWORD *)sub_DFD980(*(_QWORD *)(a1 + 176), 8) = v7;
  }
  return v6;
}

