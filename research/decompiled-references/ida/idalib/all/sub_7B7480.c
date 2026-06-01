__int64 __fastcall sub_7B7480(__int64 a1, __int64 a2, __int64 a3, __int16 a4)
{
  __int16 v4; // bx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v8; // rbp
  __int64 v9; // rax
  unsigned __int16 v10; // ax

  if ( a2 != -1 )
  {
    v4 = a4;
    if ( (a4 & 0x100) != 0 )
    {
      HIBYTE(v4) = HIBYTE(a4) & 0xFE;
      if ( unk_2CD46C8 )
        a3 = unk_2CD46C8(a3);
    }
    v5 = *(_QWORD *)(a1 + 8);
    if ( !a3 )
    {
      if ( v5 )
      {
        *(_BYTE *)(a1 + 60) = v4;
        *(_WORD *)(a1 + 53) = 6;
        *(_DWORD *)(a1 + 56) = _byteswap_ulong(a2);
      }
      else
      {
        *(_WORD *)(a1 + 53) = 10;
        v6 = swap64(a2);
        *(_BYTE *)(a1 + 64) = v4;
        *(_QWORD *)(a1 + 56) = v6;
      }
      return sub_7B5210(a1, v4, a2, 1);
    }
    v8 = a3 - 1;
    if ( v5 )
    {
      *(_BYTE *)(a1 + 60) = v4;
      *(_DWORD *)(a1 + 56) = _byteswap_ulong(a2);
      if ( (v4 & 0x800) != 0 )
      {
        *(_BYTE *)(a1 + 61) = v8;
        *(_WORD *)(a1 + 53) = 7;
      }
      else
      {
        *(_WORD *)(a1 + 53) = 10;
        *(_DWORD *)(a1 + 61) = _byteswap_ulong(v8);
      }
      return sub_7B5210(a1, v4, a2, 1);
    }
    *(_WORD *)(a1 + 53) = 10;
    v9 = swap64(a2);
    *(_BYTE *)(a1 + 64) = v4;
    *(_QWORD *)(a1 + 56) = v9;
    v10 = *(_WORD *)(a1 + 53);
    if ( (v4 & 0x800) != 0 )
    {
      if ( v10 != 0xFFFF )
      {
        *(_BYTE *)(a1 + 65) = v8;
        *(_WORD *)(a1 + 53) = v10 + 1;
        return sub_7B5210(a1, v4, a2, 1);
      }
    }
    else if ( v10 + 8 <= 0xFFFF )
    {
      *(_WORD *)(a1 + 53) = v10 + 8;
      *(_QWORD *)(a1 + 65) = swap64(v8);
      return sub_7B5210(a1, v4, a2, 1);
    }
    abort();
  }
  return -1;
}
