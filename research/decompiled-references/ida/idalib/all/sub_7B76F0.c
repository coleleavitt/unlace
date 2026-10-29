__int64 __fastcall sub_7B76F0(__int64 a1, __int64 a2, __int64 a3, __int16 a4)
{
  __int64 v4; // r13
  __int64 v6; // rax
  unsigned __int16 v7; // ax
  unsigned int v9; // eax

  if ( a2 != -1 )
  {
    v4 = a3;
    if ( *(_QWORD *)(a1 + 8) )
    {
      v9 = a3;
      if ( (a4 & 0x100) != 0 && unk_2CD46C8 )
        v9 = unk_2CD46C8((unsigned int)a3);
      *(_BYTE *)(a1 + 60) = a4;
      *(_DWORD *)(a1 + 56) = _byteswap_ulong(a2);
      if ( (a4 & 0x800) != 0 )
      {
        *(_BYTE *)(a1 + 61) = v9;
        *(_WORD *)(a1 + 53) = 7;
      }
      else
      {
        *(_DWORD *)(a1 + 61) = _byteswap_ulong(v9);
        *(_WORD *)(a1 + 53) = 10;
      }
      return sub_7B5210(a1, a4, a2, 0);
    }
    if ( (a4 & 0x100) != 0 )
    {
      if ( unk_2CD46C8 )
        v4 = unk_2CD46C8(a3);
    }
    *(_WORD *)(a1 + 53) = 10;
    v6 = swap64(a2);
    *(_BYTE *)(a1 + 64) = a4;
    *(_QWORD *)(a1 + 56) = v6;
    v7 = *(_WORD *)(a1 + 53);
    if ( (a4 & 0x800) != 0 )
    {
      if ( v7 != 0xFFFF )
      {
        *(_BYTE *)(a1 + 65) = v4;
        *(_WORD *)(a1 + 53) = v7 + 1;
        return sub_7B5210(a1, a4, a2, 0);
      }
    }
    else if ( v7 + 8 <= 0xFFFF )
    {
      *(_WORD *)(a1 + 53) = v7 + 8;
      *(_QWORD *)(a1 + 65) = swap64(v4);
      return sub_7B5210(a1, a4, a2, 0);
    }
    abort();
  }
  return -1;
}
