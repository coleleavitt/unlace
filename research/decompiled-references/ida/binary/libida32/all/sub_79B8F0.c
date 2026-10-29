__int64 __fastcall sub_79B8F0(unsigned int *a1, __int64 a2, unsigned int a3, __int16 a4)
{
  __int16 v5; // ax
  unsigned int v8; // esi
  __int64 v9; // rdi

  v8 = *a1;
  v9 = *(_QWORD *)(a2 + 1544);
  if ( v8 == -1 )
    return 0xFFFFFFFFLL;
  if ( (a4 & 0x100) != 0 && unk_2CAA7A8 )
    a3 = unk_2CAA7A8(a3);
  *(_BYTE *)(v9 + 52) = a4;
  *(_DWORD *)(v9 + 48) = _byteswap_ulong(v8);
  if ( (a4 & 0x800) != 0 )
  {
    *(_BYTE *)(v9 + 53) = a3;
    v5 = 7;
  }
  else
  {
    v5 = 10;
    *(_DWORD *)(v9 + 53) = _byteswap_ulong(a3);
  }
  *(_WORD *)(v9 + 45) = v5;
  return sub_7928A0(v9, a4, v8, 0);
}

