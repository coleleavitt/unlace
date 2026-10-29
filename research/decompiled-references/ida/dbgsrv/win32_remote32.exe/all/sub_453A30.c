/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_453A30
// Address: 0x00453A30

//----- (00453A30) --------------------------------------------------------
LPVOID __stdcall sub_453A30(void *a1, signed int a2)
{
  LPVOID v3; // esi

  if ( a2 )
  {
    if ( a2 > 0 )
    {
      v3 = sub_46D26A(a1, a2);
      if ( !v3 )
        sub_45CC20(1);
      return v3;
    }
    else
    {
      *sub_46B984() = 12;
      sub_45CC20(1);
      return nullptr;
    }
  }
  else
  {
    sub_46C918(a1);
    return nullptr;
  }
}
