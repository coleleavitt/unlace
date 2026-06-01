/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_482670
// Address: 0x00482670

//----- (00482670) --------------------------------------------------------
int __cdecl sub_482670(double a1)
{
  int v1; // eax
  int v2; // eax
  int v4; // ecx

  if ( (HIWORD(a1) & 0x7FF0) == 0x7FF0 )
  {
    v1 = sub_47E071(SLODWORD(a1), SHIDWORD(a1)) - 1;
    if ( v1 )
    {
      v2 = v1 - 1;
      if ( !v2 )
        return 4;
      if ( v2 != 1 )
        return 1;
      return 2;
    }
    else
    {
      return 512;
    }
  }
  else
  {
    v4 = HIWORD(a1) & 0x8000;
    if ( (HIWORD(a1) & 0x7FF0) == 0 && ((HIDWORD(a1) & 0xFFFFF) != 0 || LODWORD(a1)) )
    {
      return v4 != 0 ? 16 : 128;
    }
    else if ( 0.0 == a1 )
    {
      return v4 != 0 ? 32 : 64;
    }
    else
    {
      return v4 != 0 ? 8 : 256;
    }
  }
}
