__int64 __fastcall sub_15ADC60(__int64 a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  int v7; // r10d
  char v8; // dl
  unsigned int v9; // esi

  *(_BYTE *)(a1 + 3) |= 2u;
  result = 0;
  *(_QWORD *)(a1 + 8) = a6;
  v7 = *(_DWORD *)a1 & 0x7F000;
  if ( v7 != 282624 )
  {
    if ( v7 )
    {
      return ((__int64 (*)(void))((char *)dword_261C0A0 + dword_261C0A0[(*(_DWORD *)a1 >> 12) & 0x7F]))();
    }
    else
    {
      *(_DWORD *)(a1 + 192) = a3;
      *(_DWORD *)(a1 + 208) = a3;
      v8 = *(_BYTE *)(a1 + 2);
      if ( (v8 & 8) != 0 && a2 == 19 && (v8 & 0x20) == 0 )
      {
        *(_BYTE *)(a1 + 2) = v8 | 0x20;
      }
      else
      {
        v9 = *(_DWORD *)a1 & 0xFFF80FFF | ((a2 & 0x7F) << 12);
        *(_DWORD *)a1 = v9;
        *(_BYTE *)(a1 + 2) = BYTE2(v9) & 0xBF;
        return 0;
      }
    }
  }
  return result;
}
