__int64 __fastcall sub_D3AA70(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  unsigned __int8 v4; // r14
  __int64 v5; // r12
  char v6; // r14
  unsigned int v7; // r12d
  int v8; // ebp
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  char v13; // dl
  unsigned __int8 v14; // [rsp+Eh] [rbp-2Ah] BYREF
  char v15[41]; // [rsp+Fh] [rbp-29h] BYREF

  v2 = a1[70];
  v3 = a1[154];
  a1[155] = *a2;
  v4 = *(_BYTE *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v5 = a1[70];
  v14 = v4;
  v6 = *(_BYTE *)sub_DFDA20(v5, 8);
  sub_DFDA50(v5, 8);
  v15[0] = v6;
  if ( (*(_BYTE *)(sub_E0E500(a1 + 48) + 47) & 0x20) != 0 )
    v14 &= 7u;
  v7 = sub_D3A830((__int64)(a1 + 48), v3, v15, &v14, 8u);
  if ( (_BYTE)v7 )
  {
    if ( v14 > 7u )
    {
      LOBYTE(v8) = 0;
      if ( v15[0] >= 0 )
      {
        if ( v15[0] )
        {
          v10 = (int)(unsigned __int8)v15[0] >> 4;
          v11 = (unsigned __int8)v10;
          if ( !v10 )
            v11 = (unsigned __int8)v15[0];
          v12 = v10 == 0 ? 4 : 0;
          if ( v11 >> 2 )
            v11 >>= 2;
          else
            LOBYTE(v12) = v12 | 2;
          if ( !((unsigned int)v11 >> 1) )
            LOBYTE(v12) = v12 | 1;
          v13 = v12;
        }
        else
        {
          v13 = 8;
          LOBYTE(v12) = 8;
        }
        v14 = v13;
        v8 = v15[0] << v12;
      }
    }
    else
    {
      v8 = v15[0] << v14;
      if ( v15[0] < 0 )
      {
        LOBYTE(v8) = 0;
        if ( v15[0] != (char)0x80 )
          v8 = -(-v15[0] << v14);
      }
    }
    *(_BYTE *)sub_DFD980(a1[70], 8) = v8;
  }
  return v7;
}

