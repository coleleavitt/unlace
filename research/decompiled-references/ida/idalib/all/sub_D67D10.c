__int64 __fastcall sub_D67D10(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  unsigned __int64 v4; // r14
  __int64 v5; // r12
  signed __int64 v6; // r14
  unsigned int v7; // ebp
  unsigned __int64 v8; // r12
  unsigned __int64 v10; // rdx
  char v11; // cl
  __int64 v12; // rdx
  unsigned __int64 v13; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v14[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = a1[70];
  v3 = a1[154];
  a1[155] = *a2;
  v4 = *(_QWORD *)sub_E21760(v2, 8);
  sub_E21790(v2, 8);
  v5 = a1[70];
  v13 = v4;
  v6 = *(_QWORD *)sub_E21760(v5, 8);
  sub_E21790(v5, 8);
  v14[0] = v6;
  if ( (*(_BYTE *)(sub_E32240(a1 + 48) + 47) & 0x20) != 0 )
    v13 &= 0x3Fu;
  v7 = sub_D67B10((__int64)(a1 + 48), v3, v14, (unsigned int *)&v13, 0x40u);
  if ( (_BYTE)v7 )
  {
    if ( v13 > 0x3F )
    {
      v8 = 0;
      if ( (v14[0] & 0x8000000000000000LL) == 0LL )
      {
        if ( v14[0] )
        {
          _BitScanReverse64(&v10, v14[0]);
          LODWORD(v12) = v10 ^ 0x3F;
          v11 = v12;
          v12 = (int)v12;
        }
        else
        {
          v12 = 64;
          v11 = 64;
        }
        v13 = v12;
        v8 = v14[0] << v11;
      }
    }
    else
    {
      v8 = v14[0] << v13;
      if ( (v14[0] & 0x8000000000000000LL) != 0LL )
      {
        v8 = v14[0] << v13;
        if ( v14[0] == 0x8000000000000000LL )
          v8 = 0;
      }
    }
    *(_QWORD *)sub_E216C0(a1[70], 8) = v8;
  }
  return v7;
}
