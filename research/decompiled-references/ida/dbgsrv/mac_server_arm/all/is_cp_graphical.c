/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: is_cp_graphical
// Address: 0x00000001000646A8

//----- (00000001000646A8) ----------------------------------------------------
bool __fastcall is_cp_graphical(unsigned int a1)
{
  int v2; // w8
  _BOOL8 result; // x0
  _BOOL4 v5; // w9

  v2 = sub_10006456C(a1);
  result = 0;
  if ( a1 >> 1 != 4116 && BYTE2(v2) >= 2u )
  {
    if ( (unsigned __int16)v2 == 270 )
    {
      return 0;
    }
    else
    {
      v5 = a1 - 8239 < 0xFFFFFFFB && BYTE2(v2) != 5;
      if ( a1 == 1564 )
        v5 = 0;
      if ( a1 - 8206 < 2 )
        v5 = 0;
      return (unsigned __int16)v2 != 290 && v5;
    }
  }
  return result;
}
