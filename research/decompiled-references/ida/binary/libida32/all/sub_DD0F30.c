__int64 __fastcall sub_DD0F30(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int16 v3; // r13
  __int64 v4; // rbp
  __int16 v5; // r13
  unsigned int v6; // r12d
  int v7; // ebp
  int v9; // edx
  int v10; // ecx
  __int16 v11; // dx
  unsigned __int16 v12; // [rsp+Ch] [rbp-2Ch] BYREF
  __int16 v13; // [rsp+Eh] [rbp-2Ah] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_WORD *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v4 = *(_QWORD *)(a1 + 176);
  v12 = v3;
  v5 = *(_WORD *)sub_DFDA20(v4, 8);
  sub_DFDA50(v4, 8);
  v13 = v5;
  if ( (*(_BYTE *)(sub_E0E500(a1) + 47) & 0x20) != 0 )
    v12 &= 0xFu;
  v6 = sub_D3DB80(a1, a2, &v13, &v12, 0x10u);
  if ( (_BYTE)v6 )
  {
    if ( v12 > 0xFu )
    {
      LOWORD(v7) = 0;
      if ( v13 >= 0 )
      {
        if ( v13 )
        {
          v9 = HIBYTE(v13);
          if ( !HIBYTE(v13) )
            v9 = (unsigned __int8)v13;
          v10 = HIBYTE(v13) == 0 ? 8 : 0;
          if ( v9 >> 4 )
            v9 >>= 4;
          else
            LOWORD(v10) = v10 | 4;
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
          v11 = 16;
          LOBYTE(v10) = 16;
        }
        v12 = v11;
        v7 = v13 << v10;
      }
    }
    else
    {
      v7 = v13 << v12;
      if ( v13 < 0 )
      {
        LOWORD(v7) = 0;
        if ( v13 != (__int16)0x8000 )
          v7 = -(-v13 << v12);
      }
    }
    *(_WORD *)sub_DFD980(*(_QWORD *)(a1 + 176), 8) = v7;
  }
  return v6;
}

