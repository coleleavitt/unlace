__int64 __fastcall sub_DF4250(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int16 v3; // r13
  __int64 v4; // rbp
  unsigned int v5; // r12d
  int v6; // ebp
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  __int16 v11; // dx
  char v12; // [rsp+Dh] [rbp-2Bh] BYREF
  unsigned __int16 v13[21]; // [rsp+Eh] [rbp-2Ah] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_WORD *)sub_E21760(v2, 8);
  sub_E21790(v2, 8);
  v4 = *(_QWORD *)(a1 + 176);
  v13[0] = v3;
  LOBYTE(v3) = *(_BYTE *)sub_E21760(v4, 8);
  sub_E21790(v4, 8);
  v12 = v3;
  if ( (*(_BYTE *)(sub_E32240(a1) + 47) & 0x20) != 0 )
    v13[0] = v13[0] & 7;
  v5 = sub_D5EFB0(a1, a2, &v12, v13, 8u);
  if ( (_BYTE)v5 )
  {
    if ( v13[0] > 7u )
    {
      LOBYTE(v6) = 0;
      if ( v12 >= 0 )
      {
        if ( v12 )
        {
          v8 = (int)(unsigned __int8)v12 >> 4;
          v9 = (unsigned __int8)v8;
          if ( !v8 )
            v9 = (unsigned __int8)v12;
          v10 = v8 == 0 ? 4 : 0;
          if ( v9 >> 2 )
            v9 >>= 2;
          else
            LOWORD(v10) = v10 | 2;
          if ( !((unsigned int)v9 >> 1) )
            LOWORD(v10) = v10 | 1;
          v11 = v10;
        }
        else
        {
          v11 = 8;
          LOBYTE(v10) = 8;
        }
        v13[0] = v11;
        v6 = v12 << v10;
      }
    }
    else
    {
      v6 = v12 << SLOBYTE(v13[0]);
      if ( v12 < 0 )
      {
        LOBYTE(v6) = 0;
        if ( v12 != (char)0x80 )
          v6 = -(-v12 << SLOBYTE(v13[0]));
      }
    }
    *(_BYTE *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = v6;
  }
  return v5;
}
