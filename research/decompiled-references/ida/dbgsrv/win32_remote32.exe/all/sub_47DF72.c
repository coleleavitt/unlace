/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47DF72
// Address: 0x0047DF72

//----- (0047DF72) --------------------------------------------------------
double __cdecl sub_47DF72(double a1, int *a2)
{
  double result; // st7
  int v3; // esi
  __int16 v4; // di
  int v5; // ecx
  int v6; // edx
  BOOL v7; // ebx
  __int16 v8; // di

  if ( 0.0 == a1 )
  {
    result = 0.0;
    v3 = 0;
  }
  else
  {
    v4 = HIWORD(a1);
    if ( (HIWORD(a1) & 0x7FF0) == 0
      && ((v5 = HIDWORD(a1), v6 = LODWORD(a1), (HIDWORD(a1) & 0xFFFFF) != 0) || LODWORD(a1)) )
    {
      v3 = -1021;
      v7 = a1 < 0.0;
      if ( (BYTE6(a1) & 0x10) == 0 )
      {
        do
        {
          v5 *= 2;
          HIDWORD(a1) = v5;
          if ( v6 < 0 )
          {
            v5 |= 1u;
            HIDWORD(a1) = v5;
          }
          v6 *= 2;
          --v3;
        }
        while ( (BYTE6(a1) & 0x10) == 0 );
        v4 = HIWORD(a1);
        LODWORD(a1) = v6;
      }
      v8 = v4 & 0xFFEF;
      HIWORD(a1) = v8;
      if ( v7 )
        HIWORD(a1) = v8 | 0x8000;
      result = sub_47E044(a1, 0);
    }
    else
    {
      result = sub_47E044(a1, 0);
      v3 = ((HIWORD(a1) >> 4) & 0x7FF) - 1022;
    }
  }
  *a2 = v3;
  return result;
}
