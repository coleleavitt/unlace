/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47E2D8
// Address: 0x000000000047E2D8

//----- (000000000047E2D8) ----------------------------------------------------
__int64 __fastcall sub_47E2D8(unsigned int a1)
{
  unsigned __int16 *v2; // x3
  int v3; // w2
  unsigned int v4; // w1
  __int64 result; // x0
  __int64 v7; // x0

  if ( a1 > 0x7F )
  {
    v7 = sub_47E110(a1);
    v3 = (unsigned __int16)v7;
    v4 = BYTE2(v7);
  }
  else
  {
    v2 = (unsigned __int16 *)qword_4CA1E8 + 2 * a1;
    v3 = *v2;
    v4 = *((unsigned __int8 *)v2 + 2);
  }
  result = 0;
  if ( v4 > 1 )
  {
    LODWORD(result) = v3 == 290 || a1 - 8232 <= 6;
    if ( v3 == 270 )
      result = 1;
    else
      result = (unsigned int)result;
    if ( (_DWORD)result )
    {
      return 0;
    }
    else if ( a1 != 1564 && a1 - 8206 > 1 )
    {
      return v4 != 5;
    }
  }
  return result;
}
// 4CA1E8: using guessed type __int64 qword_4CA1E8[512];
