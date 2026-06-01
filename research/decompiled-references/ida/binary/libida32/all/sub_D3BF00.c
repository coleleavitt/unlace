__int64 __fastcall sub_D3BF00(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  unsigned int v4; // r14d
  __int64 v5; // r12
  unsigned int v6; // r12d
  int v7; // ebp
  int v9; // edx
  int v10; // ecx
  int v11; // edx
  char v12; // cl
  char v13; // [rsp+Bh] [rbp-2Dh] BYREF
  unsigned int v14[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v2 = a1[70];
  v3 = a1[154];
  a1[155] = *a2;
  v4 = *(_DWORD *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v5 = a1[70];
  v14[0] = v4;
  LOBYTE(v4) = *(_BYTE *)sub_DFDA20(v5, 8);
  sub_DFDA50(v5, 8);
  v13 = v4;
  if ( (*(_BYTE *)(sub_E0E500(a1 + 48) + 47) & 0x20) != 0 )
    v14[0] = v14[0] & 7;
  v6 = sub_D3BCC0((__int64)(a1 + 48), v3, &v13, v14, 8u);
  if ( (_BYTE)v6 )
  {
    if ( v14[0] > 7 )
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
            v11 |= 2u;
          if ( !((unsigned int)v10 >> 1) )
            v11 |= 1u;
          v12 = v11;
        }
        else
        {
          v11 = 8;
          v12 = 8;
        }
        v14[0] = v11;
        v7 = v13 << v12;
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
    *(_BYTE *)sub_DFD980(a1[70], 8) = v7;
  }
  return v6;
}

