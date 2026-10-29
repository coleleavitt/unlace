__int64 __fastcall sub_93BBB0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // r12
  __int64 v4; // r15
  unsigned __int16 v5; // bp
  __int64 v6; // r14
  signed __int64 v7; // r12
  char v8; // al
  signed __int64 v9; // rbp
  unsigned __int64 v11; // rcx
  unsigned __int16 v12; // [rsp+6h] [rbp-42h] BYREF
  unsigned __int64 v13[8]; // [rsp+8h] [rbp-40h] BYREF

  v2 = (__int64)(a1 + 48);
  a1[100] = a2;
  v3 = a1[71];
  v4 = a1[99];
  v5 = *(_WORD *)sub_A1A5A0(v3, 8);
  sub_A1A5E0(v3, 8);
  v6 = a1[71];
  v7 = *(_QWORD *)sub_A1A5A0(v6, 8);
  sub_A1A5E0(v6, 8);
  v13[0] = v7;
  if ( (*(_BYTE *)(sub_A2CB40(a1 + 48) + 47) & 0x20) != 0 )
  {
    v5 &= 0x3Fu;
    v12 = v5;
    if ( (unsigned __int8)sub_93B9B0(v2, v4, v13, &v12, 0x40u) )
      goto LABEL_3;
  }
  else
  {
    v12 = v5;
    if ( (unsigned __int8)sub_93B9B0(v2, v4, v13, &v12, 0x40u) )
    {
      if ( v5 > 0x3Fu )
      {
        if ( v7 >= 0 )
        {
          v9 = v7;
          if ( v7 )
          {
            _BitScanReverse64(&v11, v7);
            v9 = v7 << ((unsigned __int8)v11 ^ 0x3Fu);
          }
          goto LABEL_4;
        }
        goto LABEL_13;
      }
LABEL_3:
      v8 = v5;
      v9 = v7 << v5;
      if ( v7 >= 0 )
      {
LABEL_4:
        *(_QWORD *)sub_A1A4E0(a1[71], 8) = v9;
        return 1;
      }
      if ( v7 != 0x8000000000000000LL )
      {
        v9 = v7 << v8;
        goto LABEL_4;
      }
LABEL_13:
      v9 = 0;
      goto LABEL_4;
    }
  }
  return 0;
}

