/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_fpvalue_kind
// Address: 0x00079438

//----- (00079438) --------------------------------------------------------
int __fastcall get_fpvalue_kind(_WORD *a1)
{
  __int16 v2; // r2
  int result; // r0
  int v4; // r2

  v2 = a1[7];
  result = 1;
  if ( (v2 & 0x7FFF) == 0x7FFF )
  {
    v4 = v2 & 0x8000;
    result = 2;
    if ( !((unsigned __int16)a1[6] << 17) && !a1[5] && !a1[4] && !a1[3] && !a1[2] && !a1[1] && !*a1 )
    {
      result = 3;
      if ( v4 )
        return 4;
    }
  }
  return result;
}
