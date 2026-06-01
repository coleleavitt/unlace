__int64 __fastcall sub_DD0A00(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // r13
  __int64 v4; // rbp
  unsigned int v5; // r12d
  int v6; // ebp
  int v8; // ecx
  int v9; // edx
  unsigned int v10; // ecx
  __int64 v11; // rdx
  char v12; // [rsp+7h] [rbp-31h] BYREF
  unsigned __int64 v13[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_QWORD *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v4 = *(_QWORD *)(a1 + 176);
  v13[0] = v3;
  LOBYTE(v3) = *(_BYTE *)sub_DFDA20(v4, 8);
  sub_DFDA50(v4, 8);
  v12 = v3;
  if ( (*(_BYTE *)(sub_E0E500(a1) + 47) & 0x20) != 0 )
    v13[0] = v13[0] & 7;
  v5 = sub_D3C710(a1, a2, &v12, (unsigned int *)v13, 8u);
  if ( (_BYTE)v5 )
  {
    if ( v13[0] > 7 )
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
            v10 |= 2u;
          if ( !((unsigned int)v9 >> 1) )
            v10 |= 1u;
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
    *(_BYTE *)sub_DFD980(*(_QWORD *)(a1 + 176), 8) = v6;
  }
  return v5;
}

