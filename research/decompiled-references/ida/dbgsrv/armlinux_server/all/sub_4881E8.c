/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4881E8
// Address: 0x00000000004881E8

//----- (00000000004881E8) ----------------------------------------------------
__int64 __fastcall sub_4881E8(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  __int64 v4; // x1
  unsigned int v5; // w3
  unsigned int v6; // w2
  _WORD v7[12]; // [xsp+38h] [xbp-38h] BYREF
  _WORD v8[12]; // [xsp+50h] [xbp-20h] BYREF

  sub_487938(a1, v7);
  sub_487938(a2, v8);
  if ( v8[0] == v7[0] )
  {
    if ( v8[0] )
      LODWORD(result) = -1;
    else
      LODWORD(result) = 1;
    v4 = 1;
    while ( 1 )
    {
      v5 = (unsigned __int16)v7[v4++];
      v6 = (unsigned __int16)v7[v4 + 11];
      if ( v5 != v6 )
        break;
      if ( v4 == 10 )
        return 0;
    }
    if ( v5 > v6 )
      return (unsigned int)result;
    else
      return (unsigned int)-(int)result;
  }
  else if ( v7[0] )
  {
    return 0xFFFFFFFFLL;
  }
  else
  {
    return 1;
  }
}
