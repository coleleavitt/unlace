/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ecmp
// Address: 0x0000000100068810

//----- (0000000100068810) ----------------------------------------------------
__int64 __fastcall ecmp(unsigned __int16 *a1, unsigned __int16 *a2)
{
  int v3; // w9
  int v4; // w10
  __int64 result; // x0
  unsigned int v6; // w10
  unsigned int v7; // w9

  v3 = a1[7];
  v4 = a2[7];
  result = ((__int16)v3 >> 15) | 1u;
  if ( ((v3 ^ v4) & 0x8000) == 0 )
  {
    v6 = v4 & 0x7FFF;
    v7 = v3 & 0x7FFF;
    if ( v7 == v6
      && (v7 = a1[6], v6 = a2[6], v7 == v6)
      && (v7 = a1[5], v6 = a2[5], v7 == v6)
      && (v7 = a1[4], v6 = a2[4], v7 == v6)
      && (v7 = a1[3], v6 = a2[3], v7 == v6)
      && (v7 = a1[2], v6 = a2[2], v7 == v6)
      && (v7 = a1[1], v6 = a2[1], v7 == v6)
      && (v7 = *a1, v6 = *a2, v7 == v6) )
    {
      return 0;
    }
    else if ( v7 > v6 )
    {
      return (unsigned int)result;
    }
    else
    {
      return (unsigned int)-(int)result;
    }
  }
  return result;
}
