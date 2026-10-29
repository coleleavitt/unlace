__int64 __fastcall sub_15AE130(__int64 a1, char a2, int a3)
{
  __int64 result; // rax
  int v4; // r11d
  char v5; // cl

  result = 0;
  v4 = *(_DWORD *)a1 & 0x7F000;
  if ( v4 != 282624 )
  {
    if ( v4 )
    {
      return ((__int64 (*)(void))((char *)dword_261C1B8 + dword_261C1B8[(*(_DWORD *)a1 >> 12) & 0x7F]))();
    }
    else
    {
      v5 = *(_BYTE *)(a1 + 2);
      *(_DWORD *)(a1 + 196) = a3;
      *(_BYTE *)(a1 + 2) = v5 & 0xF7 | (8 * (a2 & 1));
    }
  }
  return result;
}
