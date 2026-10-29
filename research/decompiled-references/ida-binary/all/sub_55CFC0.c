__int64 __fastcall sub_55CFC0(_WORD *a1, int a2, _DWORD *a3)
{
  int v3; // eax
  unsigned int v4; // ecx

  v3 = (unsigned __int16)__ROL2__(*a1, 8);
  *a3 = (unsigned __int16)v3;
  if ( (v3 & 0xFC00) == 0xD800 && a2 != 1 )
  {
    v4 = 2;
    if ( (a1[1] & 0xFC00) == 0xDC00 )
    {
      v4 = 4;
      *a3 = (unsigned __int16)a1[1] + (v3 << 10) - 56613888;
    }
  }
  else
  {
    return 2;
  }
  return v4;
}
