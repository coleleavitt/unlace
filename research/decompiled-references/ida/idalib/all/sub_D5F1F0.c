__int64 __fastcall sub_D5F1F0(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  unsigned __int16 v4; // r14
  __int64 v5; // r12
  unsigned int v6; // r12d
  int v7; // ebp
  int v9; // ecx
  int v10; // edx
  int v11; // ecx
  __int16 v12; // dx
  char v13; // [rsp+Dh] [rbp-2Bh] BYREF
  unsigned __int16 v14[21]; // [rsp+Eh] [rbp-2Ah] BYREF

  v2 = a1[70];
  v3 = a1[154];
  a1[155] = *a2;
  v4 = *(_WORD *)sub_E21760(v2, 8);
  sub_E21790(v2, 8);
  v5 = a1[70];
  v14[0] = v4;
  LOBYTE(v4) = *(_BYTE *)sub_E21760(v5, 8);
  sub_E21790(v5, 8);
  v13 = v4;
  if ( (*(_BYTE *)(sub_E32240(a1 + 48) + 47) & 0x20) != 0 )
    v14[0] = v14[0] & 7;
  v6 = sub_D5EFB0((__int64)(a1 + 48), v3, &v13, v14, 8u);
  if ( (_BYTE)v6 )
  {
    if ( v14[0] > 7u )
    {
      LOBYTE(v7) = 0;
      if ( v13 >= 0 )
      {
        if ( v13 )
        {
          v9 = (int)(unsigned __int8)v13 >> 4;
          v10 = (unsigned __int8)v9;
          if ( !v9 )
            v10 = (unsigned __int8)v13;
          v11 = v9 == 0 ? 4 : 0;
          if ( v10 >> 2 )
            v10 >>= 2;
          else
            LOWORD(v11) = v11 | 2;
          if ( !((unsigned int)v10 >> 1) )
            LOWORD(v11) = v11 | 1;
          v12 = v11;
        }
        else
        {
          v12 = 8;
          LOBYTE(v11) = 8;
        }
        v14[0] = v12;
        v7 = v13 << v11;
      }
    }
    else
    {
      v7 = v13 << SLOBYTE(v14[0]);
      if ( v13 < 0 )
      {
        LOBYTE(v7) = 0;
        if ( v13 != (char)0x80 )
          v7 = -(-v13 << SLOBYTE(v14[0]));
      }
    }
    *(_BYTE *)sub_E216C0(a1[70], 8) = v7;
  }
  return v6;
}
