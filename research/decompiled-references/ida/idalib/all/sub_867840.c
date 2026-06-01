__int64 __fastcall sub_867840(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  __int64 v6; // rcx
  unsigned __int64 v7; // rdi
  char v8; // cl
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v12; // rcx

  v3 = a2;
  v4 = a2 + 2;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = v5 & 0x10001;
  v7 = v5 >> 17;
  if ( v6 != 1 || *(_DWORD *)(a1 + 28) )
  {
    if ( v7 <= 0x23 )
    {
      v8 = -16;
      if ( (v7 ^ 1) <= 0x23 )
        v8 = byte_23C2EA0[v7 ^ 1] - 16;
      *(_BYTE *)v3 = v8;
      *(_BYTE *)(v3 + 1) = 13;
      v3 = v4;
      v4 += 2;
    }
    *(_WORD *)v3 = -18103;
    v9 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = v4;
    if ( (v9 & 1) != 0 )
      *(_QWORD *)(v3 + 2) = *(_QWORD *)(a1 + 24);
    else
      *(_QWORD *)(a1 + 16) = v9 | 0x10;
    v10 = 8;
  }
  else
  {
    if ( v7 <= 0x23 )
    {
      if ( (v7 ^ 1) > 0x23 )
      {
        *(_WORD *)v3 = 2544;
      }
      else
      {
        *(_BYTE *)(v3 + 1) = 9;
        *(_BYTE *)v3 = byte_23C2EA0[v7 ^ 1] - 16;
      }
      v3 = v4;
      v4 += 2;
    }
    *(_WORD *)v3 = -18111;
    v12 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = v4;
    if ( (v12 & 1) != 0 )
      *(_DWORD *)(v3 + 2) = *(_QWORD *)(a1 + 24);
    else
      *(_QWORD *)(a1 + 16) = v12 | 0x10;
    v10 = 4;
  }
  *(_WORD *)(v4 + v10) = -191;
  *(_BYTE *)(v4 + v10 + 2) = v7 < 0x25 ? -31 : -47;
  return v4 + v10 + 3;
}
