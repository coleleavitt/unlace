__int64 __fastcall sub_93BF30(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // r12
  __int64 v4; // r15
  unsigned int v5; // ebp
  __int64 v6; // r14
  signed __int64 v7; // r12
  signed __int64 v8; // r13
  unsigned __int64 v10; // rcx
  unsigned int v11; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v12[8]; // [rsp+8h] [rbp-40h] BYREF

  v2 = (__int64)(a1 + 48);
  a1[100] = a2;
  v3 = a1[71];
  v4 = a1[99];
  v5 = *(_DWORD *)sub_A1A5A0(v3, 8);
  sub_A1A5E0(v3, 8);
  v6 = a1[71];
  v7 = *(_QWORD *)sub_A1A5A0(v6, 8);
  sub_A1A5E0(v6, 8);
  v12[0] = v7;
  if ( (*(_BYTE *)(sub_A2CB40(a1 + 48) + 47) & 0x20) != 0 )
  {
    v5 &= 0x3Fu;
    v11 = v5;
    if ( (unsigned __int8)sub_93BD30(v2, v4, v12, &v11, 0x40u) )
      goto LABEL_3;
  }
  else
  {
    v11 = v5;
    if ( (unsigned __int8)sub_93BD30(v2, v4, v12, &v11, 0x40u) )
    {
      if ( v5 > 0x3F )
      {
        if ( v7 >= 0 )
        {
          v8 = v7;
          if ( v7 )
          {
            _BitScanReverse64(&v10, v7);
            v8 = v7 << ((unsigned __int8)v10 ^ 0x3Fu);
          }
          goto LABEL_4;
        }
        goto LABEL_13;
      }
LABEL_3:
      v8 = v7 << v5;
      if ( v7 >= 0 )
      {
LABEL_4:
        *(_QWORD *)sub_A1A4E0(a1[71], 8) = v8;
        return 1;
      }
      if ( v7 != 0x8000000000000000LL )
      {
        v8 = v7 << v5;
        goto LABEL_4;
      }
LABEL_13:
      v8 = 0;
      goto LABEL_4;
    }
  }
  return 0;
}

