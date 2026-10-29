__int64 __fastcall sub_D3DDD0(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  unsigned __int16 v4; // r14
  __int64 v5; // r12
  __int16 v6; // r14
  unsigned int v7; // r12d
  int v8; // ebp
  int v10; // edx
  int v11; // ecx
  __int16 v12; // dx
  unsigned __int16 v13; // [rsp+Ch] [rbp-2Ch] BYREF
  __int16 v14; // [rsp+Eh] [rbp-2Ah] BYREF

  v2 = a1[70];
  v3 = a1[154];
  a1[155] = *a2;
  v4 = *(_WORD *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v5 = a1[70];
  v13 = v4;
  v6 = *(_WORD *)sub_DFDA20(v5, 8);
  sub_DFDA50(v5, 8);
  v14 = v6;
  if ( (*(_BYTE *)(sub_E0E500(a1 + 48) + 47) & 0x20) != 0 )
    v13 &= 0xFu;
  v7 = sub_D3DB80((__int64)(a1 + 48), v3, &v14, &v13, 0x10u);
  if ( (_BYTE)v7 )
  {
    if ( v13 > 0xFu )
    {
      LOWORD(v8) = 0;
      if ( v14 >= 0 )
      {
        if ( v14 )
        {
          v10 = HIBYTE(v14);
          if ( !HIBYTE(v14) )
            v10 = (unsigned __int8)v14;
          v11 = HIBYTE(v14) == 0 ? 8 : 0;
          if ( v10 >> 4 )
            v10 >>= 4;
          else
            LOWORD(v11) = v11 | 4;
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
          v12 = 16;
          LOBYTE(v11) = 16;
        }
        v13 = v12;
        v8 = v14 << v11;
      }
    }
    else
    {
      v8 = v14 << v13;
      if ( v14 < 0 )
      {
        LOWORD(v8) = 0;
        if ( v14 != (__int16)0x8000 )
          v8 = -(-v14 << v13);
      }
    }
    *(_WORD *)sub_DFD980(a1[70], 8) = v8;
  }
  return v7;
}

