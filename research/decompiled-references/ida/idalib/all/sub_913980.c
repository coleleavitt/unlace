__int64 __fastcall sub_913980(__int64 a1, __int64 a2, _BYTE *a3, unsigned __int64 a4)
{
  if ( a4 > 0x1F )
  {
    if ( a4 <= 0xFFF )
    {
      *(_WORD *)a1 = 16 * a4 + 5;
      *(_BYTE *)(a1 + 2) = *a3;
      return 3;
    }
    else
    {
      *(_DWORD *)a1 = 16 * a4 + 13;
      *(_BYTE *)(a1 + 3) = *a3;
      return 4;
    }
  }
  else
  {
    *(_BYTE *)a1 = 8 * a4 + 1;
    *(_BYTE *)(a1 + 1) = *a3;
    return 2;
  }
}
