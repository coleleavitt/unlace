__int64 __fastcall sub_DD02A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int8 v3; // r13
  __int64 v4; // rbp
  char v5; // r13
  unsigned int v6; // r12d
  int v7; // ebp
  int v9; // ecx
  int v10; // edx
  int v11; // ecx
  char v12; // dl
  unsigned __int8 v13; // [rsp+Eh] [rbp-2Ah] BYREF
  char v14[41]; // [rsp+Fh] [rbp-29h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_BYTE *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v4 = *(_QWORD *)(a1 + 176);
  v13 = v3;
  v5 = *(_BYTE *)sub_DFDA20(v4, 8);
  sub_DFDA50(v4, 8);
  v14[0] = v5;
  if ( (*(_BYTE *)(sub_E0E500(a1) + 47) & 0x20) != 0 )
    v13 &= 7u;
  v6 = sub_D3A830(a1, a2, v14, &v13, 8u);
  if ( (_BYTE)v6 )
  {
    if ( v13 > 7u )
    {
      LOBYTE(v7) = 0;
      if ( v14[0] >= 0 )
      {
        if ( v14[0] )
        {
          v9 = (int)(unsigned __int8)v14[0] >> 4;
          v10 = (unsigned __int8)v9;
          if ( !v9 )
            v10 = (unsigned __int8)v14[0];
          v11 = v9 == 0 ? 4 : 0;
          if ( v10 >> 2 )
            v10 >>= 2;
          else
            LOBYTE(v11) = v11 | 2;
          if ( !((unsigned int)v10 >> 1) )
            LOBYTE(v11) = v11 | 1;
          v12 = v11;
        }
        else
        {
          v12 = 8;
          LOBYTE(v11) = 8;
        }
        v13 = v12;
        v7 = v14[0] << v11;
      }
    }
    else
    {
      v7 = v14[0] << v13;
      if ( v14[0] < 0 )
      {
        LOBYTE(v7) = 0;
        if ( v14[0] != (char)0x80 )
          v7 = -(-v14[0] << v13);
      }
    }
    *(_BYTE *)sub_DFD980(*(_QWORD *)(a1 + 176), 8) = v7;
  }
  return v6;
}

