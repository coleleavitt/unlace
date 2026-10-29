/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_453990
// Address: 0x00453990

//----- (00453990) --------------------------------------------------------
LPVOID __stdcall sub_453990(signed int a1)
{
  LPVOID result; // eax
  LPVOID v2; // esi

  result = (LPVOID)a1;
  if ( a1 )
  {
    if ( a1 > 0 )
    {
      v2 = sub_46D25F(a1);
      if ( !v2 )
        sub_45CC20(1);
      return v2;
    }
    else
    {
      *sub_46B984() = 12;
      sub_45CC20(1);
      return nullptr;
    }
  }
  return result;
}
