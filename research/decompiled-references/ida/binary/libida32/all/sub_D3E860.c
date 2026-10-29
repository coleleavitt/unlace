__int64 __fastcall sub_D3E860(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  unsigned int v4; // r14d
  __int64 v5; // r12
  unsigned int v6; // r12d
  int v7; // ebp
  int v9; // ecx
  int v10; // edx
  char v11; // cl
  __int16 v12; // [rsp+Ah] [rbp-2Eh] BYREF
  unsigned int v13[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v2 = a1[70];
  v3 = a1[154];
  a1[155] = *a2;
  v4 = *(_DWORD *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v5 = a1[70];
  v13[0] = v4;
  LOWORD(v4) = *(_WORD *)sub_DFDA20(v5, 8);
  sub_DFDA50(v5, 8);
  v12 = v4;
  if ( (*(_BYTE *)(sub_E0E500(a1 + 48) + 47) & 0x20) != 0 )
    v13[0] = v13[0] & 0xF;
  v6 = sub_D3E610((__int64)(a1 + 48), v3, &v12, v13, 0x10u);
  if ( (_BYTE)v6 )
  {
    if ( v13[0] > 0xF )
    {
      LOWORD(v7) = 0;
      if ( v12 >= 0 )
      {
        if ( v12 )
        {
          v9 = HIBYTE(v12);
          if ( !HIBYTE(v12) )
            v9 = (unsigned __int8)v12;
          v10 = HIBYTE(v12) == 0 ? 8 : 0;
          if ( v9 >> 4 )
            v9 >>= 4;
          else
            v10 |= 4u;
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
          v10 = 16;
          v11 = 16;
        }
        v13[0] = v10;
        v7 = v12 << v11;
      }
    }
    else
    {
      v7 = v12 << SLOBYTE(v13[0]);
      if ( v12 < 0 )
      {
        LOWORD(v7) = 0;
        if ( v12 != (__int16)0x8000 )
          v7 = -(-v12 << SLOBYTE(v13[0]));
      }
    }
    *(_WORD *)sub_DFD980(a1[70], 8) = v7;
  }
  return v6;
}

